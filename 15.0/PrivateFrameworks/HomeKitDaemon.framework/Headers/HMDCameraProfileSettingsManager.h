// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERAPROFILESETTINGSMANAGER_H
#define HMDCAMERAPROFILESETTINGSMANAGER_H

@class HMFObject, NSNumber, NSString, _HMCameraUserSettings, NSUUID, HMFMessageDispatcher, NSNotificationCenter, HMFTimer;
@protocol HMFLogging, HMBLocalZoneDelegate, HMBCloudZoneDelegate, HMBLocalZoneModelObserver, HMDCharacteristicsAvailabilityListenerDelegate, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFTimerDelegate, HMFMessageReceiver, HMDCameraProfileSettingsManagerDelegate, OS_dispatch_queue;


#import "HMDAppleAccountManager.h"
#import "HMDBulletinBoard.h"
#import "HMDCharacteristicsAvailabilityListener.h"
#import "HMDCameraProfileSettingsModel.h"
#import "HMDCameraProfileSettingsDerivedPropertiesModel.h"
#import "HMDFeaturesDataSource.h"
#import "HMDHAPAccessory.h"
#import "HMDDatabaseZoneManager.h"

@interface HMDCameraProfileSettingsManager : HMFObject <HMFLogging, HMBLocalZoneDelegate, HMBCloudZoneDelegate, HMBLocalZoneModelObserver, HMDCharacteristicsAvailabilityListenerDelegate, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFTimerDelegate, HMFMessageReceiver>



@property (readonly) HMDAppleAccountManager *accountManager; // ivar: _accountManager
@property (copy, getter=isAnyUserAtHome) NSNumber *anyUserAtHome; // ivar: _anyUserAtHome
@property (readonly) HMDBulletinBoard *bulletinBoard; // ivar: _bulletinBoard
@property (readonly, getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property (readonly) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener; // ivar: _characteristicsAvailabilityListener
@property (readonly) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly) _HMCameraUserSettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMDCameraProfileSettingsModel *defaultSettingsModel;
@property (weak) NSObject<HMDCameraProfileSettingsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly) HMDCameraProfileSettingsDerivedPropertiesModel *derivedPropertiesModel;
@property (readonly, copy) NSUUID *derivedPropertiesModelID;
@property (readonly, copy) NSString *description;
@property (readonly) HMDFeaturesDataSource *featuresDataSource; // ivar: _featuresDataSource
@property (weak) HMDHAPAccessory *hapAccessory; // ivar: _hapAccessory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, getter=isRecordingEnabled) BOOL recordingEnabled;
@property (retain) HMFTimer *safeModeTimer; // ivar: _safeModeTimer
@property (copy) id *safeModeTimerFactory; // ivar: _safeModeTimerFactory
@property (readonly) Class superclass;
@property (readonly) NSUInteger supportedFeatures;
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) HMDDatabaseZoneManager *zoneManager; // ivar: _zoneManager
@property (readonly) NSString *zoneName;


