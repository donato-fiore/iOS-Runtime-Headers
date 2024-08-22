// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH2DSAGEGEOMETRYHELPER_H
#define TSCH2DSAGEGEOMETRYHELPER_H



#import "TSCHSageGeometryHelper.h"

@interface TSCH2DSageGeometryHelper : TSCHSageGeometryHelper {
    CGFloat _verticalAxisOverhang;
    CGFloat _horizontalAxisOverhang;
    CGFloat _rightAxisWidthChange;
    CGFloat _bottomAxisHeightChange;
    CGFloat _topAxisHeightChange;
    CGSize _bottomLeftChartTitleOverhang;
    CGSize _topRightChartTitleOverhang;
    CGSize _bottomLeftValueAxisTitleOverhang;
    CGSize _topRightValueAxisTitleOverhang;
    CGSize _bottomLeftCategoryAxisTitleOverhang;
    CGSize _topRightCategoryAxisTitleOverhang;
    CGSize _bottomLeftValueAxisY2TitleOverhang;
    CGSize _topRightValueAxisY2TitleOverhang;
    CGRect _chartBodyBounds;
    CGRect _explodedBounds;
    CGRect _chartTitleBounds;
    CGRect _valueAxisTitleBounds;
    CGRect _categoryAxisTitleBounds;
    CGRect _valueAxisY2TitleBounds;
    CGRect _topLegendBounds;
    CGRect _leftLegendBounds;
    CGRect _bottomLegendBounds;
    CGRect _rightLegendBounds;
    CGRect _topAxisLabelsBounds;
    CGRect _leftAxisLabelsBounds;
    CGRect _bottomAxisLabelsBounds;
    CGRect _rightAxisLabelsBounds;
    CGRect _topAxisBounds;
    CGRect _leftAxisBounds;
    CGRect _bottomAxisBounds;
    CGRect _rightAxisBounds;
    CGPoint _explodedBodyShift;
    CGPoint _outsideLabelsChartTitleShift;
    BOOL _chartLayoutValid;
    BOOL _chartExplodedSizeValid;
    BOOL _chartAxisSizeValid;
    BOOL _chartAxisLabelsSizeValid;
    BOOL _chartTitleSizeValid;
    BOOL _valueAxisTitleSizeValid;
    BOOL _categoryAxisTitleSizeValid;
    BOOL _valueAxisY2TitleSizeValid;
    BOOL _chartLegendSizeValid;
    BOOL _chartValueElementsGeometryValid;
}




+(struct CGRect )computeSageChartAreaBoundsForChartInfo:(id)arg0 geometryRect:(struct CGRect )arg1 returningContainingViewportSize:(*id)arg2 ;
-(BOOL)aspectRatioLocked;
-(BOOL)bottomAxisLabelsVisible;
-(BOOL)calculateChartExplodedSize;
-(BOOL)isArea;
-(BOOL)isLine;
-(BOOL)isScatter;
-(BOOL)isVertical;
-(BOOL)leftAxisLabelsVisible;
-(BOOL)p_labelsVisible:(id)arg0 ;
-(BOOL)rightAxisLabelsVisible;
-(BOOL)topAxisLabelsVisible;
-(CGFloat)_bottomAxisOuterWidth;
-(CGFloat)_horizontalAxisLabelsHeight;
-(CGFloat)_leftAxisOuterWidth;
-(CGFloat)_rightAxisOuterWidth;
-(CGFloat)_seriesSymbolWidth;
-(CGFloat)_topAxisOuterWidth;
-(CGFloat)_verticalAxisLabelsWidth:(BOOL)arg0 ;
-(CGFloat)chartTitlePadding;
-(CGFloat)distanceFromXAxisUsingParagraphStyle:(id)arg0 ;
-(CGFloat)distanceFromYAxisUsingParagraphStyle:(id)arg0 ;
-(CGFloat)fontHeight:(id)arg0 ;
-(CGFloat)p_widthFromTicksAndStrokeForAxis:(id)arg0 ;
-(CGFloat)seriesCategoryLabelsHorizontalGutter;
-(CGFloat)seriesCategoryLabelsVerticalGutter;
-(CGFloat)xAxisLabelHeight;
-(CGFloat)xAxisTitlePadding;
-(CGFloat)yAxisLabelHeight:(BOOL)arg0 ;
-(CGFloat)yAxisTitlePadding:(BOOL)arg0 ;
-(id)p_model;
-(struct CGRect )computeSageLayoutCBBForSpiceDoc:(BOOL)arg0 ;
-(struct CGSize )measureText:(id)arg0 withParagraphStyle:(id)arg1 ;
-(void)calculateCategoryAxisTitleSize;
-(void)calculateChartAxisLabelsSize;
-(void)calculateChartAxisSize;
-(void)calculateChartBodySize;
-(void)calculateChartTitleSize;
-(void)calculateValueAxisTitleSize;
-(void)calculateValueAxisY2TitleSize;


@end


#endif