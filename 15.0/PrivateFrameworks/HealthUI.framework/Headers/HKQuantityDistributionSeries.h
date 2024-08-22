// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITYDISTRIBUTIONSERIES_H
#define HKQUANTITYDISTRIBUTIONSERIES_H



#import "HKGraphSeries.h"
#import "HKStrokeStyle.h"
#import "HKAxisLabelStyle.h"

@interface HKQuantityDistributionSeries : HKGraphSeries

@property (nonatomic) BOOL excludeDistribution; // ivar: _excludeDistribution
@property (nonatomic) CGFloat hollowLineRatio; // ivar: _hollowLineRatio
@property (copy, nonatomic) HKStrokeStyle *inactiveStrokeStyle; // ivar: _inactiveStrokeStyle
@property (copy, nonatomic) HKAxisLabelStyle *minMaxLabelStyle; // ivar: _minMaxLabelStyle
@property (copy, nonatomic) HKStrokeStyle *minMaxPointStyle; // ivar: _minMaxPointStyle
@property (copy, nonatomic) HKAxisLabelStyle *minMaxValueStyle; // ivar: _minMaxValueStyle
@property (copy, nonatomic) HKStrokeStyle *selectedStrokeStyle; // ivar: _selectedStrokeStyle
@property (copy, nonatomic) HKStrokeStyle *unselectedStrokeStyle; // ivar: _unselectedStrokeStyle
@property (nonatomic) NSInteger zeroCountForGap; // ivar: _zeroCountForGap


+(id)segmentsFromChartPoint:(id)arg0 minY:(CGFloat)arg1 maxY:(CGFloat)arg2 zeroCountForGap:(NSInteger)arg3 ;
+(id)segmentsFromChartPoint:(id)arg0 zeroCountForGap:(NSInteger)arg1 ;
+(id)transformedSegmentsFromChartPoint:(id)arg0 forX:(CGFloat)arg1 minY:(CGFloat)arg2 maxY:(CGFloat)arg3 zeroCountForGap:(NSInteger)arg4 ;
-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)_quickDate:(id)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(id)marginsForYAxis:(id)arg0 chartRect:(struct CGRect )arg1 ;
-(struct CGRect )_textRectForSize:(struct CGSize )arg0 location:(struct CGPoint )arg1 screenRect:(struct CGRect )arg2 yOffset:(CGFloat)arg3 ;
-(void)_drawMinMaxLabelsForMin:(struct CGPoint )arg0 max:(struct CGPoint )arg1 pointTransform:(struct CGAffineTransform )arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;


@end


#endif