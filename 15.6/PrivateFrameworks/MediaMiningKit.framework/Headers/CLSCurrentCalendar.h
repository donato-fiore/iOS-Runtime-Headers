// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCURRENTCALENDAR_H
#define CLSCURRENTCALENDAR_H



#import "CLSAutoupdatingCurrentCalendar.h"

@interface CLSCurrentCalendar : CLSAutoupdatingCurrentCalendar



+(BOOL)closestWeekendLocalStartDate:(*id)arg0 interval:(*CGFloat)arg1 afterDate:(id)arg2 ;
+(BOOL)dateIntervalIntersectsWeekend:(id)arg0 ;
+(BOOL)isWeekendDate:(id)arg0 ;
+(BOOL)nextWeekendLocalStartDate:(*id)arg0 interval:(*CGFloat)arg1 options:(NSUInteger)arg2 afterDate:(id)arg3 ;
+(BOOL)rangeOfWeekendLocalStartDate:(*id)arg0 interval:(*CGFloat)arg1 containingDate:(id)arg2 ;
+(id)calendar;
+(void)initialize;
+(void)update;


@end


#endif