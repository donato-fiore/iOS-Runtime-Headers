// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPPERIODSERIES_H
#define HKSLEEPPERIODSERIES_H

@class NSArray;


#import "HKGraphSeries.h"
#import "HKStrokeStyle.h"
#import "HKLineSeriesPointMarkerStyle.h"

@interface HKSleepPeriodSeries : HKGraphSeries

@property (nonatomic) CGSize cornerRadii; // ivar: _cornerRadii
@property (copy, nonatomic) NSArray *defaultFillStyles; // ivar: _defaultFillStyles
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle; // ivar: _goalLineStrokeStyle
@property (copy, nonatomic) NSArray *highlightedFillStyles; // ivar: _highlightedFillStyles
@property (copy, nonatomic) NSArray *inactiveFillStyles; // ivar: _inactiveFillStyles
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *lowerGoalLineMarkerStyle; // ivar: _lowerGoalLineMarkerStyle
@property (copy, nonatomic) id *startOfDayTransform; // ivar: _startOfDayTransform
@property (copy, nonatomic) HKStrokeStyle *strokeStyle; // ivar: _strokeStyle
@property (copy, nonatomic) HKStrokeStyle *tiledStrokeStyle; // ivar: _tiledStrokeStyle
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *upperGoalLineMarkerStyle; // ivar: _upperGoalLineMarkerStyle


+(id)_sleepCircleImageWithWidth:(CGFloat)arg0 diameter:(CGFloat)arg1 color:(id)arg2 ;
+(id)asleepImageCompatibleWithFont:(id)arg0 withColor:(id)arg1 ;
+(id)inBedImageCompatibleWithFont:(id)arg0 withColor:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)shouldInvertAxis;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)_maximumYForCoordinate:(id)arg0 ;
-(CGFloat)_minimumYForCoordinate:(id)arg0 ;
-(CGFloat)barWidthForVisibleBarCount:(NSInteger)arg0 axisRect:(struct CGRect )arg1 minimumSpacing:(CGFloat)arg2 ;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(NSInteger)_visibleBarCountWithZoomLevelConfiguration:(id)arg0 ;
-(id)_attributedAxisString:(id)arg0 ;
-(id)_stringFromTimeSinceNoon:(id)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(void)_addAnnotationForValue:(CGFloat)arg0 ;
-(void)_assertCoordinateCompatibility:(id)arg0 ;
-(void)_drawGoalLinePath:(id)arg0 goalMarkerPoints:(id)arg1 markerImage:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)_drawPaths:(id)arg0 withFillStyles:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)_drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 axisResolution:(CGFloat)arg5 ;
-(void)clearCaches;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;


@end


#endif