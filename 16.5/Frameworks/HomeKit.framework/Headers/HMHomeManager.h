// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMHOMEMANAGER_H
#define HMHOMEMANAGER_H

@class NSMutableArray, NSCountedSet, HMFTimer, HMELastEventStore, NSUUID, NSString, NSNumber, NSError, NSArray, NSOperationQueue;
@protocol HMAccessorySettingsControllerFactory, HMAccessorySettingsControllerDataSource, HMAccessoryInfoDataProviderFactory, HMAccessoryInfoDataProviderDataSource, HMAccessorySettingsDataSourceDataSource, HMAccessorySettingsMessengerFactory, HMAccessorySettingsMetricsDispatcherFactory, HMAccessorySettingsDataSourceFactory, HMCoreAnalyticsMetricEventDispatcherFactory, HMFLogging, HMFTimerDelegate, HMUserActionPredictionProviderDataSource, HMFMessageReceiver, HMMutableApplicationData, HMApplicationData, HMDarwinNotificationProvider, HMHomeManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessorySettingsMetricsDispatcher.h"
#import "HMAccessorySetupCoordinator.h"
#import "HMApplicationData.h"
#import "HMCacheManager.h"
#import "HMHomeManagerConfiguration.h"
#import "_HMContext.h"
#import "HMCoreAnalyticsMetricEventDispatcher.h"
#import "HMAccessory.h"
#import "HMHome.h"
#import "HMMutableArray.h"
#import "HMNetworkRouterFirewallRuleManager.h"
#import "HMMigrationBoost.h"
#import "HMUserActionPredictionProvider.h"
#import "HMSoftwareUpdateDocumentationManager.h"
#import "HMUserCloudShareManager.h"
#import "HMXPCEventRouterClient.h"

@interface HMHomeManager : NSObject <HMAccessorySettingsControllerFactory, HMAccessorySettingsControllerDataSource, HMAccessoryInfoDataProviderFactory, HMAccessoryInfoDataProviderDataSource, HMAccessorySettingsDataSourceDataSource, HMAccessorySettingsMessengerFactory, HMAccessorySettingsMetricsDispatcherFactory, HMAccessorySettingsDataSourceFactory, HMCoreAnalyticsMetricEventDispatcherFactory, HMFLogging, HMFTimerDelegate, HMUserActionPredictionProviderDataSource, HMFMessageReceiver, HMMutableApplicationData, HMApplicationData>

 {
    os_unfair_lock_s _lock;
    id *_pendingChangeSetupModeOperation;
    NSUInteger _pendingChangeSetupMode;
    NSMutableArray *_refreshRequests;
    NSCountedSet *_batchNotificationReasons;
    HMFTimer *_batchNotificationEndTimer;
    BOOL _assistantIdentifierChanged;
    HMELastEventStore *_lastEventStore;
    BOOL _eventStoreStarted;
}


