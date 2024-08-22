// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTSERVICECONNECTION_H
#define GTSERVICECONNECTION_H

@class NSUUID, NSMutableDictionary, NSArray;
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
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (readonly) NSUUID *originDeviceUUID;
@property (readonly) NSUInteger originPort;
@property (readonly) NSArray *proxyHandlers;


-(id)_newNotificationForName:(id)arg0 ;
-(id)initWithConnection:(id)arg0 device:(id)arg1 port:(NSUInteger)arg2 ;
-(id)sendMessageWithReplySync:(id)arg0 ;
-(void)_setRoutingPropertiesForMessage:(id)arg0 ;
-(void)addObserverForName:(id)arg0 usingBlock:(id)arg1 ;
-(void)dispatchMessage:(id)arg0 ;
-(void)registerDispatcher:(id)arg0 forServicePort:(NSUInteger)arg1 ;
-(void)registerProxyHandler:(id)arg0 ;
-(void)removeObserverForName:(id)arg0 ;
-(void)removeProxyHandler:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 queue:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif