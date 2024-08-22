// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBALLOONPLUGINMANAGER_H
#define CKBALLOONPLUGINMANAGER_H

@class NSArray, NSMutableArray, NSMutableDictionary, NSHashTable, NSString, NSCache, UIViewController, NSSet, NSDictionary;
@protocol CKAppInstallationWatcherObserver;

#import <Foundation/Foundation.h>

#import "CKPreviewDispatchCache.h"

@interface CKBalloonPluginManager : NSObject <CKAppInstallationWatcherObserver>

 {
    NSArray *_appStripCandidatePlugins;
    NSArray *_visibleAppStripPlugins;
    NSArray *_recentAppStripPlugins;
    NSArray *_visibleRecentAppStripPlugins;
}


@property (retain, nonatomic) NSMutableArray *MRUPluginInteractionList; // ivar: _MRUPluginInteractionList
@property (retain, nonatomic) NSMutableDictionary *activeBrowsers; // ivar: _activeBrowsers
@property (readonly, nonatomic) NSArray *allEnabledPlugins;
@property (retain, nonatomic) NSArray *allPlugins; // ivar: _allPlugins
@property (nonatomic, getter=isAppStoreAutoEnableToggled) BOOL appStoreAutoEnableToggled; // ivar: _appStoreAutoEnableToggled
@property (retain, nonatomic) NSArray *cachedPotentiallyVisiblePlugins; // ivar: _cachedPotentiallyVisiblePlugins
@property (retain, nonatomic) NSHashTable *currentExtensionConsumers; // ivar: _currentExtensionConsumers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *disabledPlugins;
@property (retain, nonatomic) NSArray *favoriteAppStripPlugins; // ivar: _favoriteAppStripPlugins
@property (readonly, nonatomic) BOOL hasLoadedExtensions;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *historicalPluginIndexPathMap; // ivar: _historicalPluginIndexPathMap
@property (retain, nonatomic) NSCache *iconCache; // ivar: _iconCache
@property (nonatomic) BOOL isAppInstallationEnabled; // ivar: _isAppInstallationEnabled
@property (nonatomic) BOOL isAppInstallationObserver; // ivar: _isAppInstallationObserver
@property (readonly, nonatomic) BOOL isAppRemovalEnabled;
@property (nonatomic) BOOL isAppRemovalEnabled; // ivar: _isAppRemovalEnabled
@property (readonly, nonatomic) BOOL isAppStoreEnabled;
@property (nonatomic) BOOL isCameraAllowed; // ivar: _isCameraAllowed
@property (nonatomic, getter=isKeepingEmptySections) BOOL keepingEmptySections; // ivar: _keepingEmptySections
@property (retain, nonatomic) UIViewController *lastUsedPhotoViewController; // ivar: _lastUsedPhotoViewController
@property (nonatomic) NSInteger numberOfSectionsToKeep; // ivar: _numberOfSectionsToKeep
@property (retain, nonatomic) NSSet *oldVisibleSwitcherPluginIdentifiers; // ivar: _oldVisibleSwitcherPluginIdentifiers
@property (retain, nonatomic) NSDictionary *pluginIndexPathMap;
@property (retain, nonatomic) NSDictionary *pluginIndexPathMap; // ivar: _pluginIndexPathMap
@property (retain, nonatomic) NSDictionary *pluginLaunchTimeMap; // ivar: _pluginLaunchTimeMap
@property (retain, nonatomic) NSDictionary *pluginSeenMap; // ivar: _pluginSeenMap
@property (retain, nonatomic) NSDictionary *pluginVersionMap; // ivar: _pluginVersionMap
@property (readonly, nonatomic) NSArray *potentiallyVisibleNonFavoritePlugins;
@property (readonly, nonatomic) NSArray *potentiallyVisiblePlugins;
@property (readonly, nonatomic) NSArray *recentAppStripPlugins;
@property (retain, nonatomic) CKPreviewDispatchCache *snapshotCache; // ivar: _snapshotCache
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visibleDrawerPlugins;
@property (readonly, nonatomic) NSArray *visibleFavoriteAppStripPlugins;
@property (retain, nonatomic) NSMutableArray *visibleInstallations; // ivar: _visibleInstallations
@property (retain, nonatomic) NSArray *visiblePlugins; // ivar: _visiblePlugins
@property (readonly, nonatomic) NSArray *visibleRecentAppStripPlugins;
@property (retain, nonatomic) NSArray *visibleSwitcherPlugins; // ivar: _visibleSwitcherPlugins


