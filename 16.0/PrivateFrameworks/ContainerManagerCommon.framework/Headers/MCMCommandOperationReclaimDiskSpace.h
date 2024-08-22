// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDOPERATIONRECLAIMDISKSPACE_H
#define MCMCOMMANDOPERATIONRECLAIMDISKSPACE_H

@protocol MCMReply, MCMXPCMessage;


#import "MCMCommand.h"

@interface MCMCommandOperationReclaimDiskSpace : MCMCommand

@property (readonly, nonatomic) BOOL asynchronously; // ivar: _asynchronously
@property (readonly, nonatomic) NSObject<MCMReply> *handoffReply; // ivar: _handoffReply
@property (readonly, nonatomic) NSObject<MCMXPCMessage> *message; // ivar: _message


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)_removeItemOrMoveToTempAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)preflightClientAllowed;
-(id)initWithAsynchronously:(BOOL)arg0 context:(id)arg1 resultPromise:(id)arg2 ;
-(id)initWithAsynchronously:(BOOL)arg0 context:(id)arg1 resultPromise:(id)arg2 handoffForReply:(id)arg3 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 asyncResultPromise:(id)arg3 ;
-(void)_deleteContainersOnDeathRowWithCompletion:(id)arg0 ;
-(void)execute;


@end


#endif