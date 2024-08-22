// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEARTBEATSEQUENCECHARTVIEWCONTROLLER_H
#define HKHEARTBEATSEQUENCECHARTVIEWCONTROLLER_H

@class NSMutableArray, NSDate;


#import "HKScalarGraphViewController.h"
#import "HKAxis.h"

@interface HKHeartbeatSequenceChartViewController : HKScalarGraphViewController

@property (retain, nonatomic) HKAxis *commonVerticalAxis; // ivar: _commonVerticalAxis
@property (retain, nonatomic) NSMutableArray *graphSeries; // ivar: _graphSeries
@property (nonatomic) CGFloat initialXAxisOffset; // ivar: _initialXAxisOffset
@property (retain, nonatomic) NSMutableArray *sequenceDataSources; // ivar: _sequenceDataSources
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(NSInteger)stackCountForGraphView:(id)arg0 ;
-(id)_heartbeatSequenceSeriesForSource:(id)arg0 axis:(id)arg1 color:(id)arg2 lineWidth:(CGFloat)arg3 markerRadius:(CGFloat)arg4 dashStyle:(NSInteger)arg5 annotate:(BOOL)arg6 ;
-(id)_verticalNumericalAxis;
-(id)graphView:(id)arg0 graphSeriesForZoom:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)initWithMinimumHeight:(CGFloat)arg0 ;
-(id)initWithMinimumHeight:(CGFloat)arg0 startDate:(id)arg1 ;
-(void)_adjustGraphViewOptions;
-(void)_recomputeAxisRanges;
-(void)addSequenceData:(id)arg0 ;
-(void)addSequenceData:(id)arg0 color:(id)arg1 lineWidth:(CGFloat)arg2 markerRadius:(CGFloat)arg3 dashStyle:(NSInteger)arg4 annotate:(BOOL)arg5 ;
-(void)graphViewSizeChanged:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif