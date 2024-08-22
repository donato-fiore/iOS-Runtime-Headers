// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHORIZONTALSINGLELINESERIES_H
#define HKHORIZONTALSINGLELINESERIES_H

@class UIColor, NSString, UIImage, NSLock;
@protocol HKAxisLabelDataSource;


#import "HKGraphSeries.h"

@interface HKHorizontalSingleLineSeries : HKGraphSeries <HKAxisLabelDataSource>



@property (retain, nonatomic) UIColor *baseColor;
@property (retain, nonatomic) UIColor *baseColorStorage; // ivar: _baseColorStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat lineWidthStorage; // ivar: _lineWidthStorage
@property (nonatomic) CGFloat markRadius;
@property (nonatomic) CGFloat markRadiusStorage; // ivar: _markRadiusStorage
@property (nonatomic) CGFloat selectedLineWidth;
@property (nonatomic) CGFloat selectedLineWidthStorage; // ivar: _selectedLineWidthStorage
@property (retain, nonatomic) UIImage *selectedPointMarkerImage;
@property (retain, nonatomic) UIImage *selectedPointMarkerImageStorage; // ivar: _selectedPointMarkerImageStorage
@property (readonly, nonatomic) NSLock *seriesMutableStateLock; // ivar: _seriesMutableStateLock
@property (nonatomic) BOOL shouldConnectPoints;
@property (nonatomic) BOOL shouldConnectPointsStorage; // ivar: _shouldConnectPointsStorage
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topInsetPercentage;
@property (nonatomic) CGFloat topInsetPercentageStorage; // ivar: _topInsetPercentageStorage


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yCoordinateForLevel:(NSInteger)arg0 chartRect:(struct CGRect )arg1 ;
-(id)cacheKeysForModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)init;
-(struct CGPoint )renderPositionForLabelLocation:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif