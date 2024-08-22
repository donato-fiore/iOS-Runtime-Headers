// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIPC_H
#define NEIPC_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NEIPC : NSObject

@property (readonly) BOOL connected;
@property (retain) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (retain) NSObject<OS_xpc_object> *listener; // ivar: _listener
@property (copy) id *messageHandler; // ivar: _messageHandler


-(BOOL)sendMessageWithType:(unsigned int)arg0 data:(id)arg1 replyQueue:(id)arg2 replyHandler:(id)arg3 ;
-(id)startInListenModeWithQueue:(id)arg0 messageHandler:(id)arg1 ;
-(void)handleMessage:(id)arg0 withHandler:(id)arg1 ;
-(void)logMessageType:(unsigned int)arg0 data:(id)arg1 actionString:(id)arg2 ;
-(void)setupMessageHandlingWithQueue:(id)arg0 ;
-(void)startWithEndpoint:(id)arg0 queue:(id)arg1 messageHandler:(id)arg2 ;
-(void)stop;


@end


#endif