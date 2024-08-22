// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EPSTYLEFLATTENER_H
#define EPSTYLEFLATTENER_H

@class NSArray, NSMutableArray;


#import "EDProcessor.h"
#import "EDWorksheet.h"
#import "EDRowBlocks.h"
#import "EDRowBlock.h"
#import "EDColumnInfoCollection.h"
#import "ECIntToTwoIntKeyCache.h"

@interface EPStyleFlattener : EDProcessor {
    EDWorksheet *mWorksheet;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    EDColumnInfoCollection *mColumnInfos;
    NSArray *mKeys;
    NSMutableArray *mRanges;
    ECIntToTwoIntKeyCache *mFlattenedStyleCache;
    ECIntToTwoIntKeyCache *mFillCache;
    int mFirstRow;
    int mLastRow;
    int mFirstColumn;
    int mLastColumn;
    unsigned int mFirstRowStripeSize;
    unsigned int mSecondRowStripeSize;
    unsigned int mFirstColumnStripeSize;
    unsigned int mSecondColumnStripeSize;
}




-(?)applyDifferentialStyle:(?)arg0 borderFlags:(?)arg1 precedence:(?)arg2 toCell:(?)arg3 rowcolumn;
-(NSUInteger)flattenFillIndex:(NSUInteger)arg0 differentialFill:(id)arg1 ;
-(id)collectionFromWorksheet:(id)arg0 ;
-(id)copyFlattenBorder:(int)arg0 borders:(id)arg1 differentialBorders:(id)arg2 flag:(BOOL)arg3 precedence:(NSUInteger)arg4 row:(int)arg5 column:(int)arg6 ;
-(id)copyFlattenBorders:(id)arg0 differentialBorders:(id)arg1 borderFlags:(int)arg2 precedence:(NSUInteger)arg3 row:(int)arg4 column:(int)arg5 ;
-(id)copyFlattenFont:(id)arg0 differentialFont:(id)arg1 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(id)newExtractedCellStyleElements:(id)arg0 parentScope:(id)arg1 row:(int)arg2 column:(int)arg3 ;
-(id)newExtractedGlobalStyleElements:(id)arg0 ;
-(id)newExtractedKeys:(id)arg0 from:(id)arg1 parent:(id)arg2 ;
-(id)newExtractedRowStyleElements:(id)arg0 parentScope:(id)arg1 row:(int)arg2 ;
-(id)styleFromObject:(id)arg0 ;
-(id)wrapDifferentialStyleInATableStyleElement:(id)arg0 type:(int)arg1 ;
-(int)borderFlagsForStyleType:(int)arg0 row:(int)arg1 column:(int)arg2 ;
-(struct EDCellHeader *)cellWithSetupStyleAtRowNumber:(int)arg0 columnNumber:(int)arg1 ;
-(void)applyProcessorToObject:(id)arg0 sheet:(id)arg1 ;
-(void)applyStyleElements:(id)arg0 toCell:(struct EDCellHeader *)arg1 row:(int)arg2 column:(int)arg3 ;
-(void)cacheRange:(id)arg0 ;
-(void)cacheSizes:(id)arg0 inObject:(id)arg1 ;
-(void)clearCache;
-(void)processObject:(id)arg0 ;


@end


#endif