// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAREMINDERCOMPOSITETRIGGER_H
#define SAREMINDERCOMPOSITETRIGGER_H



#import "SAReminderTrigger.h"
#import "SAReminderDateTimeTrigger.h"
#import "SAReminderLocationTrigger.h"

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;
@property (retain, nonatomic) SAReminderLocationTrigger *locationTrigger;


+(id)compositeTrigger;
+(id)compositeTriggerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif