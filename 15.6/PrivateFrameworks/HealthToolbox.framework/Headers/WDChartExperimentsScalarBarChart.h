// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCHARTEXPERIMENTSSCALARBARCHART_H
#define WDCHARTEXPERIMENTSSCALARBARCHART_H

@class HKInteractiveChartViewController, HKValueRange;



@interface WDChartExperimentsScalarBarChart : HKInteractiveChartViewController

@property (readonly, nonatomic) HKValueRange *requestedAxisRange; // ivar: _requestedAxisRange
@property (readonly, nonatomic) HKValueRange *requestedVisibleRange; // ivar: _requestedVisibleRange


-(id)_buildSeriesWithColor:(id)arg0 minimumYAxisRange:(id)arg1 ;
-(id)initWithTitle:(id)arg0 unitForYAxis:(id)arg1 data:(id)arg2 axisRange:(id)arg3 visibleRange:(id)arg4 minimumYAxisRange:(id)arg5 color:(id)arg6 profile:(id)arg7 ;
-(void)viewDidLoad;


@end


#endif