@property (readonly, getter=isAccessAllowedWhenLocked) BOOL accessAllowedWhenLocked; // ivar: _accessAllowedWhenLocked
@property (retain) HMAccessorySettingsMetricsDispatcher *accessorySettingsMetricsDispatcher; // ivar: _accessorySettingsMetricsDispatcher
@property (readonly) HMAccessorySetupCoordinator *accessorySetupCoordinator; // ivar: _accessorySetupCoordinator
@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (readonly) NSUInteger authorizationStatus; // ivar: _authorizationStatus
@property (retain) HMCacheManager *cacheManager; // ivar: _cacheManager
@property (readonly) HMHomeManagerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (retain) HMCoreAnalyticsMetricEventDispatcher *coreAnalyticsMetricEventDispatcher; // ivar: _coreAnalyticsMetricEventDispatcher
@property (readonly) HMAccessory *currentAccessory;
@property (readonly, nonatomic) HMHome *currentHome; // ivar: _currentHome
@property (readonly, nonatomic) HMMutableArray *currentHomes; // ivar: _currentHomes
@property (nonatomic, getter=isDaemonRunningWithROARFramework) BOOL daemonRunningWithROARFramework; // ivar: _daemonRunningWithROARFramework
@property (readonly) NSObject<HMDarwinNotificationProvider> *darwinNotificationProvider; // ivar: _darwinNotificationProvider
@property (readonly, nonatomic, getter=isDataSyncInProgress) BOOL dataSyncInProgress;
@property (readonly, nonatomic) NSUInteger dataSyncState; // ivar: _dataSyncState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMHomeManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didUpdateHomes; // ivar: _didUpdateHomes
@property (retain, nonatomic) NSNumber *fileGenerationCounter; // ivar: _fileGenerationCounter
@property (retain, nonatomic) NSNumber *fileMetadataVersion; // ivar: _fileMetadataVersion
@property (readonly, nonatomic) HMNetworkRouterFirewallRuleManager *firewallRuleManager; // ivar: _firewallRuleManager
@property (nonatomic) BOOL frameworkMergeComplete; // ivar: _frameworkMergeComplete
@property (nonatomic) NSUInteger generationCounter; // ivar: _generationCounter
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHH2MigrationAvailable) BOOL hh2MigrationAvailable; // ivar: _hh2MigrationAvailable
@property (readonly) NSError *hh2MigrationFailedError; // ivar: _hh2MigrationFailedError
@property (readonly, getter=isHH2MigrationInProgress) BOOL hh2MigrationInProgress; // ivar: _hh2MigrationInProgress
@property (readonly) NSString *homeCacheDir;
@property (retain) NSString *homeDataCache; // ivar: _homeDataCache
@property (retain, nonatomic) HMMutableArray *homeInvitations; // ivar: _homeInvitations
@property (nonatomic) CGFloat homeManagerCreationTimeStamp; // ivar: _homeManagerCreationTimeStamp
@property (readonly) BOOL homeSafetySecurityEnabled; // ivar: _homeSafetySecurityEnabled
@property (readonly, copy, nonatomic) NSArray *homes;
@property (readonly, copy, nonatomic) NSArray *incomingHomeInvitations;
@property (readonly) HMELastEventStore *lastEventStore;
@property (readonly, copy) NSUUID *lastRemovedCurrentAccessoryUUID; // ivar: _lastRemovedCurrentAccessoryUUID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain) NSString *metadataCache; // ivar: _metadataCache
@property (nonatomic) NSUInteger metadataVersion; // ivar: _metadataVersion
@property (retain, nonatomic) HMMigrationBoost *migrationBoost; // ivar: _migrationBoost
@property (readonly) NSInteger multiUserStatus; // ivar: _multiUserStatus
@property (readonly, nonatomic, getter=hasOptedToHH2) BOOL optedToHH2; // ivar: _optedToHH2
@property (readonly) NSUInteger options; // ivar: _options
@property (nonatomic, getter=isThisOSCapableOfRunningROAR) BOOL osCapableOfRunningROAR; // ivar: _osCapableOfRunningROAR
@property (retain) HMUserActionPredictionProvider *predictionProvider; // ivar: _predictionProvider
@property (retain, nonatomic) HMHome *primaryHome; // ivar: _primaryHome
@property (readonly, getter=isResidentEnabledForThisDevice) BOOL residentEnabledForThisDevice; // ivar: _residentEnabledForThisDevice
@property (readonly) NSUInteger residentProvisioningStatus; // ivar: _residentProvisioningStatus
@property (readonly, nonatomic) NSUInteger serverGenerationCounter;
@property (nonatomic) int serverGenerationCounterToken; // ivar: _serverGenerationCounterToken
@property (retain, nonatomic) NSArray *sharedHomeUUIDsNotYetMigrated; // ivar: _sharedHomeUUIDsNotYetMigrated
@property (retain, nonatomic) HMSoftwareUpdateDocumentationManager *softwareUpdateDocumentationManager; // ivar: _softwareUpdateDocumentationManager
@property (readonly) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSOperationQueue *syncOperationQueue; // ivar: _syncOperationQueue
@property (readonly, getter=isThisDeviceResidentCapable) BOOL thisDeviceResidentCapable; // ivar: _thisDeviceResidentCapable
@property (readonly) id *timerFactory; // ivar: _timerFactory
@property (readonly) HMUserCloudShareManager *userCloudShareManager; // ivar: _userCloudShareManager
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic, getter=isViewServiceActive) BOOL viewServiceActive; // ivar: _viewServiceActive
@property (retain, nonatomic) HMXPCEventRouterClient *xpcEventRouterClient; // ivar: _xpcEventRouterClient


