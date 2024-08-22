// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSETTINGMESSAGEMAPPER_H
#define HMDSETTINGMESSAGEMAPPER_H

@class HMFObject, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, OS_dispatch_queue;



@interface HMDSettingMessageMapper : HMFObject <HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 ;
-(void)deregisterFromAllMessages;
-(void)registerForMessage:(id)arg0 policies:(id)arg1 messageDispatcher:(id)arg2 messageHandler:(id)arg3 ;


@end


#endif