// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDAEMON_H
#define HDDAEMON_H

@class _HKBehavior, NSString, NSMutableArray, NSHashTable, NSDictionary, HDXPCAlarmScheduler, NSURL, HKWristDetectionSettingManager;
@protocol HDTaskServerClassProvider, HDApplicationStateMonitorProvider, HDDiagnosticObject, LSApplicationWorkspaceObserverProtocol, HDHealthDaemon, OS_dispatch_queue, HDNanoAlertSuppressionService, HDDaemonTester, HDOntologyAssetProvider;

#import <Foundation/Foundation.h>

#import "HDBackgroundObservationServerExtensionManager.h"
#import "HDBackgroundTaskScheduler.h"
#import "HDContentProtectionManager.h"
#import "HDPeriodicActivity.h"
#import "HDPluginManager.h"
#import "HDProcessStateManager.h"
#import "HDProfileManager.h"
#import "HDPostInstallUpdateManager.h"
#import "HDAnalyticsSubmissionCoordinator.h"
#import "HDAutoBugCaptureReporter.h"
#import "HDCacheDeleteCoordinator.h"
#import "HDCloudSyncCoordinator.h"
#import "HDDaemonConnectionManager.h"
#import "HDDatabasePruningCoordinator.h"
#import "HDDevicePowerMonitor.h"
#import "HDMaintenanceWorkCoordinator.h"
#import "HDOntologyBackingStore.h"
#import "HDOntologyConfigurationProvider.h"
#import "HDPrimaryProfile.h"
#import "HDQueryManager.h"
#import "HDRemoteFeatureAvailabilityAssetManager.h"
#import "HDTaskServerRegistry.h"
#import "HDWorkoutPluginDaemonExtension.h"
#import "HDXPCEventManager.h"

@interface HDDaemon : NSObject <HDTaskServerClassProvider, HDApplicationStateMonitorProvider, HDDiagnosticObject, LSApplicationWorkspaceObserverProtocol, HDHealthDaemon>

 {
    _HKBehavior *_behavior;
    NSString *_healthDirectoryPath;
    NSObject<OS_dispatch_queue> *_queue;
    int _languageChangeNotifyToken;
    HDBackgroundObservationServerExtensionManager *_extensionManager;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDContentProtectionManager *_contentProtectionManager;
    HDPeriodicActivity *_periodicActivity;
    HDPluginManager *_pluginManager;
    HDProcessStateManager *_processStateManager;
    HDProfileManager *_profileManager;
    HDPostInstallUpdateManager *_postInstallUpdateManager;
    *MGNotificationTokenStruct _deviceNameChangesToken;
    os_unfair_lock_s _daemonReadyLock;
    NSMutableArray *_daemonReadyBlocks;
    NSInteger _numberOfDaemonReadyObserversBeforeReady;
    NSInteger _numberOfDaemonReadyObserversAfterReady;
    BOOL _daemonReady;
    atomic_flag _didStart;
    NSMutableArray *_daemonActivatedBlocks;
    os_unfair_lock_s _protectedResourceStoreProvidersLock;
    NSHashTable *_protectedResourceStoreProviders;
    NSDictionary *_daemonExtensionsByIdentifier;
    NSUInteger _healthdStateHandler;
}


@property (readonly, nonatomic) HDXPCAlarmScheduler *alarmScheduler; // ivar: _alarmScheduler
@property (retain, nonatomic) NSObject<HDNanoAlertSuppressionService> *alertSuppressionService; // ivar: _alertSuppressionService
@property (readonly, nonatomic) HDAnalyticsSubmissionCoordinator *analyticsSubmissionCoordinator; // ivar: _analyticsSubmissionCoordinator
@property (readonly, nonatomic) HDAutoBugCaptureReporter *autoBugCaptureReporter; // ivar: _autoBugCaptureReporter
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (readonly) _HKBehavior *behavior;
@property (readonly, nonatomic) HDCacheDeleteCoordinator *cacheDeleteCoordinator; // ivar: _cacheDeleteCoordinator
@property (readonly, nonatomic) HDCloudSyncCoordinator *cloudSyncCoordinator; // ivar: _cloudSyncCoordinator
@property (readonly, nonatomic) HDDaemonConnectionManager *connectionManager; // ivar: _connectionManager
@property (readonly, nonatomic) HDContentProtectionManager *contentProtectionManager;
@property (weak, nonatomic) NSObject<HDDaemonTester> *daemonTester; // ivar: _daemonTester
@property (readonly, nonatomic) HDDatabasePruningCoordinator *databasePruningCoordinator; // ivar: _databasePruningCoordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDDevicePowerMonitor *devicePowerMonitor; // ivar: _devicePowerMonitor
@property (readonly, nonatomic) HDBackgroundObservationServerExtensionManager *extensionManager;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *healthDirectoryPath;
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (readonly, nonatomic) HDMaintenanceWorkCoordinator *maintenanceWorkCoordinator; // ivar: _maintenanceWorkCoordinator
@property (readonly, copy) NSString *medicalIDDirectoryPath; // ivar: _medicalIDDirectoryPath
@property (readonly, nonatomic) NSObject<HDOntologyAssetProvider> *ontologyAssetProvider; // ivar: _ontologyAssetProvider
@property (readonly, nonatomic) HDOntologyBackingStore *ontologyBackingStore; // ivar: _ontologyBackingStore
@property (readonly, nonatomic) HDOntologyConfigurationProvider *ontologyConfigurationProvider; // ivar: _ontologyConfigurationProvider
@property (readonly) HDPluginManager *pluginManager;
@property (readonly, nonatomic) HDPostInstallUpdateManager *postInstallUpdateManager;
@property (readonly, nonatomic) HDPrimaryProfile *primaryProfile; // ivar: _primaryProfile
@property (readonly, nonatomic) HDProcessStateManager *processStateManager;
@property (readonly, nonatomic) HDProfileManager *profileManager;
@property (readonly, nonatomic) HDQueryManager *queryManager; // ivar: _queryManager
@property (readonly, nonatomic) HDRemoteFeatureAvailabilityAssetManager *remoteFeatureAvailabilityAssetManager; // ivar: _remoteFeatureAvailabilityAssetManager
@property (nonatomic) BOOL shouldEnqueueMaintenanceWork; // ivar: _shouldEnqueueMaintenanceWork
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDTaskServerRegistry *taskServerRegistry; // ivar: _taskServerRegistry
@property (readonly, nonatomic) HDWorkoutPluginDaemonExtension *workoutPluginExtension;
@property (readonly, nonatomic) HKWristDetectionSettingManager *wristDetectionSettingManager; // ivar: _wristDetectionSettingManager
@property (readonly, nonatomic) HDXPCEventManager *xpcEventManager; // ivar: _xpcEventManager


