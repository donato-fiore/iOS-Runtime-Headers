// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIDELAYEDACTIONCANCELCOMMAND_H
#define SAUIDELAYEDACTIONCANCELCOMMAND_H

@class NSString;


#import "SADomainCommand.h"

@interface SAUIDelayedActionCancelCommand : SADomainCommand

@property (copy, nonatomic) NSString *delayedActionAceId;


+(id)delayedActionCancelCommand;
+(id)delayedActionCancelCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif