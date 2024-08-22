// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAREMINDEROBJECT_H
#define SAREMINDEROBJECT_H

@class NSString, NSDate, NSArray;
@protocol SAReminderPayload;


#import "SADomainObject.h"
#import "SAReminderRecurrence.h"
#import "SAReminderListObject.h"
#import "SAReminderTrigger.h"

@interface SAReminderObject : SADomainObject

@property (copy, nonatomic) NSString *alternateSubject;
@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSString *dueDateTimeZoneId;
@property (nonatomic) BOOL important;
@property (copy, nonatomic) NSArray *lists;
@property (retain, nonatomic) NSObject<SAReminderPayload> *payload;
@property (retain, nonatomic) SAReminderRecurrence *recurrence;
@property (copy, nonatomic) NSString *subject;
@property (retain, nonatomic) SAReminderListObject *toList;
@property (retain, nonatomic) SAReminderTrigger *trigger;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif