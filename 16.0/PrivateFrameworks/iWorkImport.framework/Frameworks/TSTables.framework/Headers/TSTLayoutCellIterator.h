// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTLAYOUTCELLITERATOR_H
#define TSTLAYOUTCELLITERATOR_H

@protocol TSTCellIteratorData;


#import "TSTCellIterator.h"
#import "TSTCell.h"
#import "TSTMutableCellIteratorData.h"
#import "TSTLayoutEngine.h"

@interface TSTLayoutCellIterator : TSTCellIterator

@property (nonatomic) BOOL columnOrderReversed; // ivar: _columnOrderReversed
@property (nonatomic) BOOL isDynamicallyChangingContent; // ivar: _isDynamicallyChangingContent
@property (nonatomic) BOOL isDynamicallyChangingRowOrColumnCount; // ivar: _isDynamicallyChangingRowOrColumnCount
@property (nonatomic) BOOL isDynamicallyHidingRowsCols; // ivar: _isDynamicallyHidingRowsCols
@property (nonatomic) BOOL isDynamicallyRemovingText; // ivar: _isDynamicallyRemovingText
@property (readonly, nonatomic) TSTCell *layoutCell; // ivar: _layoutCell
@property (retain, nonatomic) TSTMutableCellIteratorData *layoutCellData; // ivar: _layoutCellData
@property (readonly, nonatomic) TSUCellCoord layoutCellID; // ivar: _layoutCellID
@property (readonly, nonatomic) TSTLayoutEngine *layoutEngine; // ivar: _layoutEngine
@property (readonly, nonatomic) TSUCellRect layoutRange; // ivar: _layoutRange
@property (nonatomic) NSObject<TSTCellIteratorData> *modelIteratorData; // ivar: _modelIteratorData
@property (nonatomic) BOOL modelIteratorHasCell; // ivar: _modelIteratorHasCell
@property (nonatomic) unsigned int numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) unsigned int numberOfLayoutColumns; // ivar: _numberOfLayoutColumns
@property (nonatomic) unsigned int numberOfRows; // ivar: _numberOfRows
@property (nonatomic) BOOL queriedModel; // ivar: _queriedModel


-(BOOL)getNextCellData:(*id)arg0 ;
-(id)initWithLayout:(id)arg0 range:(struct TSUCellRect )arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 ;
-(id)initWithLayoutEngine:(id)arg0 range:(struct TSUCellRect )arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 ;


@end


#endif