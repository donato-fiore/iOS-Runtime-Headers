// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDSETTESTLOCK_H
#define MCMCOMMANDSETTESTLOCK_H

@protocol MCMParametersSetTestLock, MCMXPCMessage;


#import "MCMCommand.h"

@interface MCMCommandSetTestLock : MCMCommand <MCMParametersSetTestLock>



@property (readonly, nonatomic) BOOL enable; // ivar: _enable
@property (readonly, nonatomic) NSObject<MCMXPCMessage> *message; // ivar: _message
@property (readonly, nonatomic) NSUInteger requestedLocks; // ivar: _requestedLocks


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif