// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKFROZENREMINDERRECURRENCERULE_H
#define EKFROZENREMINDERRECURRENCERULE_H



#import "EKFrozenReminderObject.h"

@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject



+(Class)meltedClass;
+(NSInteger)convertToReminderKitFrequency:(int)arg0 ;
+(NSInteger)convertToReminderKitWeekday:(int)arg0 ;
+(int)convertFromReminderKitFrequency:(NSInteger)arg0 ;
+(int)convertFromReminderKitWeekday:(NSInteger)arg0 ;
-(NSInteger)ekWeekdayToREMWeekday:(NSInteger)arg0 ;
-(NSInteger)interval;
-(NSInteger)remWeekdayToEKWeekday:(NSInteger)arg0 ;
-(NSUInteger)count;
-(id)_recurrenceRule;
-(id)addUpdatedRecurrenceRule:(id)arg0 ;
-(id)daysOfTheWeekFromREMRecurrenceRule;
-(id)endDate;
-(id)initWithAlternateUniverseObject:(id)arg0 inEventStore:(id)arg1 withUpdatedChildObjects:(id)arg2 ;
-(id)initWithREMObject:(id)arg0 inStore:(id)arg1 ;
-(id)initWithREMObject:(id)arg0 inStore:(id)arg1 withChanges:(id)arg2 ;
-(id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)arg0 ;
-(id)remObjectID;
-(id)specifier;
-(id)uniqueIdentifier;
-(id)uuid;
-(int)firstDayOfTheWeekRaw;
-(int)frequencyRaw;
-(void)loadSpecifierDaysOfTheWeek:(*id)arg0 daysOfTheMonth:(*id)arg1 monthsOfTheYear:(*id)arg2 weeksOfTheYear:(*id)arg3 daysOfTheYear:(*id)arg4 setPositions:(*id)arg5 ;


@end


#endif