// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAXIS_H
#define HKAXIS_H

@class NSMutableArray, NSLock, NSString, NSNumber;
@protocol HKAxisLabelDataSource, HKZoomScale;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"
#import "HKAxisLabelCache.h"
#import "HKAxisStyle.h"
#import "HKCoordinateTransform.h"

@interface HKAxis : NSObject <HKAxisLabelDataSource>



@property (retain, nonatomic) NSMutableArray *axisAnnotations;
@property (retain, nonatomic) NSMutableArray *axisAnnotationsStorage; // ivar: _axisAnnotationsStorage
@property (retain, nonatomic) HKValueRange *axisChartableValueRange;
@property (retain, nonatomic) HKValueRange *axisChartableValueRangeStorage; // ivar: _axisChartableValueRangeStorage
@property (readonly, nonatomic) HKAxisLabelCache *axisLabelCache; // ivar: _axisLabelCache
@property (nonatomic) NSInteger axisLabelEndings;
@property (nonatomic) NSInteger axisLabelEndingsStorage; // ivar: _axisLabelEndingsStorage
@property (readonly, nonatomic) NSLock *axisMutableStateLock; // ivar: _axisMutableStateLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HKAxisLabelDataSource> *labelDataSource; // ivar: _labelDataSource
@property (retain, nonatomic) NSNumber *maxLabelWidth; // ivar: _maxLabelWidth
@property (readonly, nonatomic) NSInteger maxLabels; // ivar: _maxLabels
@property (readonly, nonatomic) NSInteger minLabels; // ivar: _minLabels
@property (readonly, nonatomic) BOOL overrideNoTopBaseline; // ivar: _overrideNoTopBaseline
@property (nonatomic) HKLinearTransform pointTransform;
@property (nonatomic) HKLinearTransform pointTransformStorage; // ivar: _pointTransformStorage
@property (readonly, nonatomic) HKAxisStyle *preferredStyle; // ivar: _preferredStyle
@property (readonly, nonatomic) BOOL requiresScaling;
@property (nonatomic) BOOL requiresScalingStorage; // ivar: _requiresScalingStorage
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKCoordinateTransform *transform; // ivar: _transform
@property (readonly, nonatomic) NSObject<HKZoomScale> *zoomScaleEngine; // ivar: _zoomScaleEngine


+(struct HKAxisMinMaxDefinition )contractByPointsLow:(CGFloat)arg0 high:(CGFloat)arg1 modelRange:(struct HKAxisMinMaxDefinition )arg2 pointRange:(struct HKAxisMinMaxDefinition )arg3 ;
+(struct HKAxisMinMaxDefinition )expandByPointsLow:(CGFloat)arg0 high:(CGFloat)arg1 modelRange:(struct HKAxisMinMaxDefinition )arg2 pointRange:(struct HKAxisMinMaxDefinition )arg3 ;
-(BOOL)_containsTopBaselineWithModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(BOOL)_styleIsHorizontal:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAxis:(id)arg0 ;
-(CGFloat)_axisFillWidthForStyle:(id)arg0 labels:(id)arg1 font:(id)arg2 ;
-(CGFloat)_axisOffsetWithStyle:(id)arg0 chartRect:(struct CGRect )arg1 horizontalAlignmentOut:(*NSInteger)arg2 ;
-(CGFloat)_maxLabelWidthFromLabels:(id)arg0 font:(id)arg1 ;
-(CGFloat)_maximumWidthOfAnnotations:(id)arg0 axisStyle:(id)arg1 ;
-(CGFloat)bottomBaselineYCoordinateForModelRange:(id)arg0 axisRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 ;
-(CGFloat)offsetForLegendView;
-(CGFloat)topBaselineYCoordinateForModelRange:(id)arg0 axisRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 ;
-(NSInteger)_axisLabelCountWithTextInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(NSInteger)axisAnnotationCount;
-(NSInteger)dateZoomForZoomScale:(CGFloat)arg0 ;
-(id)_baselineForModelRange:(id)arg0 axisRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 style:(id)arg4 ;
-(id)_gridLinesForModelRange:(id)arg0 axisRect:(struct CGRect )arg1 gridlineRanges:(id)arg2 zoomScale:(CGFloat)arg3 contentOffset:(struct CGPoint )arg4 style:(id)arg5 gridLineType:(NSInteger)arg6 ;
-(id)adjustValueRangeForLabels:(id)arg0 ;
-(id)adjustedRangeForFittedRange:(id)arg0 chartRange:(struct HKRange )arg1 ;
-(id)axisLabelsInModelRangeFromCache:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)cacheKeysForModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)extendModelRangeWithRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)rangeForChartRect:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 contentOffset:(struct CGPoint )arg2 ;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;
-(struct CGRect )_labelBackgroundRectWithLabels:(id)arg0 font:(id)arg1 maxAnnotationWidth:(CGFloat)arg2 rect:(struct CGRect )arg3 style:(id)arg4 ;
-(struct CGRect )labelRectWithModelRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 ;
-(struct HKLinearTransform )_pointTransformFromSeriesRanges:(id)arg0 linearTransform:(struct HKLinearTransform )arg1 chartRange:(struct HKRange )arg2 ;
-(struct HKLinearTransform )pointTransformFittingValueRange:(id)arg0 toChartRange:(struct HKRange )arg1 ;
-(struct HKRange )_chartRangeForChartRect:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 contentOffset:(struct CGPoint )arg2 ;
-(void)_addTickMarksForPosition:(NSUInteger)arg0 axisRect:(struct CGRect )arg1 modelRange:(id)arg2 zoomScale:(CGFloat)arg3 contentOffset:(struct CGPoint )arg4 toBezierPath:(id)arg5 style:(id)arg6 ;
-(void)_drawTextBackgroundWithRect:(struct CGRect )arg0 style:(id)arg1 renderView:(id)arg2 ;
-(void)_drawTextForModelRange:(id)arg0 inRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 renderView:(id)arg4 style:(id)arg5 maximumLabelSize:(struct CGSize *)arg6 omitOffscreenLabels:(BOOL)arg7 ;
-(void)_enumerateAxisLabelsForTextInRange:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 gridlineWidth:(CGFloat)arg7 usingBlock:(id)arg8 ;
-(void)_offsetForChartRect:(struct CGRect )arg0 chartRange:(struct HKRange )arg1 zoomScaleOut:(*CGFloat)arg2 contentOffsetOut:(struct CGPoint *)arg3 ;
-(void)_renderTickMarksForModelRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 style:(id)arg4 renderView:(id)arg5 ;
-(void)addAxisAnnotation:(id)arg0 modelCoordinate:(id)arg1 ;
-(void)clearAnnotations;
-(void)clearCache;
-(void)drawBaselineForModelRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 renderView:(id)arg4 ;
-(void)drawGridlinesForModelRange:(id)arg0 chartRect:(struct CGRect )arg1 gridlineRanges:(id)arg2 zoomScale:(CGFloat)arg3 contentOffset:(struct CGPoint )arg4 renderView:(id)arg5 blendMode:(int)arg6 ;
-(void)drawLabelsWithModelRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 renderView:(id)arg4 maximumLabelSize:(struct CGSize *)arg5 omitOffscreenLabels:(BOOL)arg6 ;
-(void)enumerateTickCoordinatesInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 handler:(id)arg2 ;
-(void)invalidateAxisLabelCache;
-(void)offsetForValueRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScaleOut:(*CGFloat)arg2 contentOffsetOut:(struct CGPoint *)arg3 ;


@end


#endif