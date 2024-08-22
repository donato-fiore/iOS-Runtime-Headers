// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTLOCALXPCCONNECTION_H
#define GTLOCALXPCCONNECTION_H

@class NSMutableDictionary;
@protocol GTXPCConnection, OS_xpc_object, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface GTLocalXPCConnection : NSObject <GTXPCConnection>

 {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_os_transaction> *_transaction;
    NSMutableDictionary *_dispatchers;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *error; // ivar: _error


-(NSUInteger)registerDispatcher:(id)arg0 ;
-(id)initWithTransactionScopedXPCConnection:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)sendMessageWithReplySync:(id)arg0 ;
// -(void)activateWithMessageHandler:(id)arg0 andErrorHandler:(unk)arg1  ;
-(void)deregisterDispatcher:(NSUInteger)arg0 ;
-(void)dispatchMessage:(id)arg0 ;
-(void)registerDispatcher:(id)arg0 forPort:(NSUInteger)arg1 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif