// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOME_H
#define HMDHOME_H

@class HMFObject, NSMutableDictionary, NSMutableArray, NSString, HMFTimer, NSMutableSet, NSArray, NSUUID, NSMapTable, NSDictionary, HMDHomeAudioAnalysisStereoPairController, NSNumber, NSHashTable, NSDate, HMFMessageDestination, NSSet, HMFMessageDispatcher, NSNotificationCenter, HMHomePersonManagerSettings, HMUserPresenceAuthorization, HMUserPresenceCompute, HMEDelegatingEventRouter;
@protocol HMDBulletinIdentifiers, HMDHomeResidentMessagingContext, HMDAppleMediaAccessoriesStateManagerFactory, HMDAppleMediaAccessoriesStateManagerDataSource, HMDPrimaryResidentMessageRouterFactory, HMDAccessorySettingsLocalMessageHandlerFactory, HMDUnifiedLanguageValueListSettingDataProviderDataSource, HMDSiriEndpointProfileMessageHandlerFactory, HMDPrimaryResidentMessageRouterMetricsDispatcherFactory, HMDAccessorySettingsMessengerFactory, HMDAppleMediaAccessoriesStateManagerMetricsDispatcherFactory, HMDPrimaryResidentMessageRouterDataSource, HMDSiriEndpointProfilesMessengerFactory, HMDAccessorySettingsLocalMessageHandlerDataSource, HMDUnifiedLanguageValueListSettingDataProviderFactory, HMDAppleMediaAccessoryMessageRouterDataSource, HMDDelegatingMessageRouterDataSource, HMDResidentDeviceManagerDelegate, HMEDelegatingEventRouterDataSource, HMDHomeMediaSystemHandlerDataSource, HMDHomeMediaSystemHandlerDelegate, HMDHomeRemoteEventAccessControllerDataSource, HMDMediaGroupsAggregatorDataSource, HMDMediaGroupsAggregatorMessengerDataSource, HMDMediaGroupsLocalDataStorageDataSource, HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource, HMDPrimaryResidentCapabilitiesAggregatorDelegate, HMDPrimaryResidentCapabilitiesAggregatorDataSource, HMDRemoteEventAccessControlProvider, HMDHomeRemoteEventRouterClientControllerDataSource, HMDRemoteEventRouterServerDataSource, HMDDevicePreferenceDataSource, HMDSiriSecureAccessoryAccessControllerDataSource, HMDResidentAppleMediaStateManagerDataSource, HMDResidentAppleMediaStateManagerDelegate, HMDPrimaryResidentChangeMonitorDataSource, HMDLogEventDailyTaskRunner, HMDMediaGroupsAggregateConsumerDelegate, HMDAccessoryBrowserDelegate, HMDHomeMessageReceiver, HMFTimerDelegate, HMFDumpState, HMDUserManagementOperationDelegate, HMDCoordinationStateManagerProviding, HMDAppleMediaAccessoryDataSource, HMDMediaActionRouterDataSource, HMFLogging, NSSecureCoding, HMDBackingStoreObjectProtocol, HMDHomeConfigurationLogEventDataSource, OS_os_log, NSObject, HMDAccessoryBrowserProtocol, HMDCarPlayDataSource, HMDCOStateManager, HMEEventForwarder, HMDHomeLocalDeviceCapabilitiesDataSource, HMMLogEventSubmitting, OS_dispatch_queue, HMDResidentDeviceManager, HMDXPCMessageTransportFactory;


#import "HMDUser.h"
#import "HMDAccessCodeManager.h"
#import "HMDHAPAccessoryConnectionCoordinator.h"
#import "HMDAccessoryCount.h"
#import "HMDDelegatingMessageRouter.h"
#import "HMDHAPAccessoryReaderWriter.h"
#import "HMDAccessorySettingsMessenger.h"
#import "HMDAppleAccountSettings.h"
#import "HMDHAPAccessory.h"
#import "HMDHomeAdministratorHandler.h"
#import "HMDCameraAnalysisStatePublisher.h"
#import "HMDApplicationData.h"
#import "HMDAppleMediaAccessoryMessageRouter.h"
#import "HMDAppleMediaAccessoriesStateManager.h"
#import "HMDBackingStore.h"
#import "HMDPrimaryResidentCapabilitiesAggregator.h"
#import "HMDCHIPHomeStorage.h"
#import "HMDDevice.h"
#import "HMDAccessory.h"
#import "HMDHomeKitVersion.h"
#import "HMDLogEventDailyScheduler.h"
#import "HMDDeviceLockStateDataSource.h"
#import "HMDHAPMetadata.h"
#import "HMDHome.h"
#import "HMDHomeLocationHandler.h"
#import "HMDHomeManager.h"
#import "HMDHomeObjectChangeHandler.h"
#import "HMDHomeRemoteEventAccessController.h"
#import "HMDHomeReprovisionHandler.h"
#import "HMDHomeLightBrightnessLogger.h"
#import "HMDHomeLockNotificationManager.h"
#import "HMDHomeObjectLookup.h"
#import "HMDMediaActionRouter.h"
#import "HMDMediaGroupsAggregateConsumer.h"
#import "HMDMediaGroupsAggregator.h"
#import "HMDMediaGroupsUnconfiguredParticipantOnboardingManager.h"
#import "HMDResidentAppleMediaStateManager.h"
#import "HMDHomeMediaSystemHandler.h"
#import "HMDHomeMetricsDispatcher.h"
#import "HMDMultiuserSettingsMessenger.h"
#import "HMDNaturalLightingContext.h"
#import "HMDHomeNaturalLightingContextUpdater.h"
#import "HMDHomeNaturalLightingCurveWriter.h"
#import "HMDAccessoryNetworkProtectionGroupRegistry.h"
#import "HMDHomeNFCReaderKey.h"
#import "HMDHomeNFCReaderKeyManager.h"
#import "HMDNotificationRegistry.h"
#import "HMDHomePeriodicReader.h"
#import "HMDHomePersonDataManager.h"
#import "HMDHomePersonManager.h"
#import "HMDPredicateUtilities.h"
#import "HMDUserPresenceFeeder.h"
#import "HMDHomePresenceMonitor.h"
#import "HMDPrimaryResidentChangeMonitor.h"
#import "HMDPrimaryResidentMessageRouter.h"
#import "HMDAccessoryReachabilityChangedLogEventManager.h"
#import "HMDResidentReachabilityNotificationManager.h"
#import "HMDHomeRemoteEventRouterClientController.h"
#import "HMDRemoteEventRouterServer.h"
#import "HMDRoom.h"
#import "HMDNetworkRouterClientManager.h"
#import "HMDSharedHomeUpdateHandler.h"
#import "HMDSiriEndpointProfilesMessenger.h"
#import "HMDSiriSecureAccessoryAccessController.h"
#import "HMDManagedStagedValue.h"
#import "HMDUnifiedLanguageValueListSettingDataProvider.h"
#import "HMDUserActionPredictionManager.h"
#import "HMDHomeWalletKeyManager.h"

@interface HMDHome : HMFObject <HMDBulletinIdentifiers, HMDHomeResidentMessagingContext, HMDAppleMediaAccessoriesStateManagerFactory, HMDAppleMediaAccessoriesStateManagerDataSource, HMDPrimaryResidentMessageRouterFactory, HMDAccessorySettingsLocalMessageHandlerFactory, HMDUnifiedLanguageValueListSettingDataProviderDataSource, HMDSiriEndpointProfileMessageHandlerFactory, HMDPrimaryResidentMessageRouterMetricsDispatcherFactory, HMDAccessorySettingsMessengerFactory, HMDAppleMediaAccessoriesStateManagerMetricsDispatcherFactory, HMDPrimaryResidentMessageRouterDataSource, HMDSiriEndpointProfilesMessengerFactory, HMDAccessorySettingsLocalMessageHandlerDataSource, HMDUnifiedLanguageValueListSettingDataProviderFactory, HMDAppleMediaAccessoryMessageRouterDataSource, HMDDelegatingMessageRouterDataSource, HMDResidentDeviceManagerDelegate, HMEDelegatingEventRouterDataSource, HMDHomeMediaSystemHandlerDataSource, HMDHomeMediaSystemHandlerDelegate, HMDHomeRemoteEventAccessControllerDataSource, HMDMediaGroupsAggregatorDataSource, HMDMediaGroupsAggregatorMessengerDataSource, HMDMediaGroupsLocalDataStorageDataSource, HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource, HMDPrimaryResidentCapabilitiesAggregatorDelegate, HMDPrimaryResidentCapabilitiesAggregatorDataSource, HMDRemoteEventAccessControlProvider, HMDHomeRemoteEventRouterClientControllerDataSource, HMDRemoteEventRouterServerDataSource, HMDDevicePreferenceDataSource, HMDSiriSecureAccessoryAccessControllerDataSource, HMDResidentAppleMediaStateManagerDataSource, HMDResidentAppleMediaStateManagerDelegate, HMDPrimaryResidentChangeMonitorDataSource, HMDLogEventDailyTaskRunner, HMDMediaGroupsAggregateConsumerDelegate, HMDAccessoryBrowserDelegate, HMDHomeMessageReceiver, HMFTimerDelegate, HMFDumpState, HMDUserManagementOperationDelegate, HMDCoordinationStateManagerProviding, HMDAppleMediaAccessoryDataSource, HMDMediaActionRouterDataSource, HMFLogging, NSSecureCoding, HMDBackingStoreObjectProtocol, HMDHomeConfigurationLogEventDataSource>

 {
    NSMutableDictionary *_accessories;
    NSMutableArray *_users;
    HMDUser *_owner;
    HMDUser *_currentUser;
    BOOL _automaticSoftwareUpdateEnabled;
    BOOL _automaticThirdPartyAccessorySoftwareUpdateEnabled;
    NSInteger _minimumMediaUserPrivilege;
    BOOL _mediaPeerToPeerEnabled;
    NSString *_mediaPassword;
    BOOL _ownerUser;
    HMFTimer *_homeLocationTimer;
    HMFTimer *_accessoryReachabilityUpdatesTimer;
    NSMutableSet *_reachabilityUpdatedAccessories;
    NSUInteger _skippedInterDeviceChangeNotifications;
    NSInteger _overriddenHomeLocation;
    BOOL _overrideHomeLocation;
    NSObject<OS_os_log> *_logger;
    os_unfair_recursive_lock_s _lock;
    NSMutableSet *_notificationRegistrations;
    NSMutableSet *_notificationRegistrationsForAppleMediaAccessories;
    NSMutableSet *_notificationDeregistrations;
    BOOL _enableLocationServiceSettings;
}


