// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORIESSTATEMESSENGER_H
#define HMDAPPLEMEDIAACCESSORIESSTATEMESSENGER_H

@class HMFObject, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMFMessageReceiver, HMDAppleMediaAccessoriesStateMessengerDelegate, OS_dispatch_queue;



@interface HMDAppleMediaAccessoriesStateMessenger : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDAppleMediaAccessoriesStateMessengerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 messageDispatcher:(id)arg1 ;
-(id)logIdentifier;
-(id)relayMessageName:(id)arg0 payload:(id)arg1 toAppleMediaAccessory:(id)arg2 ;
-(void)handleAppleMediaAccessoryModelIdentiferRequestMessage:(id)arg0 ;
-(void)registerForMessagesWithHome:(id)arg0 ;
-(void)sendModelIdentifierRequestMessageToAppleMediaAccessory:(id)arg0 withAccessoryIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif