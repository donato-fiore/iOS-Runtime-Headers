// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACXDEVICECONNECTION_H
#define ACXDEVICECONNECTION_H

@class NSString, NSHashTable, NSXPCConnection;
@protocol ACXDeviceConnectionDelegateProtocol, ACXDeviceConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACXDeviceConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) BOOL monitoringForDeviceChanges; // ivar: _monitoringForDeviceChanges
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *observerReEstablishTimer; // ivar: _observerReEstablishTimer
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL observersEnabled; // ivar: _observersEnabled
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedDeviceConnection;
+(void)_removeFilesAtURL:(id)arg0 ;
+(void)disableTestMode;
+(void)enableTestMode;
+(void)performUninstallationCleanup;
-(BOOL)_onQueue_createXPCConnectionIfNecessary:(*id)arg0 ;
-(BOOL)_onQueue_enableObserversIfNeededForAValidXPCConnection;
-(BOOL)acknowledgeTestFlightInstallBegunForApp:(id)arg0 onDeviceWithPairingID:(id)arg1 error:(*id)arg2 ;
-(BOOL)cancelUpdatePendingForCompanionApp:(id)arg0 error:(*id)arg1 ;
-(BOOL)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(id)arg0 returningDatabaseUUID:(*id)arg1 lastSequenceNumber:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)fetchApplicationDatabaseSyncInformationForPairedDevice:(id)arg0 returningDatabaseUUID:(*id)arg1 lastSequenceNumber:(*NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)getAlwaysInstall:(*BOOL)arg0 forPairedDevice:(id)arg1 error:(*id)arg2 ;
-(BOOL)getApplicationIsInstalled:(*BOOL)arg0 onAnyPairedDeviceWithBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)getApplicationIsInstalled:(*BOOL)arg0 onAnyPairedDeviceWithCompanionBundleID:(id)arg1 error:(*id)arg2 ;
-(BOOL)getApplicationIsInstalled:(*BOOL)arg0 onDeviceWithPairingID:(id)arg1 withCompanionBundleID:(id)arg2 error:(*id)arg3 ;
-(BOOL)getApplicationIsInstalled:(*BOOL)arg0 onPairedDevice:(id)arg1 withCompanionBundleID:(id)arg2 error:(*id)arg3 ;
-(BOOL)getApplicationIsInstalled:(*BOOL)arg0 withBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(*id)arg3 ;
-(BOOL)getApplicationIsInstalled:(*BOOL)arg0 withBundleID:(id)arg1 onPairedDevice:(id)arg2 error:(*id)arg3 ;
-(BOOL)getSystemAppInstallability:(*BOOL)arg0 onDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 error:(*id)arg3 ;
-(BOOL)getSystemAppInstallability:(*BOOL)arg0 onPairedDevice:(id)arg1 withBundleID:(id)arg2 error:(*id)arg3 ;
-(BOOL)installApplication:(id)arg0 onPairedDevice:(id)arg1 installationStatus:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)installApplication:(id)arg0 withProvisioningProfiles:(id)arg1 onPairedDevice:(id)arg2 installationStatus:(*NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)installApplicationAtURL:(id)arg0 onDeviceWithPairingID:(id)arg1 installOptions:(id)arg2 size:(NSInteger)arg3 installationStatus:(*NSInteger)arg4 error:(*id)arg5 ;
-(BOOL)installApplicationAtURL:(id)arg0 onPairedDevice:(id)arg1 installOptions:(id)arg2 size:(NSInteger)arg3 installationStatus:(*NSInteger)arg4 error:(*id)arg5 ;
-(BOOL)installProvisioningProfileWithURL:(id)arg0 onPairedDevice:(id)arg1 error:(*id)arg2 ;
-(BOOL)installRequestFailedForApp:(id)arg0 onDeviceWithPairingID:(id)arg1 failureReason:(id)arg2 wasUserInitiated:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)killDaemonForTestingWithError:(*id)arg0 ;
-(BOOL)removeApplication:(id)arg0 fromPairedDevice:(id)arg1 removalStatus:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)removeProvisioningProfileWithID:(id)arg0 fromPairedDevice:(id)arg1 error:(*id)arg2 ;
-(BOOL)setUpdatePendingForCompanionApp:(id)arg0 error:(*id)arg1 ;
-(BOOL)updatePreferencesForApplicationWithIdentifier:(id)arg0 preferences:(id)arg1 writingToPreferencesLocation:(NSUInteger)arg2 forPairedDevice:(id)arg3 options:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)_locallyAvailableApplicationWithBundleID:(id)arg0 forDeviceWithPairingID:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)_proxyWithErrorHandler:(id)arg0 ;
-(id)_synchronousProxyWithErrorHandler:(id)arg0 ;
-(id)_validateAndExtractProfiles:(id)arg0 error:(*id)arg1 ;
-(id)applicationOnDeviceWithPairingID:(id)arg0 withBundleID:(id)arg1 error:(*id)arg2 ;
-(id)applicationOnPairedDevice:(id)arg0 withBundleID:(id)arg1 error:(*id)arg2 ;
-(id)copyLocalizedValuesFromAllDevicesForInfoPlistKeys:(id)arg0 forAppWithBundleID:(id)arg1 fetchingFirstMatchingLocalizationInList:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)installableSystemAppWithBundleID:(id)arg0 onDeviceWithPairingID:(id)arg1 error:(*id)arg2 ;
-(id)installableSystemAppWithBundleID:(id)arg0 onPairedDevice:(id)arg1 error:(*id)arg2 ;
-(id)locallyAvailableApplicationWithBundleID:(id)arg0 forDeviceWithPairingID:(id)arg1 error:(*id)arg2 ;
-(id)locallyAvailableApplicationWithBundleID:(id)arg0 forPairedDevice:(id)arg1 error:(*id)arg2 ;
-(id)locallyAvailableApplicationWithContainingApplicationBundleID:(id)arg0 forDeviceWithPairingID:(id)arg1 error:(*id)arg2 ;
-(id)locallyAvailableApplicationWithContainingApplicationBundleID:(id)arg0 forPairedDevice:(id)arg1 error:(*id)arg2 ;
-(id)provisioningProfilesForApplicationWithBundleID:(id)arg0 forPairedDevice:(id)arg1 error:(*id)arg2 ;
-(id)provisioningProfilesForPairedDevice:(id)arg0 error:(*id)arg1 ;
-(id)watchAppBundleIDForCompanionAppBundleID:(id)arg0 error:(*id)arg1 ;
-(id)watchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)_deviceDidBecomeActiveNotification:(id)arg0 ;
-(void)_deviceDidPairNotification:(id)arg0 ;
-(void)_fetchLocallyAvailableApplicationWithBundleID:(id)arg0 forDeviceWithPairingID:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_invalidateXPCConnection;
-(void)_onQueue_beginMonitoringNanoRegistryDeviceState;
-(void)_onQueue_endMonitoringNanoRegistryDeviceState;
-(void)_onQueue_reEstablishObserverConnectionIfNeeded;
-(void)activeComplicationsForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)activeComplicationsWithErrorCompletion:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg0 ;
-(void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(id)arg0 completion:(id)arg1 ;
-(void)applicationIsInstalledOnDeviceWithPairingID:(id)arg0 withBundleID:(id)arg1 completion:(id)arg2 ;
-(void)applicationIsInstalledOnDeviceWithPairingID:(id)arg0 withCompanionBundleID:(id)arg1 completion:(id)arg2 ;
-(void)applicationIsInstalledOnPairedDevice:(id)arg0 withBundleID:(id)arg1 completion:(id)arg2 ;
-(void)applicationIsInstalledOnPairedDevice:(id)arg0 withCompanionBundleID:(id)arg1 completion:(id)arg2 ;
-(void)applicationsInstalled:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)applicationsUninstalled:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)applicationsUpdated:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)cancelPendingInstallations;
-(void)cancelUpdatePendingForCompanionApp:(id)arg0 completion:(id)arg1 ;
-(void)enumerateInstallableSystemAppsOnDeviceWithPairingID:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateInstallableSystemAppsOnPairedDevice:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateInstalledApplicationsOnDeviceWithPairingID:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateInstalledApplicationsOnPairedDevice:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateLocallyAvailableApplicationsForDeviceWithPairingID:(id)arg0 options:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)enumerateLocallyAvailableApplicationsForPairedDevice:(id)arg0 options:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)fetchApplicationOnDeviceWithPairingID:(id)arg0 withBundleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchApplicationOnPairedDevice:(id)arg0 withBundleID:(id)arg1 completion:(id)arg2 ;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg0 forPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)fetchInstallableSystemAppWithBundleID:(id)arg0 onDeviceWithPairingID:(id)arg1 completion:(id)arg2 ;
-(void)fetchInstallableSystemAppWithBundleID:(id)arg0 onPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)fetchInstalledApplicationsForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)fetchInstalledApplicationsWithErrorCompletion:(id)arg0 ;
-(void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg0 withErrorCompletion:(id)arg1 ;
-(void)fetchInstalledComplicationsForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)fetchInstalledComplicationsWithErrorCompletion:(id)arg0 ;
-(void)fetchLocallyAvailableApplicationWithBundleID:(id)arg0 forDeviceWithPairingID:(id)arg1 completion:(id)arg2 ;
-(void)fetchLocallyAvailableApplicationWithBundleID:(id)arg0 forPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg0 forDeviceWithPairingID:(id)arg1 completion:(id)arg2 ;
-(void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg0 forPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg0 forPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)fetchProvisioningProfilesForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)fetchProvisioningProfilesWithCompletion:(id)arg0 ;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getAlwaysInstallForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)getAlwaysInstallWithCompletion:(id)arg0 ;
-(void)installAllApplications;
-(void)installApplication:(id)arg0 completionWithError:(id)arg1 ;
-(void)installApplication:(id)arg0 onPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)installApplication:(id)arg0 withProvisioningProfiles:(id)arg1 completionWithError:(id)arg2 ;
-(void)installApplication:(id)arg0 withProvisioningProfiles:(id)arg1 onPairedDevice:(id)arg2 completion:(id)arg3 ;
-(void)installApplicationAtURL:(id)arg0 onDeviceWithPairingID:(id)arg1 installOptions:(id)arg2 size:(NSInteger)arg3 completion:(id)arg4 ;
-(void)installApplicationAtURL:(id)arg0 onPairedDevice:(id)arg1 installOptions:(id)arg2 size:(NSInteger)arg3 completion:(id)arg4 ;
-(void)installProvisioningProfileWithURL:(id)arg0 completion:(id)arg1 ;
-(void)installProvisioningProfileWithURL:(id)arg0 onPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)observerRegistrationSuccessful;
-(void)removeApplication:(id)arg0 completion:(id)arg1 ;
-(void)removeApplication:(id)arg0 fromPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)removeApplication:(id)arg0 fromPairedDevice:(id)arg1 completionWithError:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeProvisioningProfileWithID:(id)arg0 completion:(id)arg1 ;
-(void)removeProvisioningProfileWithID:(id)arg0 fromPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)retryPendingAppInstallationsForPairedDevice:(id)arg0 ;
-(void)setAllExistingAppsShouldBeInstalled:(BOOL)arg0 forNewDevice:(id)arg1 ;
-(void)setAlwaysInstall:(id)arg0 ;
-(void)setAlwaysInstall:(id)arg0 forDevice:(id)arg1 ;
-(void)setUpdatePendingForCompanionApp:(id)arg0 completion:(id)arg1 ;
-(void)systemAppIsInstallableOnDeviceWithPairingID:(id)arg0 withBundleID:(id)arg1 completion:(id)arg2 ;
-(void)systemAppIsInstallableOnPairedDevice:(id)arg0 withBundleID:(id)arg1 completion:(id)arg2 ;
-(void)updateInstallProgressForApplication:(id)arg0 progress:(CGFloat)arg1 phase:(NSUInteger)arg2 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg0 preferences:(id)arg1 completion:(id)arg2 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg0 preferences:(id)arg1 forPairedDevice:(id)arg2 completion:(id)arg3 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg0 preferences:(id)arg1 writingToPreferencesLocation:(NSUInteger)arg2 forPairedDevice:(id)arg3 options:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)updatedInstallStateForApplicationsWithInfo:(id)arg0 ;


@end


#endif