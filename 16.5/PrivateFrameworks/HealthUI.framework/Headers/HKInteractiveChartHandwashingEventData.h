// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTHANDWASHINGEVENTDATA_H
#define HKINTERACTIVECHARTHANDWASHINGEVENTDATA_H



#import "HKInteractiveChartTimePeriodData.h"

@interface HKInteractiveChartHandwashingEventData : HKInteractiveChartTimePeriodData

@property (nonatomic) BOOL meetsGoal; // ivar: _meetsGoal


-(id)initWithTimePeriod:(CGFloat)arg0 meetsGoal:(BOOL)arg1 ;


@end


#endif