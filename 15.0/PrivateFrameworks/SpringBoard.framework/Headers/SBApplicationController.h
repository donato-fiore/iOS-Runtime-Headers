// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONCONTROLLER_H
#define SBAPPLICATIONCONTROLLER_H

@class NSMutableDictionary, NSSet, FBSApplicationLibrary, RBSProcessMonitor, NSString;
@protocol SBApplicationRestrictionDataSource, XBApplicationProviding, SBApplicationLifecycleObserver;

#import <Foundation/Foundation.h>

#import "SBApplicationRestrictionController.h"
#import "SBApplicationLibraryObserver.h"
#import "SBApplicationInfo.h"
#import "SBSplashBoardController.h"
#import "SBReverseCountedSemaphore.h"

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, XBApplicationProviding, SBApplicationLifecycleObserver>

 {
    NSMutableDictionary *_applicationsByBundleIdentifer;
    os_unfair_lock_s _applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBSApplicationLibrary *_appLibrary;
    SBApplicationInfo *_systemAppInfo;
    SBSplashBoardController *_splashBoardController;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
    NSSet *_preventLaunchBundleIDs;
    RBSProcessMonitor *_processMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(void)_setClearAllLegacySnapshotsWhenLoaded:(BOOL)arg0 ;
+(void)_setClearSystemAppSnapshotsWhenLoaded:(BOOL)arg0 ;
-(Class)_appClassForInfo:(id)arg0 ;
-(id)_allApplicationsFilteredBySystem:(BOOL)arg0 ;
-(id)_appInfosToBundleIDs:(id)arg0 ;
-(id)_appLibrary;
-(id)_appLibraryObserver;
-(id)_loadApplicationFromApplicationInfo:(id)arg0 ;
-(id)_lock_applicationWithBundleIdentifier:(id)arg0 ;
-(id)_splashBoardController;
-(id)allApplications;
-(id)allBundleIdentifiers;
-(id)allInstalledApplications;
-(id)allSplashBoardApplications;
-(id)alwaysAvailableApplicationBundleIdentifiers;
-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)applicationWithPid:(int)arg0 ;
-(id)bundleIdentifiersWithVisibilityOverrideHidden;
-(id)cameraApplication;
-(id)clockApplication;
-(id)dataActivationApplication;
-(id)faceTimeApp;
-(id)iPodOutApplication;
-(id)inCallServiceApp;
-(id)init;
-(id)loginApplication;
-(id)mapsApplication;
-(id)mobilePhone;
-(id)musicApplication;
-(id)notesApplication;
-(id)recentlyUsedBundleIDs;
-(id)restrictionController;
-(id)runningApplications;
-(id)setupApplication;
-(id)splashBoardSystemApplications;
-(id)testFlightApplication;
-(id)webApplication;
-(void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
-(void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
-(void)_loadApplications:(id)arg0 remove:(id)arg1 ;
-(void)_memoryWarningReceived;
-(void)_preLoadApplications;
-(void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg0 forInstall:(BOOL)arg1 withReason:(id)arg2 ;
-(void)_sendInstalledAppsDidChangeNotification:(id)arg0 removed:(id)arg1 replaced:(id)arg2 updated:(id)arg3 ;
-(void)_updateVisibilityOverrides;
-(void)_updateVisibilityOverridesInBackground;
-(void)applicationRestrictionsMayHaveChanged;
-(void)applicationVisibilityMayHaveChanged;
-(void)applicationsAdded:(id)arg0 ;
-(void)applicationsDemoted:(id)arg0 ;
-(void)applicationsRemoved:(id)arg0 ;
-(void)applicationsReplaced:(id)arg0 ;
-(void)applicationsUpdated:(id)arg0 ;
-(void)dealloc;
-(void)requestUninstallApplication:(id)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)requestUninstallApplicationWithBundleIdentifier:(id)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)uninstallApplication:(id)arg0 ;
-(void)waitForUninstallsToComplete;


@end


#endif