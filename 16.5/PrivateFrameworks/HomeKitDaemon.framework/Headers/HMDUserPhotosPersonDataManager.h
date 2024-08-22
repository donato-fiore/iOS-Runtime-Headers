// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERPHOTOSPERSONDATAMANAGER_H
#define HMDUSERPHOTOSPERSONDATAMANAGER_H

@class HMFObject, NSString, NSUUID, HMFMessageDispatcher, NSNotificationCenter, HMPhotosPersonManagerSettings;
@protocol HMDCoreDataCloudChangeListener, HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMCContext.h"
#import "HMDCloudPhotosSettingObserver.h"
#import "HMDCoreDataCloudTransform.h"
#import "HMDPhotosPersonManager.h"
#import "HMDPhotosPersonManagerSettingsModel.h"
#import "HMDUser.h"

@interface HMDUserPhotosPersonDataManager : HMFObject <HMDCoreDataCloudChangeListener, HMFLogging, HMFMessageReceiver>



@property (readonly) HMCContext *backingStoreContext; // ivar: _backingStoreContext
@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver; // ivar: _cloudPhotosSettingObserver
@property (readonly) HMDCoreDataCloudTransform *cloudTransform; // ivar: _cloudTransform
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) HMDPhotosPersonManager *personManager; // ivar: _personManager
@property (copy) id *personManagerFactory; // ivar: _personManagerFactory
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (retain) HMDPhotosPersonManagerSettingsModel *settingsModel; // ivar: _settingsModel
@property (readonly) Class superclass;
@property (readonly) BOOL supportsFaceClassification; // ivar: _supportsFaceClassification
@property (weak) HMDUser *user; // ivar: _user
@property (readonly, copy) NSUUID *userUUID; // ivar: _userUUID
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, copy) NSUUID *zoneUUID;


+(id)defaultSettings;
+(id)logCategory;
+(id)settingsModelUUIDWithUUID:(id)arg0 ;
-(BOOL)shouldUseUserModelForSettings;
-(id)initWithUser:(id)arg0 messageDispatcher:(id)arg1 backingStoreContext:(id)arg2 cloudTransform:(id)arg3 workQueue:(id)arg4 supportsFaceClassification:(BOOL)arg5 notificationCenter:(id)arg6 cloudPhotosSettingObserver:(id)arg7 ;
-(id)initWithUser:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 ;
-(id)logIdentifier;
-(id)persistedSettingsModel;
-(id)photosPersonManagerZoneUUIDForAnyOtherHomeCurrentUser;
-(id)updateSettingsModelWithSettings:(id)arg0 ;
-(void)_handleUpdatedSettingsModel:(id)arg0 ;
-(void)configure;
-(void)configurePhotosPersonManagerWithSettingsModel:(id)arg0 ;
-(void)didInsertOrUpdateModel:(id)arg0 changedProperties:(id)arg1 ;
-(void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg0 ;
-(void)handleUpdatePersonManagerOwnerSettingsMessage:(id)arg0 ;
-(void)handleUpdatePersonManagerSettingsMessage:(id)arg0 ;
-(void)handleUpdatedUserModel:(id)arg0 ;
-(void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg0 ;
-(void)handleUserRemoteAccessDidChangeNotification:(id)arg0 ;
-(void)recoverDueToUUIDChangeFromOldUUID:(id)arg0 ;
-(void)removeCloudDataDueToUserRemoval;
-(void)removeCloudDataForZoneUUID:(id)arg0 isDueToHomeGraphObjectRemoval:(BOOL)arg1 ;
-(void)updateSettingsForCurrentCameraClipsAccess;


@end


#endif