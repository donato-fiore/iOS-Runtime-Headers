// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKRECURRENCERULE_H
#define EKRECURRENCERULE_H

@class NSString, NSDate, NSDateComponents, NSArray;
@protocol NSCopying;


#import "EKObject.h"
#import "EKRecurrenceHelper.h"
#import "EKRecurrenceEnd.h"

@interface EKRecurrenceRule : EKObject <NSCopying>

 {
    EKRecurrenceHelper *_recurrenceHelper;
}


@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSDate *cachedEndDate;
@property (readonly, nonatomic) NSString *calendarIdentifier;
@property (readonly, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) NSArray *daysOfTheMonth;
@property (readonly, nonatomic) NSArray *daysOfTheWeek;
@property (readonly, nonatomic) NSArray *daysOfTheYear;
@property (readonly, nonatomic) BOOL dirtyStateMayAffectExceptionDates;
@property (readonly, nonatomic) NSInteger firstDayOfTheWeek;
@property (readonly, nonatomic) NSInteger frequency;
@property (readonly, nonatomic) NSInteger interval;
@property (readonly, nonatomic) NSArray *monthsOfTheYear;
@property (copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;
@property (readonly, nonatomic) NSArray *setPositions;
@property (readonly, nonatomic) BOOL shouldPinMonthDays; // ivar: _shouldPinMonthDays
@property (readonly) BOOL usesEndDate; // ivar: _usesEndDate
@property (readonly, nonatomic) NSArray *weeksOfTheYear;


+(Class)frozenClass;
+(NSInteger)_ekWeekdayFromCalDayOfWeek:(int)arg0 ;
+(NSInteger)daysTypeForDayArray:(id)arg0 ;
+(id)_acceptableStartDateRangeForDailyRecurrenceWithCurrentStartDate:(id)arg0 ;
+(id)_acceptableStartDateRangeForMonthlyRecurrenceWithCurrentStartDate:(id)arg0 calendar:(id)arg1 ;
+(id)_acceptableStartDateRangeForWeeklyRecurrenceWithCurrentStartDate:(id)arg0 calendar:(id)arg1 ;
+(id)_acceptableStartDateRangeForYearlyRecurrenceWithCurrentStartDate:(id)arg0 calendar:(id)arg1 ;
+(id)iCalendarValueFromDate:(id)arg0 isDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2 ;
+(id)iCalendarValueFromDayOfTheWeek:(NSUInteger)arg0 ;
+(id)iCalendarValueFromRecurrenceType:(NSInteger)arg0 ;
+(id)knownIdentityKeysForComparison;
+(id)knownSingleValueKeysForComparison;
+(id)recurrenceRuleWithType:(NSInteger)arg0 interval:(NSUInteger)arg1 end:(id)arg2 ;
+(int)_calDayOfWeekFromEKWeekday:(NSInteger)arg0 ;
-(BOOL)hasDuplicateMonthsOfYear;
-(BOOL)isAnyDayRule;
-(BOOL)isEqualToRecurrenceRule:(id)arg0 ;
-(BOOL)isSimpleRule;
-(BOOL)isWeekdayRule;
-(BOOL)isWeekendRule;
-(BOOL)mayOccurAfterDate:(id)arg0 ;
-(BOOL)newStartDateIsInvalid:(id)arg0 currentStartDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)newStartDateIsValid:(id)arg0 currentStartDate:(id)arg1 calendar:(id)arg2 ;
-(NSUInteger)count;
-(id)_acceptableStartDateRangeWithCurrentStartDate:(id)arg0 calendar:(id)arg1 ;
-(id)_recurrenceHelper;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)endDate;
-(id)humanReadableDescriptionWithStartDate:(id)arg0 ;
-(id)humanReadableDescriptionWithStartDate:(id)arg0 isConcise:(BOOL)arg1 ;
-(id)init;
-(id)initRecurrenceWithFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 daysOfTheWeek:(id)arg2 daysOfTheMonth:(id)arg3 monthsOfTheYear:(id)arg4 weeksOfTheYear:(id)arg5 daysOfTheYear:(id)arg6 setPositions:(id)arg7 end:(id)arg8 ;
-(id)initRecurrenceWithFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 end:(id)arg2 ;
-(id)specifier;
-(id)stringValueAsDateOnly:(BOOL)arg0 isFloating:(BOOL)arg1 ;
-(void)_updateSpecifierIfNeeded;
-(void)pinToEndsOfMonthsWithCalendarItem:(id)arg0 ;
-(void)reset;
-(void)rollback;
-(void)setCount:(NSUInteger)arg0 ;
-(void)setEndDate:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;


@end


#endif