// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLITERATOR_H
#define TSTCELLITERATOR_H

@class NSString;
@protocol TSTCellIterating, TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating, TSTCellRegionIterating;

#import <Foundation/Foundation.h>

#import "TSTCell.h"
#import "TSTMutableCellIteratorData.h"
#import "TSTCellRegion.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"

@interface TSTCellIterator : NSObject <TSTCellIterating>

 {
    unordered_map<unsigned short, TSUCellRect, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSUCellRect>>> _columnIndexToMergeRangeMap;
}


@property (retain, nonatomic) TSTCell *cell; // ivar: _cell
@property (retain, nonatomic) TSTMutableCellIteratorData *cellData; // ivar: _cellData
@property (retain, nonatomic) NSObject<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> *contentIterator; // ivar: _contentIterator
@property (retain, nonatomic) NSObject<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> *dataStoreIterator; // ivar: _dataStoreIterator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSTCellRegion *region; // ivar: _region
@property (retain, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator; // ivar: _regionIterator
@property (readonly, nonatomic) BOOL returnCellContents; // ivar: _returnCellContents
@property (nonatomic) BOOL returnEmptyCells; // ivar: _returnEmptyCells
@property (nonatomic) BOOL returnMergeRanges; // ivar: _returnMergeRanges
@property (nonatomic) BOOL returnOneEmptyCell; // ivar: _returnOneEmptyCell
@property (nonatomic) BOOL returnOnlyFormulas; // ivar: _returnOnlyFormulas
@property (nonatomic) unsigned int rowForColumnIndexesWithMerges; // ivar: _rowForColumnIndexesWithMerges
@property (retain, nonatomic) NSObject<TSTCellRegionIterating><TSTMutableCellIteratorDataUpdating> *strokeIterator; // ivar: _strokeIterator
@property (readonly) Class superclass;
@property (retain, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (retain, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel
@property (nonatomic) BOOL terminateRegionIterator; // ivar: _terminateRegionIterator


-(BOOL)getNextCellData:(*id)arg0 ;
-(id)initWithTableInfo:(id)arg0 flags:(NSUInteger)arg1 searchFlags:(NSUInteger)arg2 ;
-(id)initWithTableInfo:(id)arg0 range:(struct TSUCellRect )arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 ;
-(id)initWithTableInfo:(id)arg0 region:(id)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 ;
-(id)initWithTableInfo:(id)arg0 region:(id)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 clampingRange:(struct TSUCellRect )arg4 ;
-(id)initWithTableInfo:(id)arg0 tableModel:(id)arg1 region:(id)arg2 flags:(NSUInteger)arg3 searchFlags:(NSUInteger)arg4 clampingRange:(struct TSUCellRect )arg5 ;
-(id)initWithTableModel:(id)arg0 baseRegion:(id)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 baseClampingRange:(struct TSUCellRect )arg4 ;
-(id)nextCellData;
-(struct TSUCellCoord )p_getNextCellID;
-(void)iterateCellsUsingBlock:(id)arg0 ;
-(void)p_updateDataForCellID:(struct TSUCellCoord )arg0 ;
-(void)p_updateDataForMergeAtCellID:(struct TSUCellCoord )arg0 ;
-(void)terminate;


@end


#endif