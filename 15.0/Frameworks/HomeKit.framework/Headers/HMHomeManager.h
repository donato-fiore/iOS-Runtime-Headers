// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHOMEMANAGER_H
#define HMHOMEMANAGER_H

@class HMFUnfairLock, NSOperationQueue, NSMutableArray, NSCountedSet, HMFTimer, HMELastEventStore, NSSet, NSUUID, NSString, NSNumber, NSArray;
@protocol HMAccessorySettingsControllerFactory, HMAccessorySettingsControllerDataSource, HMAccessorySettingsDataSourceDataSource, HMAccessorySettingsMessengerFactory, HMAccessorySettingsMetricsDispatcherFactory, HMAccessorySettingsDataSourceFactory, HMCoreAnalyticsMetricEventDispatcherFactory, HMFLogging, HMFTimerDelegate, HMUserActionPredictionProviderDataSource, HMFMessageReceiver, HMMutableApplicationData, HMApplicationData, HMDarwinNotificationProvider, HMHomeManagerDelegate, OS_dispatch_queue;

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
#import "HMUserActionPredictionProvider.h"
#import "HMUserCloudShareManager.h"
#import "HMXPCEventRouterClient.h"

@interface HMHomeManager : NSObject <HMAccessorySettingsControllerFactory, HMAccessorySettingsControllerDataSource, HMAccessorySettingsDataSourceDataSource, HMAccessorySettingsMessengerFactory, HMAccessorySettingsMetricsDispatcherFactory, HMAccessorySettingsDataSourceFactory, HMCoreAnalyticsMetricEventDispatcherFactory, HMFLogging, HMFTimerDelegate, HMUserActionPredictionProviderDataSource, HMFMessageReceiver, HMMutableApplicationData, HMApplicationData>

 {
    HMFUnfairLock *_lock;
    NSOperationQueue *_syncOperationQueue;
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
@property (retain, nonatomic) NSSet *addAccessoryRequests; // ivar: _addAccessoryRequests
@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (readonly) NSUInteger authorizationStatus; // ivar: _authorizationStatus
@property (retain) HMCacheManager *cacheManager; // ivar: _cacheManager
@property (readonly) HMHomeManagerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (retain) HMCoreAnalyticsMetricEventDispatcher *coreAnalyticsMetricEventDispatcher; // ivar: _coreAnalyticsMetricEventDispatcher
@property (readonly) HMAccessory *currentAccessory;
@property (readonly, nonatomic) HMHome *currentHome; // ivar: _currentHome
@property (retain, nonatomic) HMMutableArray *currentHomes; // ivar: _currentHomes
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
@property (weak, nonatomic) NSObject<HMHomeManagerDelegate> *delegate; // ivar: _delegate
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
@property (readonly) NSString *homeCacheDir;
@property (retain) NSString *homeDataCache; // ivar: _homeDataCache
@property (retain, nonatomic) HMMutableArray *homeInvitations; // ivar: _homeInvitations
@property (readonly, copy, nonatomic) NSArray *homes;
@property (readonly, copy, nonatomic) NSArray *incomingHomeInvitations;
@property (readonly, copy) NSUUID *lastRemovedCurrentAccessoryUUID; // ivar: _lastRemovedCurrentAccessoryUUID
@property (nonatomic) BOOL mediaAccessoryControlRequested; // ivar: _mediaAccessoryControlRequested
@property (retain, nonatomic) NSOperationQueue *mergeOperationQueue; // ivar: _mergeOperationQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain) NSString *metadataCache; // ivar: _metadataCache
@property (nonatomic) NSUInteger metadataVersion; // ivar: _metadataVersion
@property (readonly) NSInteger multiUserStatus; // ivar: _multiUserStatus
@property (readonly) NSUInteger options; // ivar: _options
@property (retain) HMUserActionPredictionProvider *predictionProvider; // ivar: _predictionProvider
@property (retain, nonatomic) HMHome *primaryHome; // ivar: _primaryHome
@property (readonly, getter=isResidentEnabledForThisDevice) BOOL residentEnabledForThisDevice; // ivar: _residentEnabledForThisDevice
@property (readonly) NSUInteger residentProvisioningStatus; // ivar: _residentProvisioningStatus
@property (readonly, nonatomic) NSUInteger serverGenerationCounter;
@property (nonatomic) int serverGenerationCounterToken; // ivar: _serverGenerationCounterToken
@property (readonly) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, getter=isThisDeviceResidentCapable) BOOL thisDeviceResidentCapable; // ivar: _thisDeviceResidentCapable
@property (readonly) HMUserCloudShareManager *userCloudShareManager; // ivar: _userCloudShareManager
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic, getter=isViewServiceActive) BOOL viewServiceActive; // ivar: _viewServiceActive
@property (retain, nonatomic) HMXPCEventRouterClient *xpcEventRouterClient; // ivar: _xpcEventRouterClient


