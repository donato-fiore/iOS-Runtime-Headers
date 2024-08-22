// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSCOPYONWRITECALENDARWRAPPER_H
#define _NSCOPYONWRITECALENDARWRAPPER_H



#import "NSCalendar.h"
#import "_NSRefcountedPthreadMutex.h"

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {
    NSCalendar *cal;
    _NSRefcountedPthreadMutex *_lock;
    BOOL needsToCopy;
}




+(id)currentCalendar;
-(BOOL)isDateInWeekend:(id)arg0 ;
-(BOOL)nextWeekendStartDate:(*id)arg0 interval:(*CGFloat)arg1 options:(NSUInteger)arg2 afterDate:(id)arg3 ;
-(BOOL)rangeOfUnit:(NSUInteger)arg0 startDate:(*id)arg1 interval:(*CGFloat)arg2 forDate:(id)arg3 ;
-(NSUInteger)firstWeekday;
-(NSUInteger)hash;
-(NSUInteger)minimumDaysInFirstWeek;
-(NSUInteger)ordinalityOfUnit:(NSUInteger)arg0 inUnit:(NSUInteger)arg1 forDate:(id)arg2 ;
-(id)calendarIdentifier;
-(id)components:(NSUInteger)arg0 fromDate:(id)arg1 ;
-(id)components:(NSUInteger)arg0 fromDate:(id)arg1 toDate:(id)arg2 options:(NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateByAddingComponents:(id)arg0 toDate:(id)arg1 options:(NSUInteger)arg2 ;
-(id)dateFromComponents:(id)arg0 ;
-(id)gregorianStartDate;
-(id)locale;
-(id)timeZone;
-(struct _NSRange )maximumRangeOfUnit:(NSUInteger)arg0 ;
-(struct _NSRange )minimumRangeOfUnit:(NSUInteger)arg0 ;
-(struct _NSRange )rangeOfUnit:(NSUInteger)arg0 inUnit:(NSUInteger)arg1 forDate:(id)arg2 ;
-(void)dealloc;
-(void)enumerateDatesStartingAfterDate:(id)arg0 matchingComponents:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)setFirstWeekday:(NSUInteger)arg0 ;
-(void)setGregorianStartDate:(id)arg0 ;
-(void)setLocale:(id)arg0 ;
-(void)setMinimumDaysInFirstWeek:(NSUInteger)arg0 ;
-(void)setTimeZone:(id)arg0 ;


@end


#endif