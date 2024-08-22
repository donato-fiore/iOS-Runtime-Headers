// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDCRASHTEST_H
#define MCMCOMMANDCRASHTEST_H

@protocol MCMParametersCrashTest;


#import "MCMCommand.h"

@interface MCMCommandCrashTest : MCMCommand <MCMParametersCrashTest>



@property (readonly, nonatomic) NSUInteger crashCount; // ivar: _crashCount


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif