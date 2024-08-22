// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXFORMULA_H
#define EXFORMULA_H


#import <Foundation/Foundation.h>


@interface EXFormula : NSObject



+(?)edFormulaFromXmlFormulaElement:(?)arg0 formulaClassstate;
+(?)edFormulaFromXmlFormulaElementstate;
+(?)formulaClassFromXmlFormulaElementstate;
+(?)readFrom:(?)arg0 formulaClass:(?)arg1 rowNumber:(?)arg2 columnNumber:(?)arg3 edCell:(?)arg4 edRowBlocksstate;
+(?)readFrom:(?)arg0 rowNumber:(?)arg1 columnNumber:(?)arg2 edCell:(?)arg3 edRowBlocksstate;
+(id)edTokensForFormulaString:(id)arg0 formulaClass:(Class)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 sheet:(id)arg4 workbook:(id)arg5 ;
+(id)edTokensForFormulaString:(id)arg0 sheet:(id)arg1 workbook:(id)arg2 ;
+(void)applyArrayedFormula:(id)arg0 edReference:(id)arg1 edWorksheet:(id)arg2 state:(id)arg3 ;
+(void)applyArrayedFormulasToSheet:(id)arg0 state:(id)arg1 ;


@end


#endif