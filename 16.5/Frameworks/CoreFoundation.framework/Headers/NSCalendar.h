// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCALENDAR_H
#define NSCALENDAR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSArray.h"
#import "NSLocale.h"
#import "NSTimeZone.h"

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *AMSymbol;
@property (readonly, copy) NSString *PMSymbol;
@property (readonly, copy) NSString *calendarIdentifier;
@property (readonly, copy) NSArray *eraSymbols;
@property NSUInteger firstWeekday;
@property (copy) NSLocale *locale;
@property (readonly, copy) NSArray *longEraSymbols;
@property NSUInteger minimumDaysInFirstWeek;
@property (readonly, copy) NSArray *monthSymbols;
@property (readonly, copy) NSArray *quarterSymbols;
@property (readonly, copy) NSArray *shortMonthSymbols;
@property (readonly, copy) NSArray *shortQuarterSymbols;
@property (readonly, copy) NSArray *shortStandaloneMonthSymbols;
@property (readonly, copy) NSArray *shortStandaloneQuarterSymbols;
@property (readonly, copy) NSArray *shortStandaloneWeekdaySymbols;
@property (readonly, copy) NSArray *shortWeekdaySymbols;
@property (readonly, copy) NSArray *standaloneMonthSymbols;
@property (readonly, copy) NSArray *standaloneQuarterSymbols;
@property (readonly, copy) NSArray *standaloneWeekdaySymbols;
@property (copy) NSTimeZone *timeZone;
@property (readonly, copy) NSArray *veryShortMonthSymbols;
@property (readonly, copy) NSArray *veryShortStandaloneMonthSymbols;
@property (readonly, copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (readonly, copy) NSArray *veryShortWeekdaySymbols;
@property (readonly, copy) NSArray *weekdaySymbols;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)autoupdatingCurrentCalendar;
+(id)calendarWithIdentifier:(id)arg0 ;
+(id)currentCalendar;
+(void)initialize;
-(BOOL)date:(id)arg0 matchesComponents:(id)arg1 ;
-(BOOL)isDate:(id)arg0 equalToDate:(id)arg1 toUnitGranularity:(NSUInteger)arg2 ;
-(BOOL)isDate:(id)arg0 inSameDayAsDate:(id)arg1 ;
-(BOOL)isDateInToday:(id)arg0 ;
-(BOOL)isDateInTomorrow:(id)arg0 ;
-(BOOL)isDateInWeekend:(id)arg0 ;
-(BOOL)isDateInYesterday:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)nextWeekendStartDate:(*id)arg0 interval:(*CGFloat)arg1 options:(NSUInteger)arg2 afterDate:(id)arg3 ;
-(BOOL)rangeOfUnit:(NSUInteger)arg0 startDate:(*id)arg1 interval:(*CGFloat)arg2 forDate:(id)arg3 ;
-(BOOL)rangeOfWeekendStartDate:(*id)arg0 interval:(*CGFloat)arg1 containingDate:(id)arg2 ;
-(NSInteger)_ordinalityOfUnit:(NSUInteger)arg0 inUnit:(NSUInteger)arg1 forAT:(CGFloat)arg2 ;
-(NSInteger)compareDate:(id)arg0 toDate:(id)arg1 toUnitGranularity:(NSUInteger)arg2 ;
-(NSInteger)component:(NSUInteger)arg0 fromDate:(id)arg1 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(NSUInteger)ordinalityOfUnit:(NSUInteger)arg0 inUnit:(NSUInteger)arg1 forDate:(id)arg2 ;
-(id)_copyGregorianStartDate;
-(id)_copyLocale;
-(id)_copyTimeZone;
-(id)components:(NSUInteger)arg0 fromDate:(id)arg1 ;
-(id)components:(NSUInteger)arg0 fromDate:(id)arg1 toDate:(id)arg2 options:(NSUInteger)arg3 ;
-(id)components:(NSUInteger)arg0 fromDateComponents:(id)arg1 toDateComponents:(id)arg2 options:(NSUInteger)arg3 ;
-(id)componentsInTimeZone:(id)arg0 fromDate:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateByAddingComponents:(id)arg0 toDate:(id)arg1 options:(NSUInteger)arg2 ;
-(id)dateByAddingUnit:(NSUInteger)arg0 value:(NSInteger)arg1 toDate:(id)arg2 options:(NSUInteger)arg3 ;
-(id)dateBySettingHour:(NSInteger)arg0 minute:(NSInteger)arg1 second:(NSInteger)arg2 ofDate:(id)arg3 options:(NSUInteger)arg4 ;
-(id)dateBySettingUnit:(NSUInteger)arg0 value:(NSInteger)arg1 ofDate:(id)arg2 options:(NSUInteger)arg3 ;
-(id)dateFromComponents:(id)arg0 ;
-(id)dateWithEra:(NSInteger)arg0 year:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3 hour:(NSInteger)arg4 minute:(NSInteger)arg5 second:(NSInteger)arg6 nanosecond:(NSInteger)arg7 ;
-(id)dateWithEra:(NSInteger)arg0 yearForWeekOfYear:(NSInteger)arg1 weekOfYear:(NSInteger)arg2 weekday:(NSInteger)arg3 hour:(NSInteger)arg4 minute:(NSInteger)arg5 second:(NSInteger)arg6 nanosecond:(NSInteger)arg7 ;
-(id)gregorianStartDate;
-(id)init;
-(id)initWithCalendarIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)nextDateAfterDate:(id)arg0 matchingComponents:(id)arg1 options:(NSUInteger)arg2 ;
-(id)nextDateAfterDate:(id)arg0 matchingHour:(NSInteger)arg1 minute:(NSInteger)arg2 second:(NSInteger)arg3 options:(NSUInteger)arg4 ;
-(id)nextDateAfterDate:(id)arg0 matchingUnit:(NSUInteger)arg1 value:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(id)startOfDayForDate:(id)arg0 ;
-(struct ? )_maximumRangeOfUnit:(NSUInteger)arg0 ;
-(struct ? )_minimumRangeOfUnit:(NSUInteger)arg0 ;
-(struct ? )_rangeOfUnit:(NSUInteger)arg0 inUnit:(NSUInteger)arg1 forAT:(CGFloat)arg2 ;
-(struct _NSRange )maximumRangeOfUnit:(NSUInteger)arg0 ;
-(struct _NSRange )minimumRangeOfUnit:(NSUInteger)arg0 ;
-(struct _NSRange )rangeOfUnit:(NSUInteger)arg0 inUnit:(NSUInteger)arg1 forDate:(id)arg2 ;
-(unsigned char)_addComponents:(*CGFloat)arg0 ;
-(unsigned char)_composeAbsoluteTime:(*CGFloat)arg0 ;
-(unsigned char)_decomposeAbsoluteTime:(CGFloat)arg0 ;
-(unsigned char)_diffComponents:(CGFloat)arg0 ;
-(unsigned char)_rangeOfUnit:(NSUInteger)arg0 startTime:(*CGFloat)arg1 interval:(*CGFloat)arg2 forAT:(CGFloat)arg3 ;
-(void)_setGregorianStartDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateDatesStartingAfterDate:(id)arg0 matchingComponents:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)getEra:(*NSInteger)arg0 year:(*NSInteger)arg1 month:(*NSInteger)arg2 day:(*NSInteger)arg3 fromDate:(id)arg4 ;
-(void)getEra:(*NSInteger)arg0 yearForWeekOfYear:(*NSInteger)arg1 weekOfYear:(*NSInteger)arg2 weekday:(*NSInteger)arg3 fromDate:(id)arg4 ;
-(void)getHour:(*NSInteger)arg0 minute:(*NSInteger)arg1 second:(*NSInteger)arg2 nanosecond:(*NSInteger)arg3 fromDate:(id)arg4 ;
-(void)setGregorianStartDate:(id)arg0 ;


@end


#endif