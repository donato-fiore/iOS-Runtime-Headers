// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EPFORMULACLEANER_H
#define EPFORMULACLEANER_H

@class NSMutableDictionary;


#import "EDProcessor.h"
#import "EDSheet.h"
#import "EDFormula.h"
#import "EDName.h"
#import "EDRowBlocks.h"

@interface EPFormulaCleaner : EDProcessor {
    EDSheet *mCurrentSheet;
    EDFormula *mFormula;
    EDFormula *mTokensToClean;
    EDName *mParentName;
    int mRowOffset;
    int mColumnOffset;
    EDRowBlocks *mBaseFormulaRowBlocks;
    NSMutableDictionary *mNameArrayedTestCache;
    NSMutableDictionary *mNameCircularReferenceTestCache;
}




-(BOOL)checkCustomFunction:(unsigned int)arg0 ;
-(BOOL)checkFunctionId:(int)arg0 tokenIndex:(unsigned int)arg1 ;
-(BOOL)checkSupportedAddInName:(id)arg0 externalLink:(BOOL)arg1 ;
-(BOOL)cleanArea3D:(unsigned int)arg0 ;
-(BOOL)cleanArea:(unsigned int)arg0 updateSheet:(BOOL)arg1 ;
-(BOOL)cleanArray:(unsigned int)arg0 ;
-(BOOL)cleanFunc:(unsigned int)arg0 ;
-(BOOL)cleanFuncVar:(unsigned int)arg0 ;
-(BOOL)cleanName:(unsigned int)arg0 nameIndex:(unsigned int)arg1 sheetIndex:(NSUInteger)arg2 tokenOffset:(*int)arg3 ;
-(BOOL)cleanName:(unsigned int)arg0 tokenOffset:(*int)arg1 ;
-(BOOL)cleanNameX:(unsigned int)arg0 tokenOffset:(*int)arg1 ;
-(BOOL)cleanRange:(unsigned int)arg0 tokenOffset:(*int)arg1 ;
-(BOOL)cleanRef3D:(unsigned int)arg0 ;
-(BOOL)cleanRef:(unsigned int)arg0 updateSheet:(BOOL)arg1 ;
-(BOOL)cleanTokenAtIndex:(unsigned int)arg0 tokenOffset:(*int)arg1 ;
-(BOOL)cleanUnion:(unsigned int)arg0 ;
-(BOOL)combineCellReferences:(unsigned int)arg0 tokenOffset:(*int)arg1 ;
-(BOOL)doesNameIndexContainCircularReferences:(unsigned int)arg0 sheetIndex:(NSUInteger)arg1 previousNameIndexes:(*void)arg2 ;
-(BOOL)isArrayedFormulaSupported:(id)arg0 allowSimpleRanges:(BOOL)arg1 formulasBeingEvaluated:(id)arg2 ;
-(BOOL)isLinkReferenceIndexSupported:(unsigned int)arg0 allowExternal:(BOOL)arg1 ;
-(BOOL)isObjectSupported:(id)arg0 ;
-(BOOL)isReferenceValidInLassoForRow:(int)arg0 rowRelative:(BOOL)arg1 column:(int)arg2 columnRelative:(BOOL)arg3 ;
-(BOOL)isReferenceValidInLassoForSheet:(id)arg0 rowMin:(int)arg1 rowMinRelative:(BOOL)arg2 rowMax:(int)arg3 rowMaxRelative:(BOOL)arg4 columnMin:(int)arg5 columnMinRelative:(BOOL)arg6 columnMax:(int)arg7 columnMaxRelative:(BOOL)arg8 ;
-(BOOL)isThereContentOutsideOfLassoBoundsForSheet:(id)arg0 rowMin:(int)arg1 rowMax:(int)arg2 columnMin:(int)arg3 columnMax:(int)arg4 ;
-(BOOL)useEvaluationStackToCheckFunctionId:(int)arg0 functionName:(id)arg1 tokenIndex:(unsigned int)arg2 ;
-(id)newFormulaToCleanFromSharedFormula:(id)arg0 ;
-(id)useEvaluationStackToGetParameter:(unsigned int)arg0 tokenIndex:(unsigned int)arg1 allReferencesAllowed:(BOOL)arg2 success:(*BOOL)arg3 ;
-(id)worksheetFromLinkReferenceIndex:(unsigned int)arg0 ;
-(id)worksheetsFromLinkReferenceIndex:(unsigned int)arg0 ;
-(int)useEvaluationStackToGetParameterTokenType:(unsigned int)arg0 tokenIndex:(unsigned int)arg1 success:(*BOOL)arg2 ;
-(unsigned int)useEvaluationStackToGetParameter:(unsigned int)arg0 tokenIndex:(unsigned int)arg1 ;
-(void)addOffsetsToRow:(*int)arg0 rowRelative:(BOOL)arg1 column:(*int)arg2 columnRelative:(BOOL)arg3 ;
-(void)applyMaxCellsInName:(id)arg0 ;
-(void)applyProcessorToObject:(id)arg0 sheet:(id)arg1 ;
-(void)cleanFormula:(id)arg0 name:(id)arg1 ;
-(void)cleanFormula:(id)arg0 sheet:(id)arg1 ;
-(void)cleanFormula:(id)arg0 sheet:(id)arg1 name:(id)arg2 ;
-(void)prepareToProcessFormula:(id)arg0 sheet:(id)arg1 name:(id)arg2 ;
-(void)reportWarning:(int)arg0 ;
-(void)reportWarning:(int)arg0 parameter:(id)arg1 ;
-(void)reset;
-(void)updateSheet:(id)arg0 row:(int)arg1 rowRelative:(BOOL)arg2 column:(int)arg3 columnRelative:(BOOL)arg4 ;
-(void)updateSheet:(id)arg0 rowMin:(int)arg1 rowMinRelative:(BOOL)arg2 rowMax:(int)arg3 rowMaxRelative:(BOOL)arg4 columnMin:(int)arg5 columnMinRelative:(BOOL)arg6 columnMax:(int)arg7 columnMaxRelative:(BOOL)arg8 ;
-(void)updateWorksheet:(id)arg0 row:(int)arg1 column:(int)arg2 inDictionary:(id)arg3 ;


@end


#endif