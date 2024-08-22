// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCATEGORYSTOREITERATOR_H
#define TSTCATEGORYSTOREITERATOR_H

@class NSString, NSIndexSet;
@protocol TSTMutableCellIteratorDataUpdating, TSTCellIterating, TSTCellRegionIterating;

#import <Foundation/Foundation.h>

#import "TSTCell.h"
#import "TSTTableDataListCache.h"
#import "TSTTableDataStore.h"
#import "TSTColumnRowUIDMap.h"
#import "TSTTableTileRowInfo.h"
#import "TSTTableTile.h"
#import "TSTGroupBy.h"
#import "TSTTableInfo.h"
#import "TSTCellRegion.h"
#import "TSTSummaryCellVendor.h"
#import "TSTCategoryTranslator.h"

@interface TSTCategoryStoreIterator : NSObject <TSTMutableCellIteratorDataUpdating, TSTCellIterating, TSTCellRegionIterating>

 {
    unordered_map<TSUViewColumnIndex, TSUModelColumnIndex, std::hash<TSUViewColumnIndex>, std::equal_to<TSUViewColumnIndex>, std::allocator<std::pair<const TSUViewColumnIndex, TSUModelColumnIndex>>> _mapFromViewToBaseColumnInCurrentRow;
    TSTCell *_tempSummaryCell;
}


@property (readonly, nonatomic) TSTTableDataListCache *baseDataListCache; // ivar: _baseDataListCache
@property (readonly, weak, nonatomic) TSTTableDataStore *baseDataStore; // ivar: _baseDataStore
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *baseMap; // ivar: _baseMap
@property (retain, nonatomic) TSTTableTileRowInfo *baseRow; // ivar: _baseRow
@property (nonatomic) unsigned int baseRowIndex; // ivar: _baseRowIndex
@property (retain, nonatomic) TSTTableTile *baseTile; // ivar: _baseTile
@property (nonatomic) _NSRange baseTileRange; // ivar: _baseTileRange
@property (readonly, nonatomic) unsigned short categoryColumnIndex; // ivar: _categoryColumnIndex
@property (readonly, nonatomic) TSTCell *cell; // ivar: _cell
@property (nonatomic) BOOL columnOrderReversed; // ivar: _columnOrderReversed
@property (nonatomic) TSUCellCoord curCellID; // ivar: _curCellID
@property (nonatomic) unsigned int curRowIndex; // ivar: _curRowIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TSTGroupBy *groupBy; // ivar: _groupBy
@property (nonatomic) unsigned char groupLevel; // ivar: _groupLevel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSTTableInfo *info; // ivar: _info
@property (nonatomic) BOOL isLabelRow; // ivar: _isLabelRow
@property (nonatomic) BOOL isSummaryRow; // ivar: _isSummaryRow
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel1; // ivar: _populatedColumnsForGroupLevel1
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel2; // ivar: _populatedColumnsForGroupLevel2
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel3; // ivar: _populatedColumnsForGroupLevel3
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel4; // ivar: _populatedColumnsForGroupLevel4
@property (retain, nonatomic) NSIndexSet *populatedColumnsForGroupLevel5; // ivar: _populatedColumnsForGroupLevel5
@property (readonly, nonatomic) TSTCellRegion *region; // ivar: _region
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // ivar: _regionIterator
@property (nonatomic) NSUInteger searchMask; // ivar: _searchMask
@property (readonly, weak, nonatomic) TSTSummaryCellVendor *summaryCellVendor; // ivar: _summaryCellVendor
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *summaryMap; // ivar: _summaryMap
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic) BOOL terminated; // ivar: _terminated
@property (readonly, nonatomic) TSTCategoryTranslator *translator; // ivar: _translator
@property (nonatomic) TSKUIDStruct uuid; // ivar: _uuid
@property (retain, nonatomic) NSIndexSet *viewColumnIndexesInCurrentRow; // ivar: _viewColumnIndexesInCurrentRow
@property (readonly, weak, nonatomic) TSTColumnRowUIDMap *viewMap; // ivar: _viewMap


-(BOOL)checkCell:(id)arg0 searchFlags:(NSUInteger)arg1 ;
-(BOOL)getNextCellData:(*id)arg0 ;
-(id)initWithInfo:(id)arg0 region:(id)arg1 flags:(NSUInteger)arg2 searchMask:(NSUInteger)arg3 ;
-(id)nextCellData;
-(id)tempSummaryCell;
-(struct TSUCellCoord )advanceToCellID:(struct TSUCellCoord )arg0 ;
-(struct TSUCellCoord )getNext;
-(void)dealloc;
-(void)iterateCellsUsingBlock:(id)arg0 ;
-(void)terminate;
-(void)updateCellData:(id)arg0 ;
-(void)updateFormulaForCellData:(id)arg0 ;


@end


#endif