// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHORIZONTALTIMEPERIODSERIES_H
#define HKHORIZONTALTIMEPERIODSERIES_H

@class NSArray, NSString, UIColor, UIImage, NSDictionary;
@protocol HKAxisLabelDataSource;


#import "HKGraphSeries.h"

@interface HKHorizontalTimePeriodSeries : HKGraphSeries <HKAxisLabelDataSource>

 {
    NSArray *_cachedAxisLabels;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *enumerationValueOrdering; // ivar: _enumerationValueOrdering
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (retain, nonatomic) UIImage *selectedPointMarkerImage; // ivar: _selectedPointMarkerImage
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *valueLabels; // ivar: _valueLabels


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)offsetForCoordinate:(id)arg0 axisRect:(struct CGRect )arg1 ;
-(CGFloat)offsetForEnumerationRect:(struct CGRect )arg0 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisSelectedCoordinate:(CGFloat)arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(NSInteger)_enumeratedLevelForCoordinate:(id)arg0 ;
-(id)_generateAxisLabels;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;
-(struct CGRect )enumerationRectForLevel:(NSInteger)arg0 axisRect:(struct CGRect )arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 ;
-(void)setYAxis:(id)arg0 ;


@end


#endif