+(id)logCategory;
+(id)zoneNameForHome:(id)arg0 ;
-(BOOL)_migrateNotificationSettings:(id)arg0 ;
-(BOOL)_migrateSettingsModel:(id)arg0 ;
-(BOOL)_shouldQueryCanDisableRecordingForAccessMode:(NSUInteger)arg0 isAtHome:(BOOL)arg1 currentSettings:(id)arg2 ;
-(BOOL)_shouldQueryCanEnableRecordingForAccessMode:(NSUInteger)arg0 currentSettings:(id)arg1 ;
-(BOOL)isCurrentDeviceConfirmedPrimaryResident;
-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(BOOL)zoneManager:(id)arg0 shouldRequestShareInvitationFromUser:(id)arg1 ;
-(id)_createNotificationSettingsUsingSettingsModel:(id)arg0 ;
-(id)_isAnyUserAtHomeForPresence:(id)arg0 ;
-(id)_localZoneUpdateCompletionForMessage:(SEL)arg0 ;
-(id)_payloadForSettings:(id)arg0 ;
-(id)_processingOptionsForMessage:(id)arg0 ;
-(id)_settingsFromSettingsModel:(id)arg0 ;
-(id)_settingsModelForUpdate;
-(id)_updatedDerivedPropertiesModelWithSettingsModel:(id)arg0 userInitiated:(BOOL)arg1 didCreateModel:(*BOOL)arg2 ;
-(id)currentNotificationSettings;
-(id)doorbellInputEventCharacteristic;
-(id)initWithHAPAccessory:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg0 hapAccessory:(id)arg1 workQueue:(id)arg2 zoneManager:(id)arg3 notificationCenter:(id)arg4 bulletinBoard:(id)arg5 characteristicsAvailabilityListener:(id)arg6 featuresDataSource:(id)arg7 accountManager:(id)arg8 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(id)logIdentifier;
-(id)manuallyDisabledCharacteristic;
-(id)messageDestination;
-(void)_addAccessModeCharacteristicWriteRequestsToArray:(id)arg0 currentAccessMode:(NSUInteger)arg1 ;
-(void)_addHomeKitCameraActiveCharacteristicWriteRequestToArray:(id)arg0 currentAccessMode:(NSUInteger)arg1 ;
-(void)_addNightVisionCharacteristicWriteRequestToArray:(id)arg0 nightVisionEnabled:(BOOL)arg1 ;
-(void)_addOperatingModeIndicatorCharacteristicWriteRequestToArray:(id)arg0 accessModeIndicatorEnabled:(BOOL)arg1 ;
-(void)_addPeriodicSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg0 periodicSnapshotsAllowed:(BOOL)arg1 ;
-(void)_addRecordingAudioEnabledWriteRequestToArray:(id)arg0 recordingAudioEnabled:(BOOL)arg1 ;
-(void)_addSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg0 snapshotsAllowed:(BOOL)arg1 ;
-(void)_addVideoAnalysisActiveWriteRequestToArray:(id)arg0 currentAccessMode:(NSUInteger)arg1 ;
-(void)_addWriteRequestToArray:(id)arg0 forCharacteristicWithType:(id)arg1 ofServiceWithType:(id)arg2 value:(id)arg3 ;
-(void)_coordinateSmartBulletinNotificationWithServiceBulletinNotification:(id)arg0 ;
-(void)_enablePackageNotificationsOnSettings:(id)arg0 ;
-(void)_evaluateHomePresence;
-(void)_handleBulletinBoardNotificationCommitMessage:(id)arg0 ;
-(void)_handleCharacteristicWriteRequests:(id)arg0 ;
-(void)_handleConnectedToAccessory;
-(void)_handleModelUpdate:(id)arg0 previousModel:(id)arg1 ;
-(void)_handleUpdateAccessModeChangeNotificationEnabledMessage:(id)arg0 ;
-(void)_handleUpdateAccessModeIndicatorEnabledMessage:(id)arg0 ;
-(void)_handleUpdateAccessModeMessage:(id)arg0 ;
-(void)_handleUpdateActivityZonesMessage:(id)arg0 ;
-(void)_handleUpdateNightVisionModeEnabledMessage:(id)arg0 ;
-(void)_handleUpdateReachabilityEventNotificationEnabledMessage:(id)arg0 ;
-(void)_handleUpdateRecordingAudioEnabledMessage:(id)arg0 ;
-(void)_handleUpdateRecordingTriggerEventsMessage:(id)arg0 ;
-(void)_handleUpdateSnapshotsAllowedMessage:(id)arg0 ;
-(void)_handleUpdatedDerivedProperties:(id)arg0 previousProperties:(id)arg1 ;
-(void)_handleUpdatedSettings:(id)arg0 previousSettings:(id)arg1 ;
-(void)_initializeNotificationSettingsUsingSettingsModel:(id)arg0 ;
-(void)_notifyClientsOfChangedSettings:(id)arg0 isInitialSettingsUpdate:(BOOL)arg1 ;
-(void)_notifyClientsOfChangedSettingsModel:(id)arg0 isInitialSettingsUpdate:(BOOL)arg1 ;
-(void)_notifyClientsOfCurrentSettings;
-(void)_populateCurrentAccessModeFieldForDerivedProperties:(id)arg0 currentSettings:(id)arg1 userInitiated:(BOOL)arg2 didUpdateField:(*BOOL)arg3 ;
-(void)_setManuallyDisabledCharacteristicNotificationsEnabled:(BOOL)arg0 ;
-(void)_startSafeModeTimer;
-(void)_synchronizeAllSettingsToCamera;
-(void)_updateDerivedPropertiesModelWithSettingsModel:(id)arg0 userInitiated:(BOOL)arg1 reason:(id)arg2 ;
-(void)_updateNotificationSettings:(id)arg0 forMessage:(id)arg1 ;
-(void)_updateSettingsWithDerivedProperties:(id)arg0 ;
-(void)configureWithMessageDispatcher:(id)arg0 adminMessageDispatcher:(id)arg1 deviceIsResidentCapable:(BOOL)arg2 ;
-(void)dealloc;
-(void)disableRecordingAccessModes;
-(void)handleAccessoryConnectedNotification:(id)arg0 ;
-(void)handleAccessoryServiceAddedNotification:(id)arg0 ;
-(void)handleBulletinNotificationEnableStateDidChangeNotification:(id)arg0 ;
-(void)handleCharacteristicsValueUpdatedNotification:(id)arg0 ;
-(void)handleHomePresenceEvaluatedNotification:(id)arg0 ;
-(void)handlePrimaryResidentUpdatedNotification:(id)arg0 ;
-(void)handleRecordingManagementServiceDidUpdateNotification:(id)arg0 ;
-(void)listener:(id)arg0 didUpdateAvailableCharacteristics:(id)arg1 ;
-(void)remove;
-(void)start;
-(void)timerDidFire:(id)arg0 ;
-(void)zoneManagerDidStart:(id)arg0 ;
-(void)zoneManagerDidStop:(id)arg0 ;


@end


#endif