+(BOOL)dataSyncInProgressFromDataSyncState:(NSUInteger)arg0 ;
+(id)instanceTracker;
+(id)logCategory;
+(id)sharedEventStore;
+(id)unconfigureQueue;
+(void)fetchSetupModeWithCompletion:(id)arg0 ;
-(BOOL)_isValidCachedHomeConfiguration:(id)arg0 ;
-(BOOL)_shouldWeMergeLatestHomeGraphFromDaemonResponse:(id)arg0 ;
-(BOOL)accessoryInfoDataProvider:(id)arg0 transformHomeUUID:(id)arg1 accessoryUUID:(id)arg2 toClientHomeIdentifier:(*id)arg3 clientAccessoryIdentifier:(*id)arg4 ;
-(BOOL)accessorySettingsDataSource:(id)arg0 transformHomeUUID:(id)arg1 accessoryUUID:(id)arg2 toClientHomeIdentifier:(*id)arg3 clientAccessoryIdentifier:(*id)arg4 ;
-(BOOL)accessorySettingsDataSource:(id)arg0 transformHomeUUID:(id)arg1 mediaSystemUUID:(id)arg2 toClientHomeIdentifier:(*id)arg3 clientMediaSystemIdentifier:(*id)arg4 ;
-(BOOL)deviceUnlockedSinceBootForUserActionPredictionProvider:(id)arg0 ;
-(BOOL)isHomeRemovedPermanently:(id)arg0 ;
-(BOOL)needsOSUpdateToRunHH2;
-(BOOL)removeAllHomeKitPairingIdentities;
-(NSUInteger)_dataSyncStateFromPayload:(id)arg0 ;
-(id)_beginActiveAssertionWithReason:(id)arg0 ;
-(id)_homeWithUUID:(id)arg0 ;
-(id)_loadHH2MigrationInfoFromHMCache:(id)arg0 ;
-(id)_privateDelegate;
-(id)_refreshBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(id)accessoryInfoDataProvider:(id)arg0 homeWithHomeIdentifier:(id)arg1 ;
-(id)accessorySettingsController:(id)arg0 homeWithHomeIdentifier:(id)arg1 ;
-(id)accessorySettingsDataSource:(id)arg0 homeWithHomeIdentifier:(id)arg1 ;
-(id)createAccessoryInfoDataProvider;
-(id)createAccessorySettingsController;
-(id)createAccessorySettingsDataSource;
-(id)createAccessorySettingsMessengerWithHomeUUID:(id)arg0 ;
-(id)createAccessorySettingsMetricsDispatcherWithCoreAnalyticsMetricDispatcher:(id)arg0 ;
-(id)createCoreAnalyticsMetricEventDispatcher;
-(id)createMultiuserSettingsMessenger;
-(id)eventRouter;
-(id)homeWithUniqueIdentifier:(id)arg0 ;
-(id)homesForUserActionPredictionProvider:(id)arg0 ;
-(id)init;
-(id)initWithHomeMangerConfiguration:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
// -(id)initWithUUID:(id)arg0 homeMangerConfiguration:(id)arg1 context:(id)arg2 xpcEventRouterClient:(id)arg3 lastEventStore:(id)arg4 timerFactory:(id)arg5 darwinNotificationProvider:(unk)arg6  ;
// -(id)initWithUUID:(id)arg0 homeMangerConfiguration:(id)arg1 context:(id)arg2 xpcEventRouterClient:(id)arg3 timerFactory:(id)arg4 darwinNotificationProvider:(unk)arg5  ;
-(id)logIdentifier;
-(void)__handleHomeManagerState:(id)arg0 ;
-(void)__mergeCurrentHomesWithNewHomes:(id)arg0 newPrimaryHome:(id)arg1 newCurrentHome:(id)arg2 newInvitations:(id)arg3 newAppData:(id)arg4 refreshRequested:(BOOL)arg5 ;
-(void)__preconfigure;
-(void)__processSyncResponse:(id)arg0 refreshRequested:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)__removeAccountWithHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)__removeAccountWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)__resolveAccountHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)__start;
-(void)_acceptInvitation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_acceptInvitation:(id)arg0 presenceAuthStatus:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_checkName:(id)arg0 inHome:(id)arg1 withValidationOptions:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_declineInvitation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_determineCacheFiles;
-(void)_dumpCaches:(id)arg0 metadata:(id)arg1 ;
-(void)_enableUARPPacketCapture:(BOOL)arg0 capturePath:(id)arg1 completionHandler:(id)arg2 ;
-(void)_endActiveAssertion:(id)arg0 ;
-(void)_fetchHomeConfigurationWithRefreshRequested:(BOOL)arg0 ;
-(void)_forceBatchNotificationsEnd;
-(void)_generateFirewallRuleTLVsFromNetworkDeclarations:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)arg0 ;
-(void)_handleCurrentHomeChangedNotification:(id)arg0 ;
-(void)_handleDevicesUpdatedMessage:(id)arg0 ;
-(void)_handleHH2ManualMigrationEnabledStateWithPayload:(id)arg0 ;
-(void)_handleHH2MigrationProgressStateWithPayload:(id)arg0 ;
-(void)_handleHH2StateWithPayload:(id)arg0 ;
-(void)_handleHomeAddedNotification:(id)arg0 ;
-(void)_handleHomeRemovedNotification:(id)arg0 ;
-(void)_handleHomeSafetySecurityEnabledStateWithPayload:(id)arg0 ;
-(void)_handleHomesDidUpdateNotification:(id)arg0 ;
-(void)_handleMetadataUpdatedNotification:(id)arg0 ;
-(void)_handleQueryHomeKitUsageStateResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleResidentDeviceCapableUpdatedNotification:(id)arg0 ;
-(void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)arg0 ;
-(void)_handleResidentProvisioningStatusChanged:(id)arg0 ;
-(void)_handleRuntimeStateUpdateNotification:(id)arg0 ;
-(void)_handleRuntimeStateUpdatePayload:(id)arg0 reason:(id)arg1 ;
-(void)_handleSetupModeMessageResponse:(id)arg0 error:(id)arg1 ;
-(void)_handleStatusUpdated:(id)arg0 ;
-(void)_handleUserInvitationsUpdatedNotification:(id)arg0 ;
-(void)_ignoreInvitation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_mergeCurrentAppDataWithNewAppData:(id)arg0 ;
-(void)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg0 ;
-(void)_mergeCurrentHomesWithNewHomes:(id)arg0 newPrimaryHome:(id)arg1 newCurrentHome:(id)arg2 newInvitations:(id)arg3 newAppData:(id)arg4 refreshRequested:(BOOL)arg5 ;
-(void)_notifyAccessAllowedWhenLockedUpdated:(BOOL)arg0 ;
-(void)_notifyDelegateOfAppDataUpdate;
-(void)_notifyResidentProvisioningStatus:(NSUInteger)arg0 ;
-(void)_pingDeviceWithDestination:(id)arg0 monitor:(BOOL)arg1 secure:(BOOL)arg2 restrictToLocalNetwork:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_pingDeviceWithUUID:(id)arg0 monitor:(BOOL)arg1 secure:(BOOL)arg2 restrictToLocalNetwork:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_processHomeAddedPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)_processHomeConfigurationRequest:(id)arg0 refreshRequested:(BOOL)arg1 ;
-(void)_queryHomeKitUsageStateWithCompletionHandler:(id)arg0 ;
-(void)_queryiCloudSwitchStateWithCompletionHandler:(id)arg0 ;
-(void)_recomputeAssistantIdentifiers;
-(void)_registerNotificationHandlers;
-(void)_removeCacheFiles:(BOOL)arg0 ;
-(void)_removeHome:(id)arg0 completionHandler:(id)arg1 ;
-(void)_reportJunkInvitation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestRefresh;
-(void)_requestRuntimeUpdate:(id)arg0 ;
-(void)_saveMigrationProgressToHMCache:(BOOL)arg0 error:(id)arg1 ;
-(void)_shouldDisplayiCloudSwitchWithCompletionHandler:(id)arg0 ;
// -(void)_testHH2MigrationWithCompletionHandler:(id)arg0 payload:(unk)arg1  ;
-(void)_updateAppData:(id)arg0 ;
-(void)_updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateCurrentHome:(id)arg0 ;
-(void)_updateDataSyncState:(id)arg0 ;
-(void)_updateHomes:(id)arg0 ;
-(void)_updateInvitation:(id)arg0 presenceAuthStatus:(NSUInteger)arg1 invitationState:(NSInteger)arg2 invitationOptions:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)_updatePrimaryHome:(id)arg0 notifyDelegate:(BOOL)arg1 ;
-(void)_updateResidentEnabledForThisDevice:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_updateStatusWithPayload:(id)arg0 ;
-(void)_updateStatusWithPayload:(id)arg0 sourceIsFetch:(BOOL)arg1 ;
-(void)_updateiCloudSwitchState:(BOOL)arg0 completionHandler:(id)arg1 ;
// -(void)_upgradeToHH2WithCompletionHandler:(id)arg0 payload:(unk)arg1  ;
-(void)_writeCaches:(id)arg0 homeData:(BOOL)arg1 metadata:(BOOL)arg2 ;
-(void)addAndSetupAccessoriesWithPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)addHomeWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)attemptHH2AutoMigrationWithCompletionHandler:(id)arg0 ;
-(void)checkAndLogMultipleInstanceWarning;
-(void)checkName:(id)arg0 inHome:(id)arg1 withValidationOptions:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)configureAccessorySettingsMetricsDispatcherWithFactory:(id)arg0 ;
-(void)configureCoreAnalyticsMetricEventDispatcherWithFactory:(id)arg0 ;
-(void)createAutoAddWalletKeySupressionAssertionWithIncomingInvitation:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)dumpCloudDatabase:(BOOL)arg0 localDatabase:(BOOL)arg1 workingDatabase:(BOOL)arg2 fakeCloudModels:(BOOL)arg3 completion:(id)arg4 ;
-(void)dumpState:(id)arg0 payload:(id)arg1 completion:(id)arg2 ;
-(void)enableUARPPacketCapture:(BOOL)arg0 capturePath:(id)arg1 completionHandler:(id)arg2 ;
-(void)eraseHomeDataAndDeleteMetadata:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)eraseHomeDataWithCompletionHandler:(id)arg0 ;
-(void)fetchDevicesWithCompletionHandler:(id)arg0 ;
-(void)fetchEventCounters:(id)arg0 ;
-(void)generateFirewallRuleTLVsFromNetworkDeclarations:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleDaemonReconnectedNotification:(id)arg0 ;
-(void)handleInstanceCreated;
-(void)handleInstanceDestroyed;
-(void)launchHomeUIServiceToResumeSetupWithUserInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)notifyDelegateOfBatchNotificationsEndWithReason:(id)arg0 ;
-(void)notifyDelegateOfBatchNotificationsStartWithReason:(id)arg0 ;
-(void)notifyResidentCapableUpdated:(BOOL)arg0 ;
-(void)notifyResidentEnabledUpdated:(BOOL)arg0 ;
-(void)pairingIdentityForAccessoryWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)prepareForDiagnosticExtensionWithCompletion:(id)arg0 ;
-(void)queryHomeKitUsageStateWithCompletionHandler:(id)arg0 ;
-(void)queryMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryVersionWithCompletionHandler:(id)arg0 ;
-(void)queryiCloudSwitchStateWithCompletionHandler:(id)arg0 ;
-(void)removeHome:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestLogEventDailySchedulerStatusWithCompletion:(id)arg0 ;
-(void)resetEventCounters:(id)arg0 ;
-(void)sendSetupModeMessage:(NSUInteger)arg0 ;
-(void)setHasOptedToHH2:(BOOL)arg0 ;
-(void)setIsHH2MigrationAvailable:(BOOL)arg0 ;
-(void)setMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)setSetupMode:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)shouldDisplayiCloudSwitchWithCompletionHandler:(id)arg0 ;
-(void)submitLogEventDailySchedulerRegisteredBlocksWithCompletion:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)unconfigure;
-(void)updateAccessAllowedWhenLocked:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updatePrimaryHome:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateResidentEnabledForThisDevice:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateiCloudSwitchState:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)upgradeToROARWithCompletionHandler:(id)arg0 ;


@end


#endif