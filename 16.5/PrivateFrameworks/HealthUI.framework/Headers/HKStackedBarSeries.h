// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSTACKEDBARSERIES_H
#define HKSTACKEDBARSERIES_H

@class NSArray, NSLock, NSIndexSet;


#import "HKBarSeries.h"

@interface HKStackedBarSeries : HKBarSeries

@property (copy, nonatomic) NSArray *inactiveFillStyles;
@property (copy, nonatomic) NSArray *inactiveFillStylesStorage; // ivar: _inactiveFillStylesStorage
@property (copy, nonatomic) NSArray *selectedFillStyles;
@property (copy, nonatomic) NSArray *selectedFillStylesStorage; // ivar: _selectedFillStylesStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (nonatomic) BOOL shouldRoundBottomCorners;
@property (nonatomic) BOOL shouldRoundBottomCornersStorage; // ivar: _shouldRoundBottomCornersStorage
@property (copy, nonatomic) NSArray *unselectedFillStyles;
@property (copy, nonatomic) NSArray *unselectedFillStylesStorage; // ivar: _unselectedFillStylesStorage
@property (copy, nonatomic) NSIndexSet *unseparatedSegmentIndices;
@property (copy, nonatomic) NSIndexSet *unseparatedSegmentIndicesStorage; // ivar: _unseparatedSegmentIndicesStorage


-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_drawLevels:(id)arg0 withFillStyles:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)_strokeSeparatorIfNecessaryAboveSegment:(id)arg0 belowSegment:(id)arg1 strokeStyle:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 seriesRenderingDelegate:(id)arg5 ;


@end


#endif