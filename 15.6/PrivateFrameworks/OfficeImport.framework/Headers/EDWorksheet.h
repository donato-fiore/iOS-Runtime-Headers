// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDWORKSHEET_H
#define EDWORKSHEET_H

@class NSMutableDictionary;


#import "EDSheet.h"
#import "EDRowBlocks.h"
#import "EDColumnInfoCollection.h"
#import "EDCollection.h"
#import "EDMergedCellCollection.h"
#import "EDPane.h"
#import "EDWarnings.h"
#import "EDReference.h"

@interface EDWorksheet : EDSheet {
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    CGFloat mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    NSUInteger mMaxRowOutlineLevel;
    NSUInteger mMaxColumnOutlineLevel;
    BOOL mFitToPage;
    EDReference *mMaxCellReferencedInFormulas;
    NSMutableDictionary *mMergedRows;
    NSMutableDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}




-(BOOL)fitToPage;
-(BOOL)hasMergedCells;
-(BOOL)hasMergedCol;
-(BOOL)hasMergedRow;
-(BOOL)isColMerged:(unsigned int)arg0 ;
-(BOOL)isRowMerged:(unsigned int)arg0 ;
-(CGFloat)defaultColumnWidth;
-(NSUInteger)maxColumnOutlineLevel;
-(NSUInteger)maxRowOutlineLevel;
-(id)columnInfos;
-(id)conditionalFormattings;
-(id)description;
-(id)hyperlinks;
-(id)implicitCellArea;
-(id)maxCellReferencedInFormulas;
-(id)mergedCells;
-(id)mergedColRef:(unsigned int)arg0 ;
-(id)mergedRowRef:(unsigned int)arg0 ;
-(id)pane;
-(id)pivotTables;
-(id)rowBlocks;
-(id)tables;
-(id)worksheetWarnings;
-(unsigned short)defaultRowHeight;
-(void)reduceMemoryIfPossible;
-(void)setDefaultColumnWidth:(CGFloat)arg0 ;
-(void)setDefaultRowHeight:(unsigned short)arg0 ;
-(void)setFitToPage:(BOOL)arg0 ;
-(void)setImplicitCellArea:(id)arg0 ;
-(void)setMaxColumnOutlineLevel:(NSUInteger)arg0 ;
-(void)setMaxRowOutlineLevel:(NSUInteger)arg0 ;
-(void)setMergedColsRef:(id)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 ;
-(void)setMergedRowsRef:(id)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 ;
-(void)setPane:(id)arg0 ;
-(void)setup;
-(void)teardown;
-(void)updateMaxColumnOutlineLevelIfNeeded:(NSUInteger)arg0 ;
-(void)updateMaxRowOutlineLevelIfNeeded:(NSUInteger)arg0 ;


@end


#endif