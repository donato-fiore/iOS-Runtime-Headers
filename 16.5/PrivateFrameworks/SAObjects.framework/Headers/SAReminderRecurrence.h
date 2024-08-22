// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAREMINDERRECURRENCE_H
#define SAREMINDERRECURRENCE_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAReminderRecurrence : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *daysOfTheMonth;
@property (copy, nonatomic) NSArray *daysOfTheWeek;
@property (copy, nonatomic) NSArray *daysOfTheYear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *frequencyTimeUnit;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interval;
@property (copy, nonatomic) NSArray *monthsOfTheYear;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *weeksOfTheYear;


+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif