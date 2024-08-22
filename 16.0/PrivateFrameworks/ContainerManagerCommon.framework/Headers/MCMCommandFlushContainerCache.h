// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDFLUSHCONTAINERCACHE_H
#define MCMCOMMANDFLUSHCONTAINERCACHE_H

@protocol MCMParametersFlushContainerCache, MCMXPCMessage;


#import "MCMCommand.h"

@interface MCMCommandFlushContainerCache : MCMCommand <MCMParametersFlushContainerCache>



@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) NSObject<MCMXPCMessage> *message; // ivar: _message
@property (readonly, nonatomic) BOOL transient; // ivar: _transient


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif