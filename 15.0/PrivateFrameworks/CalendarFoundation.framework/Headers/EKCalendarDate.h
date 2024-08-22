// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARDATE_H
#define EKCALENDARDATE_H

@class NSCalendar, NSDate, NSDateComponents;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying>

 {
    NSCalendar *_calendar;
    NSDate *_date;
    NSDateComponents *_components;
    NSDateComponents *_originalComponents;
}




+(id)calendarDateWithAbsoluteTime:(CGFloat)arg0 timeZone:(id)arg1 ;
+(id)calendarDateWithDate:(id)arg0 timeZone:(id)arg1 ;
+(id)calendarDateWithDateComponents:(id)arg0 timeZone:(id)arg1 ;
+(id)calendarDateWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 timeZone:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)absoluteTime;
-(CGFloat)differenceInSeconds:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)day;
-(NSInteger)differenceInDays:(id)arg0 ;
-(NSInteger)differenceInMonths:(id)arg0 ;
-(NSInteger)differenceInYears:(id)arg0 ;
-(NSInteger)era;
-(NSInteger)hour;
-(NSInteger)minute;
-(NSInteger)month;
-(NSInteger)second;
-(NSInteger)secondsFromGMT;
-(NSInteger)year;
-(NSUInteger)dayOfYear;
-(NSUInteger)daysInMonth;
-(NSUInteger)daysInYear;
-(NSUInteger)weekOfYear;
-(NSUInteger)weeksInYear;
-(id)allComponents;
-(id)calendar;
-(id)calendarDateByAddingComponents:(id)arg0 ;
-(id)calendarDateByAddingDays:(NSInteger)arg0 ;
-(id)calendarDateByAddingGregorianUnits:(struct ? )arg0 ;
-(id)calendarDateByAddingHours:(NSInteger)arg0 ;
-(id)calendarDateByAddingMinutes:(NSInteger)arg0 ;
-(id)calendarDateByAddingMonths:(NSInteger)arg0 ;
-(id)calendarDateByAddingSeconds:(NSInteger)arg0 ;
-(id)calendarDateByAddingWeeks:(NSInteger)arg0 ;
-(id)calendarDateByAddingYears:(NSInteger)arg0 ;
-(id)calendarDateByComponentwiseAddingComponents:(id)arg0 ;
-(id)calendarDateByComponentwiseAddingSeconds:(NSInteger)arg0 ;
-(id)calendarDateForDay;
-(id)calendarDateForEndOfDay;
-(id)calendarDateForEndOfMonth;
-(id)calendarDateForEndOfWeekWithWeekStart:(int)arg0 ;
-(id)calendarDateForEndOfYear;
-(id)calendarDateForMonth;
-(id)calendarDateForWeekWithWeekStart:(int)arg0 ;
-(id)calendarDateForWeekWithWeekStart:(int)arg0 daysSinceWeekStart:(*NSInteger)arg1 ;
-(id)calendarDateForYear;
-(id)calendarDateInTimeZone:(id)arg0 ;
-(id)calendarDateWithDate:(id)arg0 ;
-(id)components;
-(id)componentsWithoutTime;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)date;
-(id)dayComponents;
-(id)dayTimeComponents;
-(id)description;
-(id)differenceAsComponentwiseDateComponents:(id)arg0 ;
-(id)differenceAsDateComponents:(id)arg0 units:(NSUInteger)arg1 ;
-(id)earlierDate:(id)arg0 ;
-(id)initWithAbsoluteTime:(CGFloat)arg0 timeZone:(id)arg1 ;
-(id)initWithDate:(id)arg0 calendar:(id)arg1 ;
-(id)initWithDate:(id)arg0 components:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithDate:(id)arg0 originalComponents:(id)arg1 components:(id)arg2 calendar:(id)arg3 ;
-(id)initWithDate:(id)arg0 originalComponents:(id)arg1 components:(id)arg2 timeZone:(id)arg3 ;
-(id)initWithDate:(id)arg0 timeZone:(id)arg1 ;
-(id)initWithDateComponents:(id)arg0 calendar:(id)arg1 ;
-(id)initWithDateComponents:(id)arg0 timeZone:(id)arg1 ;
-(id)laterDate:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)timeComponents;
-(id)timeZone;
-(id)weekComponents;
-(int)dayOfWeek;
-(struct ? )differenceAsGregorianUnits:(id)arg0 flags:(NSUInteger)arg1 ;


@end


#endif