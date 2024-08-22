// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EBFORMULA_H
#define EBFORMULA_H


#import <Foundation/Foundation.h>


@interface EBFormula : NSObject



+(char *)edFormulaToParsedExpression:(id)arg0 tokenLength:(*unsigned short)arg1 formulaLength:(*unsigned short)arg2 state:(id)arg3 ;
+(id)edFormulaFromXlFmlaDefinition:(*void)arg0 withFormulaLength:(int)arg1 formulaClass:(Class)arg2 state:(id)arg3 ;
+(id)edFormulaFromXlFmlaDefinition:(*void)arg0 withFormulaLength:(int)arg1 state:(id)arg2 ;
+(id)edFormulaFromXlFmlaDefinition:(*void)arg0 withTokenLength:(int)arg1 formulaLength:(int)arg2 formulaClass:(Class)arg3 edSheet:(id)arg4 state:(id)arg5 ;
+(struct XlFormulaInfo *)xlFormulaInfoFromEDFormula:(id)arg0 state:(id)arg1 ;
+(struct XlFormulaInfo *)xlFormulaInfoFromEDSharedFormula:(id)arg0 state:(id)arg1 ;
+(unsigned int)writeToken:(id)arg0 tokenIndex:(unsigned int)arg1 tokenStream:(struct XLFormulaStream *)arg2 extendedStream:(struct XLFormulaStream *)arg3 state:(id)arg4 ;
+(void)readFormulaFromXlCell:(struct XlCell *)arg0 edCell:(struct EDCellHeader *)arg1 edRowBlocks:(id)arg2 state:(id)arg3 ;
+(void)setupTokensInEDFormulaFromXlFormulaProcessor:(*void)arg0 length:(int)arg1 edFormula:(id)arg2 edSheet:(id)arg3 ;


@end


#endif