// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTPIVOTSTOREITERATOR_H
#define TSTPIVOTSTOREITERATOR_H



#import "TSTCategoryStoreIterator.h"
#import "TSTCell.h"
#import "TSTTableDataStore.h"
#import "TSTTableTileRowInfo.h"
#import "TSTPivotTranslator.h"

@interface TSTPivotStoreIterator : TSTCategoryStoreIterator {
    TSUViewCellCoord _currentViewCellID;
    TSUModelCellCoord _currentBaseCellID;
    TSUModelCellCoord _currentSummaryCellID;
    BOOL _currentCellIDIsBase;
    unsigned int _currentRowIndex;
    TSTCell *_cell;
    TSTTableDataStore *_baseDataStore;
    TSTTableDataStore *_summaryDataStore;
    TSTTableTileRowInfo *_baseRow;
    TSTTableTileRowInfo *_summaryRow;
    TSTPivotTranslator *_translator;
}




-(id)initWithInfo:(id)arg0 region:(id)arg1 flags:(NSUInteger)arg2 searchMask:(NSUInteger)arg3 ;
-(struct TSUCellCoord )advanceToCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )getNext;
-(void)updateCellData:(id)arg0 ;
-(void)updateFormulaForCellData:(id)arg0 ;


@end


#endif