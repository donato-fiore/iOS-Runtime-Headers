// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHOURLYACTIVITYSUMMARY_H
#define HKHOURLYACTIVITYSUMMARY_H

@class HKActivitySummary, NSDateComponents;



@interface HKHourlyActivitySummary : HKActivitySummary

@property (retain, nonatomic) NSDateComponents *hourlyDateComponents; // ivar: _hourlyDateComponents


-(BOOL)_useHourlyGoalComparison;
-(id)dateComponentsForCalendar:(id)arg0 ;


@end


#endif