@property (retain, nonatomic) NSObject<NSObject> *WiFiAssertion; // ivar: _WiFiAssertion
@property (retain) HMDAccessCodeManager *accessCodeManager; // ivar: _accessCodeManager
@property (readonly, nonatomic) NSUInteger accessNotAllowedReasonCode;
@property (copy) NSArray *accessories;
@property (readonly) NSArray *accessoriesRequiringManualReconfigurationOnRouterRemoval;
@property (readonly, copy) NSArray *accessoriesWithWalletKeySupport;
@property (retain, nonatomic) NSObject<HMDAccessoryBrowserProtocol> *accessoryBrowser; // ivar: _accessoryBrowser
@property (retain, nonatomic) HMDHAPAccessoryConnectionCoordinator *accessoryConnectionCoordinator; // ivar: _accessoryConnectionCoordinator
@property (readonly, copy) HMDAccessoryCount *accessoryCount;
@property (retain) HMDDelegatingMessageRouter *accessoryMessageRouterViaPrimary; // ivar: _accessoryMessageRouterViaPrimary
@property (retain, nonatomic) HMDHAPAccessoryReaderWriter *accessoryReaderWriter; // ivar: _accessoryReaderWriter
@property (retain) HMDAccessorySettingsMessenger *accessorySettingsMessenger; // ivar: _accessorySettingsMessenger
@property (readonly) HMDAppleAccountSettings *accountSettings; // ivar: _accountSettings
@property (retain, nonatomic) NSMutableArray *actionSets; // ivar: _actionSets
@property (readonly) HMDHAPAccessory *activeNetworkRouterAccessory;
@property (getter=isActiveNetworkRouterInitialSetupNeeded) BOOL activeNetworkRouterInitialSetupNeeded; // ivar: _activeNetworkRouterInitialSetupNeeded
@property (retain) NSUUID *activeNetworkRouterUUID; // ivar: _activeNetworkRouterUUID
@property (retain, nonatomic) NSMapTable *addPendingAccessories; // ivar: _addPendingAccessories
@property (retain, nonatomic) NSMutableDictionary *addPendingAccessorySetupCodeHandlers; // ivar: _addPendingAccessorySetupCodeHandlers
@property (retain, nonatomic) NSMutableDictionary *addPendingAccessorySetupCodes; // ivar: _addPendingAccessorySetupCodes
@property (nonatomic, getter=isAdminUser) BOOL adminUser; // ivar: _adminUser
@property (readonly) HMDHomeAdministratorHandler *administratorHandler; // ivar: _administratorHandler
@property (nonatomic) BOOL allowsRemoteAccess; // ivar: _allowsRemoteAccess
@property (readonly) HMDCameraAnalysisStatePublisher *analysisStatePublisher; // ivar: _analysisStatePublisher
@property (readonly, nonatomic, getter=isAnyBTLEAccessoryReachable) BOOL anyBTLEAccessoryReachable; // ivar: _anyBTLEAccessoryReachable
@property (retain, nonatomic) HMDApplicationData *appData; // ivar: _appData
@property (retain) HMDAppleMediaAccessoryMessageRouter *appleDeviceRouter; // ivar: _appleDeviceRouter
@property (readonly, copy) NSArray *appleMediaAccessories;
@property (retain) HMDAppleMediaAccessoriesStateManager *appleMediaAccessoriesStateManager; // ivar: _appleMediaAccessoriesStateManager
@property (readonly, copy) NSDictionary *assistantObject;
@property (retain, nonatomic) NSMutableArray *assistantOperations; // ivar: _assistantOperations
@property (nonatomic) NSInteger atHomeLevel; // ivar: _atHomeLevel
@property (nonatomic) NSUInteger audioAnalysisClassifierOptions; // ivar: _audioAnalysisClassifierOptions
@property (retain) HMDHomeAudioAnalysisStereoPairController *audioAnalysisStereoPairController; // ivar: _audioAnalysisStereoPairController
@property (nonatomic, getter=isAutomaticThirdPartyAccessorySoftwareUpdateEnabled) BOOL automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (copy) NSNumber *availableBSPsCount; // ivar: _availableBSPsCount
@property (copy) NSNumber *availableBorderRouters; // ivar: _availableBorderRouters
@property (retain, nonatomic) HMDBackingStore *backingStore; // ivar: _backingStore
@property (readonly) BOOL bulletinBoardNotificationsMigrationFileExistsOnDisk;
@property BOOL bulletinNotificationsSupported; // ivar: _bulletinNotificationsSupported
@property (readonly, copy) NSArray *cameraAccessories;
@property (readonly) BOOL cameraNotificationSettingsMigrationFileExistsOnDisk;
@property (retain, nonatomic) HMDPrimaryResidentCapabilitiesAggregator *capabilitiesAggregator; // ivar: _capabilitiesAggregator
@property (readonly) NSObject<HMDCarPlayDataSource> *carPlayDataSource; // ivar: _carPlayDataSource
@property (retain, nonatomic) NSMutableDictionary *chipLocalSubscribers; // ivar: _chipLocalSubscribers
@property (retain, nonatomic) NSMutableSet *chipRemoteSubscribers; // ivar: _chipRemoteSubscribers
@property (readonly, copy) HMDCHIPHomeStorage *chipStorage;
@property (copy) HMDCHIPHomeStorage *chipStorage; // ivar: _chipStorage
@property (readonly, weak, nonatomic) HMDDevice *companionDevice;
@property (readonly, nonatomic, getter=isCompanionReachable) BOOL companionReachable;
@property (nonatomic) NSInteger configurationVersion; // ivar: _configurationVersion
@property (readonly, nonatomic) NSHashTable *connectionsDiscoveringSymptomsForNearbyDevices; // ivar: _connectionsDiscoveringSymptomsForNearbyDevices
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (retain) NSObject<HMDCOStateManager> *coordinationStateManager; // ivar: _coordinationStateManager
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly) HMDAccessory *currentAccessory;
@property (readonly) HMDDevice *currentDevice;
@property (readonly, nonatomic, getter=isCurrentDeviceAvailableResident) BOOL currentDeviceAvailableResident;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) BOOL currentDeviceSupportsSidekickSettings;
@property (retain, nonatomic) HMDHomeKitVersion *currentHomeKitVersion; // ivar: _currentHomeKitVersion
@property (nonatomic) BOOL currentRemoteReachabilityRegistration; // ivar: _currentRemoteReachabilityRegistration
@property (retain, nonatomic) NSMutableArray *currentTriggers; // ivar: _currentTriggers
@property (readonly) id *currentUserFactory; // ivar: _currentUserFactory
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // ivar: _dailyScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableSet *deferredAccessorySetupHandlers; // ivar: _deferredAccessorySetupHandlers
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDeviceLockStateDataSource *deviceLockStateDataSource; // ivar: _deviceLockStateDataSource
@property (nonatomic) BOOL didOnboardAudioAnalysis; // ivar: _didOnboardAudioAnalysis
@property BOOL didOnboardLocationServices; // ivar: _didOnboardLocationServices
@property (readonly, nonatomic) NSMutableDictionary *disableNotificationPayload; // ivar: _disableNotificationPayload
@property (retain, nonatomic) HMFTimer *disableNotificationTimer; // ivar: _disableNotificationTimer
@property (retain, nonatomic) NSMutableArray *discoveredAccessories; // ivar: _discoveredAccessories
@property (readonly, nonatomic) NSMutableDictionary *enableNotificationPayload; // ivar: _enableNotificationPayload
@property (readonly, copy, nonatomic) NSArray *enabledResidents;
@property (readonly, copy, nonatomic) NSArray *enabledResidents;
@property (readonly) BOOL enabledResidentsSupportsHomeHub;
@property (readonly, weak) NSObject<HMEEventForwarder> *eventForwarder;
@property (nonatomic) NSInteger expectedConfigurationVersion; // ivar: _expectedConfigurationVersion
@property (retain, nonatomic) NSDate *firstHAPAccessoryAddedDate; // ivar: _firstHAPAccessoryAddedDate
@property (readonly, copy) NSArray *hapAccessories;
@property (readonly, copy) NSArray *hapAccessoriesForLegacyDataBlobEncoding;
@property (readonly) HMDHAPMetadata *hapMetadata; // ivar: _hapMetadata
@property (readonly) BOOL hasAnyAccessoryWithWalletKeyAndAccessCodeSupport;
@property (readonly) BOOL hasAnyAccessoryWithWalletKeySupport;
@property (nonatomic) BOOL hasAnyUserAcknowledgedCameraRecordingOnboarding; // ivar: _hasAnyUserAcknowledgedCameraRecordingOnboarding
@property (readonly) BOOL hasCharacteristicNotificationRegistrations;
@property (readonly) BOOL hasNeverAddedAnyHAPAccessory;
@property (nonatomic) BOOL hasOnboardedForAccessCode; // ivar: _hasOnboardedForAccessCode
@property (nonatomic) BOOL hasOnboardedForWalletKey; // ivar: _hasOnboardedForWalletKey
@property (readonly) BOOL hasPostedWalletKeyOnboardingBulletinForAnyAccessory;
@property (readonly, nonatomic) BOOL hasReachableAccessories;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *heartbeatPingMessagesQueuedWithServer; // ivar: _heartbeatPingMessagesQueuedWithServer
@property (readonly, weak) HMDHome *home;
@property (nonatomic) NSUInteger homeHubState; // ivar: _homeHubState
@property (readonly, nonatomic) NSInteger homeLocation; // ivar: _homeLocation
@property (readonly, nonatomic) HMDHomeLocationHandler *homeLocationHandler; // ivar: _homeLocationHandler
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMDHomeObjectChangeHandler *homeObjectChangeHandler; // ivar: _homeObjectChangeHandler
@property (readonly) HMDHomeRemoteEventAccessController *homeRemoteEventAccessController; // ivar: _homeRemoteEventAccessController
@property (retain, nonatomic) HMDHomeReprovisionHandler *homeReprovisionHandler; // ivar: _homeReprovisionHandler
@property (readonly) BOOL isAccessToHomeAllowed;
@property BOOL isNetworkAvailable; // ivar: _isNetworkAvailable
@property (readonly, nonatomic) BOOL isSmokeAlarmEnabled;
@property BOOL isUpdatedToHH2; // ivar: _isUpdatedToHH2
@property (copy) NSMutableDictionary *labelsByAccessCode; // ivar: _labelsByAccessCode
@property (nonatomic) NSInteger lastSyncedConfigurationVersion; // ivar: _lastSyncedConfigurationVersion
@property (readonly) HMDHomeLightBrightnessLogger *lightBrightnessLogger; // ivar: _lightBrightnessLogger
@property (readonly, nonatomic) NSObject<HMDHomeLocalDeviceCapabilitiesDataSource> *localCapabilitiesDataSource; // ivar: _localCapabilitiesDataSource
@property BOOL locationServicesEnabled; // ivar: _locationServicesEnabled
@property (readonly, copy) HMDHomeLockNotificationManager *lockNotificationManager; // ivar: _lockNotificationManager
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, nonatomic) HMDHomeObjectLookup *lookup; // ivar: _lookup
@property (readonly, copy) NSArray *matterAccessories;
@property (retain, nonatomic) HMDMediaActionRouter *mediaActionRouter; // ivar: _mediaActionRouter
@property (readonly, copy) NSArray *mediaDestinations;
@property (readonly) HMDMediaGroupsAggregateConsumer *mediaGroupsAggregateConsumer; // ivar: _mediaGroupsAggregateConsumer
@property (retain) HMDMediaGroupsAggregator *mediaGroupsAggregator; // ivar: _mediaGroupsAggregator
@property (retain) HMDMediaGroupsUnconfiguredParticipantOnboardingManager *mediaGroupsUnconfiguredParticipantOnboardingManager; // ivar: _mediaGroupsUnconfiguredParticipantOnboardingManager
@property (retain, nonatomic) NSArray *mediaSessionStates; // ivar: _mediaSessionStates
@property (retain, nonatomic) NSArray *mediaSessions; // ivar: _mediaSessions
@property (retain, nonatomic) HMDResidentAppleMediaStateManager *mediaStateManager; // ivar: _mediaStateManager
@property (retain) HMDHomeMediaSystemHandler *mediaSystemController; // ivar: _mediaSystemController
@property (readonly, copy, nonatomic) NSArray *mediaSystems;
@property (readonly) HMFMessageDestination *messageDestination;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMDHomeMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (nonatomic, getter=isMigratingAfterResidentChange) BOOL migratingAfterResidentChange; // ivar: _migratingAfterResidentChange
@property BOOL migrationNeeded; // ivar: _migrationNeeded
@property (retain, nonatomic) HMDHomeKitVersion *minHomeKitVersionForAccessoryNetworkProtectionChange; // ivar: _minHomeKitVersionForAccessoryNetworkProtectionChange
@property (retain, nonatomic) HMDHomeKitVersion *minimumNetworkRouterSupportHomeKitVersion; // ivar: _minimumNetworkRouterSupportHomeKitVersion
@property (retain, nonatomic) HMFTimer *modifyNotificationsCoalesceTimer; // ivar: _modifyNotificationsCoalesceTimer
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (nonatomic, getter=isMultiUserEnabled) BOOL multiUserEnabled; // ivar: _multiUserEnabled
@property (retain) HMDMultiuserSettingsMessenger *multiuserSettingsMessenger; // ivar: _multiuserSettingsMessenger
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (copy) HMDNaturalLightingContext *naturalLightingContext; // ivar: _naturalLightingContext
@property (retain) HMDHomeNaturalLightingContextUpdater *naturalLightingContextUpdater; // ivar: _naturalLightingContextUpdater
@property (readonly) HMDHomeNaturalLightingCurveWriter *naturalLightingCurveWriter; // ivar: _naturalLightingCurveWriter
@property (retain, nonatomic) HMDAccessoryNetworkProtectionGroupRegistry *networkProtectionGroupRegistry; // ivar: _networkProtectionGroupRegistry
@property (readonly) NSUInteger networkRouterSupport;
@property NSUInteger networkRouterSupport; // ivar: _networkRouterSupport
@property NSUInteger networkRouterSupportDisableReason; // ivar: _networkRouterSupportDisableReason
@property (readonly, nonatomic) NSMutableDictionary *newlyConfiguredAccessories; // ivar: _newlyConfiguredAccessories
@property (copy) HMDHomeNFCReaderKey *nfcReaderKey; // ivar: _nfcReaderKey
@property (readonly, copy) HMDHomeNFCReaderKeyManager *nfcReaderKeyManager; // ivar: _nfcReaderKeyManager
@property (readonly, nonatomic) NSUInteger nonIPadResidentDeviceCountForHH2Migration; // ivar: _nonIPadResidentDeviceCountForHH2Migration
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSSet *notificationDeregistrations;
@property (retain, nonatomic) NSMutableDictionary *notificationHandlerMap; // ivar: _notificationHandlerMap
@property (readonly, copy) NSSet *notificationRegistrations;
@property (retain, nonatomic) HMDNotificationRegistry *notificationRegistry; // ivar: _notificationRegistry
@property (copy, nonatomic) NSDate *notificationsUpdatedTime; // ivar: _notificationsUpdatedTime
@property (retain, nonatomic) NSMutableArray *outgoingInvitations; // ivar: _outgoingInvitations
@property (retain, nonatomic) NSNumber *overriddenHomeAccessControl; // ivar: _overriddenHomeAccessControl
@property (nonatomic) BOOL overrideSentinelZoneForConvergencePeriod; // ivar: _overrideSentinelZoneForConvergencePeriod
@property (retain, nonatomic) NSMutableArray *ownedTriggers; // ivar: _ownedTriggers
@property (retain, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (nonatomic, getter=isOwnerTrustZoneCapable) BOOL ownerTrustZoneCapable; // ivar: _ownerTrustZoneCapable
@property (readonly, getter=isOwnerUser) BOOL ownerUser;
@property (readonly, nonatomic) NSMutableSet *pendingAccessorySetup; // ivar: _pendingAccessorySetup
@property (retain, nonatomic) NSMutableDictionary *pendingResponses; // ivar: _pendingResponses
@property (retain, nonatomic) NSMutableSet *pendingResponsesForRemoteAccessSetup; // ivar: _pendingResponsesForRemoteAccessSetup
@property (retain, nonatomic) HMFTimer *pendingResponsesTimer; // ivar: _pendingResponsesTimer
@property (readonly, nonatomic) HMDHomePeriodicReader *periodicReader; // ivar: _periodicReader
@property (readonly) HMDHomePersonDataManager *personDataManager; // ivar: _personDataManager
@property (readonly) HMDHomePersonManager *personManager;
@property (copy, nonatomic) HMHomePersonManagerSettings *personManagerSettings; // ivar: _personManagerSettings
@property (copy, nonatomic) NSUUID *personManagerZoneUUID; // ivar: _personManagerZoneUUID
@property (readonly, nonatomic) HMDPredicateUtilities *predicateUtility; // ivar: _predicateUtility
@property (retain, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // ivar: _presenceAuthStatus
@property (retain, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // ivar: _presenceComputeStatus
@property (readonly, nonatomic) HMDUserPresenceFeeder *presenceFeeder; // ivar: _presenceFeeder
@property (readonly, nonatomic) HMDHomePresenceMonitor *presenceMonitor; // ivar: _presenceMonitor
@property (nonatomic) NSInteger previousReachableAccessoriesCount; // ivar: _previousReachableAccessoriesCount
@property (nonatomic) NSInteger previousReachableAppleMediaAccessoriesCount; // ivar: _previousReachableAppleMediaAccessoriesCount
@property (retain, nonatomic) NSUUID *primaryNetworkRouterManagingDeviceUUID; // ivar: _primaryNetworkRouterManagingDeviceUUID
@property (readonly) HMDPrimaryResidentChangeMonitor *primaryResidentChangeMonitor; // ivar: _primaryResidentChangeMonitor
@property (retain) HMDPrimaryResidentMessageRouter *primaryResidentMessageRouter; // ivar: _primaryResidentMessageRouter
@property (readonly) NSInteger protectionMode;
@property NSInteger protectionMode; // ivar: _protectionMode
@property (readonly) HMDAccessoryReachabilityChangedLogEventManager *reachabilityChangedLogEventManager; // ivar: _reachabilityChangedLogEventManager
@property (readonly) HMDResidentReachabilityNotificationManager *reachabilityNotificationManager; // ivar: _reachabilityNotificationManager
@property (retain, nonatomic) HMFTimer *reachabilityNotificationTimer; // ivar: _reachabilityNotificationTimer
@property (retain, nonatomic) NSMutableArray *reachabilityRegisteredDevices; // ivar: _reachabilityRegisteredDevices
@property (readonly) NSInteger reachableAccessoriesCount;
@property (readonly) NSInteger reachableAppleMediaAccessoriesCount;
@property (nonatomic) BOOL registeredNotificationWithRemoteGateway; // ivar: _registeredNotificationWithRemoteGateway
@property (nonatomic) BOOL remoteAccessIsEnabled; // ivar: _remoteAccessIsEnabled
@property (retain) HMDHomeRemoteEventRouterClientController *remoteEventRouterClientController; // ivar: _remoteEventRouterClientController
@property (retain, nonatomic) HMDRemoteEventRouterServer *remoteEventRouterServer; // ivar: _remoteEventRouterServer
@property (retain, nonatomic) NSMutableArray *remoteReachabilityNotificationPendingAccessories; // ivar: _remoteReachabilityNotificationPendingAccessories
@property (retain, nonatomic) NSHashTable *removeAccessoryInProgressForHMDAccessories; // ivar: _removeAccessoryInProgressForHMDAccessories
@property (copy) NSMutableDictionary *removedUserInfoByAccessCode; // ivar: _removedUserInfoByAccessCode
@property (retain, nonatomic) NSMutableArray *removedUsers; // ivar: _removedUsers
@property (readonly, copy, nonatomic) NSArray *residentCapableDevices;
@property (readonly, nonatomic) NSObject<HMDResidentDeviceManager> *residentDeviceManager; // ivar: _residentDeviceManager
@property (readonly, copy, nonatomic) NSArray *residentEnabledDevices;
@property (getter=isResidentFirstAccessoryCommunicationEnabled) BOOL residentFirstAccessoryCommunicationEnabled; // ivar: _residentFirstAccessoryCommunicationEnabled
@property (readonly, nonatomic, getter=isResidentSupported) BOOL residentSupported;
@property (readonly, getter=isRestrictedUserSupported) BOOL restrictedUserSupported;
@property (retain, nonatomic) NSMutableArray *retrievalAccessoryCompletionTuples; // ivar: _retrievalAccessoryCompletionTuples
@property (retain, nonatomic) HMDRoom *roomForEntireHome; // ivar: _roomForEntireHome
@property (retain, nonatomic) NSMutableArray *rooms; // ivar: _rooms
@property (readonly) HMDNetworkRouterClientManager *routerClientManager;
@property (retain, nonatomic) HMDNetworkRouterClientManager *routerClientManager; // ivar: _routerClientManager
@property (readonly) HMEDelegatingEventRouter *serverDelegatingEventRouter; // ivar: _serverDelegatingEventRouter
@property (retain, nonatomic) NSMutableArray *serviceGroups; // ivar: _serviceGroups
@property (retain, nonatomic) NSMutableArray *services; // ivar: _services
@property (nonatomic, getter=isSharedAdmin) BOOL sharedAdmin; // ivar: _sharedAdmin
@property (retain, nonatomic) HMDHomeKitVersion *sharedHomeSourceVersion; // ivar: _sharedHomeSourceVersion
@property (readonly, nonatomic) HMDSharedHomeUpdateHandler *sharedHomeUpdateHandler; // ivar: _sharedHomeUpdateHandler
@property (readonly) BOOL shouldEncodeHasOnboardedForWalletKey; // ivar: _shouldEncodeHasOnboardedForWalletKey
@property (readonly) BOOL shouldEncodeNFCReaderKey; // ivar: _shouldEncodeNFCReaderKey
@property (retain) HMDSiriEndpointProfilesMessenger *siriEndpointProfilesMessenger; // ivar: _siriEndpointProfilesMessenger
@property (readonly) HMDSiriSecureAccessoryAccessController *siriSecureAccessoryAccessController; // ivar: _siriSecureAccessoryAccessController
@property (nonatomic) BOOL soundCheckEnabled; // ivar: _soundCheckEnabled
@property (readonly, copy, nonatomic) NSUUID *spiClientIdentifier; // ivar: _spiClientIdentifier
@property (readonly, nonatomic) HMDManagedStagedValue *stagedRemoteReachabilityRegistration; // ivar: _stagedRemoteReachabilityRegistration
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsRouterManagement;
@property (readonly) BOOL supportsSiriEndpointOnBoarding;
@property (copy, nonatomic) NSString *threadNetworkID;
@property (nonatomic) BOOL threadNetworkPeriodicCheckScheduled; // ivar: _threadNetworkPeriodicCheckScheduled
@property (nonatomic) NSUInteger threadNetworkSequenceNumber; // ivar: _threadNetworkSequenceNumber
@property (nonatomic) BOOL threadPreferredNetworkExists; // ivar: _threadPreferredNetworkExists
@property (retain, nonatomic) NSMutableArray *triggerOwnedActionSets; // ivar: _triggerOwnedActionSets
@property (readonly, copy) NSArray *triggers;
@property (retain, nonatomic) NSMutableArray *unconfiguredResidentDevices; // ivar: _unconfiguredResidentDevices
@property (readonly, nonatomic) NSString *unfilteredThreadNetworkID; // ivar: _unfilteredThreadNetworkID
@property (retain) HMDUnifiedLanguageValueListSettingDataProvider *unifiedLanguageValueListSettingDataProvider; // ivar: _unifiedLanguageValueListSettingDataProvider
@property (readonly, nonatomic) NSHashTable *unpairedSecondaryHAPAccessories; // ivar: _unpairedSecondaryHAPAccessories
@property (readonly, copy) NSString *urlString;
@property (retain) HMDUserActionPredictionManager *userActionPredictionManager; // ivar: _userActionPredictionManager
@property (readonly, copy) NSArray *users;
@property (retain, nonatomic) NSMutableArray *usersPendingUserManagementOperations; // ivar: _usersPendingUserManagementOperations
@property (readonly, copy) NSArray *usersSupportingPresence;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSMapTable *uuidToHAPAccessoryConfigTable; // ivar: _uuidToHAPAccessoryConfigTable
@property (readonly) HMDHomeWalletKeyManager *walletKeyManager; // ivar: _walletKeyManager
@property (nonatomic) BOOL watchSkipVersionCheck; // ivar: _watchSkipVersionCheck
@property (readonly) NSArray *wiFiRouterAccessories;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) NSObject<HMDXPCMessageTransportFactory> *xpcMessageTransportFactory; // ivar: _xpcMessageTransportFactory
@property (readonly, nonatomic) NSUUID *zoneID; // ivar: _zoneID
@property (retain, nonatomic) NSMutableArray *zones; // ivar: _zones


+(BOOL)hasMessageReceiverChildren;
+(BOOL)isObjectContainedInHome:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)updateCHIPPropertiesOnHomeModel:(id)arg0 forAddedHAPAccessoryServer:(id)arg1 ;
+(id)decodedMigrationBulletinBoardNotifications:(id)arg0 ;
+(id)decodedMigrationCameraNotificationSettings:(id)arg0 ;
+(id)encodedMigrationBulletinBoardNotifications:(id)arg0 ;
+(id)encodedMigrationCameraNotificationSettings:(id)arg0 ;
+(id)filterUsersSupportingPresence:(id)arg0 ;
+(id)getBuiltinActionSets;
+(id)logCategory;
+(id)migrationBulletinBoardNotificationsForHome:(id)arg0 ;
+(id)migrationCameraNotificationSettingsForHome:(id)arg0 ;
+(id)nfcIssuerKeyIdentifierWithPairingIdentity:(id)arg0 ;
+(id)notificationPayloadForChangedCharacteristics:(id)arg0 destinationIsXPCTransport:(BOOL)arg1 ;
+(id)shortDescription;
+(id)supportedAccessoryClasses;
+(id)zoneIDFromHomeUUID:(id)arg0 ;
+(void)_initialize;
+(void)appendCharacteristicsToAccessoryList:(id)arg0 responseTuples:(id)arg1 forMultipleCharacteristicsRemoteRead:(id)arg2 ;
+(void)appendCharacteristicsToAccessoryList:(id)arg0 responseTuples:(id)arg1 forMultipleCharacteristicsRemoteWrite:(id)arg2 message:(id)arg3 ;
+(void)updateCHIPPropertiesOnAccessoryModel:(id)arg0 forAddedHAPAccessoryServer:(id)arg1 ;
-(BOOL)__shouldAllowAddingWiFiRouterAccessoryWithRequestMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)_addAccessory:(id)arg0 ;
-(BOOL)_addOwnerToPrimaryAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)_canCurrentDeviceRegisterForReachabilityEventNotification;
-(BOOL)_ensureDevicesSymptomDiscoveryMessageCanBeHandled:(id)arg0 ;
-(BOOL)_handleExpiredDeferredRequestTimer:(id)arg0 ;
-(BOOL)_hasPairedReachableBTLEAccessories;
-(BOOL)_isEventTriggerOnLocalDeviceForAccessory:(id)arg0 ;
-(BOOL)_isEventTriggerOnRemoteGatewayForAccessory:(id)arg0 ;
-(BOOL)_isNetworkRouterSupportEnabledForCurrentDevice;
-(BOOL)_isReadRequestAllowForCharacteristics:(id)arg0 message:(id)arg1 error:(*id)arg2 ;
-(BOOL)_isRegisteredForNotificationsForClients:(id)arg0 ;
-(BOOL)_isRegisteredForNotificationsWithRemoteGateway:(id)arg0 ;
-(BOOL)_isRetrievalInProgressForPrimaryAccessory:(id)arg0 linkType:(NSInteger)arg1 ;
-(BOOL)_isSecureClassTriggeredByCharacteristics:(id)arg0 ;
-(BOOL)_isSharedHomeVersionTrustZoneCapable;
-(BOOL)_isUserValid:(id)arg0 error:(*id)arg1 ;
-(BOOL)_loadBalanceWriteRequestOnResidentForAccessory:(id)arg0 accessoryWriteRequestMapTable:(id)arg1 requestMessage:(id)arg2 source:(NSUInteger)arg3 responseTuples:(id)arg4 withCompletionHandler:(id)arg5 ;
-(BOOL)_passReadRequestToCompanion:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 pendingResponses:(id)arg3 remoteAccessories:(id)arg4 withCompletionHandler:(id)arg5 ;
-(BOOL)_passWriteRequestToCompanion:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 remoteAccessories:(id)arg3 responseTuples:(id)arg4 withCompletionHandler:(id)arg5 ;
-(BOOL)_populateTriggerModel:(id)arg0 fromBuilderMessage:(id)arg1 transaction:(id)arg2 responsePayload:(id)arg3 ;
-(BOOL)_removeAccessory:(id)arg0 ;
-(BOOL)_residentDeviceAvailable;
-(BOOL)_shouldAllowAddingAccessoryOfCategory:(id)arg0 requestMessage:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldAllowAddingAccessoryWithDescription:(id)arg0 requestMessage:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldAvoidTombstoningAccessoryServer:(id)arg0 accessory:(id)arg1 ;
-(BOOL)_shouldRegisterForNotificationsWithDevice:(id)arg0 ;
-(BOOL)_shouldSendToDestination:(id)arg0 device:(id)arg1 remoteSourceDevice:(id)arg2 ;
-(BOOL)_shouldWaitForAccessoriesToBeReachable;
-(BOOL)_testTimerForQueuedAddAccessoryWithTimer:(id)arg0 ;
-(BOOL)_validateAddingNewTriggerWithName:(id)arg0 message:(id)arg1 ;
-(BOOL)_verifyUserManagementPermissionForAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyDeviceLockStatus:(id)arg0 ;
-(BOOL)areAllResidentsUnreachable;
-(BOOL)attemptToUpdateThreadNetworkID:(id)arg0 ;
-(BOOL)awdPrimaryReportingDevice;
-(BOOL)canTopicBeForwardedToPrimaryFromResident:(id)arg0 ;
-(BOOL)checkForNetworkRouterSupport:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)configureWithHomeManager:(id)arg0 accessoriesPresent:(id)arg1 uncommittedTransactions:(id)arg2 source:(NSUInteger)arg3 ;
-(BOOL)containsRemovedUser:(id)arg0 ;
-(BOOL)currentDeviceSupportsSiriUnsecuringActionsWithNoPasscodeForSiriSecureAccessoryAccessController:(id)arg0 ;
-(BOOL)currentDeviceSupportsSiriUnsecuringActionsWithWatchAuthForSiriSecureAccessoryAccessController:(id)arg0 ;
-(BOOL)evaluatePredicate:(id)arg0 ;
-(BOOL)getUpdateTransactionForAccessory:(id)arg0 hapAccessory:(id)arg1 accessoryTransaction:(id)arg2 addSvcTransactions:(*id)arg3 updateSvcTransactions:(*id)arg4 removeSvcTransactions:(*id)arg5 ;
-(BOOL)hasResidentDevicesForPrimaryResidentChangeMonitor:(id)arg0 ;
-(BOOL)hasSiriEndpointAccessory;
-(BOOL)isAccessAllowedForCharacteristicsWithMessage:(id)arg0 ;
-(BOOL)isAppleMediaAccessory:(id)arg0 ;
-(BOOL)isApplicationBundleIDSubscribedToAppleMediaAccessoryState:(id)arg0 ;
-(BOOL)isAutomaticSoftwareUpdateEnabled;
-(BOOL)isCarPlayAccessAllowedForActionSet:(id)arg0 withMessage:(id)arg1 fromSource:(NSUInteger)arg2 ;
-(BOOL)isCarPlayAccessAllowedForCharacteristic:(id)arg0 withMessage:(id)arg1 fromSource:(NSUInteger)arg2 ;
-(BOOL)isCurrentDeviceConfirmedPrimaryResident;
-(BOOL)isCurrentDevicePairedWithWatchForSiriSecureAccessoryAccessController:(id)arg0 ;
-(BOOL)isCurrentDevicePrimaryResidentForRemoteEventRouterClientController:(id)arg0 ;
-(BOOL)isCurrentDeviceResidentCapableForRemoteEventRouterClientController:(id)arg0 ;
-(BOOL)isDeviceIdentifierPrimaryResident:(id)arg0 ;
-(BOOL)isDevicePrimaryResident:(id)arg0 ;
-(BOOL)isLocationServiceSettingsEnabled;
-(BOOL)isMediaPeerToPeerEnabled;
-(BOOL)isMediaSystem:(id)arg0 ;
-(BOOL)isMessagedHomepodSettingsEnabledForClientController:(id)arg0 ;
-(BOOL)isNetworkAvailableForRemoteEventRouterClientController:(id)arg0 ;
-(BOOL)isRemoteAccessDeviceReachable;
-(BOOL)isSidekickAccessory:(id)arg0 ;
-(BOOL)isThisHomeMigratedToHH2;
-(BOOL)isThreadCapable;
-(BOOL)ownerTrustZoneCapable;
-(BOOL)remoteEventAllowedForTopic:(id)arg0 deviceType:(NSUInteger)arg1 userType:(NSUInteger)arg2 ;
-(BOOL)requiresUnlockToAccessCharacteristics:(id)arg0 withMessage:(id)arg1 ;
-(BOOL)router:(id)arg0 shouldHandleMessage:(id)arg1 usingRouter:(id)arg2 ;
-(BOOL)shouldAllowTopic:(id)arg0 forDeviceWithMessageIdentifier:(id)arg1 ;
-(BOOL)shouldEnableResidentFirstAccessoryCommunication;
-(BOOL)shouldEncodeLegacyLocationServiceSettingForSettingsParentUUID:(id)arg0 ;
-(BOOL)shouldRelayNotificationToRegisteredDevicesForSource:(id)arg0 ;
-(BOOL)shouldRestrictAllMessagingToLocalTransportsForUser:(id)arg0 ;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(BOOL)synchronouslyFetchIsCarPlayConnectedStatus;
-(BOOL)validateActionsDoNotConflict:(id)arg0 ;
-(NSInteger)destinationTypeForDestinationWithIdentifier:(id)arg0 ;
-(NSInteger)homeLocationForSiriSecureAccessoryAccessController:(id)arg0 ;
-(NSInteger)minimumMediaUserPrivilege;
-(NSUInteger)accessoryCountForRoom:(id)arg0 ;
-(NSUInteger)accessorySettingsLocalMessageHandler:(id)arg0 callerPrivilegeWithMessage:(id)arg1 ;
-(NSUInteger)assistantAccessCapableAccessoryCount;
-(NSUInteger)deriveNetworkRouterSupport:(NSUInteger)arg0 ;
-(id)__modelObjectsForRemovingOutgoingInvitationForUser:(id)arg0 ;
-(id)__readWriteResponseHandler:(SEL)arg0 unhandledRequests:(id)arg1 ;
-(id)__residentDeviceForAccessory:(id)arg0 fromMap:(id)arg1 ;
-(id)_addMediaSessionForCurrentAccessory:(id)arg0 ;
-(id)_buildRequestMapTableFromRequests:(id)arg0 pendingResponses:(id)arg1 ;
-(id)_changedHMDCharacteristicsForHAPCharacteristics:(id)arg0 stateNumber:(id)arg1 broadcast:(BOOL)arg2 accessoryServer:(id)arg3 ;
-(id)_characteristicNotificationPayloadsOnDirectTransports:(BOOL)arg0 ;
-(id)_checkResidentCapabilitiesForCredentialSharing:(id)arg0 ;
-(id)_createBuiltinActionSets;
-(id)_createMediaSessionWithEndpoint:(id)arg0 ;
-(id)_createMessageForReadWriteRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(id)_disablePayloadFromRemotelyUpdatedCharacteristicNotifications:(id)arg0 ;
-(id)_discoveredAccessoriesForServer:(id)arg0 ;
-(id)_discoveredAccessoriesForServer:(id)arg0 linkType:(NSInteger)arg1 ;
-(id)_enqueueRetrievalTupleForAccessory:(id)arg0 linkType:(NSInteger)arg1 inProgress:(*BOOL)arg2 completion:(id)arg3 ;
-(id)_getContainerForAppData:(id)arg0 keyName:(*id)arg1 ;
-(id)_getLogEventsForOperation:(BOOL)arg0 accessories:(id)arg1 requestMap:(id)arg2 identifier:(id)arg3 source:(NSUInteger)arg4 bundleID:(id)arg5 ;
-(id)_handleRenameHomeModel:(id)arg0 message:(id)arg1 ;
-(id)_hmdCharacteristicsForUpdatedHAPcharacteristics:(id)arg0 accessoryServer:(id)arg1 ;
-(id)_outgoingInvitationForUserWithHandle:(id)arg0 ;
-(id)_primaryAccessoryForServer:(id)arg0 ;
-(id)_processTestModeHomeAccessControlOverride:(id)arg0 ;
-(id)_processTestModeHomeLocationStatusOverride:(id)arg0 ;
-(id)_processTestModeSkipHH2MigrationOverride:(id)arg0 ;
-(id)_productDataFromHAPAccessory:(id)arg0 ;
-(id)_readRequestTuplesFromMessage:(id)arg0 outUnhandledRequests:(*id)arg1 ;
-(id)_removeAccessoriesCommon:(id)arg0 ;
-(id)_residentDeviceForResidentUser:(id)arg0 ;
-(id)_residentUserForResidentDevice:(id)arg0 ;
-(id)_residentUsers;
-(id)_retrieveTupleForPrimaryAccessory:(id)arg0 linkType:(NSInteger)arg1 ;
-(id)_setupCodeProviderForMessage:(SEL)arg0 ;
-(id)_setupDescriptionFromData:(id)arg0 error:(*id)arg1 ;
-(id)_setupPendingResponseTimerIdentifier:(id)arg0 originalRequestIdentifier:(id)arg1 ;
-(id)_setupTimerWithPreferenceKey:(id)arg0 ;
-(id)_splitCharacteristicChanges:(id)arg0 changedAccessories:(id)arg1 ;
-(id)_userForDevice:(id)arg0 ;
-(id)accessoriesWithUUIDs:(id)arg0 ;
-(id)accessoryForMediaProfileUniqueIdentifier:(id)arg0 ;
-(id)accessoryWithDeviceIdentifier:(id)arg0 ;
-(id)accessoryWithEndpointIdentifier:(id)arg0 ;
-(id)accessoryWithIdentifier:(id)arg0 ;
-(id)accessoryWithSPIClientIdentifier:(id)arg0 ;
-(id)accessoryWithUUID:(id)arg0 ;
-(id)actionSetWithName:(id)arg0 ;
-(id)actionSetWithUUID:(id)arg0 ;
-(id)actionWithDictionaryRepresentation:(id)arg0 ;
-(id)addActionSetName:(id)arg0 ;
-(id)addName:(id)arg0 ;
-(id)aggregateDataTopicForMediaGroupsAggregator:(id)arg0 ;
-(id)allNewlyConfiguredAccessories;
-(id)appleMediaAccessoriesForMediaGroupsAggregator:(id)arg0 ;
-(id)appleMediaAccessoriesForStateManager:(id)arg0 ;
-(id)audioDestinationControllerDataForDestination:(id)arg0 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)balancedResidentMapForAccessories:(id)arg0 ;
-(id)builtInActionSetInfo;
-(id)confirmedPrimaryResidentDevice;
-(id)confirmedPrimaryResidentDeviceForPrimaryResidentChangeMonitor:(id)arg0 ;
-(id)createAccessorySettingsLocalMessageHandlerWithHomeUUID:(id)arg0 languageValuesDataProvider:(id)arg1 ;
-(id)createAccessorySettingsMessengerWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 messageRouter:(id)arg2 messageHandler:(id)arg3 logEventSubmitter:(id)arg4 legacyMessageReceiver:(id)arg5 ;
-(id)createActionSetWithName:(id)arg0 uuid:(id)arg1 type:(id)arg2 ;
-(id)createAppleMediaAccessoriesStateManagerMetricsDispatcherWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 ;
-(id)createAppleMediaAccessoriesStateManagerWithIdentifier:(id)arg0 messenger:(id)arg1 metricsDispatcher:(id)arg2 ;
-(id)createAppleMediaAccessoriesStateMessengerWithIdentifier:(id)arg0 messageDispatcher:(id)arg1 ;
-(id)createModelForAppDataPayload:(id)arg0 existingAppData:(id)arg1 parentUUID:(id)arg2 ;
-(id)createMultiuserSettingsMessenger:(id)arg0 messageDispatcher:(id)arg1 ;
-(id)createPrimaryResidentMessageRouterMetricsDispatcherWithLogEventSubmitter:(id)arg0 ;
-(id)createPrimaryResidentMessageRouterWithMessageDispatcher:(id)arg0 metricsDispatcher:(id)arg1 ;
-(id)createSiriEndpointProfileMessageHandlerWithHomeUUID:(id)arg0 ;
-(id)createSiriEndpointProfilesMessengerWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 messageRouter:(id)arg2 messageHandler:(id)arg3 ;
-(id)createUnifiedLanguageValueListSettingDataProvider;
-(id)currentUser;
-(id)dataProvidersForUnifiedLanguageValueListSettingDataProvider:(id)arg0 ;
-(id)delegatingRouter:(id)arg0 filteredTopics:(id)arg1 forRouter:(id)arg2 ;
-(id)delegatingRouter:(id)arg0 upstreamTopicsFor:(id)arg1 ;
-(id)deletedBackingStoreObject;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)destinationControllerDataForAppleMediaAccessory:(id)arg0 ;
-(id)destinationControllerWithCommittedDestinationIdentifier:(id)arg0 ;
-(id)destinationControllerWithDestinationIdentifier:(id)arg0 ;
-(id)destinationControllerWithIdentifier:(id)arg0 ;
-(id)destinationControllers;
-(id)destinationForAppleMediaAccessory:(id)arg0 ;
-(id)destinationForMediaSystem:(id)arg0 ;
-(id)destinationManagerWithParentIdentifier:(id)arg0 ;
-(id)destinationManagersWithDestinationIdentifiers:(id)arg0 supportedOptions:(NSUInteger)arg1 ;
-(id)deviceForAccessoryUUID:(id)arg0 forRemoteEventRouterClientController:(id)arg1 ;
-(id)deviceForAppleMediaAccessoryMessageRouter:(id)arg0 message:(id)arg1 ;
-(id)deviceForPrimaryResidentForRemoteEventRouterClientController:(id)arg0 ;
-(id)dumpActionSetDescription;
-(id)dumpCharacteristicNotificationRegistry;
-(id)dumpMediaSessionDescription;
-(id)dumpState;
-(id)emptyModelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)eventRouterDumpStateInfo;
-(id)eventSourceForMediaGroupsAggregator:(id)arg0 ;
-(id)eventStoreReadHandle;
-(id)eventStoreReadHandleForRemoteEventRouterClientController:(id)arg0 ;
-(id)eventStoreWriteHandleForRemoteEventRouterClientController:(id)arg0 ;
-(id)expandedTopicsWithTopics:(id)arg0 ;
-(id)filterBuiltinActionSets:(id)arg0 ;
-(id)getBulletinBoardNotificationSerializedFileName;
-(id)getCameraNotificationSettingsSerializedFileName;
-(id)getReachabilityTupleForAccessoryUUID:(id)arg0 ;
-(id)getServiceTransaction:(id)arg0 parentUUID:(id)arg1 changeType:(NSUInteger)arg2 ;
-(id)getTransactionFromHAPAccessory:(id)arg0 hmdAccessory:(id)arg1 uuid:(id)arg2 hostAccessoryUUID:(id)arg3 configurationAppIdentifier:(id)arg4 objectChangeType:(NSUInteger)arg5 ;
-(id)hapAccessoriesForServer:(id)arg0 ;
-(id)hapAccessoriesForServer:(id)arg0 linkType:(NSInteger)arg1 ;
-(id)hapAccessoryServerIdentifiers;
-(id)hapAccessoryUniqueIdentifiers;
-(id)hapAccessoryWithIdentifier:(id)arg0 ;
-(id)hapAccessoryWithIdentifier:(id)arg0 instanceID:(id)arg1 ;
-(id)hmdHAPAccessoryWithHAPAccessory:(id)arg0 ;
-(id)homeConfigurationModelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)hubAccessories;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 defaultRoomUUID:(id)arg2 owner:(id)arg3 homeManager:(id)arg4 presenceAuth:(id)arg5 ;
// -(id)initWithName:(id)arg0 uuid:(id)arg1 defaultRoomUUID:(id)arg2 owner:(id)arg3 homeManager:(id)arg4 presenceAuth:(id)arg5 metricsDispatcherFactory:(id)arg6 logEventSubmitter:(id)arg7 dailyScheduler:(id)arg8 currentUserFactory:(id)arg9 residentDeviceManagerFactory:(unk)arg10 locationHandlerFactory:(id)arg11 hapMetadata:(unk)arg12 siriSecureAccessoryAccessController:(id)arg13 carPlayDataSource:(unk)arg14 deviceLockStateDataSource:(id)arg15 notificationRegistry:(id)arg16 administratorHandlerFactory:(id)arg17 xpcMessageTransportFactory:(id)arg18 localCapabilitiesDataSource:(id)arg19 notificationCenter:(id)arg20  ;
-(id)lightProfileWithUUID:(id)arg0 ;
-(id)loadMigrationBulletinBoardNotificationsFromDisk;
-(id)loadMigrationCameraNotificationSettingsFromDisk;
-(id)localAndRemoteSubscriptionProvider;
-(id)logIdentifier;
-(id)mediaDestinationManagerWithParentIdentifier:(id)arg0 ;
-(id)mediaDestinationManagerWithParticipantAccessoryUUID:(id)arg0 forMediaGroupsUnconfiguredParticipantOnboardingManager:(id)arg1 ;
-(id)mediaDestinationManagers;
-(id)mediaDestinationManagersWithHomeTheaterSupportedOptions;
-(id)mediaDestinationManagersWithSupportedOptions:(NSUInteger)arg0 ;
-(id)mediaDestinationsInRoom:(id)arg0 ;
-(id)mediaGroupsAggregateDataTopicName;
-(id)mediaPassword;
-(id)mediaProfileForUniqueIdentifier:(id)arg0 ;
-(id)mediaProfileWithUUID:(id)arg0 ;
-(id)mediaSessionStateWithIdentifier:(id)arg0 ;
-(id)mediaSessionWithIdentifier:(id)arg0 ;
-(id)mediaSessionWithUUID:(id)arg0 ;
-(id)mediaSystemController:(id)arg0 accessoryForUUID:(id)arg1 ;
-(id)mediaSystemForAppleMediaAccessory:(id)arg0 ;
-(id)mediaSystemWithUUID:(id)arg0 ;
-(id)mediaSystemsWithUUIDs:(id)arg0 ;
-(id)messageDispatcherForRemoteEventRouterClientController:(id)arg0 ;
-(id)messageTargetForDeviceIdentifier:(id)arg0 ;
-(id)migrateOwnedTriggers;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)multiUserSettings;
-(id)notificationCenterForRemoteEventRouterClientController:(id)arg0 ;
-(id)outgoingInvitationWithUUID:(id)arg0 ;
-(id)owner;
-(id)participantDataTopicForAccessory:(id)arg0 mediaGroupsAggregator:(id)arg1 ;
-(id)performReadRequests:(id)arg0 loggingObject:(id)arg1 ;
-(id)performReadRequests:(id)arg0 withRetries:(NSInteger)arg1 timeInterval:(CGFloat)arg2 loggingObject:(id)arg3 ;
-(id)performWriteRequests:(id)arg0 loggingObject:(id)arg1 ;
-(id)performWriteRequests:(id)arg0 withRetries:(NSInteger)arg1 timeInterval:(CGFloat)arg2 loggingObject:(id)arg3 ;
-(id)playbackArchiveWithSessionIdentifier:(id)arg0 ;
-(id)preferredDevice;
-(id)prepareUserManagementOperationForUser:(id)arg0 accessories:(id)arg1 type:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)prepareUserManagementOperationForUser:(id)arg0 accessory:(id)arg1 type:(NSUInteger)arg2 model:(id)arg3 error:(*id)arg4 ;
-(id)primaryResident;
-(id)primaryResidentChangeMonitorForRemoteEventRouterClientController:(id)arg0 ;
-(id)primaryResidentChangeMonitorForRouterServer:(id)arg0 ;
-(id)primaryResidentDeviceForPrimaryResidentMessageRouter:(id)arg0 ;
-(id)primaryResidentDeviceIdentifierForRemoteEventRouterClientController:(id)arg0 ;
-(id)propertiesRegisteredForMediaProfileUniqueIdentifier:(id)arg0 ;
-(id)receiverForParticipantAccessoryUUID:(id)arg0 mediaGroupsLocalDataStorage:(id)arg1 ;
-(id)remoteEventAccessControlProvider;
-(id)removeName:(id)arg0 ;
-(id)replaceActionSetName:(id)arg0 withNewName:(id)arg1 ;
-(id)replaceName:(id)arg0 withNewName:(id)arg1 ;
-(id)roomForAllDestinationParentIdentifiers:(id)arg0 ;
-(id)roomForAllDestinationParentIdentifiers:(id)arg0 mediaGroupsAggregator:(id)arg1 ;
-(id)roomWithName:(id)arg0 ;
-(id)roomWithUUID:(id)arg0 ;
-(id)roomWithUniqueIdentifier:(id)arg0 forClientIdentifierSalt:(id)arg1 ;
-(id)roomsForMediaGroupsAggregator:(id)arg0 ;
-(id)rootDestinationManagerWithDescendantDestinationIdentifier:(id)arg0 ;
-(id)routerForMediaGroupsAggregatorMessenger:(id)arg0 ;
-(id)routerForParticipantAccessoryUUID:(id)arg0 mediaGroupsLocalDataStorage:(id)arg1 ;
-(id)routerServerUserAccessControlProviderForIdentifier:(id)arg0 ;
-(id)routerServerUserAccessControlProviderIdentifierForMessage:(id)arg0 ;
-(id)serviceGroupWithName:(id)arg0 ;
-(id)serviceGroupWithUUID:(id)arg0 ;
-(id)sharedHomeModel;
-(id)sharedUsers;
-(id)shortDescription;
-(id)targetAccessoriesWithDestinationIdentifiers:(id)arg0 ;
-(id)timerWithTimerInterval:(CGFloat)arg0 ;
-(id)triggerOwnedActionSetWithUUID:(id)arg0 ;
-(id)triggerWithName:(id)arg0 ;
-(id)triggerWithUUID:(id)arg0 ;
-(id)updateHomeWithModel:(id)arg0 message:(id)arg1 ;
-(id)updatePersonManagerSettings:(id)arg0 ;
-(id)userWithMergeID:(id)arg0 ;
-(id)userWithPairingIdentity:(id)arg0 ;
-(id)userWithPairingIdentityIdentifier:(id)arg0 ;
-(id)userWithUUID:(id)arg0 ;
-(id)validateName:(id)arg0 ;
-(id)writeRequestTuplesFromMessage:(id)arg0 outUnhandledRequests:(*id)arg1 ;
-(id)zoneWithName:(id)arg0 ;
-(id)zoneWithUUID:(id)arg0 ;
-(void)__addMediaSession:(id)arg0 ;
-(void)__encodeAccessoriesWithCoder:(id)arg0 options:(NSUInteger)arg1 ;
-(void)__handleAcceptedOutgoingInvitationResponse:(id)arg0 destinationAddress:(id)arg1 publicKey:(id)arg2 username:(id)arg3 presenceAuthStatus:(id)arg4 completionHandler:(id)arg5 ;
-(void)__handleAddHAPAccessoryModel:(id)arg0 message:(id)arg1 ;
-(void)__handleAddMediaAccessoryModel:(id)arg0 message:(id)arg1 ;
-(void)__handleCancelledOutgoingInvitation:(id)arg0 ;
-(void)__handleCompletedOutgoingInvitation:(id)arg0 ;
-(void)__handleProcessStateChange:(id)arg0 ;
-(void)__registerForRemoteAccessoryReachabilityNotifications:(BOOL)arg0 applicationBundleIdentifier:(id)arg1 ;
-(void)__saveConfigurationVersionTransaction;
-(void)__sendOutgoingInvitations:(id)arg0 suppressHomeInviteNotification:(BOOL)arg1 ;
-(void)__updateServiceTransaction:(id)arg0 accessoryTransaction:(id)arg1 service:(id)arg2 accessory:(id)arg3 hapService:(id)arg4 ;
-(void)_accessoryPairingDidComplete:(id)arg0 configuration:(id)arg1 pairingEvent:(id)arg2 accessoryServer:(id)arg3 certificationStatus:(NSInteger)arg4 requestMessage:(id)arg5 ;
-(void)_addAccessories:(id)arg0 ;
-(void)_addAccessoryToBalancedResidentMap:(id)arg0 residentDevice:(id)arg1 balancedResidentMap:(id)arg2 ;
-(void)_addAllUsersToAccessory:(id)arg0 ;
-(void)_addNewTrigger:(id)arg0 message:(id)arg1 payloadAnnex:(id)arg2 triggerModel:(id)arg3 ;
-(void)_addOutgoingInvitations:(id)arg0 message:(id)arg1 transactionCompleted:(id)arg2 ;
-(void)_addResidentWithUsername:(id)arg0 publicKey:(id)arg1 destination:(id)arg2 ;
-(void)_addResponseTuplesFromDictionary:(id)arg0 accessoryRequestMapTable:(id)arg1 responseTuples:(id)arg2 completedGroup:(id)arg3 logEvents:(id)arg4 ;
-(void)_addRetrievalCompletionTuple:(id)arg0 ;
-(void)_addTransactionForActiveNetworkRouterAccessory:(id)arg0 isReplacement:(BOOL)arg1 ;
-(void)_addTransactionForMinimumHomeKitVersionForAccessoryNetworkProtectionChange:(id)arg0 message:(id)arg1 ;
-(void)_addTransactionForMinimumNetworkRouterHomeKitVersion:(id)arg0 message:(id)arg1 ;
-(void)_addTransactionWithProtectionMode:(id)arg0 message:(id)arg1 ;
-(void)_addUserToContainer:(id)arg0 ;
-(void)_addUserToIdentityRegistry:(id)arg0 ;
-(void)_addUsers:(id)arg0 accessory:(id)arg1 ;
-(void)_addUsersWithInviteInformations:(id)arg0 message:(id)arg1 ;
-(void)_applyNotificationDeregistrations;
-(void)_areWriteRequestsAllowed:(id)arg0 message:(id)arg1 completion:(id)arg2 ;
-(void)_auditAndDeregisterCharacteristicsForHAPAccessory:(id)arg0 ;
-(void)_auditChangedCharactersitics:(id)arg0 ;
-(void)_buildCharacteristicWriteRequest:(id)arg0 accessoryWriteRequestMapTable:(id)arg1 accessoryList:(id)arg2 responseTuples:(id)arg3 user:(id)arg4 ;
-(void)_cancelPairingWithAccessoryDescription:(id)arg0 ;
-(void)_cancelPairingWithAccessoryUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_checkNotifyRemoteControllerNewAccessoryReachableWithAccessory:(id)arg0 ;
-(void)_cleanAddAccessoryOperations;
-(void)_cleanRemovedUsers:(id)arg0 ;
-(void)_clearAccessoryNetworkProtectionStateWithTransaction:(id)arg0 ;
-(void)_configureBulletinNotification;
-(void)_configureConfiguredResident:(id)arg0 desiredConfigState:(NSUInteger)arg1 message:(id)arg2 ;
-(void)_configureNetworkRouterClientManager:(id)arg0 ;
-(void)_configurePairedAccessoriesForServer:(id)arg0 reAddServices:(BOOL)arg1 ;
-(void)_configureUnconfiguredResident:(id)arg0 desiredConfigState:(NSUInteger)arg1 ;
-(void)_continueLegacyAddAccessoryWithUUID:(id)arg0 unassociatedAccessory:(id)arg1 setupCode:(id)arg2 appID:(id)arg3 message:(id)arg4 ;
-(void)_continuePairingAfterUserConsentWithAccessoryDescription:(id)arg0 progressHandlerDelegate:(id)arg1 message:(id)arg2 ;
-(void)_continuePairingAfterUserConsentWithAccessoryUUID:(id)arg0 orUnassociatedAccessory:(id)arg1 message:(id)arg2 ;
-(void)_createUniquePSKClientConfigurationWithRequestMessage:(id)arg0 pairingEvent:(id)arg1 completion:(id)arg2 ;
-(void)_dequeueRetrievalForAccessory:(id)arg0 linkType:(NSInteger)arg1 error:(id)arg2 ;
-(void)_deregisterDeviceForReachabilityNotification:(id)arg0 ;
-(void)_deregisterPairedAccessory:(id)arg0 ;
-(void)_deregisterStateHandler;
-(void)_disableDirectCharacteristicNotificationsForClient:(id)arg0 ;
-(void)_disableNotificationsForClient:(id)arg0 ;
-(void)_disableNotificationsForDevices:(id)arg0 ;
-(void)_dispatchCHIPReport:(id)arg0 destination:(id)arg1 ;
-(void)_enableNotificationsForDevices:(id)arg0 ;
-(void)_encodeActionSets:(id)arg0 coder:(id)arg1 ;
-(void)_encodeObjectsWithAccessoriesWithCoder:(id)arg0 ;
-(void)_evaluateNetworkProtectionAndRouterManagement;
-(void)_evaluateNetworkProtectionSupport;
-(void)_evaluateNetworkRouterManagementForTransaction:(id)arg0 ;
-(void)_evaluateOwnerTrustZoneCapabilityAndNotify;
-(void)_evaluateShouldRelaunchAndSetRelaunch;
-(void)_fetchMetadataFromPrimaryResidentWithCompletion:(id)arg0 ;
-(void)_getRunTimeStateUpdateWithOptions:(NSUInteger)arg0 includeMediaAccessorySessionState:(BOOL)arg1 includeResidentDeviceState:(BOOL)arg2 completion:(id)arg3 ;
-(void)_handleAccessoryReachabilityChange:(id)arg0 ;
-(void)_handleAccessoryReachabilityEventNotificationsRegistration:(id)arg0 ;
-(void)_handleAccessoryReachabilityRegistration:(id)arg0 ;
-(void)_handleAccessoryReachabilityRegistrationAndEnable:(id)arg0 ;
-(void)_handleAccessoryReachabilityUpdatesTimerFired;
-(void)_handleAddAccessories:(id)arg0 ;
-(void)_handleAddAccessory:(id)arg0 ;
-(void)_handleAddAccessoryModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddAccessoryWithDescription:(id)arg0 ;
-(void)_handleAddActionSet:(id)arg0 ;
-(void)_handleAddActionSetFromBuilder:(id)arg0 ;
-(void)_handleAddActionSetModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddEventTrigger:(id)arg0 ;
-(void)_handleAddEventTriggerModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddHomeOwnedActionSet:(id)arg0 ;
-(void)_handleAddOutgoingHomeInvitationModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddRoom:(id)arg0 ;
-(void)_handleAddRoomModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddServiceGroup:(id)arg0 ;
-(void)_handleAddServiceGroupModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddTimerTrigger:(id)arg0 ;
-(void)_handleAddTimerTriggerModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddTriggerOwnedActionSet:(id)arg0 ;
-(void)_handleAddTriggers:(id)arg0 ;
-(void)_handleAddUserModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAddZone:(id)arg0 ;
-(void)_handleAddZoneModel:(id)arg0 message:(id)arg1 ;
-(void)_handleAssistantAccessControlUpdate:(id)arg0 ;
-(void)_handleCHIPSendRemoteRequestMessage:(id)arg0 ;
-(void)_handleCancelPairingAccessory:(id)arg0 ;
-(void)_handleCharacteristicEnableNotification:(id)arg0 ;
-(void)_handleCharacteristicRead:(id)arg0 ;
-(void)_handleCharacteristicWrite:(id)arg0 ;
-(void)_handleCharacteristicsChangedNotification:(id)arg0 ;
-(void)_handleCoalescedModifyNotifications;
-(void)_handleContinuePairingAccessory:(id)arg0 ;
-(void)_handleCreateUniquePSKClientConfiguration:(id)arg0 ;
-(void)_handleDidOnboardLocationServicesChange:(id)arg0 message:(id)arg1 ;
-(void)_handleDidReceiveIDSMessageWithNoListenerFromAddress:(id)arg0 ;
-(void)_handleDisableNotificationsTimerFired;
-(void)_handleEnableMultiUserRequest:(id)arg0 ;
-(void)_handleEnableNotifications:(id)arg0 ;
-(void)_handleExecuteActionSet:(id)arg0 ;
-(void)_handleExecuteConfirmationOfTrigger:(id)arg0 ;
-(void)_handleFailedAccessories:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 pendingResponses:(id)arg3 fastFailedAccessories:(id)arg4 slowFailedAccessories:(id)arg5 tmpErrorResponseTuples:(id)arg6 waitGroup:(id)arg7 failureWaitGroup:(id)arg8 activity:(id)arg9 ;
-(void)_handleFetchLastModifiedServiceOfType:(id)arg0 ;
-(void)_handleHasAnyUserAcknowledgedCameraRecordingOnboardingChange:(id)arg0 message:(id)arg1 ;
-(void)_handleHomeLocationChange:(NSInteger)arg0 previousLocation:(NSInteger)arg1 ;
-(void)_handleHomeLocationUpdateFromSharedAdmin:(id)arg0 ;
-(void)_handleHomeUpdateDidOnboardLocationServicesRequest:(id)arg0 ;
-(void)_handleHomeUpdateLocationServicesEnabledRequest:(id)arg0 ;
-(void)_handleJoinOrFormThreadNetworkMessage:(id)arg0 ;
-(void)_handleLegacyAddAccessory:(id)arg0 ;
-(void)_handleLocationServicesEnabledChange:(id)arg0 message:(id)arg1 ;
-(void)_handleMediaContentProfileAccessControlUpdate:(id)arg0 ;
-(void)_handleMediaPropertiesRead:(id)arg0 ;
-(void)_handleMediaPropertiesWrite:(id)arg0 ;
-(void)_handleModifyCharacteristicNotifications:(id)arg0 ;
-(void)_handleMultiUserEnabledChange:(id)arg0 message:(id)arg1 ;
-(void)_handleMultipleCharacteristicRead:(id)arg0 ;
-(void)_handleMultipleCharacteristicWrite:(id)arg0 ;
-(void)_handleNetworkProtectionModeChangeForTransaction:(id)arg0 ;
-(void)_handleOutgoingInvitations:(id)arg0 ;
-(void)_handlePendingResponsesTimerFired:(BOOL)arg0 ;
-(void)_handleQueryResidentReachabilityForAccessories:(id)arg0 ;
-(void)_handleQueryUserIsAdmin:(id)arg0 ;
-(void)_handleReadMediaProperties:(id)arg0 source:(NSUInteger)arg1 message:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleReceivedNonCloudSourcedSharedHomeModel;
-(void)_handleRemoteGatewayNotificationRegistration:(id)arg0 enable:(BOOL)arg1 ;
-(void)_handleRemoteReachabilityNotificationTimerFired;
-(void)_handleRemoteUserClientCloudShareRepairRequest:(id)arg0 ;
-(void)_handleRemoteUserClientCloudShareRequest:(id)arg0 ;
-(void)_handleRemoveAccessoryAfterUserConsent:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveAccessoryMessage:(id)arg0 ;
-(void)_handleRemoveAccessoryModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveActionSet:(id)arg0 ;
-(void)_handleRemoveActionSetModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveAppDataModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveClientConfiguration:(id)arg0 ;
-(void)_handleRemoveOutgoingHomeInvitationModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveRoom:(id)arg0 ;
-(void)_handleRemoveRoomModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveServiceGroup:(id)arg0 ;
-(void)_handleRemoveServiceGroupModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveTrigger:(id)arg0 ;
-(void)_handleRemoveTriggerModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveUser:(id)arg0 ;
-(void)_handleRemoveUserModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRemoveZone:(id)arg0 ;
-(void)_handleRemoveZoneModel:(id)arg0 message:(id)arg1 ;
-(void)_handleRename:(id)arg0 ;
-(void)_handleRequestHomeDataSync:(id)arg0 ;
-(void)_handleResetAndRemoveAllCHIPPairingsFromAccessoryMessage:(id)arg0 ;
-(void)_handleResidentAccessoryReachableWithPayload:(id)arg0 ;
-(void)_handleResidentChange;
-(void)_handleResolveThreadNetworkRequest:(id)arg0 ;
-(void)_handleResponseForElectMessageToResident:(id)arg0 error:(id)arg1 ;
-(void)_handleRetrieveAsyncResults:(id)arg0 ;
-(void)_handleRetrieveHomeLocationForFeedback:(id)arg0 ;
-(void)_handleSendingNotificationsForRequest:(id)arg0 requestIdentifier:(id)arg1 supportsMultiPartResponse:(BOOL)arg2 characteristicUpdates:(id)arg3 completion:(id)arg4 ;
-(void)_handleSetAppData:(id)arg0 ;
-(void)_handleSetHasAnyUserAcknowledgedCameraRecordingOnboardingRequest:(id)arg0 ;
-(void)_handleSetHasOnboardedForAccessCodeChange:(id)arg0 message:(id)arg1 ;
-(void)_handleSetHasOnboardedForAccessCodeMessage:(id)arg0 ;
-(void)_handleSetHasOnboardedForWalletKeyChange:(id)arg0 message:(id)arg1 ;
-(void)_handleSetHasOnboardedForWalletKeyMessage:(id)arg0 ;
-(void)_handleSetMinHomeKitVersionForAccessoryNetworkProtectionChange:(id)arg0 ;
-(void)_handleSetMinimumNetworkRouterHomeKitVersion:(id)arg0 ;
-(void)_handleSoundCheckChange:(id)arg0 message:(id)arg1 ;
-(void)_handleSoundCheckUpdateRequest:(id)arg0 ;
-(void)_handleStartDiscoveringSymptomsForNearbyDevicesMessage:(id)arg0 ;
-(void)_handleStopDiscoveringSymptomsForNearbyDevicesMessage:(id)arg0 ;
-(void)_handleTestUpgradeToROAR:(id)arg0 ;
-(void)_handleThreadNetworkCredentialsRequest:(id)arg0 ;
-(void)_handleUnjoinThreadNetworkMessage:(id)arg0 ;
-(void)_handleUpdateAppDataModel:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateAutomaticSoftwareUpdate:(id)arg0 ;
-(void)_handleUpdateAutomaticThirdPartyAccessorySoftwareUpdate:(id)arg0 ;
-(void)_handleUpdateMediaPassword:(id)arg0 ;
-(void)_handleUpdateMediaPeerToPeerEnabled:(id)arg0 ;
-(void)_handleUpdateMinimumMediaUserPrivilege:(id)arg0 ;
-(void)_handleUpdateNetworkProtection:(id)arg0 ;
-(void)_handleUpdateNetworkProtectionWithHomeModel:(id)arg0 message:(id)arg1 ;
-(void)_handleUpdateOutgoingInvitationState:(id)arg0 ;
-(void)_handleUpdatePresenceConsent:(id)arg0 ;
-(void)_handleUpdateRequestForHomeInvitation:(id)arg0 controllerPublicKey:(id)arg1 controllerUsername:(id)arg2 invitationState:(NSInteger)arg3 presenceAuthStatus:(id)arg4 preferredUserID:(id)arg5 fromHandle:(id)arg6 fromAddress:(id)arg7 message:(id)arg8 messageResponseHandler:(id)arg9 ;
-(void)_handleUpdateRequestForHomeInvitationFromInvitee:(id)arg0 ;
-(void)_handleUpdateUserAccess:(id)arg0 ;
-(void)_handleUpdateUserAnnounceAccess:(id)arg0 ;
-(void)_handleUpdateUserCamerasAccessLevel:(id)arg0 ;
-(void)_handleUpdatedCharacteristics:(id)arg0 accessoryServer:(id)arg1 stateNumber:(id)arg2 broadcast:(BOOL)arg3 internal:(BOOL)arg4 ;
-(void)_handleUserConsentForAccessoryReplacement:(id)arg0 consent:(BOOL)arg1 message:(id)arg2 ;
-(void)_handleUserConsentResponseForAccessory:(id)arg0 ;
-(void)_handleUserInvitations:(id)arg0 ;
-(void)_handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg0 ;
-(void)_handleWriteMediaProperties:(id)arg0 source:(NSUInteger)arg1 requestMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)_loadBalancedRedispatchForAccessories:(id)arg0 source:(NSUInteger)arg1 dispatchGroup:(id)arg2 writeRequestMap:(id)arg3 requestMessage:(id)arg4 responseTuples:(id)arg5 ;
-(void)_logPersistentCharacteristicRegistrations:(id)arg0 ;
-(void)_migrateAppleMediaAccessoriesWithCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)_migrateHomeAllObjectsCloudZone:(id)arg0 migrationGroup:(id)arg1 migrationQueue:(id)arg2 saveModels:(id)arg3 runModels:(id)arg4 ;
-(void)_migrateHomeMediaSettingsCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)_migrateHomeObjectCloudZone:(id)arg0 defaultModel:(id)arg1 completion:(id)arg2 ;
-(void)_migrateHomeSettingsCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)_migrateHomeUsersCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)_migrateResidentDevicesCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)_migrateUnknownAccessoriesWithCloudZone:(id)arg0 accessoryUUIDs:(id)arg1 migrationQueue:(id)arg2 completion:(id)arg3 ;
-(void)_modifyCharacteristicNotifications:(id)arg0 mediaNotifications:(id)arg1 enableNotification:(BOOL)arg2 withDevice:(id)arg3 ;
-(void)_modifyCharacteristicNotifications:(id)arg0 mediaNotifications:(id)arg1 enableNotification:(BOOL)arg2 withDevice:(id)arg3 completion:(id)arg4 ;
-(void)_modifyCharacteristicNotificationsOnRemoteGateways:(id)arg0 mediaNotifications:(id)arg1 enableNotification:(BOOL)arg2 ;
-(void)_modifyCharacteristicNotificationsOnResident:(id)arg0 mediaNotifications:(id)arg1 enableNotification:(BOOL)arg2 ;
-(void)_notifyChangedCharacteristics:(id)arg0 identifier:(id)arg1 multiPartResponse:(BOOL)arg2 moreMessagesInMultipart:(BOOL)arg3 requestMessage:(id)arg4 withCompletionHandler:(id)arg5 ;
-(void)_notifyChangedCharacteristics:(id)arg0 message:(id)arg1 modifiedCharacteristics:(id)arg2 broadcast:(BOOL)arg3 ;
-(void)_notifyChangedCharacteristics:(id)arg0 withRequestIdentifier:(id)arg1 notificationUpdateIdentifier:(id)arg2 toUserDeviceAddress:(id)arg3 broadcast:(BOOL)arg4 ;
-(void)_notifyChangedProperties:(id)arg0 withRequestIdentifier:(id)arg1 notificationUpdateIdentifier:(id)arg2 toUserDeviceAddress:(id)arg3 ;
-(void)_notifyClientOfNewlyAddedAccessories:(id)arg0 requestMessage:(id)arg1 ;
-(void)_notifyClientsOfAccessoryInfoUpdatedForAccessories:(id)arg0 shouldRefreshBadge:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_notifyClientsOfUpdatedResidentUser:(id)arg0 ;
-(void)_notifyOwnerOfAddedAccessories:(id)arg0 completion:(id)arg1 ;
-(void)_notifyRemoteControllerAccessoryReachableWithAccessory:(id)arg0 device:(id)arg1 ;
-(void)_notifyRemoteUsersOfChangedCharacteristics:(id)arg0 message:(id)arg1 broadcast:(BOOL)arg2 ;
-(void)_notifyRemoteUsersOfChangedProperties:(id)arg0 requestMessageInformation:(id)arg1 ;
-(void)_notifyRetrievalError:(id)arg0 accessoryServer:(id)arg1 linkType:(NSInteger)arg2 accessoryOperationBlock:(id)arg3 ;
-(void)_notifyThreadLayerOfResidentChange;
-(void)_notifyUpdatedCharacteristic:(id)arg0 withRequestIdentifier:(id)arg1 notificationUpdateIdentifier:(id)arg2 toUserDeviceAddress:(id)arg3 completion:(id)arg4 ;
// -(void)_pairAccessoryWithAccessoryDescription:(id)arg0 configuration:(id)arg1 pairingEvent:(id)arg2 progressHandler:(id)arg3 requestMessage:(unk)arg4  ;
-(void)_pairAccessoryWithAccessoryDescription:(id)arg0 unpairedAccessory:(id)arg1 configuration:(id)arg2 pairingEvent:(id)arg3 requestMessage:(id)arg4 ;
-(void)_performOperation:(id)arg0 completion:(id)arg1 ;
-(void)_performPostSaveActionsWithReason:(id)arg0 ;
-(void)_postInternalNotificationForChangedCharacteristics:(id)arg0 modifiedCharacteristics:(id)arg1 changedByThisDevice:(BOOL)arg2 residentShouldNotifyPeers:(BOOL)arg3 message:(id)arg4 broadcast:(BOOL)arg5 ;
-(void)_processAccessoriesToAddForUnpairedAccessory:(id)arg0 certificationStatus:(NSInteger)arg1 accessoryServer:(id)arg2 networkCredential:(id)arg3 pairingEvent:(id)arg4 message:(id)arg5 completionHandler:(id)arg6 ;
-(void)_processLegacyPairingRequestForMessage:(id)arg0 cancelPairing:(BOOL)arg1 ;
-(void)_processOutgoingInvitationsRequest:(id)arg0 ;
-(void)_processPairingRequestForMessage:(id)arg0 cancelPairing:(BOOL)arg1 ;
-(void)_processProductDataForNewlyAddedAccessory:(id)arg0 transaction:(id)arg1 ;
-(void)_processUpdatedAccessoryServer:(id)arg0 reAddServices:(BOOL)arg1 ;
-(void)_processUpdatedProductDataForAccessory:(id)arg0 hapAccessory:(id)arg1 transaction:(id)arg2 ;
-(void)_purgeResidentUsers;
-(void)_queueNewlyAddedAccessoryForResponseWithAccessory:(id)arg0 message:(id)arg1 ;
-(void)_reachabilityChangedForAccessory:(id)arg0 reachable:(BOOL)arg1 ;
-(void)_readCharacteristicValues:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)_readCharacteristicValuesForAccessories:(id)arg0 readRequestMap:(id)arg1 responseTuples:(id)arg2 requestMessage:(id)arg3 source:(NSUInteger)arg4 viaDevice:(id)arg5 completionHandler:(id)arg6 ;
-(void)_reallyRedispatchReadsToDevice:(id)arg0 accessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 source:(NSUInteger)arg5 responseTuples:(id)arg6 activity:(id)arg7 ;
-(void)_reallyRedispatchWritesToDevice:(id)arg0 accessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 source:(NSUInteger)arg5 responseTuples:(id)arg6 activity:(id)arg7 ;
-(void)_reconfigureAccessoriesOnRouterRemovalWithCompletion:(id)arg0 ;
-(void)_redispatchReadForAccessories:(id)arg0 dispatchGroup:(id)arg1 requestMap:(id)arg2 requestMessage:(id)arg3 source:(NSUInteger)arg4 responseTuples:(id)arg5 errorResponseTuples:(id)arg6 ;
-(void)_redispatchWriteForAccessories:(id)arg0 dispatchGroup:(id)arg1 requestMap:(id)arg2 requestMessage:(id)arg3 source:(NSUInteger)arg4 responseTuples:(id)arg5 ;
-(void)_reevaluateAccessoryInfoWithBadgeRefresh:(BOOL)arg0 ;
-(void)_refreshCharacteristicValuesOnHomeNotificationEnable;
-(void)_refreshMediaProfilesOnHomeNotificationEnable;
-(void)_refreshUserDisplayNames;
-(void)_registerCameraReachabilityEventNotificationsWithCompletionHandler:(id)arg0 ;
-(void)_registerDeviceForReachabilityNotification:(id)arg0 accessoryList:(id)arg1 ;
-(void)_registerForMessages;
-(void)_registerForNotifications;
-(void)_registerForReachabilityChangeNotificationsEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_registerPairedAccessory:(id)arg0 transports:(NSUInteger)arg1 setupHash:(id)arg2 ;
-(void)_registerResidentReachabilityNotificationWithEnableAccessories:(id)arg0 disableAccessories:(id)arg1 completionHandler:(id)arg2 ;
-(void)_registerStateHandler;
-(void)_registerThreadResidentCommissioningMessageHandlers;
-(void)_relayAddTriggerToResident:(id)arg0 ;
-(void)_remoteAccessEnabled:(BOOL)arg0 ;
-(void)_remoteAccessHealthMonitorTimerDidFire;
-(void)_remotelySetNotificationsEnabled:(BOOL)arg0 forCharacteristics:(id)arg1 ;
-(void)_removeAccessories:(id)arg0 message:(id)arg1 ;
-(void)_removeAccessoriesForPrimaryAccessory:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_removeAccessoriesFromContainers:(id)arg0 ;
-(void)_removeAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeAccessoryWithUUID:(id)arg0 message:(id)arg1 ;
-(void)_removeAllHomeContentsAndAccessoryPairings:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_removeCharacteristic:(id)arg0 ;
-(void)_removeClientConfigurationWithIdentifier:(id)arg0 ;
-(void)_removeClientConfigurationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_removeCloudData;
-(void)_removeConnectionFromConnectionsDiscoveringSymptomsForNearbyDevices:(id)arg0 ;
-(void)_removeCorruptAccessories;
-(void)_removeMediaSessionWithIdentifier:(id)arg0 ;
-(void)_removeOutgoingInvitationForUser:(id)arg0 ;
-(void)_removePendingAccessoryAdd:(id)arg0 ;
-(void)_removeRetrievalCompletionTuple:(id)arg0 ;
-(void)_removeService:(id)arg0 ;
-(void)_removeTrigger:(id)arg0 message:(id)arg1 ;
-(void)_removeUser:(id)arg0 ;
-(void)_removeUser:(id)arg0 message:(id)arg1 ;
-(void)_removeUserFromContainer:(id)arg0 ;
-(void)_removeWithMergeSecondaryAccessory:(id)arg0 removedFromBridgeAccessory:(id)arg1 completionHandler:(id)arg2 ;
-(void)_requestRemoveClientConfigurationWithIdentifier:(id)arg0 ;
-(void)_requestUniquePSKClientConfigurationWithCompletion:(id)arg0 ;
-(void)_resubscribeForNotificationsOnResident:(id)arg0 ;
-(void)_retrieveHAPAccessoryForHMDHAPAccessory:(id)arg0 linkType:(NSInteger)arg1 forceRetrieve:(BOOL)arg2 completion:(id)arg3 ;
-(void)_runThreadNetworkStatusPeriodicUpdate;
-(void)_saveSharedHomeToAccountWithReason:(id)arg0 postSyncNotification:(BOOL)arg1 options:(id)arg2 ;
-(void)_scheduleApplyNetworkRouterSettingsAction:(id)arg0 ;
-(void)_scheduleThreadNetworkStatusPeriodicUpdate;
-(void)_sendClientCharacteristicsChangedNotificationWithIdentifier:(id)arg0 requestMessage:(id)arg1 multiPartResponse:(BOOL)arg2 moreInMultiPartResponse:(BOOL)arg3 characteristicChanges:(id)arg4 completionHandler:(id)arg5 ;
-(void)_sendCoalescedRemoteNotificationsForRequestMessage:(id)arg0 accessories:(id)arg1 ;
-(void)_sendInvitation:(id)arg0 message:(id)arg1 shareURL:(id)arg2 shareToken:(id)arg3 suppressHomeInviteNotification:(BOOL)arg4 ;
-(void)_sendInvitationCancelationRequestToInvitee:(id)arg0 ;
-(void)_sendReadRequestToAccessoryServer:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 pendingResponses:(id)arg3 slowFailedAccessories:(id)arg4 fastFailedAccessories:(id)arg5 unreachableWaitGroup:(id)arg6 waitGroup:(id)arg7 activity:(id)arg8 ;
// -(void)_sendRemoveCompletionStatusForHMDAccessories:(id)arg0 withCompletion:(id)arg1 error:(unk)arg2  ;
-(void)_sendResidentInviteWithDestination:(id)arg0 ;
-(void)_sendWriteRequestToAccessoryServer:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 failedAccessories:(id)arg3 responseTuples:(id)arg4 activity:(id)arg5 waitGroup:(id)arg6 unreachableWaitGroup:(id)arg7 ;
-(void)_setupActiveNetworkRouterAccessory:(id)arg0 existingRouterAccessories:(id)arg1 ;
-(void)_sharedAdminDidFailToAddAccessories:(id)arg0 ;
-(void)_startHomeNotificationDeregistrationTimer;
-(void)_storeCHIPRemoteSubscriberFromMessage:(id)arg0 ;
-(void)_subscribeForHomeNotificationsFromRemoteGateway:(BOOL)arg0 ;
-(void)_subscribeForHomeNotificationsFromRemoteGateway:(BOOL)arg0 accessories:(id)arg1 ;
-(void)_unconfigureNetworkRouterClientManager;
-(void)_unconfigurePairedAccessoriesForServer:(id)arg0 updateReachability:(BOOL)arg1 ;
-(void)_unitTest_setRetrievalCompletionsTimeout:(CGFloat)arg0 ;
-(void)_updateActiveNetworkRouterAccessory:(id)arg0 isReplacement:(BOOL)arg1 withTransaction:(id)arg2 ;
-(void)_updateBulletinBoardOfChangedCharacteristics:(id)arg0 changedByThisDevice:(BOOL)arg1 ;
-(void)_updateConfigurationStateForResidentDevice:(id)arg0 desiredConfigState:(NSUInteger)arg1 message:(id)arg2 ;
-(void)_updateConfigurationVersion;
-(void)_updateCurrentUserForSharedHome;
-(void)_updateExpectConfigurationVersion;
-(void)_updateHomeLocation;
-(void)_updateOutgoingInvitationsWithCompleteUserManagementOperation:(id)arg0 ;
-(void)_updateOwnedTriggers;
-(void)_updateReachabilityChangeToRegisteredDevices:(id)arg0 ;
-(void)_updateResidentFirstAccessoryCommunicationEnabled;
-(void)_updateThreadNetworkWithModel:(id)arg0 message:(id)arg1 ;
-(void)_updateWoWState:(id)arg0 ;
-(void)_waitForEarlyDispatchTimeout:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 failedAccessories:(id)arg3 responseTuples:(id)arg4 activity:(id)arg5 unreachableWaitGroup:(id)arg6 failureWaitGroup:(id)arg7 ;
-(void)_waitForEarlyDispatchTimeoutOnReadRequest:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 pendingResponses:(id)arg3 activity:(id)arg4 slowFailedAccessories:(id)arg5 tmpErrorResponseTuples:(id)arg6 unreachableWaitGroup:(id)arg7 failureWaitGroup:(id)arg8 ;
-(void)_waitForWriteRequestFanOut:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 responseTuples:(id)arg3 failedAccessories:(id)arg4 activity:(id)arg5 waitGroup:(id)arg6 failureWaitGroup:(id)arg7 ;
-(void)_wol_processChangedCharacteristicResponses:(id)arg0 ;
-(void)_writeAccessoryCapabilities:(id)arg0 accessoryUUID:(id)arg1 homeUUID:(id)arg2 ;
-(void)_writeCharacteristicValues:(id)arg0 requestMessage:(id)arg1 source:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)_writeCharacteristicValuesForAccessories:(id)arg0 writeRequestMap:(id)arg1 responseTuples:(id)arg2 requestMessage:(id)arg3 viaDevice:(id)arg4 source:(NSUInteger)arg5 completionHandler:(id)arg6 ;
-(void)_writeResidentCapabilities:(id)arg0 accessoryUUID:(id)arg1 homeUUID:(id)arg2 ;
-(void)accessoryBrowser:(id)arg0 accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(void)accessoryBrowser:(id)arg0 accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2 ;
-(void)accessoryBrowser:(id)arg0 accessoryServer:(id)arg1 didUpdateCategory:(id)arg2 ;
-(void)accessoryBrowser:(id)arg0 accessoryServer:(id)arg1 didUpdateConnectionState:(BOOL)arg2 sessionInfo:(id)arg3 withError:(id)arg4 ;
-(void)accessoryBrowser:(id)arg0 accessoryServer:(id)arg1 didUpdateHasPairings:(BOOL)arg2 ;
-(void)accessoryBrowser:(id)arg0 accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(BOOL)arg4 ;
-(void)accessoryBrowser:(id)arg0 didAddAccessoryAdvertisement:(id)arg1 ;
-(void)accessoryBrowser:(id)arg0 didFindAccessoryServer:(id)arg1 stateChanged:(BOOL)arg2 stateNumber:(id)arg3 completion:(id)arg4 ;
-(void)accessoryBrowser:(id)arg0 didFindAccessoryServerNeedingReprovisioning:(id)arg1 error:(id)arg2 ;
-(void)accessoryBrowser:(id)arg0 didFinishPairingForAccessoryServer:(id)arg1 ;
-(void)accessoryBrowser:(id)arg0 didFinishWACForAccessoryWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)accessoryBrowser:(id)arg0 didRemoveAccessoryAdvertisement:(id)arg1 ;
-(void)accessoryBrowser:(id)arg0 didRemoveAccessoryServer:(id)arg1 error:(id)arg2 ;
-(void)accessoryBrowser:(id)arg0 didTombstoneAccessoryServer:(id)arg1 ;
-(void)accessoryBrowser:(id)arg0 didUpdateEndpoint:(id)arg1 ;
-(void)accessoryBrowser:(id)arg0 didUpdateReachability:(BOOL)arg1 forBTLEAccessoriesWithServerIdentifier:(id)arg2 ;
-(void)accessoryBrowser:(id)arg0 discoveryFailedWithError:(id)arg1 accessoryServer:(id)arg2 linkType:(NSInteger)arg3 ;
-(void)accessoryBrowser:(id)arg0 identifier:(id)arg1 reachable:(BOOL)arg2 ;
-(void)addAccessory:(id)arg0 ;
-(void)addCompanionAsResidentUser:(id)arg0 ;
-(void)addMediaSession:(id)arg0 ;
-(void)addMediaSessionState:(id)arg0 ;
-(void)addNewlyConfiguredAccessories:(id)arg0 addSessionIdentifier:(id)arg1 ;
-(void)addNotificationDeregistrationForApplicationBundleIdentifier:(id)arg0 ;
-(void)addNotificationRegistrationForApplicationBundleIdentifier:(id)arg0 includesAppleMediaAccessories:(BOOL)arg1 ;
-(void)addOutgoingInvitation:(id)arg0 ;
-(void)addResidentCapableDevice:(id)arg0 ;
-(void)addToCurrentTriggers:(id)arg0 ;
-(void)addUnconfiguredResidentDevice:(id)arg0 ;
-(void)addUser:(id)arg0 ;
-(void)aggregator:(id)arg0 accessoryCapabilitiesWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)aggregator:(id)arg0 changedAccessoryCapabilities:(id)arg1 rawCapabilities:(id)arg2 accessoryUUID:(id)arg3 homeUUID:(id)arg4 ;
-(void)aggregator:(id)arg0 changedResidentCapabilities:(id)arg1 rawCapabilities:(id)arg2 accessoryUUID:(id)arg3 homeUUID:(id)arg4 ;
-(void)aggregator:(id)arg0 didReceiveDeviceIRKWithUUID:(id)arg1 deviceIRK:(id)arg2 ;
-(void)aggregator:(id)arg0 didReceivePublicPairingKeyWithUUID:(id)arg1 pairingIdentity:(id)arg2 ;
-(void)aggregator:(id)arg0 didReceiveSoftwareVersionWithUUID:(id)arg1 softwareVersion:(id)arg2 ;
-(void)aggregator:(id)arg0 residentCapabilitiesWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)aggregatorDidBecomePrimary:(id)arg0 ;
-(void)auditUsersForNotifications:(id)arg0 ;
-(void)btleAccessoryReachabilityProbeTimer:(BOOL)arg0 ;
-(void)cacheResponsesForMessage:(id)arg0 ;
-(void)checkTimerTriggers;
-(void)cleanChangesIfNoAddChangeObjectID:(id)arg0 completion:(id)arg1 ;
-(void)computeBridgedAccessoriesForAllBridges;
-(void)configureAccessorySettingsMessengerWithMessengerFactory:(id)arg0 messageHandlerFactory:(id)arg1 ;
-(void)configureAfterAccessoriesConfigurationTrackerNotificationsWithCurrentAccessory:(id)arg0 accessories:(id)arg1 uncommittedTransactions:(id)arg2 ;
-(void)configureAppleMediaAccessoriesStateManagerWithStateManagerWithFactory:(id)arg0 messengerFactory:(id)arg1 metricsDispatcherFactory:(id)arg2 ;
-(void)configureBulletinNotification;
-(void)configureMediaDestinationControllersForAccessories:(id)arg0 ;
-(void)configureMediaGroupObjects;
-(void)configureMediaGroupsAggregateConsumer;
-(void)configureMediaGroupsAggregator;
-(void)configureMediaGroupsUnconfiguredParticipantOnboardingManager;
-(void)configureMediaSystems;
-(void)configureMultiuserSettingsMessengerWithMessengerFactory:(id)arg0 ;
-(void)configureNaturalLightingForDemoMode;
-(void)configureNaturalLightingWithDemoModeEnabled:(BOOL)arg0 ;
-(void)configurePrimaryResidentMessageRouterWithFactory:(id)arg0 metricsDispatcherFactory:(id)arg1 ;
-(void)configureRemoteEventRouterClientControllerForAccessories:(id)arg0 ;
-(void)configureSiriEndpointProfilesMessengerWithMessengerFactory:(id)arg0 messageHandlerFactory:(id)arg1 ;
-(void)configureUnifiedLanguageValueListSettingDataProviderWithFactory:(id)arg0 ;
-(void)createRemoteEventRouterServerIfNeeded;
-(void)dealloc;
-(void)didReceiveAccessorySetting:(id)arg0 accessoryUUID:(id)arg1 ;
-(void)didUpdateAggregateDataForMediaGroupsAggregateConsumer:(id)arg0 ;
-(void)disableNotificationsForDevices:(id)arg0 ;
-(void)dispatchRequestToEvaluateCondition:(id)arg0 forCharacteristics:(id)arg1 completion:(id)arg2 ;
-(void)dropAllChangesWithArrayOfObjectIDs:(id)arg0 ;
-(void)dropAllChangesWithObjectID:(id)arg0 ;
-(void)enableHomeNotificationsForMediaAccessory:(id)arg0 ;
-(void)enableLocationServiceSettings;
-(void)enableMediaNotifications:(BOOL)arg0 directlyOnMediaAccessory:(id)arg1 completion:(id)arg2 ;
-(void)enableMediaNotifications:(BOOL)arg0 directlyOnMediaAccessory:(id)arg1 forStateManager:(id)arg2 completion:(id)arg3 ;
-(void)enableMultiUser;
-(void)enableNotificationsForDevices:(id)arg0 ;
-(void)enableUserListeningHistoryForAccessoryUUID:(id)arg0 userUUID:(id)arg1 ;
-(void)encodeMediaSystemsWithCoder:(id)arg0 modifiedOptions:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg0 ;
-(void)evaluateNotificationConditionForCharacteristics:(id)arg0 homePresence:(id)arg1 completion:(id)arg2 ;
-(void)evaluateResidentUpdate;
-(void)evaluateShouldRelaunchAndSetRelaunch;
-(void)executeActionSet:(id)arg0 ;
-(void)executeActionsFromMessage:(id)arg0 ;
-(void)fetchAllMigratedObjectsForCloudZone:(id)arg0 completion:(id)arg1 ;
-(void)finishPairingForServer:(id)arg0 ;
-(void)fixupHomeAfterDecoding;
-(void)getReachableIPAccessories:(*NSUInteger)arg0 btleAccessories:(*NSUInteger)arg1 mediaAccessories:(*NSUInteger)arg2 ;
-(void)getRunTimeStateUpdateWithOptions:(NSUInteger)arg0 includeMediaAccessorySessionState:(BOOL)arg1 includeResidentDeviceState:(BOOL)arg2 completion:(id)arg3 ;
-(void)handleAccessoryReachabilityChangeNotification:(id)arg0 ;
-(void)handleAccountHandlesUpdated:(id)arg0 ;
-(void)handleActive:(id)arg0 ;
-(void)handleActiveAccountChanged:(id)arg0 ;
-(void)handleAdaptiveClientDisconnected:(id)arg0 ;
-(void)handleCHIPSendRemoteRequestMessage:(id)arg0 ;
-(void)handleCHIPSendReportMessage:(id)arg0 ;
-(void)handleCommissioningCertificateRequest:(id)arg0 ;
-(void)handleCurrentUserPrivilegeChanged:(id)arg0 ;
-(void)handleDeviceCapabilitiesUpdated:(id)arg0 ;
-(void)handleDidReceiveIDSMessageWithNoListener:(id)arg0 ;
-(void)handleEvaluatePredicateMessage:(id)arg0 ;
-(void)handleFetchLightProfileSettingsMessage:(id)arg0 ;
-(void)handleInactive:(id)arg0 ;
-(void)handleMatterPairingCompletionNotification:(id)arg0 ;
-(void)handleNetworkRouterProfileAdded:(id)arg0 ;
-(void)handleNetworkRouterProfileRemoved:(id)arg0 ;
-(void)handlePrimaryResidentChangeNotification:(id)arg0 ;
-(void)handleRemoteDeviceBecameReachableNotification:(id)arg0 ;
-(void)handleRemoveAccessory:(id)arg0 completion:(id)arg1 ;
-(void)handleRemoveAccessoryMessage:(id)arg0 ;
-(void)handleRemovedMediaSessions:(id)arg0 ;
-(void)handleResetAndRemoveAllCHIPPairingsFromAccessoryMessage:(id)arg0 ;
-(void)handleResidentNotificationAccessoryReachableMessage:(id)arg0 ;
-(void)handleSignificantTimeChange;
-(void)handleSiriEndPointAddedNotification:(id)arg0 ;
-(void)handleUpdatedCHIPPropertiesOnHomeModel:(id)arg0 actions:(id)arg1 ;
-(void)handleUpdatedCharacteristics:(id)arg0 accessoryServer:(id)arg1 ;
-(void)handleXPCConnectionInvalidated:(id)arg0 ;
-(void)mediaSystemController:(id)arg0 didRemoveMediaSystem:(id)arg1 ;
-(void)mediaSystemController:(id)arg0 removeAccessories:(id)arg1 fromAssistantAccessControl:(id)arg2 ;
-(void)mergeMediaDestinationControllerDataWithConsumer:(id)arg0 ;
-(void)mergeMediaDestinationsWithConsumer:(id)arg0 ;
-(void)mergeMediaGroupsAggregateDataWithConsumer:(id)arg0 ;
-(void)migrateAfterCloudMerge:(id)arg0 ;
-(void)migrateAfterResidentChange;
-(void)migrateCloudZone:(id)arg0 completion:(id)arg1 ;
-(void)migrateLegacyLocationServiceSettings;
-(void)modifyCharacteristicNotifications:(id)arg0 mediaNotifications:(id)arg1 enableNotification:(BOOL)arg2 withDevice:(id)arg3 ;
-(void)notifyClientOfVendorInfoUpdatedForManufacturers:(id)arg0 withCompletion:(id)arg1 ;
-(void)notifyClientsOfAccessoryInfoUpdatedForAccessories:(id)arg0 ;
-(void)notifyClientsOfReachabilityUpdateForAccessory:(id)arg0 ;
-(void)notifyNewRemotePeersFound:(BOOL)arg0 remoteUsersRemoved:(id)arg1 forceRemoteNotificationRegistration:(BOOL)arg2 ;
-(void)notifyOfAddedAccessory:(id)arg0 ;
-(void)notifyOfChangedCharacteristic:(id)arg0 changedByThisDevice:(BOOL)arg1 residentShouldNotifyPeers:(BOOL)arg2 message:(id)arg3 ;
-(void)notifyOfNewlyAddedAccessoryByThisOwnerDevice:(id)arg0 ;
-(void)notifyOfRemovedAccessory:(id)arg0 source:(NSUInteger)arg1 ;
-(void)notifyRemoteUsersOfChangedCharacteristics:(id)arg0 message:(id)arg1 broadcast:(BOOL)arg2 ;
-(void)notifyRemoteUsersOfChangedProperties:(id)arg0 requestMessageInformation:(id)arg1 ;
-(void)performLocalAddAccessoryWithDescription:(id)arg0 progressHandlerDelegate:(id)arg1 completion:(id)arg2 ;
-(void)performPostSaveActionsWithReason:(id)arg0 ;
-(void)queryPrimaryResidentReachabilityForAccessories:(id)arg0 completion:(id)arg1 ;
-(void)reEvaluateHomeHubState;
-(void)reEvaluateTriggers;
-(void)reachabilityChangedForAccessory:(id)arg0 reachable:(BOOL)arg1 ;
-(void)readCharacteristicValues:(id)arg0 identifier:(id)arg1 source:(NSUInteger)arg2 qualityOfService:(NSInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)readCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 qualityOfService:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)readCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 sourceForLogging:(id)arg2 qualityOfService:(NSInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)readProfileState:(id)arg0 viaDevice:(id)arg1 ;
-(void)readProfileState:(id)arg0 viaDevice:(id)arg1 forStateManager:(id)arg2 ;
-(void)redispatchMediaReadRequests:(id)arg0 viaDevice:(id)arg1 completion:(id)arg2 ;
-(void)redispatchMediaWriteRequests:(id)arg0 viaDevice:(id)arg1 completion:(id)arg2 ;
-(void)redispatchToResidentMessage:(id)arg0 target:(id)arg1 responseQueue:(id)arg2 ;
-(void)redispatchToResidentMessage:(id)arg0 target:(id)arg1 responseQueue:(id)arg2 viaDevice:(id)arg3 ;
-(void)reevaluateAccessoryInfo;
-(void)refreshUserDisplayNames;
-(void)regionStateUpdated;
-(void)registerCameraReachabilityEventNotificationsWithCompletionHandler:(id)arg0 ;
-(void)registerForDeviceWithCapabilities;
-(void)remoteAccessEnabled:(BOOL)arg0 ;
-(void)remoteAccessHealthMonitorTimerDidFire;
-(void)remotelySetNotificationsEnabled:(BOOL)arg0 forCharacteristics:(id)arg1 ;
-(void)removeAccessory:(id)arg0 ;
-(void)removeAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllHomeContentsAndAccessoryPairings:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeAllUsersFromAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeBulletinBoardNotificationsMigrationFileFromDisk;
-(void)removeCameraNotificationSettingsMigrationFileFromDisk;
-(void)removeCharacteristic:(id)arg0 ;
-(void)removeFromCurrentTriggers:(id)arg0 ;
-(void)removeMediaSession:(id)arg0 ;
-(void)removeMediaSessionState:(id)arg0 ;
-(void)removeNotificationDeregistrationForApplicationBundleIdentifier:(id)arg0 ;
-(void)removeOutgoingInvitation:(id)arg0 ;
-(void)removeResidentCapableDevice:(id)arg0 ;
-(void)removeService:(id)arg0 ;
-(void)removeThreadNetworkPreferredNetworkWithCompletion:(id)arg0 ;
-(void)removeTrigger:(id)arg0 ;
-(void)removeTriggerNoNotification:(id)arg0 ;
-(void)removeUnconfiguredResidentDeviceWithUserID:(id)arg0 ;
-(void)removeUser:(id)arg0 ;
-(void)removeUserWithUserID:(id)arg0 ;
-(void)removeWithMergeSecondaryAccessory:(id)arg0 removedFromBridgeAccessory:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportCompletionForMessage:(id)arg0 ;
-(void)resetAccessoryHashedRouteIdentifiers;
-(void)resetConfiguration;
-(void)residentDeviceManager:(id)arg0 didUpdatePrimaryResident:(id)arg1 previousPrimaryResident:(id)arg2 ;
-(void)residentDeviceManager:(id)arg0 didUpdateResidentAvailable:(BOOL)arg1 ;
-(void)residentDeviceManagerDidUpdateResidents:(id)arg0 ;
-(void)resubscribeForNotificationsOnResident:(id)arg0 ;
-(void)retrieveCommissioningCertificatesForSharedAdminWithNodeID:(id)arg0 publicKey:(id)arg1 fabricIndex:(id)arg2 completion:(id)arg3 ;
-(void)retrieveHAPAccessoryForHMDAccessory:(id)arg0 linkType:(NSInteger)arg1 forceRetrieve:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)retrieveStateForTrackedAccessory:(id)arg0 stateNumber:(*id)arg1 isReachable:(*BOOL)arg2 linkQuality:(*NSUInteger)arg3 lastSeen:(*id)arg4 ;
-(void)retrieveThreadNetworkMetadataWithCompletion:(id)arg0 ;
-(void)runDailyTask;
-(void)runLocationServicesEnabledUpdateWithValue:(BOOL)arg0 ;
-(void)runLocationServicesEnabledUpdateWithValue:(BOOL)arg0 message:(id)arg1 ;
-(void)saveSharedHomeToAccountWithReason:(id)arg0 postSyncNotification:(BOOL)arg1 options:(id)arg2 ;
-(void)saveToCurrentAccountWithReason:(id)arg0 ;
-(void)saveWithReason:(id)arg0 information:(id)arg1 postSyncNotification:(BOOL)arg2 ;
-(void)saveWithReason:(id)arg0 information:(id)arg1 postSyncNotification:(BOOL)arg2 objectChange:(BOOL)arg3 ;
-(void)saveWithReason:(id)arg0 postSyncNotification:(BOOL)arg1 ;
-(void)saveWithReason:(id)arg0 postSyncNotification:(BOOL)arg1 objectChange:(BOOL)arg2 ;
-(void)scheduleRemoval;
-(void)setAutomaticSoftwareUpdateEnabled:(BOOL)arg0 ;
-(void)setCHIPReportHandlerWithSubscriber:(id)arg0 handler:(id)arg1 ;
-(void)setCameraReachabilityEventNotificationsEnabled:(BOOL)arg0 forAccessory:(id)arg1 completionHandler:(id)arg2 ;
-(void)setMediaPassword:(id)arg0 ;
-(void)setMediaPeerToPeerEnabled:(BOOL)arg0 ;
-(void)setMediaSettingsValue:(NSInteger)arg0 mediaPassword:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setMinimumMediaUserPrivilege:(NSInteger)arg0 ;
-(void)setRemoteAccessEnabled:(BOOL)arg0 ;
-(void)setupBackingStore;
-(void)startThreadNetwork:(BOOL)arg0 ;
-(void)stopThreadNetwork:(BOOL)arg0 ;
-(void)stopThreadNetworkWithCompletion:(BOOL)arg0 completion:(id)arg1 ;
-(void)storeMigrationBulletinBoardNotificationsToDisk;
-(void)storeMigrationCameraNotificationSettingsToDisk;
-(void)storeMigrationCharacteristicsAuthorizationData;
-(void)subscribeForNotificationsFromRemoteGateway;
-(void)suspendedStateChangedForAccessory:(id)arg0 suspendedState:(NSUInteger)arg1 ;
-(void)timerDidFire:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)unconfigure;
-(void)updateActionSetExecutionDates:(id)arg0 ;
-(void)updateAppData:(id)arg0 identifierKey:(id)arg1 lookup:(id)arg2 ;
-(void)updateHasOnboardedForWalletKey:(BOOL)arg0 message:(id)arg1 ;
-(void)updateHomeConfigurationWithModel:(id)arg0 message:(id)arg1 ;
-(void)updateHomeFirstHAPAccessoryAddedDateToNow;
-(void)updateHomeLocation;
-(void)updateLightProfilesSettings:(id)arg0 ;
-(void)updateLightProfilesSettingsWithRequiresHomeNotificationsEnabled:(BOOL)arg0 ;
-(void)updateNetworkConnectivity:(BOOL)arg0 companionReachable:(BOOL)arg1 ;
-(void)updateNetworkRouterManagingDeviceSettingsWithModel:(id)arg0 message:(id)arg1 ;
-(void)updateNetworkRouterSettingsWithModel:(id)arg0 message:(id)arg1 ;
-(void)updateROARStatus:(id)arg0 message:(id)arg1 ;
-(void)userAssistantAccessControlDidUpdate:(id)arg0 accessories:(id)arg1 ;
-(void)userManagementOperationDidFinish:(id)arg0 ;
-(void)writeCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 identifier:(id)arg2 qualityOfService:(NSInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)writeCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 transactionId:(id)arg2 qualityOfService:(NSInteger)arg3 withCompletionHandler:(id)arg4 ;


@end


#endif