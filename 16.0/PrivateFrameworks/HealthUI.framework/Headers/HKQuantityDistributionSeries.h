// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUANTITYDISTRIBUTIONSERIES_H
#define HKQUANTITYDISTRIBUTIONSERIES_H

@class NSLock;


#import "HKGraphSeries.h"
#import "HKStrokeStyle.h"
#import "HKAxisLabelStyle.h"

@interface HKQuantityDistributionSeries : HKGraphSeries

@property (nonatomic) BOOL excludeDistribution;
@property (nonatomic) BOOL excludeDistributionStorage; // ivar: _excludeDistributionStorage
@property (nonatomic) CGFloat hollowLineRatio;
@property (nonatomic) CGFloat hollowLineRatioStorage; // ivar: _hollowLineRatioStorage
@property (copy, nonatomic) HKStrokeStyle *inactiveStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *inactiveStrokeStyleStorage; // ivar: _inactiveStrokeStyleStorage
@property (copy, nonatomic) HKAxisLabelStyle *minMaxLabelStyle;
@property (copy, nonatomic) HKAxisLabelStyle *minMaxLabelStyleStorage; // ivar: _minMaxLabelStyleStorage
@property (copy, nonatomic) HKStrokeStyle *minMaxPointStyle;
@property (copy, nonatomic) HKStrokeStyle *minMaxPointStyleStorage; // ivar: _minMaxPointStyleStorage
@property (copy, nonatomic) HKAxisLabelStyle *minMaxValueStyle;
@property (copy, nonatomic) HKAxisLabelStyle *minMaxValueStyleStorage; // ivar: _minMaxValueStyleStorage
@property (copy, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *selectedStrokeStyleStorage; // ivar: _selectedStrokeStyleStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (copy, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *unselectedStrokeStyleStorage; // ivar: _unselectedStrokeStyleStorage
@property (nonatomic) NSInteger zeroCountForGap;
@property (nonatomic) NSInteger zeroCountForGapStorage; // ivar: _zeroCountForGapStorage


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
-(id)marginsForYAxis:(id)arg0 xAxisRange:(id)arg1 zoomLevel:(NSInteger)arg2 chartRect:(struct CGRect )arg3 ;
-(struct CGRect )_textRectForSize:(struct CGSize )arg0 location:(struct CGPoint )arg1 screenRect:(struct CGRect )arg2 yOffset:(CGFloat)arg3 ;
-(void)_drawMinMaxLabelsForMin:(struct CGPoint )arg0 max:(struct CGPoint )arg1 pointTransform:(struct CGAffineTransform )arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif