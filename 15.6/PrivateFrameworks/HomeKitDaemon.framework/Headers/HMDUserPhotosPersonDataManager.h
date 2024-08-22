// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERPHOTOSPERSONDATAMANAGER_H
#define HMDUSERPHOTOSPERSONDATAMANAGER_H

@class HMFObject, NSString, HMBLocalZone, HMFMessageDispatcher, NSUUID, HMPhotosPersonManagerSettings;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMDCloudPhotosSettingObserver.h"
#import "HMDPhotosPersonManager.h"
#import "HMDUser.h"

@interface HMDUserPhotosPersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver; // ivar: _cloudPhotosSettingObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain) HMDPhotosPersonManager *personManager; // ivar: _personManager
@property (copy) id *personManagerFactory; // ivar: _personManagerFactory
@property (copy) HMPhotosPersonManagerSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly) BOOL supportsFaceClassification; // ivar: _supportsFaceClassification
@property (weak) HMDUser *user; // ivar: _user
@property (readonly, copy) NSUUID *userUUID; // ivar: _userUUID
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, copy) NSUUID *zoneUUID;


+(id)defaultSettings;
+(id)logCategory;
+(id)settingsModelUUIDWithUUID:(id)arg0 ;
-(id)initWithUser:(id)arg0 messageDispatcher:(id)arg1 localZone:(id)arg2 workQueue:(id)arg3 ;
-(id)initWithUser:(id)arg0 messageDispatcher:(id)arg1 localZone:(id)arg2 workQueue:(id)arg3 supportsFaceClassification:(BOOL)arg4 cloudPhotosSettingObserver:(id)arg5 ;
-(id)logIdentifier;
-(id)photosPersonManagerZoneUUIDForAnyOtherHomeCurrentUser;
-(id)updateSettingsModelWithSettings:(id)arg0 ;
-(void)configure;
-(void)configurePhotosPersonManagerWithSettingsModel:(id)arg0 ;
-(void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg0 ;
-(void)handleUpdatePersonManagerSettingsMessage:(id)arg0 ;
-(void)handleUpdatedSettingsModel:(id)arg0 previousSettingsModel:(id)arg1 ;
-(void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg0 ;
-(void)handleUserRemoteAccessDidChangeNotification:(id)arg0 ;
-(void)recoverDueToUUIDChangeFromOldUUID:(id)arg0 ;
-(void)removeCloudData;
-(void)removeCloudDataForZoneUUID:(id)arg0 ;
-(void)updateSettingsForCurrentCameraClipsAccess;


@end


#endif