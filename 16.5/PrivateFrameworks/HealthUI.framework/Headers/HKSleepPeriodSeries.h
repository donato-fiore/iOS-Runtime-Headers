// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPPERIODSERIES_H
#define HKSLEEPPERIODSERIES_H

@class NSArray, NSLock;


#import "HKGraphSeries.h"
#import "HKStrokeStyle.h"
#import "HKLineSeriesPointMarkerStyle.h"

@interface HKSleepPeriodSeries : HKGraphSeries

@property (nonatomic) CGSize cornerRadii; // ivar: _cornerRadii
@property (nonatomic) CGSize cornerRadiiStorage; // ivar: _cornerRadiiStorage
@property (copy, nonatomic) NSArray *defaultFillStyles;
@property (copy, nonatomic) NSArray *defaultFillStylesStorage; // ivar: _defaultFillStylesStorage
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyleStorage; // ivar: _goalLineStrokeStyleStorage
@property (copy, nonatomic) NSArray *highlightedFillStyles;
@property (copy, nonatomic) NSArray *highlightedFillStylesStorage; // ivar: _highlightedFillStylesStorage
@property (copy, nonatomic) NSArray *inactiveFillStyles;
@property (copy, nonatomic) NSArray *inactiveFillStylesStorage; // ivar: _inactiveFillStylesStorage
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *lowerGoalLineMarkerStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *lowerGoalLineMarkerStyleStorage; // ivar: _lowerGoalLineMarkerStyleStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (copy, nonatomic) id *startOfDayTransform;
@property (copy, nonatomic) id *startOfDayTransformStorage; // ivar: _startOfDayTransformStorage
@property (copy, nonatomic) HKStrokeStyle *strokeStyle;
@property (copy, nonatomic) HKStrokeStyle *strokeStyleStorage; // ivar: _strokeStyleStorage
@property (copy, nonatomic) HKStrokeStyle *tiledStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *tiledStrokeStyleStorage; // ivar: _tiledStrokeStyleStorage
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *upperGoalLineMarkerStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *upperGoalLineMarkerStyleStorage; // ivar: _upperGoalLineMarkerStyleStorage


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
-(NSInteger)visibleBarCountWithZoomLevelConfiguration:(id)arg0 ;
-(id)_attributedAxisString:(id)arg0 ;
-(id)_stringFromTimeSinceNoon:(id)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(id)marginsForYAxis:(id)arg0 xAxisRange:(id)arg1 zoomLevel:(NSInteger)arg2 chartRect:(struct CGRect )arg3 ;
-(void)_assertCoordinateCompatibility:(id)arg0 ;
-(void)_drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 axisResolution:(CGFloat)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)addAnnotationForValue:(CGFloat)arg0 axisAnnotationDelegate:(id)arg1 ;
-(void)addGoalLinePathsToCoordinate:(id)arg0 upperGoalLinePath:(id)arg1 upperGoalMarkerPoints:(id)arg2 previousUpperGoalLinePoint:(id)arg3 lowerGoalLinePath:(id)arg4 lowerGoalMarkerPoints:(id)arg5 previousLowerGoalLinePoint:(id)arg6 axisRect:(struct CGRect )arg7 ;
-(void)clearCaches;
-(void)drawGoalLinePath:(id)arg0 goalMarkerPoints:(id)arg1 markerImage:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)drawPaths:(id)arg0 withFillStyles:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif