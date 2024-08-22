// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAREMINDERDATETIMETRIGGER_H
#define SAREMINDERDATETIMETRIGGER_H

@class NSDate, NSString;


#import "SAReminderTrigger.h"
#import "SAReminderDateTimeTriggerOffset.h"

@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;
@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *relativeTimeOffset;
@property (copy, nonatomic) NSString *timeZoneId;


+(id)dateTimeTriggerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif