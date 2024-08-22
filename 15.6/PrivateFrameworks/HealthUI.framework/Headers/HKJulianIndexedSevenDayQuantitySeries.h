// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKJULIANINDEXEDSEVENDAYQUANTITYSERIES_H
#define HKJULIANINDEXEDSEVENDAYQUANTITYSERIES_H

@class NSArray, UIColor, NSString;
@protocol HKAxisLabelDataSource;


#import "HKGraphSeries.h"

@interface HKJulianIndexedSevenDayQuantitySeries : HKGraphSeries <HKAxisLabelDataSource>

 {
    NSArray *_cachedAxisLabels;
}


@property (readonly, nonatomic) NSArray *axisLabelOverride; // ivar: _axisLabelOverride
@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat hollowLineRatio; // ivar: _hollowLineRatio
@property (readonly, nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (readonly) Class superclass;


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisSelectedCoordinate:(CGFloat)arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)_generateAxisLabels;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithColor:(id)arg0 lineWidth:(CGFloat)arg1 axisLabelOverride:(id)arg2 ;
-(id)initWithColor:(id)arg0 lineWidth:(CGFloat)arg1 hollowLineRatio:(CGFloat)arg2 axisLabelOverride:(id)arg3 ;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;
-(void)setYAxis:(id)arg0 ;


@end


#endif