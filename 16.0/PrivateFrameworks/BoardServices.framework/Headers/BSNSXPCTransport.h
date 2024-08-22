// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSNSXPCTRANSPORT_H
#define BSNSXPCTRANSPORT_H

@class NSString, NSArray;
@protocol BSNSXPCConnectionConfiguring, _NSXPCTransport, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSXPCServiceConnection.h"

@interface BSNSXPCTransport : NSObject <BSNSXPCConnectionConfiguring, _NSXPCTransport>

 {
    BSXPCServiceConnection *_connection;
    NSString *_explanation;
    NSArray *_perMessageAttributes;
    id *_perMessageAssertionProvider;
    unsigned char _messageOptions;
    NSObject<OS_dispatch_queue> *_targetQueue;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)sendMessageWithReplySync:(id)arg0 ;
-(int)auditSessionIdentifier;
-(int)processIdentifier;
-(struct ? )auditToken;
-(unsigned int)effectiveGroupIdentifier;
-(unsigned int)effectiveUserIdentifier;
-(void)activate;
-(void)cancel;
-(void)resume;
-(void)sendBarrierBlock:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessageWithReply:(id)arg0 onQueue:(id)arg1 replyHandler:(id)arg2 ;
-(void)sendNotification:(id)arg0 ;
-(void)setErrorHandler:(id)arg0 ;
-(void)setMessageHandler:(id)arg0 ;
-(void)setPerMessageAssertionAttributes:(id)arg0 ;
-(void)setTargetQueue:(id)arg0 ;
-(void)suspend;


@end


#endif