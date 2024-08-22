// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHORIZONTALTIMEPERIODSERIES_H
#define HKHORIZONTALTIMEPERIODSERIES_H

@class NSArray, NSString, UIColor, UIImage, NSLock, NSDictionary;
@protocol HKAxisLabelDataSource;


#import "HKGraphSeries.h"

@interface HKHorizontalTimePeriodSeries : HKGraphSeries <HKAxisLabelDataSource>



@property (readonly, nonatomic) NSArray *cachedAxisLabelsStorage; // ivar: _cachedAxisLabelsStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *enumerationValueOrdering;
@property (retain, nonatomic) NSArray *enumerationValueOrderingStorage; // ivar: _enumerationValueOrderingStorage
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *fillColorStorage; // ivar: _fillColorStorage
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat lineWidthStorage; // ivar: _lineWidthStorage
@property (retain, nonatomic) UIImage *selectedPointMarkerImage;
@property (retain, nonatomic) UIImage *selectedPointMarkerImageStorage; // ivar: _selectedPointMarkerImageStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *valueLabels;
@property (retain, nonatomic) NSDictionary *valueLabelsStorage; // ivar: _valueLabelsStorage


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
-(id)cacheKeysForModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)cachedAxisLabels;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)init;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;
-(struct CGRect )enumerationRectForLevel:(NSInteger)arg0 axisRect:(struct CGRect )arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif