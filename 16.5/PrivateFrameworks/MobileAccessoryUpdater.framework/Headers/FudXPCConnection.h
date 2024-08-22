// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FUDXPCCONNECTION_H
#define FUDXPCCONNECTION_H

@class NSString;
@protocol FudConnection, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FudXPCConnection : NSObject <FudConnection>

 {
    NSString *clientIdentifier;
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    NSObject<OS_dispatch_queue> *sessionQueue;
    NSObject<OS_dispatch_queue> *replyQueue;
    id *messageHandler;
    int notifyToken;
    BOOL didStop;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createSession;
-(BOOL)registerForBSDNotifications;
-(id)initWithClientName:(id)arg0 replyHandlerQueue:(id)arg1 messageHandler:(id)arg2 ;
-(void)createConnection;
-(void)dealloc;
-(void)sendMessageToFud:(id)arg0 ;
-(void)sendMessageToFud:(id)arg0 reply:(id)arg1 ;
-(void)stop;


@end


#endif