// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIDELAYEDACTIONCOMMAND_H
#define SAUIDELAYEDACTIONCOMMAND_H

@class NSArray, NSNumber;


#import "SADomainCommand.h"

@interface SAUIDelayedActionCommand : SADomainCommand

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *timerValue;


+(id)delayedActionCommand;
+(id)delayedActionCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif