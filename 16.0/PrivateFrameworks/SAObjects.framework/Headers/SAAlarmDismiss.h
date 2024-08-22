// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAALARMDISMISS_H
#define SAALARMDISMISS_H

@class NSArray;


#import "SADomainCommand.h"

@interface SAAlarmDismiss : SADomainCommand

@property (copy, nonatomic) NSArray *alarmIds;


+(id)dismiss;
+(id)dismissWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif