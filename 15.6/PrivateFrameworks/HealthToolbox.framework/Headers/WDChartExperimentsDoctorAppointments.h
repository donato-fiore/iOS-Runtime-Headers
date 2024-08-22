// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCHARTEXPERIMENTSDOCTORAPPOINTMENTS_H
#define WDCHARTEXPERIMENTSDOCTORAPPOINTMENTS_H

@class HKInteractiveChartViewController, HKHorizontalSingleLineSeries;



@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController

@property (readonly, nonatomic) HKHorizontalSingleLineSeries *appointmentSeries; // ivar: _appointmentSeries


-(id)_parseSpecifications:(id)arg0 ;
-(id)initWithAppointments:(id)arg0 profile:(id)arg1 color:(id)arg2 ;
-(id)initWithSpecifications:(id)arg0 profile:(id)arg1 color:(id)arg2 ;
-(void)setColor:(id)arg0 ;


@end


#endif