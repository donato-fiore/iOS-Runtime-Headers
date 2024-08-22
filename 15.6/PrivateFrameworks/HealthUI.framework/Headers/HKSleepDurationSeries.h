// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSLEEPDURATIONSERIES_H
#define HKSLEEPDURATIONSERIES_H

@class UIImage, NSArray;


#import "HKBarSeries.h"
#import "HKLineSeriesPointMarkerStyle.h"
#import "HKStrokeStyle.h"

@interface HKSleepDurationSeries : HKBarSeries {
    UIImage *_goalLineMarkerImage;
}


@property (copy, nonatomic) NSArray *defaultFillStyles; // ivar: _defaultFillStyles
@property (nonatomic) BOOL extendGoalLineToAxis; // ivar: _extendGoalLineToAxis
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *goalLineMarkerStyle; // ivar: _goalLineMarkerStyle
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle; // ivar: _goalLineStrokeStyle
@property (nonatomic) BOOL hideAsleepData; // ivar: _hideAsleepData
@property (nonatomic) BOOL hideInBedData; // ivar: _hideInBedData
@property (copy, nonatomic) NSArray *highlightedFillStyles; // ivar: _highlightedFillStyles
@property (copy, nonatomic) NSArray *inactiveFillStyles; // ivar: _inactiveFillStyles
@property (copy, nonatomic) id *startOfDayTransform; // ivar: _startOfDayTransform


-(BOOL)_currentGoal:(id)arg0 differentFrom:(id)arg1 ;
-(BOOL)_dataIsHidden:(NSInteger)arg0 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)barWidthForVisibleBarCount:(NSInteger)arg0 axisRect:(struct CGRect )arg1 minimumSpacing:(CGFloat)arg2 ;
-(id)_durationAbbreviatedFormatter;
-(id)_durationShortFormatter;
-(id)_stringForDuration:(CGFloat)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_addAnnotationForValue:(CGFloat)arg0 ;
-(void)_addGoalAnnotationAtLocation:(CGFloat)arg0 ;
-(void)_drawGoalLineMarkers:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)_drawGoalLinePath:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)_drawPaths:(id)arg0 withFillStyles:(id)arg1 strokeStyle:(id)arg2 axisRect:(struct CGRect )arg3 context:(struct CGContext *)arg4 ;
-(void)_rebuildPointMarkerImages;
-(void)clearCaches;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;
-(void)drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 ;


@end


#endif