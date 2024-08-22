// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPDURATIONSERIES_H
#define HKSLEEPDURATIONSERIES_H

@class NSArray, UIImage, NSLock;


#import "HKBarSeries.h"
#import "HKLineSeriesPointMarkerStyle.h"
#import "HKStrokeStyle.h"

@interface HKSleepDurationSeries : HKBarSeries

@property (copy, nonatomic) NSArray *defaultFillStyles;
@property (copy, nonatomic) NSArray *defaultFillStylesStorage; // ivar: _defaultFillStylesStorage
@property (nonatomic) BOOL extendGoalLineToAxis;
@property (nonatomic) BOOL extendGoalLineToAxisStorage; // ivar: _extendGoalLineToAxisStorage
@property (retain, nonatomic) UIImage *goalLineMarkerImageStorage; // ivar: _goalLineMarkerImageStorage
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *goalLineMarkerStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *goalLineMarkerStyleStorage; // ivar: _goalLineMarkerStyleStorage
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyleStorage; // ivar: _goalLineStrokeStyleStorage
@property (nonatomic) BOOL hideAsleepData;
@property (nonatomic) BOOL hideAsleepDataStorage; // ivar: _hideAsleepDataStorage
@property (nonatomic) BOOL hideInBedData;
@property (nonatomic) BOOL hideInBedDataStorage; // ivar: _hideInBedDataStorage
@property (copy, nonatomic) NSArray *highlightedFillStyles;
@property (copy, nonatomic) NSArray *highlightedFillStylesStorage; // ivar: _highlightedFillStylesStorage
@property (copy, nonatomic) NSArray *inactiveFillStyles;
@property (copy, nonatomic) NSArray *inactiveFillStylesStorage; // ivar: _inactiveFillStylesStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (copy, nonatomic) id *startOfDayTransform;
@property (copy, nonatomic) id *startOfDayTransformStorage; // ivar: _startOfDayTransformStorage


-(BOOL)_currentGoal:(id)arg0 differentFrom:(id)arg1 ;
-(BOOL)_dataIsHidden:(NSInteger)arg0 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)barWidthForVisibleBarCount:(NSInteger)arg0 axisRect:(struct CGRect )arg1 minimumSpacing:(CGFloat)arg2 ;
-(id)_durationAbbreviatedFormatter;
-(id)_durationShortFormatter;
-(id)_stringForDuration:(CGFloat)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)goalLineMarkerImage;
-(id)init;
-(void)_addAnnotationForValue:(CGFloat)arg0 axisAnnotationDelegate:(id)arg1 ;
-(void)_addGoalAnnotationAtLocation:(CGFloat)arg0 axisAnnotationDelegate:(id)arg1 ;
-(void)_drawGoalLineMarkers:(id)arg0 context:(struct CGContext *)arg1 goalLineMarkerImage:(id)arg2 ;
-(void)_drawGoalLinePath:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)_drawPaths:(id)arg0 withFillStyles:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)_rebuildPointMarkerImages;
-(void)addGoalLinePathsToCoordinate:(id)arg0 goalLinePath:(id)arg1 goalLineMarkerPoints:(id)arg2 previousCoordinateGoal:(id)arg3 axisRect:(struct CGRect )arg4 ;
-(void)clearCaches;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 seriesRenderingDelegate:(id)arg5 ;


@end


#endif