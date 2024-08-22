// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKLINESERIES_H
#define HKLINESERIES_H

@class NSArray, NSNumber;


#import "HKGraphSeries.h"
#import "HKLineSeriesPresentationStyle.h"
#import "HKLineSeriesPointMarkerStyle.h"

@interface HKLineSeries : HKGraphSeries

@property (nonatomic) BOOL extendFirstValue; // ivar: _extendFirstValue
@property (nonatomic) BOOL extendLastValue; // ivar: _extendLastValue
@property (nonatomic) BOOL flatLastValue; // ivar: _flatLastValue
@property (retain, nonatomic) NSArray *highlightedPresentationStyles; // ivar: _highlightedPresentationStyles
@property (retain, nonatomic) HKLineSeriesPresentationStyle *inactivePresentationStyle; // ivar: _inactivePresentationStyle
@property (retain, nonatomic) NSNumber *maximumConnectionDistance; // ivar: _maximumConnectionDistance
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *selectedPointMarkerStyle; // ivar: _selectedPointMarkerStyle
@property (retain, nonatomic) NSArray *selectedPresentationStyles; // ivar: _selectedPresentationStyles
@property (retain, nonatomic) NSArray *unhighlightedPresentationStyles; // ivar: _unhighlightedPresentationStyles


-(BOOL)blockCoordinate:(id)arg0 greaterThan:(id)arg1 ;
-(BOOL)blockCoordinate:(id)arg0 lessThan:(id)arg1 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect )arg0 blockCoordinate:(id)arg1 ;
-(BOOL)supportsMultiTouchSelection;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)xAxisDistanceFromPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(CGFloat)yAxisDifferenceToPoint:(struct CGPoint )arg0 blockCoordinate:(id)arg1 chartRect:(struct CGRect )arg2 ;
-(id)_currentPresentationStyles;
-(id)coordinatesForBlock:(id)arg0 blockPath:(struct ? )arg1 xAxis:(id)arg2 yAxis:(id)arg3 ;
-(id)init;
-(void)_enumerateCoordinateList:(id)arg0 withTransform:(struct CGAffineTransform )arg1 presentationStyle:(id)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect )arg4 block:(id)arg5 ;
-(void)_enumerateCoordinateList:(id)arg0 withTransform:(struct CGAffineTransform )arg1 weightedAverageWidth:(CGFloat)arg2 block:(id)arg3 ;
-(void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg0 withTransform:(struct CGAffineTransform )arg1 presentationStyle:(id)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect )arg4 block:(id)arg5 ;
// -(void)_enumeratePathsFromBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 transform:(struct CGAffineTransform )arg3 presentationStyle:(id)arg4 seriesRenderingDelegate:(id)arg5 forceGapBetweenUntransformedPoints:(id)arg6 handler:(unk)arg7  ;
// -(void)_enumerateSawToothPathsFromBlockCoordinates:(id)arg0 transform:(struct CGAffineTransform )arg1 zoomLevelConfiguration:(id)arg2 presentationStyle:(id)arg3 axisRect:(struct CGRect )arg4 seriesRenderingDelegate:(id)arg5 forceGapBetweenUntransformedPoints:(id)arg6 handler:(unk)arg7  ;
-(void)_enumerateSinePathsFromBlockCoordinates:(id)arg0 transfrom:(struct CGAffineTransform )arg1 zoomLevelConfiguration:(id)arg2 presentationStyle:(id)arg3 axisRect:(struct CGRect )arg4 handler:(id)arg5 ;
-(void)_renderLegendPointLabelInContext:(struct CGContext *)arg0 point:(struct CGPoint )arg1 untransformedPoint:(struct CGPoint )arg2 presentationStyle:(id)arg3 leftOfPoint:(BOOL)arg4 ;
-(void)_renderLineEndCapsInContext:(struct CGContext *)arg0 endCaps:(id)arg1 endCapImage:(id)arg2 ;
-(void)_renderPointLabelInContext:(struct CGContext *)arg0 renderingData:(struct ? )arg1 numberFormatter:(id)arg2 labelAttributes:(id)arg3 seriesRenderingDelegate:(id)arg4 ;
-(void)_renderPointLabelsInContext:(struct CGContext *)arg0 blockCoordinates:(id)arg1 axisRect:(struct CGRect )arg2 pointTransform:(struct CGAffineTransform )arg3 presentationStyle:(id)arg4 zoomLevelConfiguration:(id)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)_renderPointLegendLabelWithText:(id)arg0 drawRect:(struct CGRect )arg1 labelAttributes:(id)arg2 ;
-(void)_renderPointMarkersInContext:(struct CGContext *)arg0 blockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform )arg2 pointMarkerImage:(id)arg3 ;
-(void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg0 secondaryRenderContext:(id)arg1 pointTransform:(struct CGAffineTransform )arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect )arg4 ;
-(void)addAxisAnnotationForValue:(CGFloat)arg0 axisAnnotationDelegate:(id)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 forceGapBetweenUntransformedPoints:(id)arg7 ;


@end


#endif