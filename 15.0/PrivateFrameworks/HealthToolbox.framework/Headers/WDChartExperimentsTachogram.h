// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCHARTEXPERIMENTSTACHOGRAM_H
#define WDCHARTEXPERIMENTSTACHOGRAM_H

@class HKInteractiveChartViewController, HKValueRange;



@interface WDChartExperimentsTachogram : HKInteractiveChartViewController

@property (readonly, nonatomic) HKValueRange *computedAxisRange; // ivar: _computedAxisRange
@property (readonly, nonatomic) HKValueRange *requestedVisibleRange; // ivar: _requestedVisibleRange


-(id)initWithIrregularBeatData:(id)arg0 normalData:(id)arg1 visibleRange:(id)arg2 profile:(id)arg3 ;
-(id)tachogramSeriesWithData:(id)arg0 unit:(id)arg1 maximumY:(CGFloat)arg2 axis:(id)arg3 irregularBeatStyle:(BOOL)arg4 ;
-(struct CGSize )extentOfData:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif