// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGRAPHVIEWRENDERER_H
#define HKGRAPHVIEWRENDERER_H

@class NSArray, UIColor, NSMutableArray, UIView<HKGraphRenderer>;
@protocol HKSeriesRenderingDelegate;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"
#import "HKGraphViewSelectionStyle.h"
#import "HKGraphViewRendererSeriesConfiguration.h"
#import "HKGraphViewRendererVirtualMarginConfiguration.h"
#import "HKAxis.h"

@interface HKGraphViewRenderer : NSObject <HKSeriesRenderingDelegate>



@property (readonly, nonatomic) HKValueRange *actualVisibleRange; // ivar: _actualVisibleRange
@property (readonly, nonatomic) CGFloat bottomBaselineY; // ivar: _bottomBaselineY
@property (readonly, nonatomic) BOOL chartMeasuringStartupTime; // ivar: _chartMeasuringStartupTime
@property (readonly, nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (readonly, nonatomic) CGFloat currentXAxisHeight; // ivar: _currentXAxisHeight
@property (readonly, nonatomic) BOOL disableXAxis; // ivar: _disableXAxis
@property (readonly, nonatomic) BOOL drawingDuringAutoscale; // ivar: _drawingDuringAutoscale
@property (readonly, nonatomic) BOOL drawingDuringScrolling; // ivar: _drawingDuringScrolling
@property (readonly, nonatomic) BOOL drawingToTile; // ivar: _drawingToTile
@property (readonly, nonatomic) HKValueRange *effectiveVisibleRangeActive; // ivar: _effectiveVisibleRangeActive
@property (readonly, nonatomic) HKValueRange *effectiveVisibleRangeCadence; // ivar: _effectiveVisibleRangeCadence
@property (readonly, nonatomic) CGRect fullChartRect; // ivar: _fullChartRect
@property (readonly, nonatomic) NSArray *gridlineRanges; // ivar: _gridlineRanges
@property (readonly, nonatomic) CGRect insetChartRect; // ivar: _insetChartRect
@property (readonly, nonatomic) CGRect insetDataArea; // ivar: _insetDataArea
@property (readonly, nonatomic) UIColor *outlineColor; // ivar: _outlineColor
@property (readonly, nonatomic) NSMutableArray *postOverlayData; // ivar: _postOverlayData
@property (readonly, nonatomic) NSMutableArray *postSelectionPoints; // ivar: _postSelectionPoints
@property (readonly, nonatomic) NSInteger postUpdates; // ivar: _postUpdates
@property (readonly, nonatomic) CGFloat postXAxisHeight; // ivar: _postXAxisHeight
@property (readonly, nonatomic) UIView<HKGraphRenderer> *renderingView; // ivar: _renderingView
@property (readonly, nonatomic) CGFloat rightHandInactiveArea; // ivar: _rightHandInactiveArea
@property (readonly, nonatomic) CGRect scrollingAreaRect; // ivar: _scrollingAreaRect
@property (readonly, nonatomic) UIColor *selectionLineColor; // ivar: _selectionLineColor
@property (readonly, nonatomic) HKGraphViewSelectionStyle *selectionLineStyle; // ivar: _selectionLineStyle
@property (readonly, nonatomic) HKGraphViewRendererSeriesConfiguration *seriesConfiguration; // ivar: _seriesConfiguration
@property (readonly, nonatomic) UIColor *tileBackgroundColor; // ivar: _tileBackgroundColor
@property (readonly, nonatomic) NSInteger tileColumn; // ivar: _tileColumn
@property (readonly, nonatomic) CGFloat topBaselineY; // ivar: _topBaselineY
@property (readonly, nonatomic) HKGraphViewRendererVirtualMarginConfiguration *virtualMargins; // ivar: _virtualMargins
@property (readonly, nonatomic) HKAxis *xAxis; // ivar: _xAxis
@property (readonly, nonatomic) CGAffineTransform xAxisCoordinateTransform; // ivar: _xAxisCoordinateTransform
@property (readonly, nonatomic) NSInteger xAxisDateZoom; // ivar: _xAxisDateZoom
@property (readonly, nonatomic) CGFloat zoomScale; // ivar: _zoomScale


-(BOOL)measuringStartupTime;
-(BOOL)seriesDrawingDuringAutoscale;
-(BOOL)seriesDrawingDuringScrolling;
-(BOOL)seriesDrawingDuringTiling;
-(CGFloat)_renderXAxisLabelsInContext:(struct CGContext *)arg0 ;
-(id)axisAnnotationDelegateForSeries:(id)arg0 ;
-(id)initWithRendererSeries:(id)arg0 renderingView:(id)arg1 fullChartRect:(struct CGRect )arg2 insetChartRect:(struct CGRect )arg3 insetDataArea:(struct CGRect )arg4 rightHandInactiveArea:(CGFloat)arg5 zoomScale:(CGFloat)arg6 contentOffset:(struct CGPoint )arg7 xAxisDateZoom:(NSInteger)arg8 drawingToTile:(BOOL)arg9 tileColumn:(NSInteger)arg10 drawingDuringScrolling:(BOOL)arg11 drawingDuringAutoscale:(BOOL)arg12 xAxis:(id)arg13 xAxisCoordinateTransform:(struct CGAffineTransform )arg14 virtualMargins:(id)arg15 outlineColor:(id)arg16 tileBackgroundColor:(id)arg17 topBaselineY:(CGFloat)arg18 bottomBaselineY:(CGFloat)arg19 selectionLineColor:(id)arg20 selectionLineStyle:(id)arg21 disableXAxis:(BOOL)arg22 currentXAxisHeight:(CGFloat)arg23 gridlineRanges:(id)arg24 effectiveVisibleRangeCadence:(id)arg25 effectiveVisibleRangeActive:(id)arg26 actualVisibleRange:(id)arg27 scrollingAreaRect:(struct CGRect )arg28 chartMeasuringStartupTime:(BOOL)arg29 ;
-(struct CGPoint )seriesContentOffset;
-(struct CGRect )screenRectForSeries:(id)arg0 ;
-(struct UIEdgeInsets )virtualMarginInsets;
-(void)_clearBackgroundInContext:(struct CGContext *)arg0 ;
-(void)_renderBaselineWithContext:(struct CGContext *)arg0 chartRect:(struct CGRect )arg1 ;
-(void)_renderDataAreaDividersWithContext:(struct CGContext *)arg0 ;
-(void)_renderSelectionLineWithContext:(struct CGContext *)arg0 ;
-(void)_renderSeriesWithContext:(struct CGContext *)arg0 secondaryRenderContext:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(void)_renderVirtualMarginGridLines:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)_renderVirtualMarginInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 marginStyle:(NSInteger)arg2 ;
-(void)_renderVirtualMarginsWithContext:(struct CGContext *)arg0 ;
-(void)_renderXAxisGridlinesInContext:(struct CGContext *)arg0 withBlendMode:(int)arg1 ;
-(void)_renderXAxisLabelAndGridsNeedsNewRendererInContext:(struct CGContext *)arg0 ;
-(void)_renderYAxisGridlinesInContext:(struct CGContext *)arg0 renderingView:(id)arg1 chartRect:(struct CGRect )arg2 withBlendMode:(int)arg3 zoomScale:(CGFloat)arg4 contentOffset:(struct CGPoint )arg5 ;
-(void)renderContentToContext:(struct CGContext *)arg0 ;


@end


#endif