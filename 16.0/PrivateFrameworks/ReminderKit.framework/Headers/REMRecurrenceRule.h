// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMRECURRENCERULE_H
#define REMRECURRENCERULE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying, REMObjectIDProviding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMRecurrenceEnd.h"

@interface REMRecurrenceRule : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding>



@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSArray *daysOfTheMonth; // ivar: _daysOfTheMonth
@property (readonly, nonatomic) NSArray *daysOfTheWeek; // ivar: _daysOfTheWeek
@property (readonly, nonatomic) NSArray *daysOfTheYear; // ivar: _daysOfTheYear
@property (readonly, nonatomic) NSInteger firstDayOfTheWeek; // ivar: _firstDayOfTheWeek
@property (readonly, nonatomic) NSInteger frequency; // ivar: _frequency
@property (readonly, nonatomic) NSInteger interval; // ivar: _interval
@property (readonly, nonatomic) NSArray *monthsOfTheYear; // ivar: _monthsOfTheYear
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, copy, nonatomic) REMRecurrenceEnd *recurrenceEnd; // ivar: _recurrenceEnd
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMObjectID *reminderID; // ivar: _reminderID
@property (readonly, nonatomic) NSArray *setPositions; // ivar: _setPositions
@property (readonly, nonatomic) NSArray *weeksOfTheYear; // ivar: _weeksOfTheYear


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)iCalendarValueFromDate:(id)arg0 isDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2 ;
+(id)iCalendarValueFromRecurrenceType:(NSInteger)arg0 ;
+(id)iCalendarValueFromWeekday:(NSInteger)arg0 ;
+(id)newObjectID;
+(id)nextRecurrentDueDateAfter:(id)arg0 dueDate:(id)arg1 timeZone:(id)arg2 allDay:(BOOL)arg3 recurrenceRules:(id)arg4 ;
+(id)objectIDWithUUID:(id)arg0 ;
+(int)_convertREMRecurrenceFrequencyToCalRecurrenceFrequency:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecurrenceRule:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)iCalendarDescription;
-(id)initRecurrenceRuleWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 frequency:(NSInteger)arg3 interval:(NSInteger)arg4 end:(id)arg5 ;
-(id)initRecurrenceRuleWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 frequency:(NSInteger)arg3 interval:(NSInteger)arg4 firstDayOfTheWeek:(NSInteger)arg5 daysOfTheWeek:(id)arg6 daysOfTheMonth:(id)arg7 monthsOfTheYear:(id)arg8 weeksOfTheYear:(id)arg9 daysOfTheYear:(id)arg10 setPositions:(id)arg11 end:(id)arg12 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecurrenceRule:(id)arg0 objectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 ;
-(id)initWithRecurrenceRule:(id)arg0 objectID:(id)arg1 end:(id)arg2 ;
-(id)stringValueAsDateOnly:(BOOL)arg0 isFloating:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif