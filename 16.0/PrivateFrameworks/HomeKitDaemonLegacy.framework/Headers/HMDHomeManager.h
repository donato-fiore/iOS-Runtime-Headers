// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEMANAGER_H
#define HMDHOMEMANAGER_H

@class HMFObject, NSMutableArray, NSMutableSet, NSMutableDictionary, NSDate, HMFNetMonitor, NSString, NSUUID, HMFTimer, NSDictionary, HMFDumpCategory, HMDHomeManagerObjectChangeHandler, NSMapTable, NSSet, NSArray, HMELastEventStore, HMDAppleAccessoryPairingController, HMEMemoryEventBus, NSNotificationCenter, HMFBoolean, HMEDelegatingEventRouter, HMFActivity, HMFFuture, NSUserDefaults;
@protocol HMDSiriEndpointProfileMessageHandlerDataSource, HMDSiriEndpointOnboardingManagerDataSource, HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMDBiomeMigrationManagerDataSource, HMDBiomeLogEventObserverDataSource, HMDCapabilitiesControllerDataSource, HMDCloudManagerDelegate, HMDCompositeSettingsControllerManagerDataSource, HMDDeviceSetupSessionDelegate, HMDDuetPredictionSubscriberDataSource, HMDMicroLocationLogEventObserverDataSource, HMDMobileAssetManagerDelegate, HMDMultiUserStatusControllerDelegate, HMDSiriEndpointSettingsSyncManagerDataSource, HMDSyncOperationManagerDataSource, HMDMediaGroupParticipantLocalDataStorageDataSource, HMDXPCEventRouterServerDataSource, HMEDelegatingEventRouterDataSource, HMEMemoryEventBusDataSource, HMFMessageReceiver, HMFLogging, HMDAccessoryBrowserManagerDelegate, HMFTimerDelegate, HAPFragmentationStreamDelegate, HMDPairedSyncDelegate, HMFNetMonitorDelegate, HMDIDSServerBagDelegate, HMDUserManagementOperationDelegate, HMDBackingStoreObjectProtocol, OS_os_log, HMDAccessoryBrowserProtocol, OS_dispatch_source, OS_dispatch_queue, HMDarwinNotificationProvider, HMDDatabase, HAPKeyStore, HMDCompositeSettingsSiriEndpointProfileBridge;


#import "HMDAccessoryBrowser.h"
#import "HMDAccessoryFirmwareUpdateManager.h"
#import "HMDAccessorySetupCoordinator.h"
#import "HMDAccessorySetupManager.h"
#import "HMDAccountRegistry.h"
#import "HMDApplicationData.h"
#import "HMDAppleAccountManager.h"
#import "HMDAWDLogEventObserver.h"
#import "HMDBackingStore.h"
#import "HMDBiomeEventManager.h"
#import "HMDBiomeLogEventObserver.h"
#import "HMDBonjourBrowserHelper.h"
#import "HMDCameraRecordingLoadBalancer.h"
#import "HMDCapabilitiesController.h"
#import "HMDCHIPDataSource.h"
#import "HMDClientConnection.h"
#import "HMDCloudAccount.h"
#import "HMDCloudManagerDataSource.h"
#import "HMDCloudManager.h"
#import "HMDCloudDataSyncStateFilter.h"
#import "HMDDevice.h"
#import "HMDCompanionManager.h"
#import "HMDCompositeSettingsControllerManager.h"
#import "HMDDuetEventManager.h"
#import "HMDDuetPredictionSubscriber.h"
#import "HMDRemoteEventRouterAssertionController.h"
#import "HMDXPCEventRouterServer.h"
#import "HMDFMFHandler.h"
#import "HMDAssistantGather.h"
#import "HMDHH2AutoMigrationEligibilityChecker.h"
#import "HMDHH2AutoMigrationMonitor.h"
#import "HMDHH2FrameworkSwitch.h"
#import "HMDIdentityRegistry.h"
#import "HMDIDSFirewallManager.h"
#import "HMDIDSServerBag.h"
#import "HMDKeyTransferAgent.h"
#import "HMDLastEventStoreController.h"
#import "HMDLocation.h"
#import "HMDLogEventDispatcher.h"
#import "HMDHomeManagerObjectLookup.h"
#import "HMDMediaGroupParticipantLocalDataStorage.h"
#import "HMDMemoryUtilizationTracker.h"
#import "HMDMessageDispatcher.h"
#import "HMDMetricsManager.h"
#import "HMDMicroLocationLogEventObserver.h"
#import "HMDMicroLocationManager.h"
#import "HMDMobileAssetManager.h"
#import "HMDMessageFilterChain.h"
#import "HMDMultiUserSettingsMetricsEventDispatcher.h"
#import "HMDMultiUserStatusController.h"
#import "HMDNameValidator.h"
#import "HMDPairedSync.h"
#import "HMDPowerManager.h"
#import "HMDRemoteAccountManager.h"
#import "HMDResidentMesh.h"
#import "HMDSiriEndpointSettingsSyncManager.h"
#import "HMDSiriEndpointOnboardingManager.h"
#import "HMDSoftwareUpdateManager.h"
#import "HMDSyncOperationManager.h"
#import "HMDUserCloudShareManager.h"
#import "HMDWatchManager.h"
#import "HMDWidgetConfigurationReader.h"
#import "HMDWidgetTimelineRefresher.h"

@interface HMDHomeManager : HMFObject <HMDSiriEndpointProfileMessageHandlerDataSource, HMDSiriEndpointOnboardingManagerDataSource, HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMDBiomeMigrationManagerDataSource, HMDBiomeLogEventObserverDataSource, HMDCapabilitiesControllerDataSource, HMDCloudManagerDelegate, HMDCompositeSettingsControllerManagerDataSource, HMDDeviceSetupSessionDelegate, HMDDuetPredictionSubscriberDataSource, HMDMicroLocationLogEventObserverDataSource, HMDMobileAssetManagerDelegate, HMDMultiUserStatusControllerDelegate, HMDSiriEndpointSettingsSyncManagerDataSource, HMDSyncOperationManagerDataSource, HMDMediaGroupParticipantLocalDataStorageDataSource, HMDXPCEventRouterServerDataSource, HMEDelegatingEventRouterDataSource, HMEMemoryEventBusDataSource, HMFMessageReceiver, HMFLogging, HMDAccessoryBrowserManagerDelegate, HMFTimerDelegate, HAPFragmentationStreamDelegate, HMDPairedSyncDelegate, HMFNetMonitorDelegate, HMDIDSServerBagDelegate, HMDUserManagementOperationDelegate, HMDBackingStoreObjectProtocol>

 {
    NSMutableArray *_homes;
    BOOL _clientShouldFetch;
    NSObject<OS_os_log> *_logger;
    os_unfair_lock_s _lock;
}


@property (getter=isAccessAllowedWhenLocked) BOOL accessAllowedWhenLocked; // ivar: _accessAllowedWhenLocked
@property (readonly, nonatomic) NSObject<HMDAccessoryBrowserProtocol> *accessoryBrowser;
@property (retain, nonatomic) HMDAccessoryBrowser *accessoryBrowserInternal; // ivar: _accessoryBrowserInternal
@property (retain, nonatomic) NSObject<OS_dispatch_source> *accessoryFinderTimer; // ivar: _accessoryFinderTimer
@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager; // ivar: _accessoryFirmwareUpdateManager
@property (readonly) HMDAccessorySetupCoordinator *accessorySetupCoordinator; // ivar: _accessorySetupCoordinator
@property (readonly, nonatomic) HMDAccessorySetupManager *accessorySetupManager; // ivar: _accessorySetupManager
@property (readonly, nonatomic) NSMutableArray *accessorySetupMetricDispatchers; // ivar: _accessorySetupMetricDispatchers
@property (nonatomic) BOOL accountActive; // ivar: _accountActive
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (nonatomic) BOOL accountStatusFailedDueToNetworkFailure; // ivar: _accountStatusFailedDueToNetworkFailure
@property (nonatomic) BOOL accountStatusIsAuthenticated; // ivar: _accountStatusIsAuthenticated
@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSMutableSet *activeConnections; // ivar: _activeConnections
@property (retain, nonatomic) HMDApplicationData *appData; // ivar: _appData
@property (readonly, nonatomic) HMDAppleAccountManager *appleAccountManager; // ivar: _appleAccountManager
@property (nonatomic) NSUInteger assistantGenerationCounter; // ivar: _assistantGenerationCounter
@property (nonatomic) BOOL assistantIdentifierChanged; // ivar: _assistantIdentifierChanged
@property (retain, nonatomic) NSMutableDictionary *associatedRemotePeers; // ivar: _associatedRemotePeers
@property (readonly, nonatomic) NSMutableDictionary *associatedWatchPeers; // ivar: _associatedWatchPeers
@property (retain, nonatomic) HMDAWDLogEventObserver *awdLogEventObserver; // ivar: _awdLogEventObserver
@property (nonatomic) BOOL backOffOperationInProgress; // ivar: _backOffOperationInProgress
@property (retain, nonatomic) HMDBackingStore *backingStore; // ivar: _backingStore
@property (retain) HMDBiomeEventManager *biomeEventManager; // ivar: _biomeEventManager
@property (retain) HMDBiomeLogEventObserver *biomeLogEventObserver; // ivar: _biomeLogEventObserver
@property (retain, nonatomic) HMDBonjourBrowserHelper *bonjourBrowser; // ivar: _bonjourBrowser
@property (retain, nonatomic) NSDate *bonjourBrowserHelperLastCompletionDate; // ivar: _bonjourBrowserHelperLastCompletionDate
@property (retain) id *browseAssertion; // ivar: _browseAssertion
@property (nonatomic) BOOL cacheUseAllowed; // ivar: _cacheUseAllowed
@property (retain, nonatomic) HMDCameraRecordingLoadBalancer *cameraLoadBalancer; // ivar: _cameraLoadBalancer
@property (readonly, nonatomic) HMDCapabilitiesController *capabilitiesController; // ivar: _capabilitiesController
@property (readonly) HMDCHIPDataSource *chipDataSource; // ivar: _chipDataSource
@property (retain, nonatomic) HMDClientConnection *clientConnection; // ivar: _clientConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientConnectionQueue; // ivar: _clientConnectionQueue
@property (readonly, nonatomic) HMDCloudAccount *cloudAccount; // ivar: _cloudAccount
@property (readonly) HMDCloudManagerDataSource *cloudDataSource; // ivar: _cloudDataSource
@property (retain, nonatomic) HMDCloudManager *cloudDataSyncManager; // ivar: _cloudDataSyncManager
@property (retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // ivar: _cloudDataSyncStateFilter
@property (nonatomic) NSUInteger cloudOperationRetryCount; // ivar: _cloudOperationRetryCount
@property (retain, nonatomic) NSObject<OS_dispatch_source> *cloudOperationRetryTimer; // ivar: _cloudOperationRetryTimer
@property (retain, nonatomic) HMFNetMonitor *cloudReachabilityMonitor; // ivar: _cloudReachabilityMonitor
@property (retain, nonatomic) NSMutableArray *cloudZones; // ivar: _cloudZones
@property (nonatomic) BOOL cloudkitAccountStatusDetermined; // ivar: _cloudkitAccountStatusDetermined
@property (readonly, nonatomic) HMDDevice *companionDevice;
@property (readonly, nonatomic) HMDCompanionManager *companionManager; // ivar: _companionManager
@property (nonatomic) BOOL companionReachable; // ivar: _companionReachable
@property (readonly) HMDCompositeSettingsControllerManager *compositeSettingsControllerManager; // ivar: _compositeSettingsControllerManager
@property (readonly, copy) NSString *currentEventSource;
@property (retain, nonatomic) NSUUID *currentHomeUUID; // ivar: _currentHomeUUID
@property (retain) NSUUID *currentHomeUUIDOverride; // ivar: _currentHomeUUIDOverride
@property (readonly, nonatomic) NSObject<HMDarwinNotificationProvider> *darwinNotificationProvider; // ivar: _darwinNotificationProvider
@property (readonly, getter=isDataSyncInProgress) BOOL dataSyncInProgress;
@property (retain, nonatomic) NSUUID *dataTag; // ivar: _dataTag
@property (retain, nonatomic) HMFTimer *debounceGenerationCounterUpdateTimer; // ivar: _debounceGenerationCounterUpdateTimer
@property (retain, nonatomic) HMFTimer *debounceHomesUpdateTimer; // ivar: _debounceHomesUpdateTimer
@property (readonly, nonatomic) HMFTimer *debounceRegenerateAssistantSyncDataTimer; // ivar: _debounceRegenerateAssistantSyncDataTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<HMDDatabase> *defaultDatabase; // ivar: _defaultDatabase
@property (copy, nonatomic) NSDictionary *demoAccessories; // ivar: _demoAccessories
@property (readonly) BOOL demoFinalized; // ivar: _demoFinalized
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *deviceSetupSessions; // ivar: _deviceSetupSessions
@property (retain, nonatomic) NSMutableSet *dialogCancelationContexts; // ivar: _dialogCancelationContexts
@property (readonly) HMDDuetEventManager *duetEventManger; // ivar: _duetEventManger
@property (retain) HMDDuetPredictionSubscriber *duetSubscriber; // ivar: _duetSubscriber
@property (readonly, nonatomic) HMFDumpCategory *dumpCategory; // ivar: _dumpCategory
@property (retain, nonatomic) NSDate *eventAggregationAnalysisLogDate; // ivar: _eventAggregationAnalysisLogDate
@property (retain, nonatomic) HMDRemoteEventRouterAssertionController *eventRouterAssertionController; // ivar: _eventRouterAssertionController
@property (retain, nonatomic) HMDXPCEventRouterServer *eventRouterXPCServer; // ivar: _eventRouterXPCServer
@property (retain, nonatomic) HMDFMFHandler *fmfHandler; // ivar: _fmfHandler
@property (nonatomic) BOOL forceFetchHomeManagerZone; // ivar: _forceFetchHomeManagerZone
@property (retain, nonatomic) NSMutableSet *fullSyncedWatchPeers; // ivar: _fullSyncedWatchPeers
@property (retain, nonatomic) HMDAssistantGather *gatherer; // ivar: _gatherer
@property NSUInteger generationCounter; // ivar: _generationCounter
@property (nonatomic) int generationCounterToken; // ivar: _generationCounterToken
@property (retain, nonatomic) NSObject<HAPKeyStore> *hapKeyStore; // ivar: _hapKeyStore
@property (retain, nonatomic) NSDate *hapMetricsLastSubmissionDate; // ivar: _hapMetricsLastSubmissionDate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDHH2AutoMigrationEligibilityChecker *hh2AutoMigrationEligibilityChecker; // ivar: _hh2AutoMigrationEligibilityChecker
@property (retain, nonatomic) HMDHH2AutoMigrationMonitor *hh2AutoMigrationMonitor; // ivar: _hh2AutoMigrationMonitor
@property (retain, nonatomic) HMDHH2FrameworkSwitch *hh2FrameworkSwitch; // ivar: _hh2FrameworkSwitch
@property (nonatomic, getter=isHH2MigrationInProgress) BOOL hh2MigrationInProgress; // ivar: _hh2MigrationInProgress
@property (retain, nonatomic) NSDate *homeConfigurationLogDate; // ivar: _homeConfigurationLogDate
@property (getter=isHomeDataLoadInProgress) BOOL homeDataLoadInProgress; // ivar: _homeDataLoadInProgress
@property (nonatomic) BOOL homeDataLoadedFromArchive; // ivar: _homeDataLoadedFromArchive
@property (readonly) NSUInteger homeDatabaseSize; // ivar: _homeDatabaseSize
@property (readonly, nonatomic) HMDHomeManagerObjectChangeHandler *homeManagerObjectChangeHandler; // ivar: _homeManagerObjectChangeHandler
@property (nonatomic, getter=isHomeManagerZoneFirstFetch) BOOL homeManagerZoneFirstFetch; // ivar: _homeManagerZoneFirstFetch
@property (readonly, copy) NSMapTable *homeUUIDsByWalletKeyAssertionXPCConnection; // ivar: _homeUUIDsByWalletKeyAssertionXPCConnection
@property (readonly, copy) NSSet *homeUUIDsWithAutoAddWalletKeySuppressed;
@property NSUInteger homepodSetupRetryCount; // ivar: _homepodSetupRetryCount
@property (copy) NSArray *homes;
@property (retain, nonatomic) HMDIdentityRegistry *identityRegistry; // ivar: _identityRegistry
@property (retain) HMDIDSFirewallManager *idsFirewallManager; // ivar: _idsFirewallManager
@property (retain) HMDIDSServerBag *idsServerBag; // ivar: _idsServerBag
@property (nonatomic) BOOL ignoreFirstTimeReachabilityChanged; // ivar: _ignoreFirstTimeReachabilityChanged
@property (retain, nonatomic) NSMutableArray *incomingInvitations; // ivar: _incomingInvitations
@property (readonly) BOOL isCloudAccountActive;
@property (readonly) BOOL isNetworkConnectionAvailable;
@property (readonly) BOOL isResidentCapable;
@property (readonly) BOOL isResidentEnabled;
@property (readonly, nonatomic) HMDKeyTransferAgent *keyTransferAgent; // ivar: _keyTransferAgent
@property (nonatomic) BOOL lastAnswerForShouldCloudSyncData; // ivar: _lastAnswerForShouldCloudSyncData
@property (retain, nonatomic) NSUUID *lastCurrentHomeUUID; // ivar: _lastCurrentHomeUUID
@property (retain, nonatomic) HMELastEventStore *lastEventStore; // ivar: _lastEventStore
@property (retain, nonatomic) HMDLastEventStoreController *lastEventStoreController; // ivar: _lastEventStoreController
@property (copy) NSUUID *lastRemovedCurrentAccessoryUUID; // ivar: _lastRemovedCurrentAccessoryUUID
@property (readonly, nonatomic) HMDAppleAccessoryPairingController *legacyAccessoryPairingController; // ivar: _legacyAccessoryPairingController
@property (readonly) BOOL legacyZoneHasRecordsAvaliable;
@property (retain, nonatomic) HMDLocation *locationHandler; // ivar: _locationHandler
@property (readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly, nonatomic) HMDHomeManagerObjectLookup *lookup; // ivar: _lookup
@property (retain) HMDMediaGroupParticipantLocalDataStorage *mediaGroupParticipantDataLocalStorage; // ivar: _mediaGroupParticipantDataLocalStorage
@property (retain, nonatomic) HMEMemoryEventBus *memoryEventRouter; // ivar: _memoryEventRouter
@property (retain, nonatomic) HMFTimer *memoryMonitorLogEventTimer; // ivar: _memoryMonitorLogEventTimer
@property (readonly, nonatomic) HMDMemoryUtilizationTracker *memoryTracker; // ivar: _memoryTracker
@property (retain, nonatomic) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFTimer *messagingCounterLoggingTimer; // ivar: _messagingCounterLoggingTimer
@property (readonly, nonatomic) HMDMetricsManager *metricsManager; // ivar: _metricsManager
@property (retain) HMDMicroLocationLogEventObserver *microLocationLogEventObserver; // ivar: _microLocationLogEventObserver
@property (retain) HMDMicroLocationManager *microLocationManager; // ivar: _microLocationManager
@property BOOL missingHomeDataRecord; // ivar: _missingHomeDataRecord
@property (retain, nonatomic) HMDMobileAssetManager *mobileAssetManager; // ivar: _mobileAssetManager
@property (retain, nonatomic) HMDMessageFilterChain *msgFilterChain; // ivar: _msgFilterChain
@property (readonly) HMDMultiUserSettingsMetricsEventDispatcher *multiUserSettingsMetricEventDispatcher; // ivar: _multiUserSettingsMetricEventDispatcher
@property (readonly, nonatomic) HMDMultiUserStatusController *multiUserStatusController; // ivar: _multiUserStatusController
@property (retain, nonatomic) HMDNameValidator *nameValidator; // ivar: _nameValidator
@property (nonatomic) BOOL needToCleanUpKeys; // ivar: _needToCleanUpKeys
@property (readonly, getter=isNetworkConnectionAvailable) BOOL networkConnectionAvailable;
@property (readonly, nonatomic) unsigned short nextRequestTransactionIdentifier; // ivar: _nextRequestTransactionIdentifier
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) HMFBoolean *overrideCurrentHomeUUIDToNil; // ivar: _overrideCurrentHomeUUIDToNil
@property (readonly, nonatomic) HMDPairedSync *pairedSync; // ivar: _pairedSync
@property BOOL pcsEnabled; // ivar: _pcsEnabled
@property (retain, nonatomic) NSMutableDictionary *pendingDataSyncAcks; // ivar: _pendingDataSyncAcks
@property (retain, nonatomic) NSMutableDictionary *pendingFragmentationStream; // ivar: _pendingFragmentationStream
@property (retain, nonatomic) NSMutableSet *pendingHomesBeingRemoved; // ivar: _pendingHomesBeingRemoved
@property (retain, nonatomic) NSMutableDictionary *pendingRemoteSessions; // ivar: _pendingRemoteSessions
@property (retain, nonatomic) NSMutableSet *pendingResidentSetupSessions; // ivar: _pendingResidentSetupSessions
@property (retain, nonatomic) NSMutableArray *pendingResponsesForAccessoryFinder; // ivar: _pendingResponsesForAccessoryFinder
@property (retain, nonatomic) HMFTimer *periodicMobileCatalogUpdateTimer; // ivar: _periodicMobileCatalogUpdateTimer
@property (retain, nonatomic) HMDPowerManager *powerManager; // ivar: _powerManager
@property (retain, nonatomic) NSUUID *primaryHomeUUID; // ivar: _primaryHomeUUID
@property (retain, nonatomic) HMFNetMonitor *reachabilityMonitor; // ivar: _reachabilityMonitor
@property (retain, nonatomic) HMEDelegatingEventRouter *registrationForwardingEventRouter; // ivar: _registrationForwardingEventRouter
@property (retain, nonatomic) HMFTimer *remoteAccessHealthMonitorTimer; // ivar: _remoteAccessHealthMonitorTimer
@property (readonly, nonatomic) HMDRemoteAccountManager *remoteAccountManager; // ivar: _remoteAccountManager
@property (readonly, nonatomic, getter=isResidentEnabled) BOOL residentEnabled;
@property (nonatomic) NSInteger residentEnabledState; // ivar: _residentEnabledState
@property (retain, nonatomic) HMDResidentMesh *residentMesh; // ivar: _residentMesh
@property (retain, nonatomic) HMFActivity *setupActivity; // ivar: _setupActivity
@property CGFloat setupStartTimestamp; // ivar: _setupStartTimestamp
@property (readonly, nonatomic) HMFTimer *sharedHomesPushDelayTimer; // ivar: _sharedHomesPushDelayTimer
@property (retain) HMDSiriEndpointSettingsSyncManager *siriEndPointSettingsSyncManager; // ivar: _siriEndPointSettingsSyncManager
@property (readonly) NSObject<HMDCompositeSettingsSiriEndpointProfileBridge> *siriEndpointBridge;
@property (readonly) HMDSiriEndpointOnboardingManager *siriEndpointOnboardingManager; // ivar: _siriEndpointOnboardingManager
@property (retain, nonatomic) NSMutableArray *siriSyncNotificationReasons; // ivar: _siriSyncNotificationReasons
@property (nonatomic) NSUInteger siriSyncNotificationTime; // ivar: _siriSyncNotificationTime
@property (readonly, nonatomic) HMDSoftwareUpdateManager *softwareUpdateManager; // ivar: _softwareUpdateManager
@property (nonatomic) BOOL speakersAreConfigured; // ivar: _speakersAreConfigured
@property (nonatomic) BOOL speakersAreConfiguredInOwnedHomes; // ivar: _speakersAreConfiguredInOwnedHomes
@property (readonly) HMFFuture *startupCompleted; // ivar: _startupCompleted
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL switchingToHH2AsSharedUser; // ivar: _switchingToHH2AsSharedUser
@property (readonly, nonatomic) HMDSyncOperationManager *syncManager; // ivar: _syncManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sysdiagnoseQueue; // ivar: _sysdiagnoseQueue
@property (retain, nonatomic) NSMutableSet *unassociatedRemotePeers; // ivar: _unassociatedRemotePeers
@property (retain, nonatomic) NSMutableSet *unprocessedOperationModelIdentifiers; // ivar: _unprocessedOperationModelIdentifiers
@property (nonatomic) BOOL uploadHomeDataToCloud; // ivar: _uploadHomeDataToCloud
@property (nonatomic) BOOL uploadMetadataToCloud; // ivar: _uploadMetadataToCloud
@property (nonatomic) BOOL uploadToCloudIsPending; // ivar: _uploadToCloudIsPending
@property (readonly, nonatomic) HMDUserCloudShareManager *userCloudShareManager; // ivar: _userCloudShareManager
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (readonly, nonatomic) NSMutableDictionary *userPushCacheMap; // ivar: _userPushCacheMap
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSMutableArray *uuidsOfRemovedHomes; // ivar: _uuidsOfRemovedHomes
@property (readonly, nonatomic) HMDWatchManager *watchManager; // ivar: _watchManager
@property (readonly, nonatomic) HMFTimer *watchPushDelayTimer; // ivar: _watchPushDelayTimer
@property (readonly) NSMapTable *watchSyncRetryContextByRetryTimer; // ivar: _watchSyncRetryContextByRetryTimer
@property (readonly) NSMutableDictionary *watchSyncRetryContextBySyncIdentifier; // ivar: _watchSyncRetryContextBySyncIdentifier
@property (readonly, nonatomic) NSMutableDictionary *watchSyncStateMap; // ivar: _watchSyncStateMap
@property (readonly, nonatomic) HMDWidgetConfigurationReader *widgetConfigurationReader; // ivar: _widgetConfigurationReader
@property (readonly) HMDWidgetTimelineRefresher *widgetTimelineRefresher; // ivar: _widgetTimelineRefresher
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, nonatomic) BOOL zoneFetchFailed;


