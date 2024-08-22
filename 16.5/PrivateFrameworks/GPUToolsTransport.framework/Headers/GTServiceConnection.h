// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTSERVICECONNECTION_H
#define GTSERVICECONNECTION_H

@class NSUUID;
@protocol GTXPCConnection, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface GTServiceConnection : NSObject <GTXPCConnection>

 {
    id<GTXPCConnection> *_connection;
    NSUInteger _servicePort;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (retain, nonatomic) NSObject<OS_xpc_object> *error;


-(NSUInteger)registerDispatcher:(id)arg0 ;
-(id)initWithConnection:(id)arg0 device:(id)arg1 port:(NSUInteger)arg2 ;
-(id)sendMessageWithReplySync:(id)arg0 ;
-(id)sendMessageWithReplySync:(id)arg0 replyStreamId:(NSUInteger)arg1 ;
-(void)_setRoutingPropertiesForMessage:(id)arg0 ;
-(void)_setRoutingPropertiesForMessage:(id)arg0 withReplyStreamId:(NSUInteger)arg1 ;
// -(void)activateWithMessageHandler:(id)arg0 andErrorHandler:(unk)arg1  ;
-(void)deregisterDispatcher:(NSUInteger)arg0 ;
-(void)dispatchMessage:(id)arg0 ;
-(void)registerDispatcher:(id)arg0 forPort:(NSUInteger)arg1 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 replyHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 withReplyStreamId:(NSUInteger)arg1 ;
-(void)sendMessage:(id)arg0 withReplyStreamId:(NSUInteger)arg1 replyHandler:(id)arg2 ;


@end


#endif