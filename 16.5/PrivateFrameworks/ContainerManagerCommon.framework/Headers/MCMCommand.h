// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMAND_H
#define MCMCOMMAND_H

@class NSString;
@protocol MCMCommand_Internal, MCMCommand_XPC, MCMCommand, MCMReply, MCMResultPromise;

#import <Foundation/Foundation.h>

#import "MCMContext.h"

@interface MCMCommand : NSObject <MCMCommand_Internal, MCMCommand_XPC, MCMCommand>



@property (readonly, nonatomic) MCMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MCMReply> *reply; // ivar: _reply
@property (readonly, nonatomic) NSObject<MCMResultPromise> *resultPromise; // ivar: _resultPromise
@property (readonly) Class superclass;


+(Class)incomingMessageClass;
+(NSUInteger)command;
+(void)relayToPrivilegedDaemonMessage:(id)arg0 reply:(id)arg1 context:(id)arg2 ;
+(void)relayToPrivilegedDaemonMessage:(id)arg0 reply:(id)arg1 context:(id)arg2 resultPromise:(id)arg3 ;
-(BOOL)preflightClientAllowed;
-(id)initWithContext:(id)arg0 resultPromise:(id)arg1 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(id)userIdentityForContainerIdentifier:(id)arg0 containerClass:(NSUInteger)arg1 error:(*NSUInteger)arg2 ;
-(void)execute;


@end


#endif