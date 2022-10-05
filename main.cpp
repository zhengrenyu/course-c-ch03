#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int grade = 0;
	
	printf("輸入你的成績");
	scanf("%d", &grade);
	
	while(grade > 100 & grade < 0){
		printf("請再輸入一次")	
	} 

	switch(grade/10){
		case 10: 
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("E");	
			break; 
	}		
	return 0;
}
