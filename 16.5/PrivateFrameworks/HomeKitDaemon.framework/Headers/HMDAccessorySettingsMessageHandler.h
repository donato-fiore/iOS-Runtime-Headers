// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETTINGSMESSAGEHANDLER_H
#define HMDACCESSORYSETTINGSMESSAGEHANDLER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSUUID, NSMapTable;
@protocol HMFLogging, HMFMessageReceiver, HMDAccessorySettingsMessageHandler, HMDAccessorySettingsMessageController, OS_dispatch_queue;


#import "HMDUserMessagePolicy.h"

@interface HMDAccessorySettingsMessageHandler : HMFObject <HMFLogging, HMFMessageReceiver, HMDAccessorySettingsMessageHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) NSObject<HMDAccessorySettingsMessageController> *messageController; // ivar: _messageController
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (retain) HMDUserMessagePolicy *onlyOwnerAllowedUserPolicy; // ivar: _onlyOwnerAllowedUserPolicy
@property (readonly) NSMapTable *settingMessageMap; // ivar: _settingMessageMap
@property (retain) HMDUserMessagePolicy *sharedAdminAllowedUserPolicy; // ivar: _sharedAdminAllowedUserPolicy
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_decodeUpdateValueMessagePayload:(id)arg0 outValue:(*id)arg1 ;
-(BOOL)processReplaceConstraintMessage:(id)arg0 outConstraintsToAdd:(*id)arg1 outConstraintIdsToRemove:(*id)arg2 ;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(id)messageMapperForSetting:(id)arg0 ;
-(void)_handleAddConstraint:(id)arg0 ;
-(void)_handleRemoveConstraint:(id)arg0 ;
-(void)_handleReplaceConstraints:(id)arg0 ;
-(void)_handleReplaceConstraintsForKeyPath:(id)arg0 ;
-(void)_handleSettingUpdateValue:(id)arg0 ;
-(void)_handleSettingUpdateValueByKeyPath:(id)arg0 ;
-(void)_handleUpdatedConstraints:(id)arg0 ;
-(void)configureForSetting:(id)arg0 allowSharedAdminEditConstraints:(BOOL)arg1 ;
-(void)configureWithMessageDispatcher:(id)arg0 home:(id)arg1 ;
-(void)notifyOfUpdatedValue:(id)arg0 settingKeyPath:(id)arg1 ;
-(void)registerForMessages;
-(void)registerForSettingMessages:(id)arg0 ;
-(void)relayReplaceConstraints:(id)arg0 constraintIdsToRemove:(id)arg1 keyPath:(id)arg2 destination:(id)arg3 completion:(id)arg4 ;
-(void)relayUpdateValue:(id)arg0 keyPath:(id)arg1 destination:(id)arg2 completion:(id)arg3 ;
-(void)unconfigureFromSetting:(id)arg0 ;


@end


#endif