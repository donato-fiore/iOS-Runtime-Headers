// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAXIS_H
#define HKAXIS_H

@class NSMutableArray, NSString;
@protocol HKAxisLabelDataSource, HKZoomScale;

#import <Foundation/Foundation.h>

#import "HKAxisLabelCache.h"
#import "HKValueRange.h"
#import "HKAxisStyle.h"
#import "HKCoordinateTransform.h"

@interface HKAxis : NSObject <HKAxisLabelDataSource>



@property (nonatomic) BOOL automaticallyFitData; // ivar: _automaticallyFitData
@property (retain, nonatomic) NSMutableArray *axisAnnotations; // ivar: _axisAnnotations
@property (retain, nonatomic) HKAxisLabelCache *axisLabelCache; // ivar: _axisLabelCache
@property (nonatomic) NSInteger axisLabelEndings; // ivar: _axisLabelEndings
@property (retain, nonatomic) HKValueRange *chartableValueRange; // ivar: _chartableValueRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HKAxisLabelDataSource> *labelDataSource; // ivar: _labelDataSource
@property (nonatomic) NSInteger maxLabels; // ivar: _maxLabels
@property (nonatomic) NSInteger minLabels; // ivar: _minLabels
@property (nonatomic) BOOL overrideNoTopBaseline; // ivar: _overrideNoTopBaseline
@property (nonatomic) HKLinearTransform pointTransform; // ivar: _pointTransform
@property (retain, nonatomic) HKAxisStyle *preferredStyle; // ivar: _preferredStyle
@property (readonly, nonatomic) BOOL requiresScaling; // ivar: _requiresScaling
@property (retain, nonatomic) HKAxisStyle *secondaryStyle; // ivar: _secondaryStyle
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKCoordinateTransform *transform; // ivar: _transform
@property (readonly, nonatomic) NSObject<HKZoomScale> *zoomScale; // ivar: _zoomScale


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
-(CGFloat)topBaselineYCoordinateForModelRange:(id)arg0 axisRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 ;
-(NSInteger)axisAnnotationCount;
-(NSInteger)axisLabelCountWithTextInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(NSInteger)dateZoomForZoomScale:(CGFloat)arg0 ;
-(id)_baselineForModelRange:(id)arg0 axisRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 style:(id)arg4 ;
-(id)_cachedAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)_gridLinesForModelRange:(id)arg0 axisRect:(struct CGRect )arg1 gridlineRanges:(id)arg2 zoomScale:(CGFloat)arg3 contentOffset:(struct CGPoint )arg4 style:(id)arg5 gridLineType:(NSInteger)arg6 ;
-(id)adjustValueRangeForLabels:(id)arg0 ;
-(id)adjustedRangeForFittedRange:(id)arg0 chartRange:(struct HKRange )arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)init;
-(id)initWithTransform:(id)arg0 zoomScale:(id)arg1 ;
-(id)rangeForChartRect:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 contentOffset:(struct CGPoint )arg2 ;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;
-(struct CGRect )_labelBackgroundRectWithLabels:(id)arg0 font:(id)arg1 maxAnnotationWidth:(CGFloat)arg2 rect:(struct CGRect )arg3 style:(id)arg4 ;
-(struct CGRect )labelRectWithModelRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 ;
-(struct HKLinearTransform )_pointTransformFromSeriesRanges:(id)arg0 linearTransform:(struct HKLinearTransform )arg1 chartRange:(struct HKRange )arg2 ;
-(struct HKLinearTransform )pointTransformFittingValueRange:(id)arg0 toChartRange:(struct HKRange )arg1 ;
-(struct HKRange )_chartRangeForChartRect:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 contentOffset:(struct CGPoint )arg2 ;
-(void)_addTickMarksForPosition:(NSUInteger)arg0 axisRect:(struct CGRect )arg1 modelRange:(id)arg2 zoomScale:(CGFloat)arg3 contentOffset:(struct CGPoint )arg4 toBezierPath:(id)arg5 style:(id)arg6 ;
-(void)_drawTextBackgroundWithLabels:(id)arg0 font:(id)arg1 offset:(CGFloat)arg2 rect:(struct CGRect )arg3 style:(id)arg4 renderView:(id)arg5 ;
-(void)_drawTextForModelRange:(id)arg0 inRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 renderView:(id)arg4 style:(id)arg5 maximumLabelSize:(struct CGSize *)arg6 omitOffscreenLabels:(BOOL)arg7 ;
-(void)_offsetForChartRect:(struct CGRect )arg0 chartRange:(struct HKRange )arg1 zoomScaleOut:(*CGFloat)arg2 contentOffsetOut:(struct CGPoint *)arg3 ;
-(void)_renderTickMarksForModelRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 style:(id)arg4 renderView:(id)arg5 ;
-(void)addAxisAnnotation:(id)arg0 modelCoordinate:(id)arg1 ;
-(void)clearAnnotations;
-(void)clearCache;
-(void)drawBaselineForModelRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 renderView:(id)arg4 ;
-(void)drawGridlinesForModelRange:(id)arg0 chartRect:(struct CGRect )arg1 gridlineRanges:(id)arg2 zoomScale:(CGFloat)arg3 contentOffset:(struct CGPoint )arg4 renderView:(id)arg5 blendMode:(int)arg6 ;
-(void)drawLabelsWithModelRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 renderView:(id)arg4 maximumLabelSize:(struct CGSize *)arg5 omitOffscreenLabels:(BOOL)arg6 ;
-(void)enumerateTickCoordinatesInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 handler:(id)arg2 ;
-(void)offsetForValueRange:(id)arg0 chartRect:(struct CGRect )arg1 zoomScaleOut:(*CGFloat)arg2 contentOffsetOut:(struct CGPoint *)arg3 ;


@end


#endif