-(id)IDSServiceWithIdentifier:(id)arg0 ;
-(id)_newAnalyticsSubmissionCoordinator;
-(id)_newAutoBugCaptureReporter;
-(id)_newBackgroundTaskScheduler;
-(id)_newCacheDeleteCoordinator;
-(id)_newCloudSyncCoordinator;
-(id)_newConnectionManager;
-(id)_newContentProtectionManager;
-(id)_newDatabasePruningCoordinator;
-(id)_newMaintenanceWorkCoordinator;
-(id)_newOntologyAssetProvider;
-(id)_newPluginManager;
-(id)_newPrimaryProfile;
-(id)_newProcessStateManager;
-(id)_newProfileManager;
-(id)_newReferenceOntologyAsset;
-(id)_newTaskServerRegistry;
-(id)createApplicationStateMonitor;
-(id)createApplicationStateMonitorWithBundleIDs:(id)arg0 states:(unsigned int)arg1 elevatedPriority:(BOOL)arg2 ;
-(id)daemonExtensionWithIdentifier:(id)arg0 ;
-(id)daemonExtensionsConformingToProtocol:(id)arg0 ;
-(id)diagnosticDescription;
-(id)healthDirectorySizeInBytes;
-(id)healthDomainAccessorWithPairedDevice:(id)arg0 ;
-(id)healthLiteUserDefaultsDomain;
-(id)init;
-(id)initWithContainerDirectoryPath:(id)arg0 ;
-(id)initWithHealthDirectoryPath:(id)arg0 medicalIDDirectoryPath:(id)arg1 ;
-(id)nanoPairedDeviceRegistry;
-(id)pairedSyncCoordinatorWithServiceName:(id)arg0 ;
-(id)protectedResourceStoreProviders;
-(id)taskServerClasses;
-(void)_localeOrLanguageChanged:(id)arg0 ;
-(void)_postDaemonLaunchDarwinNotification;
-(void)_resetPrivacySettings;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)dealloc;
-(void)exitClean:(BOOL)arg0 reason:(id)arg1 ;
-(void)invalidateAllServersForProfile:(id)arg0 ;
-(void)invalidateAndWaitWithReason:(id)arg0 ;
-(void)obliterateAndTerminateProfiles:(id)arg0 options:(NSUInteger)arg1 reason:(id)arg2 completion:(id)arg3 ;
-(void)obliterateAndTerminateWithOptions:(NSUInteger)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)performBlockWithPowerAssertionIdentifier:(id)arg0 transactionName:(id)arg1 powerAssertionInterval:(CGFloat)arg2 block:(id)arg3 ;
-(void)registerDaemonActivatedObserver:(id)arg0 queue:(id)arg1 ;
-(void)registerDaemonReadyObserver:(id)arg0 queue:(id)arg1 ;
-(void)registerForDaemonReady:(id)arg0 ;
-(void)registerForLaunchNotification:(char *)arg0 ;
-(void)registerProtectedResourceStoreProvider:(id)arg0 ;
-(void)start;
-(void)terminateClean:(BOOL)arg0 reason:(id)arg1 ;
-(void)unitTest_didCreateProfile:(id)arg0 ;
-(void)unitTest_didReadyProfile:(id)arg0 ;
-(void)unitTest_queryServerDidInit:(id)arg0 ;
-(void)unitTest_taskServerDidInit:(id)arg0 ;
-(void)unregisterForLaunchNotification:(char *)arg0 ;
-(void)unregisterProtectedResourceStoreProvider:(id)arg0 ;


@end


#endif