+(id)defaultFavoritePlugins;
+(id)morePlugin;
+(id)recentPlugin;
+(id)sharedInstance;
-(BOOL)_addPluginToRecentsFrontIfNeeded:(id)arg0 frontOfRecents:(id)arg1 pluginMap:(id)arg2 fallbackMap:(id)arg3 ;
-(BOOL)_shouldForceRegenerateIndexPathMap;
-(BOOL)_shouldShowActivity;
-(BOOL)_shouldShowSURF;
-(BOOL)_shouldUninstallContainingBundle:(id)arg0 ;
-(BOOL)isEnabledAndVisible:(id)arg0 ;
-(BOOL)isInternalPlugin:(id)arg0 ;
-(BOOL)isPluginEnabled:(id)arg0 ;
-(BOOL)isPluginSeen:(id)arg0 ;
-(BOOL)isPluginSeenWithInstalledVersion:(id)arg0 ;
-(BOOL)isPluginVisible:(id)arg0 ;
-(BOOL)isViewController:(id)arg0 fromPluginWithIdentifier:(id)arg1 ;
-(NSUInteger)badgeValueForPlugin:(id)arg0 ;
-(NSUInteger)launchStatusForPlugin:(id)arg0 ;
-(NSUInteger)unseenPluginCount;
-(id)_decodeIndexPathMap:(id)arg0 ;
-(id)_encodeIndexPathMap:(id)arg0 ;
-(id)_pluginIndexPathForFavoritePluginWithIdentifier:(id)arg0 pluginMap:(id)arg1 fallbackMap:(id)arg2 ;
-(id)allPluginsPassingTest:(id)arg0 ;
-(id)allPotentiallyVisiblePlugins;
-(id)balloonPluginIdentifierForAppExtensionBundleIdentifier:(id)arg0 ;
-(id)browserSnapshotForKey:(id)arg0 ;
-(id)bundleIdentifiersForCurrentExtensionConsumers;
-(id)candidateAppStripPlugins;
-(id)createFakeAppsForPPTTesting:(NSUInteger)arg0 ;
-(id)digitalTouchViewControllerWithDataSource:(id)arg0 ;
-(id)existingPhotoBrowserViewController;
-(id)existingViewControllerForPluginIdentifier:(id)arg0 ;
-(id)filteredArrayOfInstallationsThatShouldBeVisible:(id)arg0 ;
-(id)handwritingViewControllerWithPluginPayloads:(id)arg0 ;
-(id)init;
-(id)launchTimeForPlugin:(id)arg0 ;
-(id)newViewControllerForPluginIdentifier:(id)arg0 dataSource:(id)arg1 ;
-(id)orderedPlugins:(BOOL)arg0 ;
-(id)photosBrowserViewControllerWithPluginPayloads:(id)arg0 ;
-(id)pluginForAdamID:(id)arg0 ;
-(id)pluginForIdentifier:(id)arg0 ;
-(id)viewControllerForPluginIdentifier:(id)arg0 ;
-(id)viewControllerForPluginIdentifier:(id)arg0 dataSource:(id)arg1 ;
-(struct __CFString *)healthKitAchievementAvailabilityChangedNotification;
-(void)_addAppWithBalloonIdentifier:(id)arg0 ;
-(void)_disableAppWithBalloonIdentifier:(id)arg0 ;
-(void)_invalidatePluginForKey:(id)arg0 ;
-(void)_refreshVisibleDrawerPluginsDueToAppInstallationChange;
-(void)_setSeen:(BOOL)arg0 forPlugin:(id)arg1 ;
-(void)_updateHistoricalPluginIndexPathMap;
-(void)addExtensionConsumer:(id)arg0 ;
-(void)appInstallationWatcher:(id)arg0 addedAppInstallation:(id)arg1 ;
-(void)appInstallationWatcher:(id)arg0 changedAppInstallation:(id)arg1 ;
-(void)cleanSeenMap;
-(void)clearBalloonPluginCache;
-(void)commitInteractionTimeOrderingChanges;
-(void)dealloc;
-(void)forceKillNonCameraRemoteExtensionsImmediately;
-(void)forceKillRemoteExtensionsWithDelay:(BOOL)arg0 ;
-(void)forceKillRemoteExtensionsWithDelay:(BOOL)arg0 skipCameraApp:(BOOL)arg1 ;
-(void)forceTearDownRemoteViewsSkippingCameraApp:(BOOL)arg0 ;
-(void)handleManagedConfigSettingsChangeNotification:(id)arg0 ;
-(void)healthStickerStatusChanged;
-(void)invalidateAllActivePlugins;
-(void)invalidateAllActivePluginsSkippingCameraApp:(BOOL)arg0 ;
-(void)invalidateAppManagerPlugin;
-(void)invalidateIconCache;
-(void)invalidatePhotosPlugin;
-(void)invalidatePhotosViewController;
-(void)prepareForSuspend;
-(void)refreshPlugins;
-(void)regeneratePluginIndexPaths;
-(void)reloadInstalledApps:(id)arg0 ;
-(void)removeAppWithIdentifier:(id)arg0 ;
-(void)removeVisibleInstallationWithID:(id)arg0 ;
-(void)saveWithNotification:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 forPlugin:(id)arg1 ;
-(void)setSeen:(BOOL)arg0 forPlugin:(id)arg1 ;
-(void)updateAppInstallations;
-(void)updateIndexPath:(id)arg0 forPlugin:(id)arg1 isDrawerPluginPath:(BOOL)arg2 ;
-(void)updateInteractionTimeForPlugin:(id)arg0 ;
-(void)updateLaunchStatus:(NSUInteger)arg0 forPlugin:(id)arg1 withNotification:(BOOL)arg2 ;
-(void)updateLaunchTimeForPlugin:(id)arg0 ;
-(void)updateSnapshotForBrowserViewController:(id)arg0 currentBounds:(struct CGRect )arg1 ;


@end


#endif