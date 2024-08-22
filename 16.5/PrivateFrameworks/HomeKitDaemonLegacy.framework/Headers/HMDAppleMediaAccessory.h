// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORY_H
#define HMDAPPLEMEDIAACCESSORY_H

@class HMMediaDestination, HMMediaDestinationControllerData, HMDAudioAnalysisEventSubscriber, HMDAudioAnalysisRequestManager, HMAccessoryCapabilities, NSString, NSHashTable, NSUUID, HMFPairingIdentity, HMFWiFiNetworkInfo, NSNotificationCenter, NSData, HMFActivity, HMFSoftwareVersion, NSArray, HMFWiFiManager;
@protocol HMDAppleMediaAccessoryLocalMessageHandlerDataSource, HMDLanguageValueListSettingDataProvider, HMDAppleMediaAccessoryMessengerFactory, HMDAppleMediaAccessoryMessageRouterDataSource, HMDAppleMediaAccessoryMetricsDispatcherDataSource, HMDAppleMediaAccessorySleepWakeStateControllerDataSource, HMDDeviceControllerDelegate, HMDFetchedAccessorySettingsControllerDataSource, HMDAppleMediaAccessoryInfoControllerDataSource, HMDAppleMediaAccessoryInfoControllerDelegate, HMDAppleMediaAccessoryInfoSubscriberDataSource, HMDAppleMediaAccessoryInfoSubscriberDelegate, HMDAppleMediaAccessorySensorManagerDataSource, HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate, HMDMediaDestinationControllerFactory, HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate, HMDMediaDestinationManagerFactory, HMDPreferredMediaUserEventControllerDataSource, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessoryUserManagement, HMFLogging, OS_os_log, HMAccessoryCapabilities, HMDAppleMediaAccessoryDataSource, HMDAppleMediaAccessoryDependencyFactory, HMEEventForwarder, HMELastEventStoreReadHandle, HMMLogEventSubmitting, HMDMessageRouter, HMDAppleMediaAccessoryModelDataSource, HMESubscriptionProviding;


#import "HMDMediaAccessory.h"
#import "HMDDevice.h"
#import "HMDDeviceController.h"
#import "HMDAppleMediaAccessoryInfoSubscriber.h"
#import "HMDAccessorySetupMetricDispatcher.h"
#import "HMDBulletinBoardNotification.h"
#import "HMDMediaDestinationController.h"
#import "HMDMediaDestinationManager.h"
#import "HMDBackingStore.h"
#import "HMDAppleMediaAccessoryInfoController.h"
#import "HMDFetchedAccessorySettingsController.h"
#import "HMDCurrentAccessorySetupMetricDispatcher.h"
#import "HMDHome.h"
#import "HMDAppleMediaAccessoryMessenger.h"
#import "HMDAppleMediaAccessoryMetricsDispatcher.h"
#import "HMDPreferredMediaUserEventController.h"
#import "HMDRemoteLoginHandler.h"
#import "HMDAppleMediaAccessorySensorManager.h"
#import "HMDAccessorySettingsController.h"
#import "HMDAppleMediaAccessorySleepWakeStateController.h"
#import "HMDAccessorySymptomHandler.h"
#import "HMDTargetControlManager.h"

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMDAppleMediaAccessoryLocalMessageHandlerDataSource, HMDLanguageValueListSettingDataProvider, HMDAppleMediaAccessoryMessengerFactory, HMDAppleMediaAccessoryMessageRouterDataSource, HMDAppleMediaAccessoryMetricsDispatcherDataSource, HMDAppleMediaAccessorySleepWakeStateControllerDataSource, HMDDeviceControllerDelegate, HMDFetchedAccessorySettingsControllerDataSource, HMDAppleMediaAccessoryInfoControllerDataSource, HMDAppleMediaAccessoryInfoControllerDelegate, HMDAppleMediaAccessoryInfoSubscriberDataSource, HMDAppleMediaAccessoryInfoSubscriberDelegate, HMDAppleMediaAccessorySensorManagerDataSource, HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate, HMDMediaDestinationControllerFactory, HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate, HMDMediaDestinationManagerFactory, HMDPreferredMediaUserEventControllerDataSource, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessoryUserManagement, HMFLogging>

 {
    HMDDevice *_device;
    HMDDeviceController *_deviceController;
    HMMediaDestination *_committedAudioDestination;
    HMMediaDestinationControllerData *_committedAudioDestinationControllerData;
    NSObject<OS_os_log> *_logger;
}


@property (retain) HMDAppleMediaAccessoryInfoSubscriber *accessoryInfoSubscriber; // ivar: _accessoryInfoSubscriber
@property (readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property (retain) HMDBulletinBoardNotification *audioAnalysisEventNotification; // ivar: _audioAnalysisEventNotification
@property (retain) HMDAudioAnalysisEventSubscriber *audioAnalysisEventSubscriber; // ivar: _audioAnalysisEventSubscriber
@property (retain) HMDAudioAnalysisRequestManager *audioAnalysisRequestManager; // ivar: _audioAnalysisRequestManager
@property (readonly) HMMediaDestination *audioDestination;
@property (retain) HMDMediaDestinationController *audioDestinationController; // ivar: _audioDestinationController
@property (readonly) HMMediaDestinationControllerData *audioDestinationControllerData;
@property (retain) HMDMediaDestinationManager *audioDestinationManager; // ivar: _audioDestinationManager
@property (readonly) HMDBackingStore *backingStore;
@property (readonly, nonatomic) NSObject<HMAccessoryCapabilities> *capabilities;
@property (retain, nonatomic) HMAccessoryCapabilities *capabilitiesInternal; // ivar: _capabilitiesInternal
@property (retain) HMDAppleMediaAccessoryInfoController *currentAccessoryInfoController; // ivar: _currentAccessoryInfoController
@property (retain) HMDFetchedAccessorySettingsController *currentAccessorySettingsController; // ivar: _currentAccessorySettingsController
@property (readonly) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property (weak) NSObject<HMDAppleMediaAccessoryDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<HMDAppleMediaAccessoryDependencyFactory> *dependencyFactory; // ivar: _dependencyFactory
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly) HMDDevice *deviceForDirectMessaging;
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
@property (readonly) NSHashTable *hostedAccessories; // ivar: _hostedAccessories
@property (retain) NSUUID *idsIdentifier; // ivar: _idsIdentifier
@property (readonly) BOOL isAppleTV;
@property (readonly) BOOL isHomePod;
@property (retain, nonatomic) HMFPairingIdentity *lastCreatedPairingIdentity; // ivar: _lastCreatedPairingIdentity
@property (retain) HMFWiFiNetworkInfo *lastStagedWifiNetworkInfo; // ivar: _lastStagedWifiNetworkInfo
@property (readonly) BOOL legacyLocationServicesEnabled;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (weak) NSObject<HMDMediaDestinationControllerFactory> *mediaDestinationControllerFactory; // ivar: _mediaDestinationControllerFactory
@property (weak) NSObject<HMDMediaDestinationManagerFactory> *mediaDestinationManagerFactory; // ivar: _mediaDestinationManagerFactory
@property (readonly) NSObject<HMDMessageRouter> *messageRouter;
@property (retain) HMDAppleMediaAccessoryMessenger *messenger; // ivar: _messenger
@property (retain) HMDAppleMediaAccessoryMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly) NSObject<HMDAppleMediaAccessoryModelDataSource> *modelDataSource; // ivar: _modelDataSource
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) HMFPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property (retain) HMDPreferredMediaUserEventController *preferredMediaUserEventController; // ivar: _preferredMediaUserEventController
@property NSInteger productColor; // ivar: _productColor
@property (retain, nonatomic) NSData *rawCapabilities; // ivar: _rawCapabilities
@property (readonly) HMDRemoteLoginHandler *remoteLoginHandler; // ivar: _remoteLoginHandler
@property (readonly, copy) NSUUID *sensorAccessoryUUID;
@property (retain) HMDAppleMediaAccessorySensorManager *sensorManager; // ivar: _sensorManager
@property (copy) id *settingsConnectionFactory; // ivar: _settingsConnectionFactory
@property (retain) HMDAccessorySettingsController *settingsController; // ivar: _settingsController
@property (readonly) HMFActivity *setupActivity;
@property CGFloat setupStartTimestamp;
@property (retain) HMDAppleMediaAccessorySleepWakeStateController *sleepWakeStateController; // ivar: _sleepWakeStateController
@property (retain) HMFSoftwareVersion *softwareVersion; // ivar: _softwareVersion
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider;
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
@property (retain) HMFWiFiManager *wifiManager; // ivar: _wifiManager
@property (readonly) HMFWiFiNetworkInfo *wifiNetworkInfo; // ivar: _wifiNetworkInfo


+(BOOL)hasMessageReceiverChildren;
+(BOOL)shouldAcceptMessage:(id)arg0 home:(id)arg1 privilege:(NSUInteger)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_allowSoftwareUpdateChangeFromSource:(NSUInteger)arg0 ;
-(BOOL)_shouldFilterAccessoryProfile:(id)arg0 ;
-(BOOL)accountHasSentinelZoneForAppleMediaAccessorySensorManager:(id)arg0 ;
-(BOOL)isB520Accessory;
-(BOOL)isB620Accessory;
-(BOOL)isCurrentAccessory;
-(BOOL)isCurrentDevicePrimaryResident;
-(BOOL)isMultiUserEnabledForAccessorySettingsController:(id)arg0 ;
-(BOOL)isRemotelyReachable;
-(BOOL)isResidentConfirmedForAppleMediaAccessorySensorManager:(id)arg0 ;
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
-(BOOL)supportsMediaActions;
-(BOOL)supportsMediaContentProfile;
-(BOOL)supportsMessagedHomePodSettings;
-(BOOL)supportsMultiUser;
-(BOOL)supportsMusicAlarm;
-(BOOL)supportsPersonalRequests;
-(BOOL)supportsPreferredMediaUser;
-(BOOL)supportsRMVonAppleTV;
-(BOOL)supportsSettings;
-(BOOL)supportsSoftwareUpdate;
-(BOOL)supportsSoftwareUpdateV2;
-(BOOL)supportsTargetControl;
-(BOOL)supportsThirdPartyMusic;
-(NSInteger)mediaDestinationControllerMetricsEventDispatcher:(id)arg0 destinationTypeForDestinationWithIdentifier:(id)arg1 ;
-(NSInteger)numberOfActionSetsWithCurrentAccessoryMediaActionForAppleMediaAccessoryMetricsDispatcher:(id)arg0 ;
-(NSInteger)numberOfCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(id)arg0 ;
-(NSInteger)numberOfTriggersWithCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(id)arg0 ;
-(NSInteger)reachableTransports;
-(NSUInteger)expectedDestinationSupportOptions;
-(id)_createMediaProfile;
-(id)_dumpStateCachedSettingsForHome:(id)arg0 accessory:(id)arg1 eventStoreReadHandle:(id)arg2 ;
-(id)_scanForSoftwareUpdate;
-(id)_scanForSoftwareUpdateWithRetries;
-(id)_softwareUpdateV2FromDescriptor:(id)arg0 ;
-(id)accessoriesWithHostUUID:(id)arg0 forAppleMediaAccessorySensorManager:(id)arg1 ;
-(id)accessoryBrowserForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)accessoryInfoControllerSoftwareVersionTopicForController:(id)arg0 ;
-(id)accessoryInfoControllerTopicForWifiInfo;
-(id)accessoryUUID;
-(id)accessoryWithUUID:(id)arg0 forAppleMediaAccessoryLocalMessageHandler:(id)arg1 ;
-(id)accessoryWithUUID:(id)arg0 forAppleMediaAccessorySensorManager:(id)arg1 ;
-(id)addAccessoryNotificationObjectForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)appleMediaProfileForAccessoryUUID:(id)arg0 ;
-(id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)arg0 ;
-(id)assistantObject;
-(id)availableDestinationIdentifiersForMediaDestinationController:(id)arg0 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)committedAudioDestination;
-(id)committedAudioDestinationControllerData;
-(id)controller:(id)arg0 topicForKeyPath:(id)arg1 ;
-(id)createAppleMediaAccessoryMessengerWithIdentifier:(id)arg0 messageDispatcher:(id)arg1 router:(id)arg2 localHandler:(id)arg3 ;
-(id)currentAccessorySoftwareVersion;
-(id)currentDestinationTypeForMediaDestinationControllerMetricsEventDispatcher:(id)arg0 ;
-(id)currentDeviceProductInfoForAppleMediaAccessorySleepWakeStateController:(id)arg0 ;
-(id)currentRoomForAppleMediaAccessoryMetricsDispatcher:(id)arg0 ;
-(id)currentUserForMediaDestinationControllerMetricsEventDispatcher:(id)arg0 ;
-(id)deviceForAppleMediaAccessoryMessageRouter:(id)arg0 message:(id)arg1 ;
-(id)deviceForAppleMediaAccessorySleepWakeStateController:(id)arg0 ;
-(id)dumpSimpleState;
-(id)dumpState;
-(id)dumpStateLocalSettings;
-(id)eventSourceIdentifierNameForAccessoryInfoController:(id)arg0 ;
-(id)eventSourceIdentifierNameForFetchedSettingsController:(id)arg0 ;
-(id)fetchAllZonesSucceededFutureForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)homeUUIDForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)hostUUIDForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceController:(id)arg0 deviceIdentifierFactory:(id)arg1 ;
-(id)initWithTransaction:(id)arg0 home:(id)arg1 ;
-(id)initWithTransaction:(id)arg0 home:(id)arg1 dependencyFactory:(id)arg2 ;
-(id)languageValueList;
-(id)legacyAudioDestination;
-(id)legacyAudioDestinationControllerData;
-(id)legacyCommittedAudioDestination;
-(id)legacyCommittedAudioDestinationControllerData;
-(id)logIdentifier;
-(id)logSubmitterForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)mediaDestinationController:(id)arg0 destinationManagerWithIdentifier:(id)arg1 ;
-(id)mediaDestinationController:(id)arg0 destinationWithParentIdentifier:(id)arg1 ;
-(id)mediaDestinationController:(id)arg0 rootDestinationWithDecendantIdentifier:(id)arg1 ;
-(id)mediaDestinationControllerWithData:(id)arg0 backingStore:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 logEventSubmitter:(id)arg4 dailyScheduler:(id)arg5 targetDevice:(BOOL)arg6 dataSource:(id)arg7 delegate:(id)arg8 ;
-(id)mediaDestinationManager:(id)arg0 destinationControllerWithIdentifier:(id)arg1 ;
-(id)mediaDestinationManagerWithDestination:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 backingStore:(id)arg3 targetDevice:(BOOL)arg4 dataSource:(id)arg5 delegate:(id)arg6 ;
-(id)mediaGroupLocalDataStorageForMediaDestinationController:(id)arg0 ;
-(id)mediaGroupParticipantDataLocalStorage;
-(id)mediaGroupParticipantLocalDataStorageForMediaDestinationManager:(id)arg0 ;
-(id)messageDispatcherForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)messageReceiverChildren;
-(id)messageSendPolicy;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelsToMakeSettingsForController:(id)arg0 parentUUID:(id)arg1 ;
-(id)modelsToMigrateSettingsForController:(id)arg0 ;
-(id)notificationCenterForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)remoteMessageDestination;
-(id)remoteMessageDestinationForAccessorySettingsController:(id)arg0 target:(id)arg1 ;
-(id)residentNotificationObjectForAppleMediaAccessorySensorManager:(id)arg0 ;
-(id)roarAudioDestination;
-(id)roarAudioDestinationControllerData;
-(id)roarCommittedAudioDestination;
-(id)roarCommittedAudioDestinationControllerData;
-(id)rootDestinationManagerForMediaDestinationManager:(id)arg0 ;
-(id)runtimeState;
-(id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)arg0 ;
-(id)targetAccessoryForMediaDestinationController:(id)arg0 ;
-(id)targetAccessoryForMediaDestinationManager:(id)arg0 ;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(id)workQueueForAppleMediaAccessoryMetricsDispatcher:(id)arg0 ;
-(void)_applySoftwareUpdateModel:(id)arg0 completion:(id)arg1 ;
-(void)_applySoftwareUpdateWithDescriptor:(id)arg0 ;
-(void)_configureGroupParticipantLocalDataStorageWithHome:(id)arg0 ;
-(void)_createAudioDestinationControllerWithControllerIdentifier:(id)arg0 ;
-(void)_createAudioDestinationWithIdentifier:(id)arg0 supportedOptions:(NSUInteger)arg1 ;
-(void)_encodeMediaDestinationAndControllerDataWithCoder:(id)arg0 ;
-(void)_fetchAvailableUpdate:(id)arg0 ;
-(void)_fetchMultiUserLanguages;
-(void)_fixCloudKeyIfNeeded;
-(void)_handleTriggerPairingIdentityUpdateNotification:(id)arg0 ;
-(void)_handleUpdatedName:(id)arg0 ;
-(void)_legacyEncodeMediaDestinationAndControllerDataWithCoder:(id)arg0 ;
-(void)_registerForMessages;
-(void)_relayRequestMessage:(id)arg0 responseHandler:(id)arg1 ;
-(void)_removeManagedConfigurationProfileWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_startUpdate:(id)arg0 ;
-(void)_updateSoftwareVersion:(id)arg0 ;
-(void)accessoryInfoController:(id)arg0 didUpdateWifiInfo:(id)arg1 ;
-(void)accessorySettingsController:(id)arg0 saveWithReason:(id)arg1 ;
-(void)accessorySettingsController:(id)arg0 saveWithReason:(id)arg1 model:(id)arg2 ;
-(void)addAdvertisement:(id)arg0 ;
-(void)addHostedAccessory:(id)arg0 ;
-(void)addUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)autoConfigureTargetControllers;
-(void)configureAppleMediaAccessoryMessengerWithFactory:(id)arg0 ;
-(void)configureAudioDestinationController;
-(void)configureAudioDestinationManager;
-(void)configureSensors;
-(void)configureWithHome:(id)arg0 msgDispatcher:(id)arg1 configurationTracker:(id)arg2 initialConfiguration:(BOOL)arg3 ;
-(void)createAccessoryInfoSubscriberIfNecessary;
-(void)createAudioDestination;
-(void)createAudioDestinationController;
-(void)createPairingIdentity;
-(void)createSoftwareUpdateEventListenerIfNecessary;
-(void)createSoftwareUpdateEventProviderIfNecessary;
-(void)currentAccessorySensorStatusFlagsForAppleMediaAccessoryMetricsDispatcher:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deleteSiriHistoryForAccessoryWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)deviceController:(id)arg0 didUpdateDevice:(id)arg1 ;
-(void)encodeFlagsFromHostedAccessories:(id)arg0 coder:(id)arg1 ;
-(void)encodeServicesFromHostedAccessories:(id)arg0 coder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleCurrentDeviceIRKUpdated:(id)arg0 ;
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
-(void)handleSoftwareUpdateV2Scan:(id)arg0 ;
-(void)handleTransactionUpdatedPublicPairingIdentity:(id)arg0 result:(id)arg1 ;
-(void)handleUpdatePreferredMediaUser:(id)arg0 ;
-(void)handleUpdatedMediaDestinationControllerModel:(id)arg0 message:(id)arg1 ;
-(void)handleUpdatedMediaDestinationModel:(id)arg0 message:(id)arg1 ;
-(void)infoSubscriber:(id)arg0 didReceiveWiFiInfoUpdate:(id)arg1 ;
-(void)languagesChangedForAccessorySettingsController:(id)arg0 ;
-(void)legacyCreateAudioDestinationControllerWithControllerIdentifier:(id)arg0 ;
-(void)legacyCreateAudioDestinationWithIdentifier:(id)arg0 supportedOptions:(NSUInteger)arg1 ;
-(void)mediaDestinationControllerDidUpdateStagedValues:(id)arg0 ;
-(void)mediaDestinationManagerDidUpdateStagedValues:(id)arg0 ;
-(void)mergeAudioDestination:(id)arg0 ;
-(void)mergeAudioDestinationControllerData:(id)arg0 ;
-(void)migrateAudioDestinationControllerWithCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)migrateAudioDestinationWithCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)migrateLocalParticipantData;
-(void)migrateWithCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)notifyClientsOfUpdatedAccessoryControllableValue:(BOOL)arg0 ;
-(void)notifyFrameworkOfUpdatedPairingIdentity;
-(void)pairingsWithCompletionHandler:(id)arg0 ;
// -(void)performAfterDelay:(CGFloat)arg0 block:(id)arg1 queue:(unk)arg2  ;
-(void)performLocalAddAccessoryWithDescription:(id)arg0 progressHandlerDelegate:(id)arg1 completion:(id)arg2 ;
-(void)populateModelObject:(id)arg0 version:(NSInteger)arg1 ;
-(void)postDeviceIRKIfDifferent:(id)arg0 ;
-(void)registerForPublishingNotifications;
-(void)removeAdvertisement:(id)arg0 ;
-(void)removeAudioDestination;
-(void)removeHostedAccessory:(id)arg0 ;
-(void)removeManagedConfigurationProfileWithProfileData:(id)arg0 completion:(id)arg1 ;
-(void)removeUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)renameService:(id)arg0 name:(id)arg1 ;
-(void)runTransactionWithPreferredMediaUserUUID:(id)arg0 selectionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setRemotelyReachable:(BOOL)arg0 ;
-(void)startMonitoringReachability;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updatePreferredMediaUser:(id)arg0 selectionType:(NSUInteger)arg1 ;
-(void)updatePreferredMediaUserWithUUID:(id)arg0 selectionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)updateProductInformation;
-(void)updateRechabilityFromDevicePublishingState;
-(void)updateWiFiNetworkInfo;
-(void)updateWithDevice:(id)arg0 ;


@end


#endif