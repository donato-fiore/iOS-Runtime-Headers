// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKRECURRENCEGENERATOR_H
#define EKRECURRENCEGENERATOR_H

@class CalRecurrenceGenerator;



@interface EKRecurrenceGenerator : CalRecurrenceGenerator



+(int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(NSInteger)arg0 ;
-(BOOL)isOccurrenceDate:(id)arg0 validForEvent:(id)arg1 ;
-(BOOL)occurrenceDate:(id)arg0 matchesRecurrenceRule:(id)arg1 forEvent:(id)arg2 includeDetachedEventsInSeries:(BOOL)arg3 ;
-(id)_copyOccurrenceDatesWithEKEvent:(id)arg0 recurrenceRule:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 exceptionDates:(id)arg5 limit:(NSInteger)arg6 adjustDatesForAllDayEvents:(BOOL)arg7 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg0 recurrenceRule:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 exceptionDates:(id)arg5 limit:(NSInteger)arg6 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg0 recurrenceRule:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(NSInteger)arg5 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg0 recurrenceRule:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 limit:(NSInteger)arg5 adjustDatesForAllDayEvents:(BOOL)arg6 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 limit:(NSInteger)arg4 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg0 forCalendarItem:(id)arg1 exceptionDates:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg0 forCalendarItem:(id)arg1 initialDate:(id)arg2 afterDate:(id)arg3 ;
-(void)_prepareForEKRecurrence:(id)arg0 forCalendarItem:(id)arg1 ;
-(void)_setupForEKEvent:(id)arg0 adjustDatesForAllDayEvents:(BOOL)arg1 ;


@end


#endif