+(BOOL)dataSyncInProgressFromDataSyncState:(NSUInteger)arg0 ;
+(id)instanceTracker;
+(id)logCategory;
+(id)trackerLock;
+(id)unconfigureQueue;
-(BOOL)_isValidCachedHomeConfiguration:(id)arg0 ;
-(BOOL)accessorySettingsDataSource:(id)arg0 transformHomeUUID:(id)arg1 accessoryUUID:(id)arg2 toClientHomeIdentifier:(*id)arg3 clientAccessoryIdentifier:(*id)arg4 ;
-(id)_addAccessoryRequestsFromArray:(id)arg0 ;
-(id)_beginActiveAssertionWithReason:(id)arg0 ;
-(id)_homeWithUUID:(id)arg0 ;
-(id)_privateDelegate;
-(id)_refreshBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(id)accessorySettingsController:(id)arg0 homeWithHomeIdentifier:(id)arg1 ;
-(id)accessorySettingsDataSource:(id)arg0 homeWithHomeIdentifier:(id)arg1 ;
-(id)createAccessorySettingsController;
-(id)createAccessorySettingsDataSource;
-(id)createAccessorySettingsMessengerWithHomeUUID:(id)arg0 ;
-(id)createAccessorySettingsMetricsDispatcherWithCoreAnalyticsMetricDispatcher:(id)arg0 ;
-(id)createCoreAnalyticsMetricEventDispatcher;
-(id)createMultiuserSettingsMessenger;
-(id)eventRouter;
-(id)homeWithUniqueIdentifier:(id)arg0 ;
-(id)homesForUserActionPredictionProviderDataSource:(id)arg0 ;
-(id)init;
-(id)initWithHomeMangerConfiguration:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)initWithUUID:(id)arg0 homeMangerConfiguration:(id)arg1 context:(id)arg2 xpcEventRouterClient:(id)arg3 darwinNotificationProvider:(id)arg4 ;
-(id)logIdentifier;
-(void)__handleHomeManagerState:(id)arg0 ;
-(void)__preconfigure;
-(void)__processSyncResponse:(id)arg0 refreshRequested:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)__removeAccountWithHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)__removeAccountWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)__resolveAccountHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)__start;
-(void)_acceptInvitation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_acceptInvitation:(id)arg0 presenceAuthStatus:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_addHomeWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_checkName:(id)arg0 inHome:(id)arg1 withValidationOptions:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_declineInvitation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_deleteDuetEvents:(id)arg0 completion:(id)arg1 ;
-(void)_determineCacheFiles;
-(void)_dumpCaches:(id)arg0 metadata:(id)arg1 ;
-(void)_enableUARPPacketCapture:(BOOL)arg0 capturePath:(id)arg1 completionHandler:(id)arg2 ;
-(void)_endActiveAssertion:(id)arg0 ;
-(void)_eraseHomeDataAndDeleteMetadata:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_fetchHomeConfigurationWithRefreshRequested:(BOOL)arg0 ;
-(void)_finishAddAccessoryRequest:(id)arg0 withSetupCompletedInfo:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)_forceBatchNotificationsEnd;
-(void)_generateFirewallRuleTLVsFromNetworkDeclarations:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)arg0 ;
-(void)_handleAccessorySetupCompletionWithResponsePayload:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_handleCheckForAddAccessoryRequests;
-(void)_handleCurrentHomeChangedNotification:(id)arg0 ;
-(void)_handleHomeAddedNotification:(id)arg0 ;
-(void)_handleHomeRemovedNotification:(id)arg0 ;
-(void)_handleHomesDidUpdateNotification:(id)arg0 ;
-(void)_handleMetadataUpdatedNotification:(id)arg0 ;
-(void)_handlePrimaryChangedNotification:(id)arg0 ;
-(void)_handleQueryHomeKitUsageStateResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleResidentDeviceCapableUpdatedNotification:(id)arg0 ;
-(void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)arg0 ;
-(void)_handleResidentProvisioningStatusChanged:(id)arg0 ;
-(void)_handleRuntimeStateUpdateNotification:(id)arg0 ;
-(void)_handleRuntimeStateUpdatePayload:(id)arg0 reason:(id)arg1 ;
-(void)_handleStatusUpdated:(id)arg0 ;
-(void)_handleUserInvitationsUpdatedNotification:(id)arg0 ;
-(void)_mergeCurrentAppDataWithNewAppData:(id)arg0 operations:(id)arg1 ;
-(void)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg0 operations:(id)arg1 ;
-(void)_mergeCurrentHomesWithNewHomes:(id)arg0 newPrimaryHome:(id)arg1 newCurrentHome:(id)arg2 newInvitations:(id)arg3 newAppData:(id)arg4 refreshRequested:(BOOL)arg5 ;
-(void)_notifyAccessAllowedWhenLockedUpdated:(BOOL)arg0 ;
-(void)_notifyDelegateOfAppDataUpdate;
-(void)_notifyPendingAddRequests:(id)arg0 ;
-(void)_notifyResidentProvisioningStatus:(NSUInteger)arg0 ;
-(void)_pairingIdentityForAccessoryWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_pingDeviceWithDestination:(id)arg0 monitor:(BOOL)arg1 secure:(BOOL)arg2 restrictToLocalNetwork:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_pingDeviceWithUUID:(id)arg0 monitor:(BOOL)arg1 secure:(BOOL)arg2 restrictToLocalNetwork:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_processHomeConfigurationRequest:(id)arg0 refreshRequested:(BOOL)arg1 ;
-(void)_queryHomeKitUsageStateWithCompletionHandler:(id)arg0 ;
-(void)_queryiCloudSwitchStateWithCompletionHandler:(id)arg0 ;
-(void)_recomputeAssistantIdentifiers;
-(void)_registerForMediaAccessoryControl:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_registerNotificationHandlers;
-(void)_removeCacheFiles:(BOOL)arg0 ;
-(void)_removeHome:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestRefresh;
-(void)_requestRuntimeUpdate:(id)arg0 ;
-(void)_shouldDisplayiCloudSwitchWithCompletionHandler:(id)arg0 ;
-(void)_updateAccessAllowedWhenLocked:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_updateAddAccessoryRequestsAndNotify:(id)arg0 ;
-(void)_updateAppData:(id)arg0 ;
-(void)_updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateCurrentHome:(id)arg0 ;
-(void)_updateDataSyncState:(id)arg0 ;
-(void)_updateHomes:(id)arg0 ;
-(void)_updateInvitation:(id)arg0 presenceAuthStatus:(NSUInteger)arg1 invitationState:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_updatePrimaryHome:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateResidentEnabledForThisDevice:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_updateStatusWithPayload:(id)arg0 ;
-(void)_updateStatusWithPayload:(id)arg0 sourceIsFetch:(BOOL)arg1 ;
-(void)_updateiCloudSwitchState:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_writeCaches:(id)arg0 homeData:(BOOL)arg1 metadata:(BOOL)arg2 ;
-(void)addAndSetUpStagedCHIPAccessoryPairingWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)addAndSetupAccessoriesWithPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)addHomeWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)checkAndLogMultipleInstanceWarning;
-(void)checkName:(id)arg0 inHome:(id)arg1 withValidationOptions:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)configureAccessorySettingsMetricsDispatcherWithFactory:(id)arg0 ;
-(void)configureCoreAnalyticsMetricEventDispatcherWithFactory:(id)arg0 ;
-(void)dealloc;
-(void)deleteDuetEvents:(id)arg0 completion:(id)arg1 ;
-(void)dumpState:(id)arg0 payload:(id)arg1 completion:(id)arg2 ;
-(void)enableUARPPacketCapture:(BOOL)arg0 capturePath:(id)arg1 completionHandler:(id)arg2 ;
-(void)eraseHomeDataAndDeleteMetadata:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)eraseHomeDataWithCompletionHandler:(id)arg0 ;
-(void)fetchEventCounters:(id)arg0 ;
-(void)finishAddAccessoryRequest:(id)arg0 withSetupCompletedInfo:(id)arg1 error:(id)arg2 completionHandler:(id)arg3 ;
-(void)generateFirewallRuleTLVsFromNetworkDeclarations:(id)arg0 completionHandler:(id)arg1 ;
-(void)instanceCreated;
-(void)instanceDestroyed;
-(void)launchHomeUIServiceToResumeSetupWithUserInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)launchHomeUIServiceWithSetupAccessoryDescription:(id)arg0 completionHandler:(id)arg1 ;
-(void)notifyDelegateOfBatchNotificationsEndWithReason:(id)arg0 ;
-(void)notifyDelegateOfBatchNotificationsStartWithReason:(id)arg0 ;
-(void)notifyResidentCapableUpdated:(BOOL)arg0 ;
-(void)notifyResidentEnabledUpdated:(BOOL)arg0 ;
-(void)pairingIdentityForAccessoryWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryHomeKitUsageStateWithCompletionHandler:(id)arg0 ;
-(void)queryMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryVersionWithCompletionHandler:(id)arg0 ;
-(void)queryiCloudSwitchStateWithCompletionHandler:(id)arg0 ;
-(void)registerForMediaAccessoryControl:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)removeHome:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestLogEventDailySchedulerStatusWithCompletion:(id)arg0 ;
-(void)resetEventCounters:(id)arg0 ;
-(void)setMetadata:(id)arg0 completionHandler:(id)arg1 ;
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