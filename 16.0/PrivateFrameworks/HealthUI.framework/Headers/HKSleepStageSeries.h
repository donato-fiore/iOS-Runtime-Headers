// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPSTAGESERIES_H
#define HKSLEEPSTAGESERIES_H

@class NSNumber, NSLock, NSArray;
@protocol HKSleepStageCategoryHighlightable;


#import "HKSleepPeriodSeries.h"

@interface HKSleepStageSeries : HKSleepPeriodSeries <HKSleepStageCategoryHighlightable>



@property (copy, nonatomic) NSNumber *highlightedSleepStage;
@property (copy, nonatomic) NSNumber *highlightedSleepStageStorage; // ivar: _highlightedSleepStageStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (copy, nonatomic) NSArray *sleepStageFillStyles;
@property (copy, nonatomic) NSArray *sleepStageFillStylesStorage; // ivar: _sleepStageFillStylesStorage


-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(id)marginsForYAxis:(id)arg0 xAxisRange:(id)arg1 zoomLevel:(NSInteger)arg2 chartRect:(struct CGRect )arg3 ;
-(void)_drawColumnForLayer:(NSInteger)arg0 offsets:(id)arg1 coordinate:(id)arg2 selectedBezierPaths:(id)arg3 unselectedBezierPaths:(id)arg4 barWidth:(CGFloat)arg5 pathCount:(*NSInteger)arg6 ;
-(void)_drawWithBlockCoordinates:(id)arg0 visibleBarCount:(NSInteger)arg1 pointTransform:(struct CGAffineTransform )arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect )arg4 axisResolution:(CGFloat)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)_rebuildFillStyles;
-(void)updateChartPointUserInfo:(id)arg0 forHighlightedSleepStage:(id)arg1 ;


@end


#endif