+(BOOL)doesSaveReasonAffectHomeManager:(id)arg0 ;
+(BOOL)doesSaveReasonAffectOnlyLocalData:(id)arg0 ;
+(BOOL)doesSaveReasonNotAffectLocalData:(id)arg0 ;
+(BOOL)doesSaveReasonRequireForceSyncToWatch:(id)arg0 ;
+(BOOL)isThisDeviceAdminOfHome:(id)arg0 ;
+(BOOL)shouldIgnoreExpectedConfigurationVersionUpdateForReason:(id)arg0 ;
+(BOOL)shouldIncrementGenerationCounterForReason:(id)arg0 ;
+(NSUInteger)legacyDataSizeLimit;
+(id)_getIntentGroupClientIdentifierSalt;
+(id)convertSaveReasonToTransationReason:(id)arg0 ;
+(id)createIdentifierSalt:(id)arg0 deviceSpecific:(BOOL)arg1 ;
+(id)deriveIntentGroupIdentifierFromBaseUUID:(id)arg0 ;
+(id)emptyModelObjectWithChangeType:(NSUInteger)arg0 homeManagerUUID:(id)arg1 ;
+(id)getAccessoryCacheForIdentifer:(id)arg0 ;
+(id)getAllBackingStoreObjects:(NSInteger)arg0 primaryHomeUUID:(id)arg1 cloudZone:(id)arg2 appData:(id)arg3 ;
+(id)getContainersToCleanUp;
+(id)getUniqueDeviceIdSalt;
+(id)logCategory;
+(id)remotePeerDeviceAddress:(id)arg0 ;
+(id)saltForDeviceSpecificIdentifier;
+(void)_eraseAllAccessoryKeysAndIdentifiers;
+(void)relaunchHomedDueToResetConfigurationWithDelay:(CGFloat)arg0 ;
+(void)removeAccessoryCacheForIdentifier:(id)arg0 ;
+(void)saveAccessoryCache:(id)arg0 forIdentifier:(id)arg1 ;
-(BOOL)_addWatch:(id)arg0 toAssociatedList:(id)arg1 ;
-(BOOL)_associateAccessories:(id)arg0 withHomes:(id)arg1 ;
-(BOOL)_configureHomes:(id)arg0 uncommittedTransactions:(id)arg1 ;
-(BOOL)_configureHomesImpl:(id)arg0 uncommittedTransactions:(id)arg1 ;
-(BOOL)_findAnyAccessoryWithIdentities:(id)arg0 inAccessoryServers:(id)arg1 ;
-(BOOL)_handleControllerKeyAvailable;
-(BOOL)_onlyHH2SharedHomesExist;
-(BOOL)_preferLocalHomesOverCloudHomes:(id)arg0 migrationOptions:(NSUInteger)arg1 ;
-(BOOL)_removeAndAddKeyPair:(id)arg0 userName:(id)arg1 eraseReason:(NSUInteger)arg2 ;
-(BOOL)_removeLegacyHomeArchive:(*id)arg0 ;
-(BOOL)_setPrimaryHome:(id)arg0 idsDataSync:(BOOL)arg1 ;
-(BOOL)_shouldHandleHomeDataSync:(id)arg0 remoteHome:(id)arg1 sourceDeviceVersion:(id)arg2 ;
-(BOOL)_submitSpamReportToIDS:(id)arg0 ;
-(BOOL)_updateAccessoriesConfigured;
-(BOOL)_updateHomesConfigured;
-(BOOL)_updateIncomingInvitesPresent;
-(BOOL)_zonesFetched;
-(BOOL)areThereAnyTTSUSessionsOngoing;
-(BOOL)canHH2MigrationBeStarted:(id)arg0 ;
-(BOOL)canPerformDryRunOfHH2Migration;
-(BOOL)checkConflictInHomeNamespaceWithName:(id)arg0 options:(NSUInteger)arg1 namespaceUUID:(id)arg2 error:(*id)arg3 ;
-(BOOL)getOrCreateControllerPublicKey:(*id)arg0 controllerUsername:(*id)arg1 error:(*id)arg2 ;
-(BOOL)hasHAPAccessoryInAnyHome;
-(BOOL)hasValidControllerKeyToSave;
-(BOOL)hasiCloudAndControllerKey;
-(BOOL)isDataSyncInProgressWithMessage:(id)arg0 ;
-(BOOL)isPairedWithWatch;
-(BOOL)moveDirectlyToHH2;
-(BOOL)moveDirectlyToHH2IfOnlyHH2SharedHomesExist;
-(BOOL)operationsWithIdentifiers:(id)arg0 outOperations:(*id)arg1 ;
-(BOOL)setLocalPairingIdentity:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldAcceptInvitationPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldAcceptInvitationWithHomeName:(id)arg0 ;
-(NSInteger)numberOfAccessoryWithNewFirmwareAvailable;
-(NSInteger)numberOfPendingIncomingInvitation;
-(NSUInteger)statusForMessage:(id)arg0 ;
-(id)__generateAssistantTeamIdentifier;
-(id)__nominateCurrentHomeUUID;
-(id)_accessoryOfCurrentDevice;
-(id)_addAccessoryRequestsForMessage:(id)arg0 ;
-(id)_appleMediaAccessoryOfCurrentDevice;
-(id)_checkActionSetNameConflict:(id)arg0 withNamespaceUUIDs:(id)arg1 ;
-(id)_checkNameConflict:(id)arg0 withNamespaceUUIDs:(id)arg1 ;
-(id)_compressHomeData:(id)arg0 ;
-(id)_currentHome;
-(id)_dataForPersistentStoreIncrementingGeneration:(BOOL)arg0 reason:(id)arg1 ;
-(id)_deviceForIdentifier:(id)arg0 ;
-(id)_dumpHomeManagerData;
-(id)_filterAccessories:(id)arg0 inHome:(id)arg1 ;
-(id)_filterAccessories:(id)arg0 withIdentifiers:(id)arg1 ;
-(id)_findHomeConfigurationModelChange:(id)arg0 ;
-(id)_findHomeModel:(id)arg0 ;
-(id)_findHomeModelChange:(id)arg0 ;
-(id)_findHomeOwnerModelChange:(id)arg0 ;
-(id)_findHomeSharedUserModelChange:(id)arg0 ;
-(id)_getAssistantHashingData;
-(id)_getListOfUsersToPushMetadataChangesTo;
-(id)_getRequestedState:(id)arg0 activity:(id)arg1 ;
-(id)_homeDataForPersistentStoreIncrementingGeneration:(BOOL)arg0 reason:(id)arg1 ;
-(id)_homeFromEventIdentifier:(id)arg0 ;
-(id)_homeWithAssistantIdentifier:(id)arg0 ;
-(id)_homeWithName:(id)arg0 ;
-(id)_homeWithUUID:(id)arg0 ;
-(id)_homeWithUniqueIdentifier:(id)arg0 forClientIdentifierSalt:(id)arg1 ;
-(id)_homeWithZoneID:(id)arg0 ;
-(id)_legacyContainer;
-(id)_legacyHomeAcceptedZoneIDFromHomeUUID:(id)arg0 ;
-(id)_legacyHomeZoneIDFromHomeUUID:(id)arg0 ;
-(id)_loadCloudTransactionForRemoteHome:(id)arg0 localHome:(id)arg1 cachedHome:(id)arg2 version:(NSInteger)arg3 cloudTransaction:(id)arg4 stagedTransaction:(id)arg5 mustReplayTransaction:(id)arg6 ;
-(id)_nominateCurrentHomeUUID;
-(id)_performPreHH2RebootTasks;
-(id)_prepareDataForDevicesOnSameAccountForHome:(id)arg0 remoteGateway:(BOOL)arg1 isAtLeastV4:(BOOL)arg2 ;
-(id)_prepareDataForDevicesOnSameAccountForHome:(id)arg0 remoteGateway:(BOOL)arg1 isAtLeastV4:(BOOL)arg2 migrateToHH2:(BOOL)arg3 ;
-(id)_prepareHomesVersionDict;
-(id)_processTestModeConfiguration:(id)arg0 ;
-(id)_processTestModeCurrentHomeOverride:(id)arg0 ;
-(id)_processTestModeHomeAccessControlOverride:(id)arg0 ;
-(id)_processTestModeHomeLocationStatusOverride:(id)arg0 ;
-(id)_processTestModeSkipHH2MigrationOverride:(id)arg0 ;
-(id)_pushChangesToAllUsersOfAllHomesForMigration;
-(id)_remotePeers;
-(id)_runtimeState;
-(id)_statusPayloadForMessage:(id)arg0 ;
-(id)_trackIncomingInvitationFromAccount:(id)arg0 mergeID:(id)arg1 idsInvitationIdentifier:(id)arg2 payload:(id)arg3 invitationState:(NSInteger)arg4 error:(*id)arg5 ;
-(id)_userPushCachedGetDeviceForUser:(id)arg0 ;
-(id)_zoneInformationWithUUID:(id)arg0 ;
-(id)accessAllowedWhenLockedSettingFileName;
-(id)accessoriesMatchingIdentifier:(id)arg0 ;
-(id)accessorySetupMetricDispatcherForAccessoryUUID:(id)arg0 ;
-(id)accessoryWithHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)accessoryWithUUID:(id)arg0 ;
-(id)addName:(id)arg0 namespace:(id)arg1 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)compositeSettingsControllerManagerForSiriEndpointSettingsSyncManager:(id)arg0 ;
-(id)createCloudDatabaseAndPerformInitialSync:(id)arg0 ;
-(id)createCurrentAccessoryCapabilities;
-(id)createCurrentResidentCapabilities;
-(id)currentAccessoryHomeUUID;
-(id)currentAccessoryUUID;
-(id)delegatingRouter:(id)arg0 filteredTopics:(id)arg1 forRouter:(id)arg2 ;
-(id)delegatingRouter:(id)arg0 upstreamTopicsFor:(id)arg1 ;
-(id)deleteLocalZone:(id)arg0 localDatabase:(id)arg1 containerID:(id)arg2 ;
-(id)destinationIdentifierForMediaSystem:(id)arg0 role:(NSUInteger)arg1 ;
-(id)eventForwarder;
-(id)eventSourceForCompositeSettingsController;
-(id)eventSourceForMediaGroupParticipantDataLocalStorage:(id)arg0 ;
-(id)eventStoreReadHandle;
-(id)eventStoreWriteHandle;
-(id)expandedTopicsForTopics:(id)arg0 ;
-(id)generateDataForSharedHomeModel:(id)arg0 ;
-(id)generatePayloadFromHome:(id)arg0 forAdmin:(BOOL)arg1 user:(id)arg2 supportedFeatures:(id)arg3 ;
-(id)getOrCreateLocalPairingIdentity:(*id)arg0 ;
-(id)hapMetadataForBiomeLogEventObserver:(id)arg0 ;
-(id)hapMetadataForBiomeMigrationManager:(id)arg0 ;
-(id)hapMetadataForMicroLocationLogEventObserver:(id)arg0 ;
-(id)homeUserFromMessage:(id)arg0 home:(id)arg1 ;
-(id)homesForBiomeMigrationManager:(id)arg0 ;
-(id)homesForSiriEndpointSettingsSyncManager:(id)arg0 ;
-(id)hubAccessoriesWithHomeUUID:(id)arg0 forSiriEndpointProfileMessageHandler:(id)arg1 ;
-(id)identifiersOfAccessories:(id)arg0 ;
-(id)identifiersOfAccessoriesForHome:(id)arg0 ;
-(id)init;
// -(id)initWithMessageDispatcher:(id)arg0 accessoryBrowser:(id)arg1 messageFilterChain:(id)arg2 homeData:(id)arg3 localDataDecryptionFailed:(BOOL)arg4 identityRegistry:(id)arg5 accountRegistry:(id)arg6 metricsManager:(id)arg7 darwinNotificationProvider:(id)arg8 notificationCenter:(id)arg9 backingStoreFactory:(id)arg10 appleAccountManager:(unk)arg11 remoteAccountManager:(id)arg12 userDefaults:(id)arg13 logEventDispatcher:(id)arg14 widgetConfigurationReader:(id)arg15 uncommittedTransactions:(id)arg16  ;
-(id)initWithMessageDispatcher:(id)arg0 accessoryBrowser:(id)arg1 messageFilterChain:(id)arg2 homeData:(id)arg3 localDataDecryptionFailed:(BOOL)arg4 identityRegistry:(id)arg5 accountRegistry:(id)arg6 metricsManager:(id)arg7 uncommittedTransactions:(id)arg8 ;
-(id)languageListProviderForHomeUUID:(id)arg0 ;
-(id)localAndRemoteSubscriptionProvider;
-(id)localOnlySubscriptionProvider;
-(id)mediaSystemForAppleMediaAccessory:(id)arg0 ;
-(id)messageDestination;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)multiUserSettingsForMultiUserSettingsMetricsEventDispatcherDataSource;
-(id)needsOnboardingForHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)pairedAccessories;
-(id)removeName:(id)arg0 namespace:(id)arg1 ;
-(id)replaceName:(id)arg0 withNewName:(id)arg1 inNamespaces:(id)arg2 ;
-(id)settingsControllerForAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
-(id)siriEndpointOnboardingManagerForSiriEndpointProfileMessageHandler:(id)arg0 ;
-(id)topicNameForMediaGroupParticipantDataLocalStorage:(id)arg0 ;
-(id)updateMessageTargetForDuetPredictionSubscriber:(id)arg0 ;
-(id)upstreamTopicsForTopic:(id)arg0 ;
-(id)writeMigrationRecordWithShouldSkipKeyRollOperations:(BOOL)arg0 forceMigrationFailureForTesting:(BOOL)arg1 migrateFromTestDirectory:(BOOL)arg2 dryRun:(BOOL)arg3 ;
-(unsigned short)_nextTransactionIdentifier;
-(void)__accountAddedDevice:(id)arg0 ;
-(void)__accountRegistryAddedAccount:(id)arg0 ;
-(void)__accountRegistryRemovedAccount:(id)arg0 ;
-(void)__accountRemovedDevice:(id)arg0 ;
-(void)__addActiveConnection:(id)arg0 ;
-(void)__handleActiveAssertion:(id)arg0 ;
-(void)__handleAddedXPCConnection:(id)arg0 ;
-(void)__handleAppleAccountUpdated:(id)arg0 ;
-(void)__handleCompanionUpdated:(id)arg0 ;
-(void)__handleDeviceCapabilitiesUpdated:(id)arg0 ;
-(void)__handleDeviceUpdatedNotification:(id)arg0 ;
-(void)__handleInitialFetch:(id)arg0 ;
-(void)__handleProcessMemoryPressureEvent:(id)arg0 ;
-(void)__handleRemovedXPCConnection:(id)arg0 ;
-(void)__handleRequestFetchHomeConfiguration:(id)arg0 ;
-(void)__handleUpdatedCurrentDevice:(id)arg0 ;
-(void)__handleWatchConnected:(id)arg0 ;
-(void)__handleWatchDisconnected:(id)arg0 ;
-(void)__handleXPCConnectionStateChange:(id)arg0 ;
-(void)__pingDestination:(id)arg0 secure:(BOOL)arg1 restrictToLocalNetwork:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)__registerIncomingInvitations:(id)arg0 ;
-(void)__removeActiveConnection:(id)arg0 ;
-(void)__sendUpdateRequestToAdminForInvitation:(id)arg0 homeUUID:(id)arg1 invitationState:(NSInteger)arg2 authStatus:(id)arg3 ;
-(void)__setLastSyncedAssistantConfigurationVersion:(NSUInteger)arg0 ;
-(void)__startupFirewallRuleManagerForMessage:(id)arg0 completion:(id)arg1 ;
-(void)_acceptHomeInviteFromAccount:(id)arg0 message:(id)arg1 trackInvite:(BOOL)arg2 ;
-(void)_accessoriesAreLocallyReachableOnTransientDevice:(BOOL)arg0 forHome:(id)arg1 ;
-(void)_accountAvailabilityChanged:(BOOL)arg0 ;
-(void)_addCloudZone:(id)arg0 ownerName:(id)arg1 ;
-(void)_addCurrentResidentDeviceToHomes:(id)arg0 ;
-(void)_addIncomingInvitation:(id)arg0 ;
-(void)_addPendingDataSyncAcksForUser:(id)arg0 forHome:(id)arg1 ;
-(void)_addSyncOperation:(id)arg0 ;
-(void)_addSyncOperation:(id)arg0 forWatchWithIdentifier:(id)arg1 ;
-(void)_addWatch:(id)arg0 completionHandler:(id)arg1 ;
-(void)_archiveSyncDataForHome:(id)arg0 ;
-(void)_archiveSyncDataForHome:(id)arg0 toUser:(id)arg1 ;
-(void)_assistantSyncDataChanged:(id)arg0 ;
-(void)_auditDuplicatePreviouslyAddedAccessory:(id)arg0 ;
-(void)_auditKeychainEntries;
-(void)_cancelAccessoryFinderTimer;
-(void)_changePrimaryHome:(id)arg0 ;
-(void)_checkAndAddWatchDevices:(id)arg0 resend:(BOOL)arg1 requestFromWatch:(BOOL)arg2 ;
-(void)_checkAndAddWatchDevicesWithResend:(BOOL)arg0 ;
-(void)_checkAndInformCompanionDevice;
-(void)_checkForAccountChanged;
-(void)_checkForRemotePeers;
-(void)_checkForRemotePeersAndRegisterForRemoteNotifications:(BOOL)arg0 ;
-(void)_cleanChangesIfNoAddChangeObjectID:(id)arg0 completion:(id)arg1 ;
-(void)_cloudReachabilityMonitorChanged:(BOOL)arg0 ;
-(void)_detectGuestHomesAddedAndRemovedWithCloudHomes:(id)arg0 ;
-(void)_determineLegacyLocalChanges:(id)arg0 ;
-(void)_determineLocalChangesAndSchedulePush;
-(void)_dumpToLog:(id)arg0 withState:(id)arg1 ;
-(void)_electCompanionForRemoteAccess:(id)arg0 ;
-(void)_electRemoteAccessDeviceForHome:(id)arg0 retryCount:(NSUInteger)arg1 ;
-(void)_electRemoteAccessPeerForHome:(id)arg0 ;
-(void)_electRemoteAccessPeerForHome:(id)arg0 retryCount:(NSUInteger)arg1 ;
-(void)_electRemoteGatewayForHomesAfterReachabilityChanges;
-(void)_eraseConfiguration:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_eraseLocalHomeConfiguration;
-(void)_eraseLocalHomeConfigurationAfterSignOut;
-(void)_eraseLocalHomeConfigurationAndDeleteMetadata:(BOOL)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
-(void)_eraseLocalHomeConfigurationAndDeleteMetadata:(BOOL)arg0 reason:(NSUInteger)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(void)_eraseLocalHomeConfigurationWithReason:(NSUInteger)arg0 ;
-(void)_eraseLocalHomeData;
-(void)_eraseLocalMetadata;
-(void)_evaluateHH2TvOSFollowUpRequirements;
-(void)_fetchAllZones:(id)arg0 ;
-(void)_fetchDataFromCloud;
-(void)_fetchHomeDataFromCloudWithCloudConflict:(BOOL)arg0 forceFetch:(BOOL)arg1 withDelay:(CGFloat)arg2 accountCompletion:(id)arg3 ;
-(void)_fetchHomeFromCloudZone:(id)arg0 cloudConflict:(BOOL)arg1 withDelay:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)_fetchHomeManagerCloundConflict:(BOOL)arg0 withDelay:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)_findRemotePeerContainingAccessories:(id)arg0 forHome:(id)arg1 ;
-(void)_fragmentationStream:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)_fragmentationStream:(id)arg0 didReceiveData:(id)arg1 transactionIdentifier:(unsigned short)arg2 error:(id)arg3 ;
-(void)_generateAssistantSyncDataAndIncrementVersion:(BOOL)arg0 requestSync:(BOOL)arg1 urgent:(BOOL)arg2 completion:(id)arg3 ;
-(void)_getRuntimeStateUpdateForHomeManager:(BOOL)arg0 includeMediaAccessorySessionState:(BOOL)arg1 options:(NSUInteger)arg2 includeResidentDeviceState:(BOOL)arg3 completion:(id)arg4 ;
-(void)_handleAccessAllowedWhenLockedRequest:(id)arg0 ;
-(void)_handleAccessHomeInvite:(id)arg0 ;
-(void)_handleAccessHomeInviteFromAccount:(id)arg0 mergeID:(id)arg1 idsInvitationIdentifier:(id)arg2 payload:(id)arg3 messageResponseHandler:(id)arg4 ;
-(void)_handleAccountAvailabilityChanged:(id)arg0 ;
-(void)_handleAccountStatusDeterminedWithError:(id)arg0 homeDataRecordExists:(BOOL)arg1 metadataRecordExists:(BOOL)arg2 completion:(id)arg3 ;
-(void)_handleAddRemoteAccessRequest:(id)arg0 ;
-(void)_handleAreYouAtHome:(id)arg0 ;
-(void)_handleAssistantSyncDataRequest:(id)arg0 ;
-(void)_handleAssistantTeamIdentifierChanged:(id)arg0 ;
-(void)_handleAttemptHH2AutoMigrationMessage:(id)arg0 ;
-(void)_handleCompanionKeysSync:(id)arg0 ;
-(void)_handleConnectivityInfoRequest:(id)arg0 ;
-(void)_handleContactStoreChanged;
-(void)_handleCurrentAccessoryAddedNotification:(id)arg0 ;
-(void)_handleCurrentAccessoryRemovedNotification:(id)arg0 ;
-(void)_handleCurrentHomeChanged:(id)arg0 ;
-(void)_handleDeleteDuetEvent:(id)arg0 ;
-(void)_handleDeviceSetupSessionOpen:(id)arg0 ;
-(void)_handleDismissBulletinRequest:(id)arg0 ;
-(void)_handleDismissDialogRequest:(id)arg0 ;
-(void)_handleDoYouSeeUnpairedAccessories:(id)arg0 ;
-(void)_handleDumpDatabase:(id)arg0 ;
-(void)_handleDumpState:(id)arg0 ;
-(void)_handleEnableResidentForThisDeviceRequest:(id)arg0 ;
-(void)_handleEnableUARPPacketCaptureRequest:(id)arg0 ;
-(void)_handleFetchAddAccessoryRequests:(id)arg0 ;
-(void)_handleFetchDevicesMessage:(id)arg0 ;
-(void)_handleFetchModifyHome:(id)arg0 isLegacyTransaction:(BOOL)arg1 completion:(id)arg2 ;
-(void)_handleFetchObjectChange:(id)arg0 home:(id)arg1 isLegacyTransaction:(BOOL)arg2 completion:(id)arg3 ;
-(void)_handleGetTLVForJSON:(id)arg0 ;
-(void)_handleHH2SentinelZonePresent:(id)arg0 ;
-(void)_handleHomeDataSync:(id)arg0 ;
-(void)_handleHomeManagerSyncWalletKeysPassSerialNumbersMessage:(id)arg0 ;
-(void)_handleHomeManagerTransactionsFetched:(id)arg0 stagedTransaction:(id)arg1 mustReplay:(id)arg2 cloudConflict:(BOOL)arg3 transactionError:(id)arg4 syncCompletion:(id)arg5 ;
-(void)_handleHomeUtilRemoteMessageRequest:(id)arg0 ;
-(void)_handleHomesConfigSync:(id)arg0 ;
-(void)_handleMetadataSync:(id)arg0 ;
-(void)_handleNetworkFirewallAddOverridesRequest:(id)arg0 ;
-(void)_handleNetworkFirewallDumpCloudRecordsRequest:(id)arg0 ;
-(void)_handleNetworkFirewallDumpLocalRulesRequest:(id)arg0 ;
-(void)_handleNetworkFirewallDumpPairedMetadataRequest:(id)arg0 ;
-(void)_handleNetworkFirewallFetchCloudChangesRequest:(id)arg0 ;
-(void)_handleNetworkFirewallRemoveLocalRulesRequest:(id)arg0 ;
-(void)_handleNetworkFirewallRemoveOverridesRequest:(id)arg0 ;
-(void)_handlePairingIdentityRequest:(id)arg0 ;
-(void)_handlePing:(id)arg0 ;
-(void)_handleQueryHomeNamespace:(id)arg0 ;
-(void)_handleQueryMetadata:(id)arg0 ;
-(void)_handleQueryVersionInformation:(id)arg0 ;
-(void)_handleQueryiCloudSwitchState:(id)arg0 ;
-(void)_handleRemoteSessionTornDown:(id)arg0 ;
-(void)_handleRemoveAccount:(id)arg0 ;
-(void)_handleRemoveHomeOperation:(id)arg0 message:(id)arg1 ;
-(void)_handleRequestAddHome:(id)arg0 ;
-(void)_handleRequestFetchHomeConfiguration:(id)arg0 ;
-(void)_handleRequestForCompanionKeysSync:(id)arg0 ;
-(void)_handleRequestIsUserUsingHomeKit:(id)arg0 ;
-(void)_handleRequestMediaAccessoryControl:(id)arg0 ;
-(void)_handleRequestRemoveHome:(id)arg0 ;
-(void)_handleRequestRuntimeStateUpdate:(id)arg0 ;
-(void)_handleRequestSetPrimaryHome:(id)arg0 ;
-(void)_handleRequestToCancelHomeInvitation:(id)arg0 saveReason:(id)arg1 ;
-(void)_handleRequestToUpdateHomeInvitationFromInviter:(id)arg0 ;
-(void)_handleRequestToUpdateHomeInvitationFromLocalUser:(id)arg0 ;
-(void)_handleResetConfiguration:(id)arg0 ;
-(void)_handleResetHome:(id)arg0 ;
-(void)_handleResolveAccount:(id)arg0 ;
-(void)_handleRetrieveVendorIdentifier:(id)arg0 ;
-(void)_handleSaveRequest:(id)arg0 ;
-(void)_handleSetAppData:(id)arg0 ;
-(void)_handleSetMetadata:(id)arg0 ;
-(void)_handleShouldDisplayiCloudSwitch:(id)arg0 ;
-(void)_handleSignificantTimeChange;
-(void)_handleSysdiagnoseRequest:(id)arg0 ;
-(void)_handleTestHH2Migration:(id)arg0 ;
-(void)_handleTestModeConfigRequest:(id)arg0 ;
-(void)_handleTransactionsFetched:(id)arg0 stagedTransaction:(id)arg1 mustReplay:(id)arg2 zoneID:(id)arg3 cloudConflict:(BOOL)arg4 transactionError:(id)arg5 syncCompletion:(id)arg6 ;
-(void)_handleUpdatedCurrentDevice:(id)arg0 ;
-(void)_handleUpdateiCloudSwitchState:(id)arg0 ;
-(void)_handleUpgradeToHH2Message:(id)arg0 ;
-(void)_handleUpgradeToHH2Message:(id)arg0 autoMigration:(BOOL)arg1 ;
-(void)_handleUserRemoved:(id)arg0 ;
-(void)_incrementAssistantGenerationCounter;
-(void)_initializeAutoMigration;
-(void)_loadHomeManagerHomeModelChanges:(id)arg0 mustReplay:(id)arg1 legacyPush:(BOOL)arg2 home:(id)arg3 completion:(id)arg4 ;
-(void)_loadHomeManagerTransactionsToPush:(id)arg0 mustReplay:(id)arg1 forLegacyPush:(BOOL)arg2 includeAllChanges:(BOOL)arg3 completion:(id)arg4 ;
-(void)_loadHomeModelChanges:(id)arg0 mustReplay:(id)arg1 legacyPush:(BOOL)arg2 home:(id)arg3 completion:(id)arg4 ;
// -(void)_loadMessageDispatcher:(id)arg0 accessoryBrowser:(id)arg1 messageFilterChain:(id)arg2 homeData:(id)arg3 localDataDecryptionFailed:(BOOL)arg4 identityRegistry:(id)arg5 accountRegistry:(id)arg6 uncommittedTransactions:(id)arg7 backingStoreFactory:(id)arg8 reloadData:(unk)arg9  ;
-(void)_logCachedHomeKitConfigurationDataLogEvent;
-(void)_logEventAggregationAnalysisLogEvents;
-(void)_logState:(id)arg0 key:(id)arg1 indent:(id)arg2 ;
-(void)_maybeCreateLegacyHomeAcceptedZone:(id)arg0 ;
-(void)_migrateCurrentAccessoryDataIfNeeded;
-(void)_migrateUniqueIdentifierPrefsIfNeeded;
-(void)_monitorMemoryUsage;
-(void)_monitorReachability;
-(void)_notifyClientsOfConfigurationChange;
-(void)_notifyClientsOfUpdatedStatus;
-(void)_notifyCurrentHomeUpdated:(id)arg0 isLocalUpdate:(BOOL)arg1 ;
-(void)_notifyMetadata:(id)arg0 limitToSPIClients:(BOOL)arg1 message:(id)arg2 invokeResponseHandler:(BOOL)arg3 ;
-(void)_notifyMetricsManagerOfConfigurationChange;
-(void)_notifyXPCClientsOfHomeConfigurationChange;
-(void)_notifyXPCClientsOfUpdatedDevices;
-(void)_performAutoMigrationToHH2WithIsDryRun:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_performPostSaveRequestActionsWithRequest:(id)arg0 ;
-(void)_postCloudSyncNotificationWithSuccess:(BOOL)arg0 ;
-(void)_postIncomingInvitationStateChangedNotification:(id)arg0 newInvitationState:(NSInteger)arg1 ;
-(void)_postMergeWatchPush;
-(void)_postiCloudSigninState:(BOOL)arg0 ;
-(void)_processAnyPendingRequestsForRemoteAccess:(BOOL)arg0 ;
-(void)_processLocalRequestToUpdateHomeInvitation:(id)arg0 newState:(NSInteger)arg1 authStatus:(id)arg2 ;
-(void)_processRemoveHomeModels:(id)arg0 processIndex:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_processRemoveUserManagementOperationModel:(id)arg0 message:(id)arg1 ;
-(void)_processRequestToUpdateHomeInvitation:(id)arg0 invitationState:(NSInteger)arg1 homeUUID:(id)arg2 authStatus:(id)arg3 messageName:(id)arg4 message:(id)arg5 ;
-(void)_processSharedHomeModel:(id)arg0 message:(id)arg1 ;
-(void)_processUserManagementOperationModel:(id)arg0 message:(id)arg1 ;
-(void)_pruneExpiredIncomingInvitations;
-(void)_pushChangesForHome:(id)arg0 toRegularUsersOfHome:(id)arg1 adminUsersOfHome:(id)arg2 ;
-(void)_pushChangesForHome:(id)arg0 toRemoteDevicesOnSameAccount:(id)arg1 addedUser:(id)arg2 ;
-(void)_pushChangesToAllUsersOfAllHomes;
-(void)_pushChangesToCloud:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)_pushChangesToCloud:(BOOL)arg0 withDelay:(CGFloat)arg1 reason:(id)arg2 ;
-(void)_pushChangesToUsers:(id)arg0 forHome:(id)arg1 ;
-(void)_pushChangesToUsersThatHaveNotAcknowledged;
-(void)_pushChangesToWatch:(id)arg0 payload:(id)arg1 group:(id)arg2 completionHandler:(id)arg3 ;
-(void)_pushMetadataChangesToUsers;
-(void)_pushMetadataToCloud;
-(void)_pushUserRemovedForHome:(id)arg0 ;
-(void)_pushZoneInfromationForHome:(id)arg0 ;
-(void)_queryLegacyHomeAndAcceptedZoneExists:(id)arg0 completion:(id)arg1 ;
-(void)_reachabilityMonitorChanged:(BOOL)arg0 ;
-(void)_registerForFrameworkSwitch;
-(void)_registerForLogging;
-(void)_registerForMessages;
-(void)_registerForXPCConnectionNotifications;
-(void)_reloadHomeDataFromLocalStore:(BOOL)arg0 ;
-(void)_remoteAccessHealthMonitorTimerDidFire:(id)arg0 ;
-(void)_removeAllUsersOfHome:(id)arg0 ;
-(void)_removeCloudZone:(id)arg0 updateHomeManager:(BOOL)arg1 ;
-(void)_removeCurrentResidentDeviceFromHomes:(id)arg0 ;
-(void)_removeFromAssociatedPeers:(id)arg0 home:(id)arg1 ;
-(void)_removeFromUnassociatedPeers:(id)arg0 home:(id)arg1 ;
-(void)_removeHome:(id)arg0 withMessage:(id)arg1 saveToStore:(BOOL)arg2 notifyUsers:(BOOL)arg3 shouldRemovePairings:(BOOL)arg4 ;
-(void)_removeIncomingInvitation:(id)arg0 ;
-(void)_removePendingDataSyncAcksForUser:(id)arg0 forHome:(id)arg1 ;
-(void)_requestHomeDataSync;
-(void)_resetSiriSyncNotification;
-(void)_resumeXPCWithCompletionHanlder:(id)arg0 ;
-(void)_retryCloudOperationWithName:(id)arg0 completionHandler:(id)arg1 ;
// -(void)_runFetchHomeDataFromCloudWithCloudConflict:(BOOL)arg0 forceFetch:(BOOL)arg1 accountCompletion:(id)arg2 syncCompletion:(unk)arg3  ;
-(void)_runFetchHomeFromCloudZone:(id)arg0 cloudConflict:(BOOL)arg1 syncCompletion:(id)arg2 ;
-(void)_runFetchHomeManagerCloudConflict:(BOOL)arg0 syncCompletion:(id)arg1 ;
-(void)_runUploadHomeConfigToCloud:(id)arg0 rowIDs:(id)arg1 reasons:(id)arg2 forcePush:(BOOL)arg3 syncCompletion:(id)arg4 ;
-(void)_runUploadHomeConfigToCloudForcePush:(BOOL)arg0 reason:(id)arg1 syncCompletion:(id)arg2 ;
-(void)_runUploadHomeToCloud:(id)arg0 syncCompletion:(id)arg1 ;
-(void)_saveAssistantHashingData:(id)arg0 ;
-(void)_saveToPersistentStore:(BOOL)arg0 reason:(id)arg1 ;
-(void)_saveWithReason:(id)arg0 information:(id)arg1 postSyncNotification:(BOOL)arg2 ;
-(void)_saveWithReason:(id)arg0 information:(id)arg1 saveOptions:(NSUInteger)arg2 ;
-(void)_saveWithReason:(id)arg0 postSyncNotification:(BOOL)arg1 ;
-(void)_saveWithRequest:(id)arg0 ;
-(void)_schedulePostFetch;
-(void)_schedulePushChangesToAllUsersOfAllHomes;
-(void)_scheduleSendHomeDataToAllWatches;
-(void)_sendAssistantTeamIdentifierToWatches:(id)arg0 ;
-(void)_sendCurrentHomeToWatch:(id)arg0 ;
-(void)_sendFragmentedMessage:(id)arg0 messageIndex:(NSUInteger)arg1 messageIdentity:(id)arg2 userID:(id)arg3 destination:(id)arg4 completionHandler:(id)arg5 ;
-(void)_sendHomeDataToAllWatchesMigrateToHH2:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_sendHomeDataToAllWatchesWithCompletion:(id)arg0 ;
-(void)_sendHomeDataToWatch:(id)arg0 completionHandler:(id)arg1 ;
-(void)_sendHomeDataToWatch:(id)arg0 migrateToHH2:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_sendKeysToWatch:(id)arg0 completionHandler:(id)arg1 ;
-(void)_sendUserAdded:(id)arg0 destination:(id)arg1 toHome:(id)arg2 ;
-(void)_sendUserRemoved:(id)arg0 fromHome:(id)arg1 pairingUsername:(id)arg2 pushToCloud:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_setAccountAvailabilityChanged;
-(void)_setAssistantHashingData:(id)arg0 ;
-(void)_setAssistantSyncRequest:(id)arg0 ;
-(void)_setHomeConfigurationKey:(id)arg0 value:(*void)arg1 ;
-(void)_setHomeConfigurationKey:(id)arg0 value:(*void)arg1 applicationIdentifier:(struct __CFString *)arg2 ;
-(void)_setHomekitAssistantConfigurationVersion:(NSUInteger)arg0 ;
-(void)_setHomekitAssistantNumEntities:(NSUInteger)arg0 ;
-(void)_setUniqueDeviceIdSalt:(id)arg0 ;
-(void)_startAccessoryFinderTimer;
-(void)_startAccessoryFinderTimerExpired;
-(void)_startCloudOperationRetryWithTimeout:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_startHH2MigrationWithRequestMessage:(id)arg0 isAutoMigration:(BOOL)arg1 ;
-(void)_startHH2MigrationWithShouldSkipKeyRollOperations:(BOOL)arg0 forceMigrationFailureForTesting:(BOOL)arg1 isAutoMigration:(BOOL)arg2 dryRun:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_startScanningForAccessories:(id)arg0 ;
-(void)_stopCloudOperationRetryTimer;
-(void)_storeAllLocalSettingsForThisDevice;
-(void)_submitAccessoryNetworkProtectionReportsToAWD:(id)arg0 ;
-(void)_submitCounters;
-(void)_submitHAPMetricsCounters;
-(void)_suspendXPCWithCompletionHanlder:(id)arg0 ;
-(void)_teardownRemoteAccessForHome:(id)arg0 ;
-(void)_teardownRemoteAccessForHomeCommon:(id)arg0 isCompanion:(BOOL)arg1 ;
-(void)_teardownRemoteAccessForHomeThroughCompanion:(id)arg0 ;
-(void)_transactionalizeAndApplyCloudHomeData:(id)arg0 cachedHomeData:(id)arg1 version:(NSInteger)arg2 migrationOptions:(NSUInteger)arg3 dataWasMerged:(*BOOL)arg4 syncCompletion:(id)arg5 ;
-(void)_transactionalizeAndApplyHomeData:(id)arg0 cachedHomeData:(id)arg1 syncCompletion:(id)arg2 ;
-(void)_updateAccessAllowedWhenLocked:(BOOL)arg0 message:(id)arg1 ;
-(void)_updateCloudDataSyncWithAccountState:(BOOL)arg0 ;
-(void)_updateCloudDataSyncWithAccountState:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateCurrentHomeIfNecessary;
-(void)_updateCurrentUserEligibleForOwnerToAutoMigration;
-(void)_updateGenerationCounterWithReason:(id)arg0 source:(id)arg1 ;
-(void)_updateHomeManagerModelChangesAsPushed:(id)arg0 legacyPush:(BOOL)arg1 ;
-(void)_updateHomeManagerModelChangesAsPushed:(id)arg0 pushMask:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_updateHomesAboutNetworkConnectivity:(BOOL)arg0 ;
-(void)_updateHomesDiscoveredBonjourServicesMetrics;
-(void)_updateModelChangesAsPushed:(id)arg0 home:(id)arg1 pushMask:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_updateResidentEnabledOnThisDevice:(BOOL)arg0 forceNotify:(BOOL)arg1 message:(id)arg2 ;
-(void)_updateUserPushCachedForUser:(id)arg0 device:(id)arg1 ;
-(void)_uploadHomeConfigToCloud:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)_uploadHomeConfigToCloud:(BOOL)arg0 withDelay:(CGFloat)arg1 reason:(id)arg2 ;
-(void)_uploadHomeManagerToCloudSyncCompletion:(id)arg0 ;
-(void)_uploadHomeManagerToCloudWithDelay:(CGFloat)arg0 ;
-(void)_uploadHomeToCloud:(id)arg0 withDelay:(CGFloat)arg1 ;
-(void)_uploadTransaction:(id)arg0 home:(id)arg1 completion:(id)arg2 ;
-(void)_writeSyncDataCache;
-(void)accessoriesAreLocallyReachableOnTransientDevice:(BOOL)arg0 forHome:(id)arg1 ;
-(void)accountAvailabilityChanged:(id)arg0 ;
-(void)addAccessorySetupMetricDispatcher:(id)arg0 ;
-(void)addHome:(id)arg0 ;
-(void)addTransactionAfterPush:(id)arg0 ;
-(void)addWalletKeyWithHomeUUID:(id)arg0 reason:(id)arg1 ;
-(void)applyOnboardingSelections:(id)arg0 accessoryUUID:(id)arg1 homeUUID:(id)arg2 completion:(id)arg3 ;
-(void)archiveServerToken:(id)arg0 ;
-(void)assistantSyncDataChanged:(id)arg0 ;
-(void)atHomeLevelChanged:(NSInteger)arg0 formerLevel:(NSInteger)arg1 home:(id)arg2 ;
-(void)auditDuplicatePreviouslyAddedAccessory:(id)arg0 ;
-(void)autoAddWalletKeysOncePerDeviceSetup;
-(void)autoMigrateToHH2WithCompletionHandler:(id)arg0 ;
-(void)checkAndMoveDirectlyToHH2IfOnlyHH2SharedHomesExist;
-(void)checkAndPushMetadataToUser:(id)arg0 destination:(id)arg1 userInfo:(id)arg2 ;
-(void)checkForRemotePeers;
-(void)cleanupOperationsForAccessory:(id)arg0 user:(id)arg1 completion:(id)arg2 ;
-(void)cloudHomeSettingsUpdated:(id)arg0 ;
-(void)configureForWalletKey;
-(void)configureRetailDemoModeWithKeyPair:(id)arg0 controllerName:(id)arg1 demoAccessories:(id)arg2 completionHandler:(id)arg3 ;
-(void)controllerKeyPairGenerated:(id)arg0 ;
-(void)dataSyncInProgressUpdatedNotification:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllZonesFromContainer:(id)arg0 ;
-(void)deleteZonesFromLegacyAndCameraContainers;
-(void)deregisterForSignificantTimeChangeNotification;
-(void)determineLocalChangesAndSchedulePush;
-(void)dismissBulletinOnAllMyTransientDevicesWithContext:(id)arg0 ;
-(void)dismissDialogOnAllMyTransientDevicesWithContext:(id)arg0 selection:(BOOL)arg1 ;
-(void)dryRunHH2MigrationWithCompletionHandler:(id)arg0 ;
-(void)electDeviceForUser:(id)arg0 destination:(id)arg1 deviceCapabilities:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
-(void)electRemoteAccessPeerForHome:(id)arg0 ;
-(void)eraseLocalHomeData;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg0 ;
-(void)evaluateToPushMetadataWhenHomeKitInUse;
-(void)fetchAllZones;
-(void)fetchAndUpdatePCSStatus;
-(void)fetchHomeDataFromCloudWithCloudConflict:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)fetchHomeFromCloudZone:(id)arg0 cloudConflict:(BOOL)arg1 withDelay:(CGFloat)arg2 ;
-(void)fetchHomeManagerCloudConflict:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)finalizeRetailDemoModeWithAllowEditing:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)forceCloudFetch;
-(void)forcePushLocalDataToCloud:(id)arg0 ;
-(void)fragmentationStream:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)fragmentationStream:(id)arg0 didReceiveData:(id)arg1 transactionIdentifier:(unsigned short)arg2 error:(id)arg3 ;
-(void)handleAccountSettingsUpdate:(id)arg0 ;
-(void)handleAutoAddWalletKeySupressionAssertionAcquireMessage:(id)arg0 ;
-(void)handleAutoAddWalletKeySupressionAssertionReleaseMessage:(id)arg0 ;
-(void)handleContactStoreChanged:(id)arg0 ;
-(void)handleDataFragmentedSync:(id)arg0 ;
-(void)handleHomeCurrentDeviceResidentEligibleNotification:(id)arg0 ;
-(void)handleMetadataDictionary:(id)arg0 message:(id)arg1 ;
-(void)handleRemoteUserClientCloudShareRepairRequest:(id)arg0 ;
-(void)handleRemoteUserClientCloudShareRequest:(id)arg0 ;
-(void)handleSiriSyncDataRequest:(id)arg0 ;
-(void)handleVendorInfoUpdated:(id)arg0 ;
-(void)handleWalletKeyAssertionsXPCConnectionRemoved:(id)arg0 ;
-(void)idsServerBagDidUpdate:(id)arg0 ;
-(void)initalizeMediaGroupParticipantDataLocalStorage;
-(void)initializeHH2FrameworkSwitch:(id)arg0 ;
-(void)invalidate;
-(void)kickAccountAvailabilityCheck;
-(void)maybeStashOwnerMetadataForPostMigrationPingUsingMigratorRecord:(id)arg0 ;
-(void)migrateLocalHomeTheaterDataForCurrentAccessory:(id)arg0 currentMediaSystem:(id)arg1 ;
-(void)migrateLocalMediaGroupParticipantData;
-(void)migrateLocalStereoPairDataForCurrentMediaSystem:(id)arg0 ;
-(void)migrateModelObjectsToCloud:(NSInteger)arg0 schemaVersion:(NSInteger)arg1 ;
-(void)mobileAssetManager:(id)arg0 didReceiveMetadata:(id)arg1 ;
-(void)multiUserStatusController:(id)arg0 statusDidChange:(NSInteger)arg1 ;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)networkMonitorIsUnreachable:(id)arg0 ;
-(void)notifyAboutAddAccessoryRequest;
-(void)notifyClientsOfConfigurationChange;
-(void)notifyClientsOfConfigurationChangeWithReason:(id)arg0 source:(id)arg1 shouldFetch:(BOOL)arg2 ;
-(void)notifyClientsOfUserSettingsChangeWithReason:(id)arg0 ;
-(void)notifyClientsResidentCapable:(BOOL)arg0 ;
-(void)notifySPIClientsAboutAccessAllowedWhenLocked:(BOOL)arg0 ;
-(void)notifyZonesCloudZoneReady:(id)arg0 ;
-(void)pairedSyncDidStart:(id)arg0 ;
-(void)performPostSaveRequestActionsWithReason:(id)arg0 ;
-(void)performPostSaveRequestActionsWithRequest:(id)arg0 ;
-(void)pingDevice:(id)arg0 secure:(BOOL)arg1 restrictToLocalNetwork:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)processAnyPendingRequestsForRemoteAccess;
-(void)processAppDataModelRemove:(id)arg0 message:(id)arg1 ;
-(void)processAppDataModelUpdate:(id)arg0 message:(id)arg1 ;
-(void)processCloudZoneModelAdd:(id)arg0 message:(id)arg1 ;
-(void)processCloudZoneModelRemoved:(id)arg0 message:(id)arg1 ;
-(void)processHomeManagerModelUpdate:(id)arg0 message:(id)arg1 ;
-(void)processHomeModelAdd:(id)arg0 message:(id)arg1 ;
-(void)processHomeModelRemoved:(id)arg0 message:(id)arg1 ;
-(void)processMetadataModel:(id)arg0 message:(id)arg1 ;
-(void)processRequestToUpdateHomeInvitation:(id)arg0 invitationState:(NSInteger)arg1 homeUUID:(id)arg2 authStatus:(id)arg3 messageName:(id)arg4 message:(id)arg5 ;
-(void)processSharedHomeModelRemoved:(id)arg0 message:(id)arg1 ;
-(void)processSharedHomeModelUpdate:(id)arg0 message:(id)arg1 ;
-(void)processTransactionsFromHomeDataSync:(id)arg0 accessories:(id)arg1 version:(NSInteger)arg2 completion:(id)arg3 ;
-(void)pushMetadataToAllWatches;
-(void)pushMetadataToCloud;
-(void)refreshHomeDataAndArchiveLocallyWithCompletionHandler:(id)arg0 ;
-(void)registerForMediaPlaybackStateChangeNotifications:(BOOL)arg0 ;
-(void)registerForSignificantTimeChangeNotification;
-(void)registerQueriableAwdMetrics;
-(void)registerStateHandler;
-(void)reloadHomeDataFromLocalStore:(BOOL)arg0 ;
-(void)removeAccessorySetupMetricDispatcherForAccessoryUUID:(id)arg0 ;
-(void)removeFromUnassociatedPeers:(id)arg0 home:(id)arg1 ;
-(void)removeHome:(id)arg0 ;
-(void)removeHomeWalletKeysExcludingSerialNumbers:(id)arg0 ;
-(void)reprocessUserManagementModels;
-(void)saveAccessAllowedWhenLockedSettingToLocalDisk;
-(void)saveToPersistentStoreForHH2MigrationWithCompletionHandler:(id)arg0 ;
-(void)saveWithReason:(id)arg0 information:(id)arg1 postSyncNotification:(BOOL)arg2 ;
-(void)saveWithReason:(id)arg0 information:(id)arg1 saveOptions:(NSUInteger)arg2 ;
-(void)saveWithRequest:(id)arg0 ;
-(void)schedulePostFetch;
-(void)scheduleRemovalForHome:(id)arg0 message:(id)arg1 options:(id)arg2 ;
-(void)sendFragmentedMessageForData:(id)arg0 objectUUID:(id)arg1 withMessageName:(id)arg2 toUser:(id)arg3 destination:(id)arg4 completionHandler:(id)arg5 ;
-(void)sendHomeDataToAllWatchesWithCompletion:(id)arg0 ;
-(void)sendPairingIdentity:(id)arg0 includePrivateKey:(BOOL)arg1 requestMessage:(id)arg2 ;
-(void)sendSecureMessage:(id)arg0 target:(id)arg1 userID:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5 ;
-(void)sendUnsecureMessage:(id)arg0 target:(id)arg1 userID:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4 ;
-(void)sendUserAdded:(id)arg0 destination:(id)arg1 toHome:(id)arg2 ;
-(void)sendUserRemoved:(id)arg0 fromHome:(id)arg1 pairingUsername:(id)arg2 pushToCloud:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)setMediaAccessoriesPresent:(BOOL)arg0 homePodsPresent:(BOOL)arg1 inOwnedHomes:(BOOL)arg2 ;
-(void)setNeedsOnboardingCompleteWitHomeUUID:(id)arg0 accessoryUUID:(id)arg1 completion:(id)arg2 ;
-(void)setupSession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)startLocalTransport;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stopLocalTransport;
-(void)syncWalletKeyPassSerialNumbersToWatch:(id)arg0 withCompletion:(id)arg1 ;
-(void)teardownRemoteAccessForHome:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateAccountAvailabilityChanged:(id)arg0 ;
-(void)updateCurrentUserEligibleForOwnerToAutoMigration;
-(void)updateHomeKitInUsePreferences;
-(void)updateUserPushCachedForUser:(id)arg0 device:(id)arg1 ;
-(void)uploadHomeConfigToCloud:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)uploadHomeManagerToCloudWithDelay:(CGFloat)arg0 ;
-(void)uploadHomeToCloudZone:(id)arg0 withDelay:(CGFloat)arg1 ;
-(void)userManagementOperationDidFinish:(id)arg0 ;
-(void)verifyCurrentDeviceResidentStatus;
-(void)verifyHomeDataFromCloud:(id)arg0 ;
-(void)waitForHH2SentinelZoneToBeRemoved;
-(void)writeAssistantCurrentHome:(id)arg0 ;


@end


#endif