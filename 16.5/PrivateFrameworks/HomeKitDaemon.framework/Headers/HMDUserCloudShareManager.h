// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERCLOUDSHAREMANAGER_H
#define HMDUSERCLOUDSHAREMANAGER_H

@class NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, HMDUserCloudShareControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHomeManager.h"
#import "HMDUserCloudShareController.h"

@interface HMDUserCloudShareManager : NSObject <HMFMessageReceiver, HMDUserCloudShareControllerDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDUserCloudShareController *userCloudShareController; // ivar: _userCloudShareController


+(id)logCategory;
-(id)currentDateForUserCloudShareController:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 dependency:(id)arg1 ;
-(id)messageDestination;
-(id)userCloudShareController:(id)arg0 timerWithInterval:(CGFloat)arg1 ;
-(void)_handleAccessoryAdded:(id)arg0 ;
-(void)_handleDeregisterRequest:(id)arg0 ;
-(void)_handleEnableMultiUserChangedNotification:(id)arg0 ;
-(void)_handleLocalHomeDataRemovedNotification:(*id)arg0 ;
-(void)_handleRegisterRequest:(id)arg0 ;
-(void)_handleUserSettingsUpdatedNotification:(id)arg0 ;
-(void)_postMultiUserStatusChangedNotification;
-(void)configureWithMessageDispatcher:(id)arg0 ;
-(void)handleHomeChangedNotification:(id)arg0 ;
-(void)handleRemoteUserClientCloudShareRepairRequest:(id)arg0 ;
-(void)handleRemoteUserClientCloudShareRequest:(id)arg0 ;
-(void)handleUsersChangedNotification:(id)arg0 ;
-(void)handleXPCConnectionInvalidated:(id)arg0 ;
-(void)registerForMessages;
-(void)userCloudShareController:(id)arg0 sendRepairInfo:(id)arg1 toConnection:(id)arg2 home:(id)arg3 containerID:(id)arg4 ;
-(void)userCloudShareController:(id)arg0 sendShareRequestMessageWithConnection:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 home:(id)arg4 shareURL:(id)arg5 shareToken:(id)arg6 containerID:(id)arg7 completion:(id)arg8 ;
-(void)userCloudShareController:(id)arg0 wakeClientForRepairWithContainerID:(id)arg1 ;
-(void)userCloudShareController:(id)arg0 wakeClientWithContainerID:(id)arg1 ;


@end


#endif