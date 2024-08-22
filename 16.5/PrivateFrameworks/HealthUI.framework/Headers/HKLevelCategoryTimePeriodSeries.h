// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKLEVELCATEGORYTIMEPERIODSERIES_H
#define HKLEVELCATEGORYTIMEPERIODSERIES_H

@class UIColor, UIFont, NSLock, NSString;


#import "HKHorizontalTimePeriodSeries.h"

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries

@property (retain, nonatomic) UIColor *categoryLevelColor;
@property (retain, nonatomic) UIColor *categoryLevelColorStorage; // ivar: _categoryLevelColorStorage
@property (retain, nonatomic) UIFont *categoryLevelFont;
@property (retain, nonatomic) UIFont *categoryLevelFontStorage; // ivar: _categoryLevelFontStorage
@property (nonatomic) BOOL drawSampleSpans;
@property (nonatomic) BOOL drawSampleSpansStorage; // ivar: _drawSampleSpansStorage
@property (retain, nonatomic) UIColor *innerMarkColor;
@property (retain, nonatomic) UIColor *innerMarkColorStorage; // ivar: _innerMarkColorStorage
@property (nonatomic) CGFloat markerRadius;
@property (nonatomic) CGFloat markerRadiusStorage; // ivar: _markerRadiusStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (retain, nonatomic) UIColor *specialMarkColor;
@property (retain, nonatomic) UIColor *specialMarkColorStorage; // ivar: _specialMarkColorStorage
@property (retain, nonatomic) NSString *specialMarkLegendLabel;
@property (retain, nonatomic) NSString *specialMarkLegendLabelStorage; // ivar: _specialMarkLegendLabelStorage


-(BOOL)_interiorCategoryLabels;
-(CGFloat)offsetForEnumerationRect:(struct CGRect )arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)init;
-(id)marginsForYAxis:(id)arg0 xAxisRange:(id)arg1 zoomLevel:(NSInteger)arg2 chartRect:(struct CGRect )arg3 ;
-(void)_drawCategoryLabels:(struct CGContext *)arg0 axisRect:(struct CGRect )arg1 seriesRenderingDelegate:(id)arg2 ;
-(void)_drawMarkerWithContext:(struct CGContext *)arg0 style:(NSInteger)arg1 color:(struct CGColor *)arg2 innerColor:(struct CGColor *)arg3 specialColor:(struct CGColor *)arg4 location:(struct CGPoint )arg5 radius:(CGFloat)arg6 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif