// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEMEDIAACCESSORY_H
#define HMDAPPLEMEDIAACCESSORY_H

@class HMMediaDestination, HMMediaDestinationControllerData, NSString, HMFPairingIdentity, HMFWiFiNetworkInfo, NSNotificationCenter, HMFActivity, HMFSoftwareVersion, NSArray, HMFWiFiManager;
@protocol HMDAppleMediaAccessoryLocalMessageHandlerDataSource, HMDLanguageValueListSettingDataProvider, HMDAppleMediaAccessoryMessengerFactory, HMDAppleMediaAccessoryMessageRouterDataSource, HMDAppleMediaAccessoryMetricsDispatcherDataSource, HMDAppleMediaAccessorySleepWakeStateControllerDataSource, HMDDeviceControllerDelegate, HMDFetchedAccessorySettingsControllerDataSource, HMDAppleMediaAccessoryInfoControllerDataSource, HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate, HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessoryUserManagement, HMFLogging, OS_os_log, HMDAppleMediaAccessoryDataSource, HMEEventForwarder, HMELastEventStoreReadHandle;


#import "HMDMediaAccessory.h"
#import "HMDDevice.h"
#import "HMDDeviceController.h"
#import "HMDAccessorySetupMetricDispatcher.h"
#import "HMDMediaDestinationController.h"
#import "HMDMediaDestinationManager.h"
#import "HMDBackingStore.h"
#import "HMDAppleMediaAccessoryInfoController.h"
#import "HMDFetchedAccessorySettingsController.h"
#import "HMDHome.h"
#import "HMDAppleMediaAccessoryMessenger.h"
#import "HMDAppleMediaAccessoryMetricsDispatcher.h"
#import "HMDRemoteLoginHandler.h"
#import "HMDAccessorySettingsController.h"
#import "HMDAppleMediaAccessorySleepWakeStateController.h"
#import "HMDAccessorySymptomHandler.h"
#import "HMDTargetControlManager.h"

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMDAppleMediaAccessoryLocalMessageHandlerDataSource, HMDLanguageValueListSettingDataProvider, HMDAppleMediaAccessoryMessengerFactory, HMDAppleMediaAccessoryMessageRouterDataSource, HMDAppleMediaAccessoryMetricsDispatcherDataSource, HMDAppleMediaAccessorySleepWakeStateControllerDataSource, HMDDeviceControllerDelegate, HMDFetchedAccessorySettingsControllerDataSource, HMDAppleMediaAccessoryInfoControllerDataSource, HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate, HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessoryUserManagement, HMFLogging>

 {
    HMDDevice *_device;
    HMDDeviceController *_deviceController;
    HMMediaDestination *_committedAudioDestination;
    HMMediaDestinationControllerData *_committedAudioDestinationControllerData;
    NSObject<OS_os_log> *_logger;
}


@property (readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property (readonly) HMMediaDestination *audioDestination;
@property (retain) HMDMediaDestinationController *audioDestinationController; // ivar: _audioDestinationController
@property (readonly) HMMediaDestinationControllerData *audioDestinationControllerData;
@property (retain) HMDMediaDestinationManager *audioDestinationManager; // ivar: _audioDestinationManager
@property (readonly) HMDBackingStore *backingStore;
@property (retain) HMDAppleMediaAccessoryInfoController *currentAccessoryInfoController; // ivar: _currentAccessoryInfoController
@property (retain) HMDFetchedAccessorySettingsController *currentAccessorySettingsController; // ivar: _currentAccessorySettingsController
@property (weak) NSObject<HMDAppleMediaAccessoryDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly, copy) id *deviceMediaRouteIdentifierFactory; // ivar: _deviceMediaRouteIdentifierFactory
@property (nonatomic, getter=isDeviceReachable) BOOL deviceReachable; // ivar: _deviceReachable
@property (readonly) NSObject<HMEEventForwarder> *eventForwarder;
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly, nonatomic) NSInteger fallbackMediaUserType; // ivar: _fallbackMediaUserType
@property (nonatomic) BOOL fixedPairingIdentityInCloud; // ivar: _fixedPairingIdentityInCloud
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home;
@property (readonly) NSUInteger homePodVariant;
@property (retain, nonatomic) HMFPairingIdentity *lastCreatedPairingIdentity; // ivar: _lastCreatedPairingIdentity
@property (retain) HMFWiFiNetworkInfo *lastStagedWifiNetworkInfo; // ivar: _lastStagedWifiNetworkInfo
@property (readonly) BOOL legacyLocationServicesEnabled;
@property (retain) HMDAppleMediaAccessoryMessenger *messenger; // ivar: _messenger
@property (retain) HMDAppleMediaAccessoryMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) HMFPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property NSInteger productColor; // ivar: _productColor
@property (readonly) HMDRemoteLoginHandler *remoteLoginHandler; // ivar: _remoteLoginHandler
@property (copy) id *settingsConnectionFactory; // ivar: _settingsConnectionFactory
@property (retain) HMDAccessorySettingsController *settingsController; // ivar: _settingsController
@property (retain) HMFActivity *setupActivity;
@property CGFloat setupStartTimestamp;
@property (retain) HMDAppleMediaAccessorySleepWakeStateController *sleepWakeStateController; // ivar: _sleepWakeStateController
@property (readonly) HMFSoftwareVersion *softwareVersion; // ivar: _softwareVersion
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain) NSArray *supportedMultiUserLanguageCodes; // ivar: _supportedMultiUserLanguageCodes
@property NSUInteger supportedStereoPairVersions; // ivar: _supportedStereoPairVersions
@property (readonly) BOOL supportsUserManagement;
@property (readonly) BOOL supportsUserMediaSettings;
@property (readonly) HMDAccessorySymptomHandler *symptomsHandler; // ivar: _symptomsHandler
@property (retain, nonatomic) HMDTargetControlManager *targetControlManager; // ivar: _targetControlManager
@property NSUInteger variant; // ivar: _variant
@property (retain) HMFWiFiManager *wifiManager; // ivar: _wifiManager
@property (readonly) HMFWiFiNetworkInfo *wifiNetworkInfo; // ivar: _wifiNetworkInfo


+(BOOL)hasMessageReceiverChildren;
+(BOOL)shouldAcceptMessage:(id)arg0 home:(id)arg1 privilege:(NSUInteger)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_allowSoftwareUpdateChangeFromSource:(NSUInteger)arg0 ;
-(BOOL)_shouldFilterAccessoryProfile:(id)arg0 ;
-(BOOL)isB520Accessory;
-(BOOL)isCurrentAccessory;
-(BOOL)isCurrentDevicePrimaryResident;
-(BOOL)isMultiUserEnabledForAccessorySettingsController:(id)arg0 ;
-(BOOL)isRemotelyReachable;
-(BOOL)isTriggeredOnControllerDeviceForMediaDestinationControllerMetricsEventDispatcher:(id)arg0 ;
-(BOOL)requiresHomeAppForManagement;
-(BOOL)shouldUpdateWithDevice:(id)arg0 initialConfiguration:(BOOL)arg1 ;
-(BOOL)supportsAnnounce;
-(BOOL)supportsCompanionInitiatedRestart;
-(BOOL)supportsCoordinationDoorbellChime;
-(BOOL)supportsDoorbellChime;
-(BOOL)supportsHomeHub;
-(BOOL)supportsHomeLevelLocationServiceSetting;
-(BOOL)supportsManagedConfigurationProfile;
-(BOOL)supportsMediaContentProfile;
-(BOOL)supportsMessagedHomePodSettings;
-(BOOL)supportsMultiUser;
-(BOOL)supportsMusicAlarm;
-(BOOL)supportsPersonalRequests;
-(BOOL)supportsPreferredMediaUser;
-(BOOL)supportsSettings;
-(BOOL)supportsSoftwareUpdate;
-(BOOL)supportsTargetControl;
-(BOOL)supportsThirdPartyMusic;
-(NSInteger)mediaDestinationControllerMetricsEventDispatcher:(id)arg0 destinationTypeForDestinationWithIdentifier:(id)arg1 ;
-(NSInteger)reachableTransports;
-(id)_createMediaProfile;
-(id)accessoryInfoController:(id)arg0 topicForKeyPath:(id)arg1 ;
-(id)accessoryUUID;
-(id)accessoryWithUUID:(id)arg0 forAppleMediaAccessoryLocalMessageHandler:(id)arg1 ;
-(id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)arg0 ;
-(id)assistantObject;
-(id)availableDestinationIdentifiersForMediaDestinationController:(id)arg0 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)committedAudioDestination;
-(id)committedAudioDestinationControllerData;
-(id)controller:(id)arg0 topicForKeyPath:(id)arg1 ;
-(id)createAppleMediaAccessoryMessengerWithIdentifier:(id)arg0 messageDispatcher:(id)arg1 router:(id)arg2 localHandler:(id)arg3 ;
-(id)currentDestinationTypeForMediaDestinationControllerMetricsEventDispatcher:(id)arg0 ;
-(id)currentDeviceProductInfoForAppleMediaAccessorySleepWakeStateController:(id)arg0 ;
-(id)currentRoomForAppleMediaAccessoryMetricsDispatcher:(id)arg0 ;
-(id)currentUserForMediaDestinationControllerMetricsEventDispatcher:(id)arg0 ;
-(id)deviceForAppleMediaAccessoryMessageRouter:(id)arg0 message:(id)arg1 ;
-(id)deviceForAppleMediaAccessorySleepWakeStateController:(id)arg0 ;
-(id)dumpSimpleState;
-(id)dumpState;
-(id)eventSourceIdentifierNameForAccessoryInfoController:(id)arg0 ;
-(id)eventSourceIdentifierNameForFetchedSettingsController:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceController:(id)arg0 deviceIdentifierFactory:(id)arg1 ;
-(id)initWithTransaction:(id)arg0 home:(id)arg1 ;
-(id)languageValueList;
-(id)logIdentifier;
-(id)mediaDestinationController:(id)arg0 destinationManagerWithIdentifier:(id)arg1 ;
-(id)mediaDestinationController:(id)arg0 destinationWithParentIdentifier:(id)arg1 ;
-(id)mediaDestinationController:(id)arg0 rootDestinationWithDecendantIdentifier:(id)arg1 ;
-(id)mediaDestinationManager:(id)arg0 destinationControllerWithIdentifier:(id)arg1 ;
-(id)messageReceiverChildren;
-(id)messageSendPolicy;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelsToMakeSettingsForController:(id)arg0 parentUUID:(id)arg1 ;
-(id)modelsToMigrateSettingsForController:(id)arg0 ;
-(id)remoteMessageDestination;
-(id)remoteMessageDestinationForAccessorySettingsController:(id)arg0 target:(id)arg1 ;
-(id)rootDestinationManagerForMediaDestinationManager:(id)arg0 ;
-(id)runtimeState;
-(id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)arg0 ;
-(id)targetAccessoryForMediaDestinationController:(id)arg0 ;
-(id)targetAccessoryForMediaDestinationManager:(id)arg0 ;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(void)_applySoftwareUpdateModel:(id)arg0 completion:(id)arg1 ;
-(void)_encodeMediaDestinationAndControllerDataWithCoder:(id)arg0 ;
-(void)_fetchAvailableUpdate:(id)arg0 ;
-(void)_fetchMultiUserLanguages;
-(void)_fixCloudKeyIfNeeded;
-(void)_handleTriggerPairingIdentityUpdateNotification:(id)arg0 ;
-(void)_handleUpdatedName:(id)arg0 ;
-(void)_registerForMessages;
-(void)_relayRequestMessage:(id)arg0 responseHandler:(id)arg1 ;
-(void)_removeManagedConfigurationProfileWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_startUpdate:(id)arg0 ;
-(void)_updateSoftwareVersion:(id)arg0 ;
-(void)accessorySettingsController:(id)arg0 saveWithReason:(id)arg1 ;
-(void)accessorySettingsController:(id)arg0 saveWithReason:(id)arg1 model:(id)arg2 ;
-(void)addAdvertisement:(id)arg0 ;
-(void)addUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)autoConfigureTargetControllers;
-(void)configureAppleMediaAccessoryMessengerWithFactory:(id)arg0 ;
-(void)configureAudioDestinationController;
-(void)configureAudioDestinationManager;
-(void)configureWithHome:(id)arg0 msgDispatcher:(id)arg1 configurationTracker:(id)arg2 initialConfiguration:(BOOL)arg3 ;
-(void)createAudioDestination;
-(void)createAudioDestinationController;
-(void)createPairingIdentity;
-(void)dealloc;
-(void)deleteSiriHistoryForAccessoryWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deviceController:(id)arg0 didUpdateDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleCurrentDeviceUpdated:(id)arg0 ;
-(void)handleCurrentNetworkChangedNotification:(id)arg0 ;
-(void)handleDeleteSiriHistoryRequest:(id)arg0 ;
-(void)handleDeviceIsNotReachable:(id)arg0 ;
-(void)handleDeviceIsPublishingChangedNotification:(id)arg0 ;
-(void)handleDeviceIsReachable:(id)arg0 ;
-(void)handleFetchManagedConfigurationProfiles:(id)arg0 ;
-(void)handleHomeUserRemovedNotification:(id)arg0 ;
-(void)handleRemoveManagedConfigurationProfile:(id)arg0 ;
-(void)handleRemovedMediaDestinationControllerModel:(id)arg0 message:(id)arg1 ;
-(void)handleRemovedMediaDestinationModel:(id)arg0 message:(id)arg1 ;
-(void)handleRoomChanged:(id)arg0 ;
-(void)handleRoomNameChanged:(id)arg0 ;
-(void)handleUpdatePreferredMediaUser:(id)arg0 ;
-(void)handleUpdatedMediaDestinationControllerModel:(id)arg0 message:(id)arg1 ;
-(void)handleUpdatedMediaDestinationModel:(id)arg0 message:(id)arg1 ;
-(void)languagesChangedForAccessorySettingsController:(id)arg0 ;
-(void)mediaDestinationControllerDidUpdateStagedValues:(id)arg0 ;
-(void)mediaDestinationManagerDidUpdateStagedValues:(id)arg0 ;
-(void)migrateAudioDestinationControllerWithCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)migrateAudioDestinationWithCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)migrateWithCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)notifyClientsOfUpdatedAccessoryControllableValue:(BOOL)arg0 ;
-(void)notifyFrameworkOfUpdatedPairingIdentity;
-(void)pairingsWithCompletionHandler:(id)arg0 ;
-(void)populateModelObject:(id)arg0 version:(NSInteger)arg1 ;
-(void)registerForPublishingNotifications;
-(void)removeAdvertisement:(id)arg0 ;
-(void)removeAudioDestination;
-(void)removeManagedConfigurationProfileWithProfileData:(id)arg0 completion:(id)arg1 ;
-(void)removeUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)runTransactionWithPreferredMediaUserUUID:(id)arg0 selectionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setRemotelyReachable:(BOOL)arg0 ;
-(void)startMonitoringReachability;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateProductInformation;
-(void)updateRechabilityFromDevicePublishingState;
-(void)updateWiFiNetworkInfo;
-(void)updateWithDevice:(id)arg0 ;


@end


#endif