// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHORIZONTALSINGLELINESERIES_H
#define HKHORIZONTALSINGLELINESERIES_H

@class UIColor, NSString, UIImage;
@protocol HKAxisLabelDataSource;


#import "HKGraphSeries.h"

@interface HKHorizontalSingleLineSeries : HKGraphSeries <HKAxisLabelDataSource>



@property (retain, nonatomic) UIColor *baseColor; // ivar: _baseColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGFloat markRadius; // ivar: _markRadius
@property (nonatomic) CGFloat selectedLineWidth; // ivar: _selectedLineWidth
@property (retain, nonatomic) UIImage *selectedPointMarkerImage; // ivar: _selectedPointMarkerImage
@property (nonatomic) BOOL shouldConnectPoints; // ivar: _shouldConnectPoints
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topInsetPercentage; // ivar: _topInsetPercentage


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yCoordinateForLevel:(NSInteger)arg0 chartRect:(struct CGRect )arg1 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)init;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;
-(void)setYAxis:(id)arg0 ;


@end


#endif