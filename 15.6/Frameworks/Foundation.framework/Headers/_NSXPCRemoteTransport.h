// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSXPCREMOTETRANSPORT_H
#define _NSXPCREMOTETRANSPORT_H

@class OS_xpc_remote_connection;
@protocol _NSXPCTransport;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSXPCRemoteTransport : NSObject <_NSXPCTransport>

 {
    OS_xpc_remote_connection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(id)initWithRemoteService:(id)arg0 name:(id)arg1 queue:(id)arg2 mode:(NSUInteger)arg3 ;
-(id)sendMessageWithReplySync:(id)arg0 ;
-(int)auditSessionIdentifier;
-(int)processIdentifier;
-(struct ? )auditToken;
-(unsigned int)effectiveGroupIdentifier;
-(unsigned int)effectiveUserIdentifier;
-(void)activate;
-(void)cancel;
-(void)dealloc;
-(void)resume;
-(void)sendBarrierBlock:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessageWithReply:(id)arg0 onQueue:(id)arg1 replyHandler:(id)arg2 ;
-(void)sendNotification:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setTargetQueue:(id)arg0 ;
-(void)suspend;


@end


#endif