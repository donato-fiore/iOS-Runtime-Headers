// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPSTAGEDAYSERIES_H
#define HKSLEEPSTAGEDAYSERIES_H

@class NSString, NSNumber, NSLock, NSArray, UIColor, UIFont;
@protocol HKAxisLabelDataSource, HKSleepStageCategoryHighlightable;


#import "HKGraphSeries.h"
#import "HKFillStyle.h"

@interface HKSleepStageDaySeries : HKGraphSeries <HKAxisLabelDataSource, HKSleepStageCategoryHighlightable>



@property (nonatomic) CGSize cornerRadii;
@property (nonatomic) CGSize cornerRadiiStorage; // ivar: _cornerRadiiStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *highlightedSleepStage;
@property (copy, nonatomic) NSNumber *highlightedSleepStageStorage; // ivar: _highlightedSleepStageStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (copy, nonatomic) HKFillStyle *sleepStageBackgroundFillStyle;
@property (copy, nonatomic) HKFillStyle *sleepStageBackgroundFillStyleStorage; // ivar: _sleepStageBackgroundFillStyleStorage
@property (copy, nonatomic) HKFillStyle *sleepStageBackgroundInactiveFillStyle;
@property (copy, nonatomic) HKFillStyle *sleepStageBackgroundInactiveFillStyleStorage; // ivar: _sleepStageBackgroundInactiveFillStyleStorage
@property (copy, nonatomic) NSArray *sleepStageFillStyles;
@property (copy, nonatomic) NSArray *sleepStageFillStylesStorage; // ivar: _sleepStageFillStylesStorage
@property (copy, nonatomic) UIColor *sleepStageLabelColor;
@property (retain, nonatomic) UIColor *sleepStageLabelColorStorage; // ivar: _sleepStageLabelColorStorage
@property (copy, nonatomic) UIFont *sleepStageLabelFont;
@property (retain, nonatomic) UIFont *sleepStageLabelFontStorage; // ivar: _sleepStageLabelFontStorage
@property (readonly) Class superclass;


-(BOOL)supportsMultiTouchSelection;
-(CGFloat)_yAxisOffsetForCoordinate:(id)arg0 axisRect:(struct CGRect )arg1 ;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisSelectedCoordinate:(CGFloat)arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(NSInteger)overlayType;
-(id)_buildConnectionFromStageRect:(struct CGRect )arg0 toStageRect:(struct CGRect )arg1 ;
-(id)_buildConnectionPathFromBackgroundRects:(id)arg0 ;
-(id)_visibleSleepStagesInBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 screenRect:(struct CGRect )arg2 ;
-(id)cacheKeysForModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)determineBottomConnectionPathFromRect:(struct CGRect )arg0 toRect:(struct CGRect )arg1 cornerRadius:(CGFloat)arg2 ;
-(id)determineTopConnectionPathFromRect:(struct CGRect )arg0 toRect:(struct CGRect )arg1 cornerRadius:(CGFloat)arg2 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)init;
-(id)mergeOverlappingRects:(id)arg0 ;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;
-(struct CGRect )_enumerationRectForStage:(NSInteger)arg0 axisRect:(struct CGRect )arg1 ;
-(struct CGRect )_nonSleepStageBarRectForCoordinate:(id)arg0 axisRect:(struct CGRect )arg1 ;
-(struct CGRect )_sleepStageBarRectForCoordinate:(id)arg0 axisRect:(struct CGRect )arg1 ;
-(void)_addSomnogramConnectionPath:(id)arg0 toBezierPath:(id)arg1 ;
-(void)_drawLabelAndRuleLineForString:(id)arg0 inRect:(struct CGRect )arg1 horizontalOffset:(CGFloat)arg2 verticalOffset:(CGFloat)arg3 axisRect:(struct CGRect )arg4 context:(struct CGContext *)arg5 ;
-(void)_drawPaths:(id)arg0 withFillStyles:(id)arg1 axisRect:(struct CGRect )arg2 context:(struct CGContext *)arg3 ;
-(void)_drawSleepStageLabels:(struct CGContext *)arg0 axisRect:(struct CGRect )arg1 ;
-(void)_drawStagesBackgroundWithRects:(id)arg0 buildPath:(id)arg1 cornerRadii:(struct CGSize )arg2 highlightedSleepStage:(id)arg3 axisRect:(struct CGRect )arg4 renderContext:(struct CGContext *)arg5 ;
-(void)_rebuildFillStyles;
-(void)drawOverlayInContext:(struct CGContext *)arg0 seriesOverlayData:(id)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif