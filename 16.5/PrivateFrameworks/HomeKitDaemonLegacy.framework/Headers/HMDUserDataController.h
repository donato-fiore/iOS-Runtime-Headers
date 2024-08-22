// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERDATACONTROLLER_H
#define HMDUSERDATACONTROLLER_H

@class NSArray, NSMutableSet, HMBModel, NSUUID, NSString, NSNotificationCenter, NSDictionary, HMFTimer;
@protocol HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, HMDSharedUserDataModelUpdateReceiver, HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver, HMFLogging, HMFTimerDelegate, OS_dispatch_queue, HMDUserDataControllerDataSource, HMDUserDataControllerDelegate, HMDSettingsControllerProtocol, HMDUserDataControllerTimerCreator;

#import <Foundation/Foundation.h>


@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDUserListeningHistoryUpdateControlModelUpdateReceiver, HMDSharedUserDataModelUpdateReceiver, HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver, HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    BOOL _isModifyingState;
}


@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (retain) NSMutableSet *assistantAccessControlAccessoryUUIDs; // ivar: _assistantAccessControlAccessoryUUIDs
@property BOOL assistantAccessControlActivityNotificationsEnabledForPersonalRequests; // ivar: _assistantAccessControlActivityNotificationsEnabledForPersonalRequests
@property (readonly, copy) HMBModel *assistantAccessControlModelToReset;
@property (retain) NSUUID *assistantAccessControlModelUUID; // ivar: _assistantAccessControlModelUUID
@property BOOL assistantAccessControlRequiresAuthenticationForSecureRequests; // ivar: _assistantAccessControlRequiresAuthenticationForSecureRequests
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, weak) NSObject<HMDUserDataControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDUserDataControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasUserSeenRMVNewLanguageNotification;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (readonly) BOOL isInitialized;
@property (readonly) BOOL isRecognizeMyVoiceEnabled;
@property (retain) NSMutableSet *mediaContentProfileAccessControlAccessories; // ivar: _mediaContentProfileAccessControlAccessories
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID; // ivar: _mediaContentProfileAccessControlModelUUID
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSDictionary *privateSettingValuesByKeyPath;
@property (readonly) NSObject<HMDSettingsControllerProtocol> *privateSettingsController; // ivar: _privateSettingsController
@property (retain) NSUUID *privateSettingsRootUUID; // ivar: _privateSettingsRootUUID
@property (retain, nonatomic) HMFTimer *privateZoneFirstLoadTimer; // ivar: _privateZoneFirstLoadTimer
@property (readonly, copy) NSDictionary *sharedSettingValuesByKeyPath;
@property (readonly) NSObject<HMDSettingsControllerProtocol> *sharedSettingsController; // ivar: _sharedSettingsController
@property (retain) NSUUID *sharedSettingsRootUUID; // ivar: _sharedSettingsRootUUID
@property (retain, nonatomic) HMFTimer *sharedZoneFirstLoadTimer; // ivar: _sharedZoneFirstLoadTimer
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property BOOL supportsAutomaticHH2Migration; // ivar: _supportsAutomaticHH2Migration
@property (retain) NSUUID *supportsAutomaticHH2MigrationModelUUID; // ivar: _supportsAutomaticHH2MigrationModelUUID
@property (readonly) NSObject<HMDUserDataControllerTimerCreator> *timerCreator; // ivar: _timerCreator
@property (retain) NSMutableSet *userListeningHistoryUpdateControlModelAccessories; // ivar: _userListeningHistoryUpdateControlModelAccessories
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;
@property (retain) NSUUID *userListeningHistoryUpdateControlModelUUID; // ivar: _userListeningHistoryUpdateControlModelUUID
@property (readonly) NSUUID *userUUID; // ivar: _userUUID


+(id)logCategory;
-(BOOL)_userListeningHistoryValueFromModels:(id)arg0 ;
-(NSInteger)sharedUserSettingsLogEventBackingStoreControllerRunState;
-(id)_keyPathToModelFromKeyPath:(id)arg0 models:(id)arg1 ;
-(id)_migrateUserListeningHistoryUpdateControlWithUserCurrentDataModel:(id)arg0 transaction:(id)arg1 settingModels:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 dataSource:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6 isCurrentUser:(BOOL)arg7 ;
-(id)initWithDelegate:(id)arg0 dataSource:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6 timerCreator:(id)arg7 isCurrentUser:(BOOL)arg8 ;
-(id)logIdentifier;
-(id)updateListeningHistoryModelToReset;
-(void)_invalidatePrivateZoneFirstLoadTimer;
-(void)_invalidateSharedZoneFirstLoadTimer;
-(void)_migrateUserSupportsAutomaticHH2MigrationUserCurrentDataModel:(id)arg0 transaction:(id)arg1 ;
-(void)_startPrivateZoneFirstLoadTimer;
-(void)_startSharedZoneFirstLoadTimer;
-(void)_startupPrivateZone;
-(void)_startupSharedZone;
-(void)assistantAccessControlModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)assistantAccessControlModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)configure;
-(void)enableUserListeningHistoryForAccessory:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)eventDidInitializePrivateZone;
-(void)eventDidInitializeSharedZone;
-(void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg0 requireAuthenticationForSecureRequests:(BOOL)arg1 activityNotificationsEnabledForPersonalRequests:(BOOL)arg2 completion:(id)arg3 ;
-(void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)handleRemovedAccessory:(id)arg0 ;
-(void)handleStartForZoneController:(id)arg0 ;
-(void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)initializePrivateZoneController:(id)arg0 userDataModel:(id)arg1 ;
-(void)initializeSharedZoneController:(id)arg0 userDataModel:(id)arg1 ;
-(void)mediaContentProfileAccessControlModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)mediaContentProfileAccessControlModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)performFirstRunOperationsOnPrivateZoneController:(id)arg0 ;
-(void)performFirstRunOperationsOnSharedZoneController:(id)arg0 ;
-(void)sharedUserDataModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateSupportsAutomaticHH2Migration:(BOOL)arg0 completion:(id)arg1 ;
-(void)userListeningHistoryUpdateControlModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)userListeningHistoryUpdateControlModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)userSupportsAutomaticHH2MigrationModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)userSupportsAutomaticHH2MigrationModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;


@end


#endif