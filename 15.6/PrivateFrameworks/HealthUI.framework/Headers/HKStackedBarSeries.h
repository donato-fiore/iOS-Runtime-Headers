// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSTACKEDBARSERIES_H
#define HKSTACKEDBARSERIES_H

@class NSArray, NSIndexSet;


#import "HKBarSeries.h"

@interface HKStackedBarSeries : HKBarSeries

@property (copy, nonatomic) NSArray *inactiveFillStyles; // ivar: _inactiveFillStyles
@property (copy, nonatomic) NSArray *selectedFillStyles; // ivar: _selectedFillStyles
@property (nonatomic) BOOL shouldRoundBottomCorners; // ivar: _shouldRoundBottomCorners
@property (copy, nonatomic) NSArray *unselectedFillStyles; // ivar: _unselectedFillStyles
@property (copy, nonatomic) NSIndexSet *unseparatedSegmentIndices; // ivar: _unseparatedSegmentIndices


-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_drawLevels:(id)arg0 withFillStyles:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)_strokeSeparatorIfNecessaryAboveSegment:(id)arg0 belowSegment:(id)arg1 strokeStyle:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 ;


@end


#endif