// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HCSERVER_H
#define HCSERVER_H

@protocol OS_dispatch_queue, AXHeardServerDelegate, AXHeardServerMessageDelegate, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface HCServer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (nonatomic) BOOL deadConnection; // ivar: _deadConnection
@property (weak, nonatomic) NSObject<AXHeardServerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isConnected;
@property (weak, nonatomic) NSObject<AXHeardServerMessageDelegate> *messageDelegate; // ivar: _messageDelegate
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


-(BOOL)shouldRestartOnInterruption;
-(id)init;
-(id)setupServerIfNecessary;
-(void)dealloc;
-(void)handleMessageError:(id)arg0 destructive:(BOOL)arg1 ;
-(void)handleMessageWithPayload:(id)arg0 forIdentifier:(NSUInteger)arg1 ;
-(void)handleReply:(id)arg0 ;
-(void)resetConnection;
-(void)sendMessageWithPayload:(id)arg0 andIdentifier:(NSUInteger)arg1 ;
-(void)sendSynchronousMessageWithPayload:(id)arg0 andIdentifier:(NSUInteger)arg1 ;
-(void)startServerWithDelegate:(id)arg0 ;
-(void)terminateConnectionAndNotify:(BOOL)arg0 ;


@end


#endif