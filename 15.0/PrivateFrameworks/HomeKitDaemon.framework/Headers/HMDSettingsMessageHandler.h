// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSETTINGSMESSAGEHANDLER_H
#define HMDSETTINGSMESSAGEHANDLER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSMapTable;
@protocol HMDSettingsMessageHandlerProtocol, HMFLogging, HMDSettingsMessageController, OS_dispatch_queue;


#import "HMDUserMessagePolicy.h"

@interface HMDSettingsMessageHandler : HMFObject <HMDSettingsMessageHandlerProtocol, HMFLogging>



@property (retain) HMDUserMessagePolicy *anyUserAllowedPolicy; // ivar: _anyUserAllowedPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isCurrentUser; // ivar: _isCurrentUser
@property (weak) NSObject<HMDSettingsMessageController> *messageController; // ivar: _messageController
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSMapTable *settingGroupMessageMap; // ivar: _settingGroupMessageMap
@property (retain) NSMapTable *settingMessageMap; // ivar: _settingMessageMap
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_applyOnlyCurrentUserAllowedPolicy:(id)arg0 ;
-(id)_checkIsCurrentUser:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)messageMapperForSetting:(id)arg0 ;
-(id)messageMapperForSettingGroup:(id)arg0 ;
-(void)_handleAddConstraint:(id)arg0 setting:(id)arg1 ;
-(void)_handleRemoveConstraint:(id)arg0 setting:(id)arg1 ;
-(void)_handleReplaceConstraints:(id)arg0 setting:(id)arg1 ;
-(void)_handleUpdateValue:(id)arg0 setting:(id)arg1 ;
-(void)_handleUpdatedConstraints:(id)arg0 setting:(id)arg1 ;
-(void)configureForSetting:(id)arg0 ;
-(void)configureForSettingGroup:(id)arg0 ;
-(void)configureWithMessageDispatcher:(id)arg0 home:(id)arg1 isCurrentUser:(BOOL)arg2 ;
-(void)registerForMessages;
-(void)registerForSettingGroupMessages:(id)arg0 ;
-(void)registerForSettingMessages:(id)arg0 ;
-(void)unconfigureFromSetting:(id)arg0 ;
-(void)unconfigureFromSettingGroup:(id)arg0 ;


@end


#endif