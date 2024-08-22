// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMXPCCONNECTION_H
#define DMXPCCONNECTION_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface DMXPCConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (copy) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy) id *messageHandler; // ivar: _messageHandler


-(BOOL)hasEntitlement:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)sendMessageSync:(id)arg0 ;
-(void)_handleMessage:(id)arg0 ;
-(void)handleMessage:(id)arg0 ;
-(void)invalidate;
-(void)resume;
-(void)sendMessage:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif