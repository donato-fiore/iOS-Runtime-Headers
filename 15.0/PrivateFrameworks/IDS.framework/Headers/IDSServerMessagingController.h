// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSERVERMESSAGINGCONTROLLER_H
#define IDSSERVERMESSAGINGCONTROLLER_H

@class NSString, NSHashTable, NSMutableDictionary;
@protocol IDSXPCServerMessagingClient;

#import <Foundation/Foundation.h>

#import "IDSXPCDaemonController.h"

@interface IDSServerMessagingController : NSObject <IDSXPCServerMessagingClient>



@property (retain, nonatomic) IDSXPCDaemonController *daemonController; // ivar: _daemonController
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSHashTable *delegateMap; // ivar: _delegateMap
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) os_unfair_lock_s inFlightLock; // ivar: _inFlightLock
@property (retain, nonatomic) NSMutableDictionary *inFlightRequests; // ivar: _inFlightRequests
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *topic; // ivar: _topic
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(id)initWithTopic:(id)arg0 ;
-(id)initWithTopic:(id)arg0 daemonController:(id)arg1 ;
-(void)_failMessages;
-(void)_sendData:(id)arg0 withOptions:(id)arg1 identifier:(id)arg2 completion:(id)arg3 ;
-(void)_setupInterruptionHandler;
-(void)_setupXPC;
-(void)addDelegate:(id)arg0 ;
-(void)handleReceivedIncomingMessageData:(id)arg0 identifier:(id)arg1 context:(id)arg2 ;
-(void)sendCertifiedDeliveryReceipt:(id)arg0 ;
-(void)sendMessageData:(id)arg0 withOptions:(id)arg1 identifier:(*id)arg2 completion:(id)arg3 ;


@end


#endif