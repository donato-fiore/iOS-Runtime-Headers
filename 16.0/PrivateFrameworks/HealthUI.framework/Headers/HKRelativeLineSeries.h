// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKRELATIVELINESERIES_H
#define HKRELATIVELINESERIES_H

@class UIColor;


#import "HKLineSeries.h"

@interface HKRelativeLineSeries : HKLineSeries {
    NSInteger _chartSizeClass;
}


@property (readonly, copy, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) CGFloat indeterminateLozengeHollowLineRatio; // ivar: _indeterminateLozengeHollowLineRatio
@property (readonly, nonatomic) CGFloat indeterminateLozengeLineWidth; // ivar: _indeterminateLozengeLineWidth
@property (readonly, copy, nonatomic) UIColor *unavailableColor; // ivar: _unavailableColor


-(BOOL)_isUserInfoIndeterminateRelativeValue:(id)arg0 ;
-(BOOL)_shouldForceGapBetweenUserInfo:(id)arg0 andUserInfo:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)_indeterminateLozengeValueForUserInfo:(id)arg0 ;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)_colorForUserInfo:(id)arg0 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)initFromLineSeries:(id)arg0 color:(id)arg1 unavailableColor:(id)arg2 indeterminateLozengeLineWidth:(CGFloat)arg3 chartSizeClass:(NSInteger)arg4 ;
-(void)_drawIndeterminateLozengeForCoordinate:(id)arg0 context:(struct CGContext *)arg1 seriesRenderingDelegate:(id)arg2 ;
-(void)_drawIndeterminateLozengesForBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 renderContext:(struct CGContext *)arg2 seriesRenderingDelegate:(id)arg3 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif