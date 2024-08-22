// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSCALARGRAPHSERIESDELEGATE_H
#define HKSCALARGRAPHSERIESDELEGATE_H

@class NSString, HKGraphSeries;
@protocol HKGraphViewDelegate;

#import <Foundation/Foundation.h>


@interface HKScalarGraphSeriesDelegate : NSObject <HKGraphViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKGraphSeries *graphSeries; // ivar: _graphSeries
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg0 ;
-(NSInteger)stackCountForGraphView:(id)arg0 ;
-(id)graphView:(id)arg0 graphSeriesForZoom:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)initWithGraphSeries:(id)arg0 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg0 ;
-(void)graphView:(id)arg0 didFinishUserScrollingToValueRange:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateFromDateZoom:(NSInteger)arg1 toDateZoom:(NSInteger)arg2 newVisibleRange:(id)arg3 ;
-(void)graphView:(id)arg0 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect )arg1 ;
-(void)graphView:(id)arg0 didUpdateSelectedPoint:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateSeries:(id)arg1 newDataArrived:(BOOL)arg2 changeContext:(NSInteger)arg3 ;
-(void)graphView:(id)arg0 didUpdateVisibleValueRange:(id)arg1 changeContext:(NSInteger)arg2 ;
-(void)graphView:(id)arg0 didUpdateYAxisWidth:(CGFloat)arg1 toWidth:(CGFloat)arg2 ;
-(void)graphViewDidBeginSelection:(id)arg0 ;
-(void)graphViewDidEndSelection:(id)arg0 ;
-(void)graphViewDidTapYAxis:(id)arg0 ;
-(void)graphViewExternalSelectionEnd:(id)arg0 ;
-(void)graphViewSizeChanged:(id)arg0 ;


@end


#endif