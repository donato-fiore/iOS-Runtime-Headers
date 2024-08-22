// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTREMOTEXPCCONNECTION_H
#define GTREMOTEXPCCONNECTION_H

@class OS_xpc_remote_connection, NSMutableArray, NSMutableDictionary, NSUUID, NSArray;
@protocol GTXPCConnection, OS_os_transaction, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface GTRemoteXPCConnection : NSObject <GTXPCConnection>

 {
    OS_xpc_remote_connection *_connection;
    NSObject<OS_os_transaction> *_transaction;
    NSMutableArray *_connectionHandlers;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error; // ivar: _error
@property (retain, nonatomic) NSMutableDictionary *observers; // ivar: _observers
@property (readonly) NSUUID *originDeviceUUID; // ivar: _originDeviceUUID
@property (readonly) NSUInteger originPort; // ivar: _originPort
@property (readonly) NSArray *proxyHandlers;


-(id)initWithTransactionScopedXPCConnection:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)sendMessageWithReplySync:(id)arg0 ;
-(void)dispatchMessage:(id)arg0 ;
-(void)registerDispatcher:(id)arg0 forServicePort:(NSUInteger)arg1 ;
-(void)registerProxyHandler:(id)arg0 ;
-(void)removeProxyHandler:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 queue:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif