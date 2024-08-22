// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATECACHE_H
#define HKDATECACHE_H

@class NSDate, NSHashTable, NSSet, NSCalendar;

#import <Foundation/Foundation.h>


@interface HKDateCache : NSObject {
    NSDate *_startOfYesterdayMidnight;
    NSDate *_startOfDayMidnight;
    NSDate *_endOfDayMidnight;
    NSDate *_oneMinuteBeforeEndOfDayMidnight;
    NSDate *_oneSecondBeforeEndOfDayMidnight;
    NSDate *_startOfTomorrowMidnight;
    NSDate *_endOfTomorrowMidnight;
    NSDate *_startOfRollingWeekMidnight;
    NSDate *_endOfRollingWeekMidnight;
    NSDate *_startOfRollingMonthMidnight;
    NSDate *_endOfRollingMonthMidnight;
    NSDate *_startOfRollingYear;
    NSDate *_endOfRollingYear;
    NSDate *_currentDate;
    NSHashTable *_observers;
    NSSet *_weekendDays;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSDate *endOfDayMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingMonthMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingWeekMidnight;
@property (readonly, nonatomic) NSDate *endOfRollingYearMidnight;
@property (readonly, nonatomic) NSDate *endOfTomorrowMidnight;
@property (readonly, nonatomic) NSDate *endOfYesterdayMidnight; // ivar: _endOfYesterdayMidnight
@property (readonly, nonatomic) NSDate *oneMinuteBeforeEndOfDayMidnight;
@property (readonly, nonatomic) NSDate *oneSecondBeforeEndOfDayMidnight;
@property (readonly, nonatomic) NSDate *startOfDayMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingMonthMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingWeekMidnight;
@property (readonly, nonatomic) NSDate *startOfRollingYearMidnight;
@property (readonly, nonatomic) NSDate *startOfTomorrowMidnight;
@property (readonly, nonatomic) NSDate *startOfYesterdayMidnight;


-(BOOL)isDateInThisCalendarMonth:(id)arg0 ;
-(BOOL)isDateInThisCalendarYear:(id)arg0 ;
-(BOOL)isDateInToday:(id)arg0 ;
-(BOOL)isDateInTomorrow:(id)arg0 ;
-(BOOL)isDateInYesterday:(id)arg0 ;
-(BOOL)isDateWithinLastRollingMonth:(id)arg0 ;
-(BOOL)isDateWithinLastRollingYear:(id)arg0 ;
-(BOOL)isDayOfWeekNumberOnWeekend:(id)arg0 ;
-(id)_currentDate;
-(id)endOfRollingDay:(id)arg0 ;
-(id)endOfRollingMonth:(id)arg0 ;
-(id)endOfRollingWeek:(id)arg0 ;
-(id)endOfRollingYear:(id)arg0 ;
-(id)init;
-(id)initWithCalendar:(id)arg0 ;
-(id)startOfRollingDay:(id)arg0 ;
-(id)startOfRollingMonth:(id)arg0 ;
-(id)startOfRollingWeek:(id)arg0 ;
-(id)startOfRollingYear:(id)arg0 ;
-(id)weekendDays;
-(void)_flushCacheAndNotifyObservers:(id)arg0 ;
-(void)_notifyObserversDidUpdateOnNotification:(id)arg0 ;
-(void)_setCurrentDate:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)flushCache;
-(void)registerObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif