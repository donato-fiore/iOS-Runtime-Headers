// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSAPPLICATIONLIBRARY_H
#define FBSAPPLICATIONLIBRARY_H

@class LSApplicationWorkspace, NSMapTable, NSMutableDictionary, NSMutableSet, NSMutableArray, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, BSInvalidatable, FBSApplicationInfoProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSApplicationLibraryConfiguration.h"

@interface FBSApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol, BSInvalidatable, FBSApplicationInfoProvider>

 {
    FBSApplicationLibraryConfiguration *_configuration;
    LSApplicationWorkspace *_applicationWorkspace;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMapTable *_observerQueue_tokensToBlocks;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _workQueue_usingNetwork;
    NSMutableDictionary *_workQueue_installedApplicationsByBundleID;
    NSMutableDictionary *_workQueue_placeholdersByBundleID;
    NSMutableSet *_workQueue_injectedAppIdentifiers;
    NSUInteger _workQueue_synchronizationActionCount;
    NSMutableArray *_workQueue_pendingSynchronizationExecutionBlocks;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    os_unfair_lock_s _lock;
    id<BSInvalidatable> *_stateCaptureAssertion;
    BOOL _lock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUsingNetwork) BOOL usingNetwork;


-(BOOL)_workQueue_applicationHasBeenModified:(id)arg0 applicationProxy:(id)arg1 ;
-(id)_initWithApplicationWorkspace:(id)arg0 configuration:(id)arg1 ;
-(id)_observeType:(NSInteger)arg0 withBlock:(id)arg1 ;
-(id)_workQueue_applicationInfoForProxy:(id)arg0 filterExisting:(BOOL)arg1 createIfNecessary:(BOOL)arg2 createReason:(id)arg3 ;
-(id)_workQueue_applicationsForProxies:(id)arg0 createIfNecessary:(BOOL)arg1 createReason:(id)arg2 createdApplications:(*id)arg3 existingApplications:(*id)arg4 filterExistingApplications:(*id)arg5 unmappedProxies:(*id)arg6 ;
-(id)_workQueue_currentProcessProxyWithOutURL:(*id)arg0 ;
-(id)_workQueue_placeholderForProxy:(id)arg0 filterExisting:(BOOL)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 createReason:(id)arg4 ;
-(id)_workQueue_placeholdersForProxies:(id)arg0 updateExistingIfNecessary:(BOOL)arg1 createIfNecessary:(BOOL)arg2 createReason:(id)arg3 createdPlaceholders:(*id)arg4 existingPlaceholders:(*id)arg5 filterExistingPlaceholders:(*id)arg6 unmappedProxies:(*id)arg7 ;
-(id)allInstalledApplications;
-(id)allPlaceholders;
-(id)applicationInfoForAuditToken:(id)arg0 ;
-(id)applicationInfoForBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)installedApplicationWithBundleIdentifier:(id)arg0 ;
-(id)observeDidAddApplicationsWithBlock:(id)arg0 ;
-(id)observeDidAddPlaceholdersWithBlock:(id)arg0 ;
-(id)observeDidCancelPlaceholdersWithBlock:(id)arg0 ;
-(id)observeDidChangeNetworkUsageWithBlock:(id)arg0 ;
-(id)observeDidDemoteApplicationsWithBlock:(id)arg0 ;
-(id)observeDidRemoveApplicationsWithBlock:(id)arg0 ;
-(id)observeDidReplaceApplicationsWithBlock:(id)arg0 ;
-(id)observeDidUpdateApplicationsWithBlock:(id)arg0 ;
-(id)placeholderWithBundleIdentifier:(id)arg0 ;
-(void)_executeOrPendInstallSynchronizationBlock:(id)arg0 ;
-(void)_handleApplicationStateDidChange:(id)arg0 notifyForUpdateInsteadOfReplacement:(BOOL)arg1 ;
-(void)_load;
-(void)_notifyDidAddApplications:(id)arg0 ;
-(void)_notifyDidAddPlaceholders:(id)arg0 ;
-(void)_notifyDidCancelPlaceholders:(id)arg0 ;
-(void)_notifyDidChangeNetworkUsage:(BOOL)arg0 ;
-(void)_notifyDidDemoteApplications:(id)arg0 ;
-(void)_notifyDidRemoveApplications:(id)arg0 ;
-(void)_notifyDidReplaceApplications:(id)arg0 ;
-(void)_notifyDidUpdateApplications:(id)arg0 ;
-(void)_notifyForType:(NSInteger)arg0 synchronously:(BOOL)arg1 withCastingBlock:(id)arg2 ;
-(void)_reloadPlaceholdersNotificationFired;
-(void)_workQueue_addApplicationProxy:(id)arg0 withOverrideURL:(id)arg1 ;
-(void)_workQueue_decrementSynchronizationActionCount;
-(void)_workQueue_executeInstallSynchronizationBlocksIfAppropriate;
-(void)_workQueue_incrementSynchronizationActionCount;
-(void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg0 ;
-(void)_workQueue_removeInstalledApplicationFromModelForBundleID:(id)arg0 withReason:(id)arg1 ;
-(void)_workQueue_removePlaceholderFromModelForBundleID:(id)arg0 withReason:(id)arg1 ;
-(void)addApplicationProxy:(id)arg0 withOverrideURL:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg0 arePaused:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)applicationInstallsDidPause:(id)arg0 ;
-(void)applicationInstallsDidPrioritize:(id)arg0 ;
-(void)applicationInstallsDidResume:(id)arg0 ;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidChangePersonas:(id)arg0 ;
-(void)applicationsDidFailToInstall:(id)arg0 ;
-(void)applicationsDidFailToUninstall:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)applicationsWillInstall:(id)arg0 ;
-(void)applicationsWillUninstall:(id)arg0 ;
-(void)dealloc;
-(void)deviceManagementPolicyDidChange:(id)arg0 ;
-(void)installedApplicationWithBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)networkUsageChanged:(BOOL)arg0 ;
-(void)removeApplicationProxy:(id)arg0 ;
-(void)removeObserverForToken:(id)arg0 ;
-(void)synchronize:(id)arg0 ;
-(void)uninstallApplication:(id)arg0 completion:(id)arg1 ;
-(void)uninstallApplication:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;


@end


#endif