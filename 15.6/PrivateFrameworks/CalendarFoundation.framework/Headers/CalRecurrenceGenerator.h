// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALRECURRENCEGENERATOR_H
#define CALRECURRENCEGENERATOR_H

@class NSCalendar, NSArray, NSDate, NSTimeZone;

#import <Foundation/Foundation.h>


@interface CalRecurrenceGenerator : NSObject {
    NSCalendar *_calendar;
}


@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (copy, nonatomic) NSArray *daysOfTheMonth; // ivar: _daysOfTheMonth
@property (copy, nonatomic) NSArray *daysOfTheWeek; // ivar: _daysOfTheWeek
@property (copy, nonatomic) NSArray *daysOfTheYear; // ivar: _daysOfTheYear
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDate *eventEndDate; // ivar: _eventEndDate
@property (copy, nonatomic) NSDate *eventStartDate; // ivar: _eventStartDate
@property (copy, nonatomic) NSTimeZone *eventTimeZone; // ivar: _eventTimeZone
@property (nonatomic) int frequency; // ivar: _frequency
@property (nonatomic) int interval; // ivar: _interval
@property (copy, nonatomic) NSArray *monthsOfTheYear; // ivar: _monthsOfTheYear
@property (copy, nonatomic) NSArray *setPositions; // ivar: _setPositions
@property (nonatomic) BOOL shouldPinMonthDays; // ivar: _shouldPinMonthDays
@property (nonatomic) NSUInteger weekStart; // ivar: _weekStart
@property (copy, nonatomic) NSArray *weeksOfTheYear; // ivar: _weeksOfTheYear


-(BOOL)_isSimpleYearlyRecurrence;
-(BOOL)_validateCalDate:(struct ? )arg0 pinned:(BOOL)arg1 ;
-(CGFloat)_convertAbsoluteTime:(CGFloat)arg0 fromTimeZone:(id)arg1 toTimeZone:(id)arg2 ;
-(CGFloat)duration;
-(id)_copyDailyOccurrencesWithInitialDate:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 count:(NSUInteger)arg3 ;
-(id)_copyMonthlyOccurrencesWithInitialDate:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 count:(NSUInteger)arg3 ;
-(id)_copyWeeklyOccurrencesWithInitialDate:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 count:(NSUInteger)arg3 ;
-(id)_copyYearlyOccurrencesWithInitialDate:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 count:(NSUInteger)arg3 ;
-(id)computeRecurrenceEndDate:(NSUInteger)arg0 ;
-(id)copyOccurrenceDatesBetweenStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 limit:(NSInteger)arg3 ;
-(id)copyOccurrenceDatesWithInitialDate:(id)arg0 allDay:(BOOL)arg1 rangeStart:(id)arg2 rangeEnd:(id)arg3 timeZone:(id)arg4 limit:(NSInteger)arg5 ;
-(id)init;


@end


#endif