// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSAPPLICATIONWORKSPACE_H
#define LSAPPLICATIONWORKSPACE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "LSInstallProgressList.h"

@interface LSApplicationWorkspace : NSObject

@property (readonly) NSMutableDictionary *createdInstallProgresses; // ivar: _createdInstallProgresses
@property (readonly) LSInstallProgressList *observedInstallProgresses; // ivar: _observedInstallProgresses


+(id)_defaultAppQueue;
+(id)_remoteObserver;
+(id)activeManagedConfigurationRestrictionUUIDs;
+(id)callbackQueue;
+(id)defaultWorkspace;
+(id)progressQueue;
-(*void)ls_testWithCleanDatabaseWithError:(*id)arg0 ;
-(BOOL)_LSPrivateDatabaseNeedsRebuild;
-(BOOL)_LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)arg0 internal:(BOOL)arg1 user:(BOOL)arg2 ;
-(BOOL)_LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)arg0 internal:(BOOL)arg1 user:(BOOL)arg2 uid:(*unsigned int)arg3 ;
// -(BOOL)_getBundleIdentifierForBundleAtURL:(id)arg0 invokeUpdateBlockAndReregister:(id)arg1 error:(unk)arg2  ;
-(BOOL)allowsAlternateIcons;
-(BOOL)applicationIsInstalled:(id)arg0 ;
-(BOOL)downgradeApplicationToPlaceholder:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)establishConnection;
-(BOOL)garbageCollectDatabaseWithError:(*id)arg0 ;
-(BOOL)getClaimedActivityTypes:(*id)arg0 domains:(*id)arg1 ;
-(BOOL)initiateProgressForApp:(id)arg0 withType:(NSUInteger)arg1 ;
-(BOOL)installApplication:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)installApplication:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)installApplication:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)installContainerizedApplicationArtifactAtURL:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 progressBlock:(id)arg3 ;
-(BOOL)installContainerizedApplicationArtifactAtURL:(id)arg0 withOptions:(id)arg1 returningRecordPromise:(*id)arg2 error:(*id)arg3 progressBlock:(id)arg4 ;
-(BOOL)installPhaseFinishedForProgress:(id)arg0 ;
-(BOOL)invalidateIconCache:(id)arg0 ;
-(BOOL)isApplicationAvailableToOpenURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isApplicationAvailableToOpenURL:(id)arg0 includePrivateURLSchemes:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isApplicationAvailableToOpenURLCommon:(id)arg0 includePrivateURLSchemes:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isVersion:(id)arg0 greaterThanOrEqualToVersion:(id)arg1 ;
-(BOOL)ls_injectUTTypeWithDeclaration:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(BOOL)openApplicationWithBundleID:(id)arg0 ;
-(BOOL)openSensitiveURL:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)openSensitiveURL:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)openURL:(id)arg0 ;
-(BOOL)openURL:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)openURL:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)registerApplication:(id)arg0 ;
-(BOOL)registerApplicationDictionary:(id)arg0 ;
-(BOOL)registerApplicationDictionary:(id)arg0 withObserverNotification:(int)arg1 ;
-(BOOL)registerApplicationForRebuildWithInfoDictionaries:(id)arg0 requestContext:(id)arg1 registrationError:(*id)arg2 ;
-(BOOL)registerPlugin:(id)arg0 ;
-(BOOL)restoreSystemApplication:(id)arg0 ;
-(BOOL)revertContainerizedApplicationWithIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 progressBlock:(id)arg3 ;
-(BOOL)revertContainerizedApplicationWithIdentifier:(id)arg0 options:(id)arg1 returningRecordPromise:(*id)arg2 error:(*id)arg3 progressBlock:(id)arg4 ;
-(BOOL)sendNotificationOfType:(unsigned int)arg0 forApplicationWithBundleIdentifier:(id)arg1 requestContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)setPersonaUniqueStrings:(id)arg0 forApplicationWithBundleIdentifier:(id)arg1 operationUUID:(id)arg2 requestContext:(id)arg3 saveObserver:(id)arg4 error:(*id)arg5 ;
-(BOOL)setProgressProportionsByPhase:(id)arg0 forInstallOfApplicationWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)uninstallApplication:(id)arg0 withOptions:(id)arg1 ;
-(BOOL)uninstallApplication:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)uninstallApplication:(id)arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(BOOL)uninstallContainerizedApplicationWithIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 progressBlock:(id)arg3 ;
-(BOOL)unregisterApplication:(id)arg0 ;
-(BOOL)unregisterApplicationsAtMountPoint:(id)arg0 operationUUID:(id)arg1 saveObserver:(id)arg2 requestContext:(id)arg3 ;
-(BOOL)unregisterContainerizedApplicationWithBundleIdentifier:(id)arg0 operationUUID:(id)arg1 unregistrationOperation:(unsigned int)arg2 precondition:(id)arg3 requestContext:(id)arg4 saveObserver:(id)arg5 unregistrationError:(*id)arg6 ;
-(BOOL)unregisterContainerizedApplicationWithBundleIdentifier:(id)arg0 operationUUID:(id)arg1 unregistrationOperation:(unsigned int)arg2 requestContext:(id)arg3 saveObserver:(id)arg4 unregistrationError:(*id)arg5 ;
-(BOOL)unregisterPlugin:(id)arg0 ;
-(BOOL)updatePlaceholderMetadataForApp:(id)arg0 installType:(NSUInteger)arg1 failure:(NSUInteger)arg2 underlyingError:(id)arg3 source:(NSUInteger)arg4 outError:(*id)arg5 ;
-(BOOL)updatePlaceholderMetadataForApplicationWithIdentifier:(id)arg0 operationUUID:(id)arg1 requestContext:(id)arg2 installType:(NSUInteger)arg3 failure:(NSUInteger)arg4 saveObserver:(id)arg5 error:(*id)arg6 ;
-(BOOL)updatePlaceholderWithBundleIdentifier:(id)arg0 withInstallType:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)updateRecordForApp:(id)arg0 withSINF:(id)arg1 iTunesMetadata:(id)arg2 placeholderMetadata:(id)arg3 sendNotification:(int)arg4 operationUUID:(id)arg5 outSaveToken:(*id)arg6 error:(*id)arg7 ;
-(BOOL)updateSINFMetadataForApplicationWithIdentifier:(id)arg0 operationUUID:(id)arg1 requestContext:(id)arg2 parsedSINFInfo:(id)arg3 saveObserver:(id)arg4 error:(*id)arg5 ;
-(BOOL)updateSINFWithData:(id)arg0 forApplication:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateSINFWithData:(id)arg0 forApplicationAtURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateiTunesMetadataForApplicationWithIdentifier:(id)arg0 operationUUID:(id)arg1 requestContext:(id)arg2 metadataPlist:(id)arg3 saveObserver:(id)arg4 error:(*id)arg5 ;
-(BOOL)updateiTunesMetadataWithData:(id)arg0 forApplication:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateiTunesMetadataWithData:(id)arg0 forApplicationAtURL:(id)arg1 error:(*id)arg2 ;
-(id)URLOverrideForNewsURL:(id)arg0 ;
-(id)URLOverrideForURL:(id)arg0 ;
-(id)_LSPrivateRemovedSystemAppIdentifiers;
-(id)allApplications;
-(id)allInstalledApplications;
-(id)applicationForOpeningResource:(id)arg0 ;
-(id)applicationForUserActivityDomainName:(id)arg0 ;
-(id)applicationForUserActivityType:(id)arg0 ;
-(id)applicationProxiesWithPlistFlags:(unsigned int)arg0 bundleFlags:(NSUInteger)arg1 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg0 ;
-(id)applicationsAvailableForOpeningDocument:(id)arg0 ;
-(id)applicationsAvailableForOpeningURL:(id)arg0 ;
-(id)applicationsAvailableForOpeningURL:(id)arg0 legacySPI:(BOOL)arg1 ;
-(id)applicationsForUserActivityType:(id)arg0 ;
-(id)applicationsForUserActivityType:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)applicationsOfType:(NSUInteger)arg0 ;
-(id)applicationsWithAudioComponents;
-(id)applicationsWithUIBackgroundModes;
-(id)applicationsWithVPNPlugins;
-(id)bundleIdentifiersForMachOUUIDs:(id)arg0 error:(*id)arg1 ;
-(id)createDeviceIdentifierWithVendorName:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)deviceIdentifierForAdvertising;
-(id)deviceIdentifierForVendor;
-(id)deviceIdentifierForVendorSeedData;
-(id)directionsApplications;
-(id)installProgressForApplication:(id)arg0 withPhase:(NSUInteger)arg1 ;
-(id)installProgressForBundleID:(id)arg0 makeSynchronous:(unsigned char)arg1 ;
-(id)installedPlugins;
-(id)legacyApplicationProxiesListWithType:(NSUInteger)arg0 ;
-(id)machOUUIDsForBundleIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)observerProxy;
-(id)operationToOpenResource:(id)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(id)arg2 isContentManaged:(BOOL)arg3 sourceAuditToken:(struct ? *)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7 ;
-(id)operationToOpenResource:(id)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(id)arg2 sourceIsManaged:(BOOL)arg3 userInfo:(id)arg4 delegate:(id)arg5 ;
-(id)operationToOpenResource:(id)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(id)arg2 sourceIsManaged:(BOOL)arg3 userInfo:(id)arg4 options:(id)arg5 delegate:(id)arg6 ;
-(id)operationToOpenResource:(id)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id)operationToOpenResource:(id)arg0 usingApplication:(id)arg1 uniqueDocumentIdentifier:(id)arg2 userInfo:(id)arg3 delegate:(id)arg4 ;
-(id)operationToOpenResource:(id)arg0 usingApplication:(id)arg1 userInfo:(id)arg2 ;
-(id)optionsFromOpenConfiguration:(id)arg0 ;
-(id)placeholderApplications;
-(id)pluginsMatchingQuery:(id)arg0 applyFilter:(id)arg1 ;
-(id)pluginsWithIdentifiers:(id)arg0 protocols:(id)arg1 version:(id)arg2 ;
-(id)pluginsWithIdentifiers:(id)arg0 protocols:(id)arg1 version:(id)arg2 applyFilter:(id)arg3 ;
-(id)pluginsWithIdentifiers:(id)arg0 protocols:(id)arg1 version:(id)arg2 withFilter:(id)arg3 ;
-(id)privateURLSchemes;
-(id)publicURLSchemes;
-(id)registerContainerizedApplicationWithInfoDictionaries:(id)arg0 operationUUID:(id)arg1 requestContext:(id)arg2 saveObserver:(id)arg3 registrationError:(*id)arg4 ;
-(id)remoteObserver;
-(id)removedSystemApplications;
-(id)scanForApplicationStateChangesFromRank:(id)arg0 toRank:(id)arg1 ;
-(id)scanForApplicationStateChangesWithAllowlist:(id)arg0 ;
-(id)scanForForDeletableSystemApps;
-(id)syncObserverProxy;
-(id)systemMode;
-(id)unrestrictedApplications;
-(void)_LSClearSchemaCaches;
-(void)_LSFailedToOpenURL:(id)arg0 withBundle:(id)arg1 ;
-(void)_LSPrivateNoteMigratorRunning;
-(void)_LSPrivateSetRemovedSystemAppIdentifiers:(id)arg0 ;
-(void)_LSPrivateSyncWithMobileInstallation;
-(void)_LSPrivateUpdateAppRemovalRestrictions;
-(void)_openUserActivity:(id)arg0 orUserActivityUUID:(id)arg1 activityTypeForUUID:(id)arg2 withApplicationProxy:(id)arg3 options:(id)arg4 completionHandler:(id)arg5 ;
-(void)acquireDatabase;
-(void)addObserver:(id)arg0 ;
-(void)clearAdvertisingIdentifier;
-(void)clearCreatedProgressForBundleID:(id)arg0 ;
-(void)enumerateApplicationsOfType:(NSUInteger)arg0 block:(id)arg1 ;
-(void)enumerateApplicationsOfType:(NSUInteger)arg0 legacySPI:(BOOL)arg1 block:(id)arg2 ;
-(void)enumerateBundlesOfType:(NSUInteger)arg0 block:(id)arg1 ;
-(void)enumerateBundlesOfType:(NSUInteger)arg0 legacySPI:(BOOL)arg1 block:(id)arg2 ;
-(void)enumerateBundlesOfType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePluginsMatchingQuery:(id)arg0 withBlock:(id)arg1 ;
-(void)getKnowledgeUUID:(*id)arg0 andSequenceNumber:(*id)arg1 ;
-(void)ls_resetTestingDatabase;
-(void)openApplicationWithBundleIdentifier:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
-(void)openApplicationWithBundleIdentifier:(id)arg0 usingConfiguration:(id)arg1 completionHandler:(id)arg2 ;
-(void)openURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
-(void)openUserActivity:(id)arg0 usingApplicationRecord:(id)arg1 configuration:(id)arg2 completionHandler:(id)arg3 ;
-(void)openUserActivity:(id)arg0 withApplicationProxy:(id)arg1 completionHandler:(id)arg2 ;
-(void)openUserActivity:(id)arg0 withApplicationProxy:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)openUserActivityWithUUID:(id)arg0 activityType:(id)arg1 usingApplicationRecord:(id)arg2 configuration:(id)arg3 completionHandler:(id)arg4 ;
-(void)placeholderInstalledForIdentifier:(id)arg0 filterDowngrades:(BOOL)arg1 ;
-(void)rebuildDatabaseContentForFrameworkAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)relaxApplicationTypeRequirements:(BOOL)arg0 forApplicationRecord:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeAllDefaultApplicationPreferencesWithCompletionHandler:(id)arg0 ;
-(void)removeDeviceIdentifierForVendorName:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)sendApplicationStateChangedNotificationsFor:(id)arg0 completion:(id)arg1 ;
-(void)sendExtensionNotificationsForExtensionBundleIdentifier:(id)arg0 changingRestrictionStateTo:(BOOL)arg1 ;
-(void)sendExtensionNotificationsForSystemModeChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)setDefaultMailClientToApplicationRecord:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDefaultURLHandlerForScheme:(id)arg0 to:(id)arg1 completion:(id)arg2 ;
-(void)setDefaultWebBrowserToApplicationRecord:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif