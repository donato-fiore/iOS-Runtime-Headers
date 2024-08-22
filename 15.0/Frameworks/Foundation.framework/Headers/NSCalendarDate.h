// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCALENDARDATE_H
#define NSCALENDARDATE_H

@class NSDate, NSTimeZone;


#import "NSString.h"

@interface NSCalendarDate : NSDate {
    NSUInteger refCount;
    CGFloat _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    *void _reserved;
}




+(BOOL)supportsSecureCoding;
+(id)calendarDate;
+(id)dateWithNaturalLanguageString:(id)arg0 date:(id)arg1 locale:(id)arg2 ;
+(id)dateWithString:(id)arg0 calendarFormat:(id)arg1 ;
+(id)dateWithString:(id)arg0 calendarFormat:(id)arg1 locale:(id)arg2 ;
+(id)dateWithYear:(NSInteger)arg0 month:(NSUInteger)arg1 day:(NSUInteger)arg2 hour:(NSUInteger)arg3 minute:(NSUInteger)arg4 second:(NSUInteger)arg5 timeZone:(id)arg6 ;
+(id)distantFuture;
+(id)distantPast;
-(CGFloat)timeIntervalSinceReferenceDate;
-(Class)classForCoder;
-(NSInteger)dayOfCommonEra;
-(NSInteger)dayOfMonth;
-(NSInteger)dayOfWeek;
-(NSInteger)dayOfYear;
-(NSInteger)hourOfDay;
-(NSInteger)microsecondOfSecond;
-(NSInteger)minuteOfHour;
-(NSInteger)monthOfYear;
-(NSInteger)secondOfMinute;
-(NSInteger)yearOfCommonEra;
-(id)addTimeInterval:(CGFloat)arg0 ;
-(id)calendarFormat;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateByAddingYears:(NSInteger)arg0 months:(NSInteger)arg1 days:(NSInteger)arg2 hours:(NSInteger)arg3 minutes:(NSInteger)arg4 seconds:(NSInteger)arg5 ;
-(id)description;
-(id)descriptionWithCalendarFormat:(id)arg0 ;
-(id)descriptionWithCalendarFormat:(id)arg0 locale:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 calendarFormat:(id)arg1 ;
-(id)initWithString:(id)arg0 calendarFormat:(id)arg1 locale:(id)arg2 ;
-(id)initWithTimeIntervalSinceReferenceDate:(CGFloat)arg0 ;
-(id)initWithYear:(NSInteger)arg0 month:(NSUInteger)arg1 day:(NSUInteger)arg2 hour:(NSUInteger)arg3 minute:(NSUInteger)arg4 second:(NSUInteger)arg5 timeZone:(id)arg6 ;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(id)timeZone;
-(id)timeZoneDetail;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;
-(void)setCalendarFormat:(id)arg0 ;
-(void)setTimeZone:(id)arg0 ;
-(void)years:(*NSInteger)arg0 months:(*NSInteger)arg1 days:(*NSInteger)arg2 hours:(*NSInteger)arg3 minutes:(*NSInteger)arg4 seconds:(*NSInteger)arg5 sinceDate:(id)arg6 ;


@end


#endif