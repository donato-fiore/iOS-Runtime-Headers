// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAREMINDERLISTOBJECT_H
#define SAREMINDERLISTOBJECT_H

@class NSString, NSArray, NSNumber;


#import "SADomainObject.h"
#import "SAReminderRecurrence.h"
#import "SAReminderTrigger.h"

@interface SAReminderListObject : SADomainObject

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAReminderRecurrence *recurrence;
@property (retain, nonatomic) SAReminderTrigger *reminderTrigger;
@property (copy, nonatomic) NSArray *reminders;
@property (copy, nonatomic) NSArray *remindersToCreate;
@property (copy, nonatomic) NSNumber *totalNumOfReminders;


+(id)listObject;
+(id)listObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif