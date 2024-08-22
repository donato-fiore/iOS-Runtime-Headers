// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGRAPHVIEWCONTROLLER_H
#define HKGRAPHVIEWCONTROLLER_H

@class NSString;
@protocol HKGraphViewDelegate, HKGraphViewControllerDelegate;


#import "HKViewController.h"
#import "HKGraphView.h"

@interface HKGraphViewController : HKViewController <HKGraphViewDelegate>



@property (readonly, nonatomic) NSInteger dateZoom; // ivar: _dateZoom
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKGraphViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKGraphView *graphView; // ivar: _graphView
@property (weak, nonatomic) NSObject<HKGraphViewDelegate> *graphViewDelegateProxy; // ivar: _graphViewDelegateProxy
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg0 ;
-(NSInteger)stackCountForGraphView:(id)arg0 ;
-(id)graphView:(id)arg0 graphSeriesForZoom:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)initWithGraphView:(id)arg0 dateZoom:(NSInteger)arg1 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg0 ;
-(void)graphView:(id)arg0 didFinishUserScrollingToValueRange:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateFromDateZoom:(NSInteger)arg1 toDateZoom:(NSInteger)arg2 newVisibleRange:(id)arg3 ;
-(void)graphView:(id)arg0 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect )arg1 ;
-(void)graphView:(id)arg0 didUpdateSelectedPoint:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateSeries:(id)arg1 newDataArrived:(BOOL)arg2 changeContext:(NSInteger)arg3 ;
-(void)graphView:(id)arg0 didUpdateVisibleValueRange:(id)arg1 changeContext:(NSInteger)arg2 ;
-(void)graphView:(id)arg0 didUpdateYAxisWidth:(CGFloat)arg1 toWidth:(CGFloat)arg2 ;
-(void)graphView:(id)arg0 startupTime:(NSInteger)arg1 ;
-(void)graphViewDidBeginSelection:(id)arg0 ;
-(void)graphViewDidEndSelection:(id)arg0 ;
-(void)graphViewDidTapYAxis:(id)arg0 ;
-(void)graphViewExternalSelectionEnd:(id)arg0 ;
-(void)graphViewSizeChanged:(id)arg0 ;
-(void)setDetailView:(id)arg0 ;


@end


#endif