// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSERVER_H
#define AXSERVER_H

@class AXDispatchTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXIPCClient.h"
#import "AXIPCServer.h"

@interface AXServer : NSObject {
    os_unfair_lock_s _clientLock;
}


@property (retain, nonatomic) AXDispatchTimer *assertionRetryTimer; // ivar: _assertionRetryTimer
@property (retain, nonatomic) NSMutableArray *assertionWorkBacklog; // ivar: _assertionWorkBacklog
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue; // ivar: _assertionWorkQueue
@property (retain, nonatomic) AXIPCClient *client; // ivar: _client
@property (retain, nonatomic) AXIPCServer *server; // ivar: _server
@property (copy, nonatomic) NSString *serverIdentifier; // ivar: _serverIdentifier
@property (nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop; // ivar: _shouldRegisterClientCallbackSourceOnMainRunloop


-(BOOL)_connectIfNecessary;
-(BOOL)_connectServerIfNecessary;
-(BOOL)sendSimpleMessage:(id)arg0 enqueueError:(*id)arg1 ;
-(BOOL)sendSimpleMessageWithResult:(id)arg0 ;
-(id)_sendMessage:(id)arg0 error:(*id)arg1 ;
-(id)_serviceName;
-(id)init;
-(id)sendMessage:(id)arg0 ;
-(id)sendSimpleMessageWithObjectResult:(id)arg0 ;
-(void)_didConnectToClient;
-(void)_didConnectToServer;
-(void)_ensureAssertionsHaveBeenProcessedWithCompletion:(id)arg0 ;
-(void)_initializeAssertionBookkeeping;
-(void)_processAssertionBacklog;
-(void)_wasDisconnectedFromClient;
-(void)_willClearServer;
-(void)acquireAssertionWithType:(id)arg0 identifier:(id)arg1 ;
-(void)dealloc;
-(void)relinquishAssertionWithType:(id)arg0 identifier:(id)arg1 ;
-(void)sendAsynchronousMessage:(id)arg0 replyOnQueue:(id)arg1 boolResultHandler:(id)arg2 ;
-(void)sendAsynchronousMessage:(id)arg0 replyOnQueue:(id)arg1 handler:(id)arg2 ;
-(void)sendAsynchronousMessage:(id)arg0 replyOnQueue:(id)arg1 objectResultHandler:(id)arg2 ;
-(void)sendSimpleMessage:(id)arg0 ;


@end


#endif