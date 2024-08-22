// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKLEVELCATEGORYTIMEPERIODSERIES_H
#define HKLEVELCATEGORYTIMEPERIODSERIES_H

@class UIColor, UIFont, NSString;


#import "HKHorizontalTimePeriodSeries.h"

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries

@property (retain, nonatomic) UIColor *categoryLevelColor; // ivar: _categoryLevelColor
@property (retain, nonatomic) UIFont *categoryLevelFont; // ivar: _categoryLevelFont
@property (nonatomic) BOOL drawSampleSpans; // ivar: _drawSampleSpans
@property (retain, nonatomic) UIColor *innerMarkColor; // ivar: _innerMarkColor
@property (nonatomic) CGFloat markerRadius; // ivar: _markerRadius
@property (retain, nonatomic) UIColor *specialMarkColor; // ivar: _specialMarkColor
@property (retain, nonatomic) NSString *specialMarkLegendLabel; // ivar: _specialMarkLegendLabel


-(BOOL)_interiorCategoryLabels;
-(CGFloat)offsetForEnumerationRect:(struct CGRect )arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)init;
-(id)marginsForYAxis:(id)arg0 chartRect:(struct CGRect )arg1 ;
-(void)_drawCategoryLabels:(struct CGContext *)arg0 axisRect:(struct CGRect )arg1 ;
-(void)_drawMarkerWithContext:(struct CGContext *)arg0 style:(NSInteger)arg1 color:(struct CGColor *)arg2 innerColor:(struct CGColor *)arg3 specialColor:(struct CGColor *)arg4 location:(struct CGPoint )arg5 radius:(CGFloat)arg6 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;


@end


#endif