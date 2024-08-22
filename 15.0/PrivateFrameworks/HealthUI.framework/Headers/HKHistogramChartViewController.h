// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHISTOGRAMCHARTVIEWCONTROLLER_H
#define HKHISTOGRAMCHARTVIEWCONTROLLER_H

@class NSString, UILabel, HKHealthStore;
@protocol HKGraphViewDelegate, HKLollipopDelegate, HKHistogramChartDataSourceDataFetchObserver;


#import "HKViewController.h"
#import "HKHistogramAnnotationViewDataSource.h"
#import "HKHistogramChartDataFormatter.h"
#import "HKHistogramChartDataSource.h"
#import "HKDisplayType.h"
#import "HKScalarGraphViewController.h"
#import "HKHistogramBarSeries.h"
#import "HKLollipopController.h"

@interface HKHistogramChartViewController : HKViewController <HKGraphViewDelegate, HKLollipopDelegate, HKHistogramChartDataSourceDataFetchObserver>



@property (retain, nonatomic) HKHistogramAnnotationViewDataSource *annotationViewDataSource; // ivar: _annotationViewDataSource
@property (retain, nonatomic) HKHistogramChartDataFormatter *dataFormatter; // ivar: _dataFormatter
@property (retain, nonatomic) HKHistogramChartDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (retain, nonatomic) HKScalarGraphViewController *graphViewController; // ivar: _graphViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKHistogramBarSeries *histogramSeries; // ivar: _histogramSeries
@property (retain, nonatomic) HKLollipopController *lollipopController; // ivar: _lollipopController
@property (nonatomic) CGFloat minimumGraphViewHeight; // ivar: _minimumGraphViewHeight
@property (readonly) Class superclass;


+(id)defaultVerticalAxis;
-(BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg0 ;
-(NSInteger)stackCountForGraphView:(id)arg0 ;
-(id)_displayDescriptionForDataSource:(id)arg0 ;
-(id)graphView:(id)arg0 graphSeriesForZoom:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)initWithHealthStore:(id)arg0 dataSource:(id)arg1 dataFormatter:(id)arg2 minimumGraphViewHeight:(CGFloat)arg3 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg0 ;
-(void)_pinView:(id)arg0 toParentView:(id)arg1 ;
-(void)didCompleteFetchForDataSource:(id)arg0 ;
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
-(void)updateAnnotationDataSource:(id)arg0 pointContexts:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif