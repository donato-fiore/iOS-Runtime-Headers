// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETTINGSLEGACYMESSAGERECEIVER_H
#define HMDACCESSORYSETTINGSLEGACYMESSAGERECEIVER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;


#import "HMDAccessorySettingsMessenger.h"

@interface HMDAccessorySettingsLegacyMessageReceiver : HMFObject <HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (weak) HMDAccessorySettingsMessenger *messenger; // ivar: _messenger
@property (readonly) Class superclass;


-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)registerForMessagesWithHome:(id)arg0 ;
-(void)routeAccessorySettingsFetchRequestMessage:(id)arg0 ;
-(void)routeAccessorySettingsUpdateRequestMessage:(id)arg0 ;


@end


#endif