// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BROWSERWINDOWCONTROLLER_H
#define BROWSERWINDOWCONTROLLER_H

@class NSMapTable, _SFBrowserSavedState, _SFPageZoomPreferenceManager, WBTabGroupManager, NSArray, NSString, _SFPerSitePreferencesVendor;
@protocol CloudTabStoreDelegate, _SFNavigationIntentHandling, WBStateProvider;

#import <Foundation/Foundation.h>

#import "CloudTabStore.h"
#import "PinnedTabsManager.h"

@interface BrowserWindowController : NSObject <CloudTabStoreDelegate, _SFNavigationIntentHandling>

 {
    id *_browserControllerUIDelegateProvider;
    NSMapTable *_UIDelegatesByBrowserController;
    BOOL _consideredMergingCloudTabsForDeviceRestoration;
    _SFBrowserSavedState *_savedState;
    id *_automationWindowInitializedCompletionHandler;
    _SFPageZoomPreferenceManager *_privateBrowsingPageZoomManager;
    WBTabGroupManager *_tabGroupManager;
}


@property (readonly, copy, nonatomic) NSArray *browserControllers; // ivar: _browserControllers
@property (readonly, nonatomic) CloudTabStore *cloudTabStore; // ivar: _cloudTabStore
@property (nonatomic) BOOL cloudTabsEnabled; // ivar: _cloudTabsEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor; // ivar: _perSitePreferencesVendor
@property (readonly, nonatomic) PinnedTabsManager *pinnedTabsManager; // ivar: _pinnedTabsManager
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *privateBrowsingPageZoomManager;
@property (readonly, nonatomic) NSObject<WBStateProvider> *stateProvider; // ivar: _stateProvider
@property (readonly) Class superclass;


+(id)_printWindowToSceneMapping;
-(NSInteger)modeForNewWindowUserActivity:(id)arg0 ;
-(NSUInteger)numberOfTabsInPrivateBrowsing:(BOOL)arg0 ;
-(id)_allNormalLocalTabDocuments;
-(id)_browserWindowsToPersist;
-(id)_mergeAndSaveWindowStates:(id)arg0 intoWindowState:(id)arg1 ;
-(id)_mergeWindowStates:(id)arg0 intoWindowState:(id)arg1 ;
-(id)_newAutomationWindowWithSceneID:(id)arg0 ;
-(id)_printWindowToSceneMapping;
-(id)_sceneIDToLocalGroupTabs;
-(id)browserControllerWithUUID:(id)arg0 ;
-(id)initWithBrowserSavedState:(id)arg0 ;
-(id)initWithBrowserSavedState:(id)arg0 perSitePreferencesVendor:(id)arg1 browserControllerUIDelegateProvider:(id)arg2 ;
-(id)initWithStateProvider:(id)arg0 tabGroupManager:(id)arg1 ;
-(id)initWithStateProvider:(id)arg0 tabGroupManager:(id)arg1 perSitePreferencesVendor:(id)arg2 shouldMergeAllWindowsIfNeeded:(BOOL)arg3 browserControllerUIDelegateProvider:(id)arg4 ;
-(id)oldestTabsWithLimit:(NSUInteger)arg0 inPrivateBrowsing:(BOOL)arg1 ;
-(id)tabDocumentWithUUID:(id)arg0 ;
-(id)tabsInPrivateBrowsing:(BOOL)arg0 ;
-(id)tabsOlderThan:(id)arg0 inPrivateBrowsing:(BOOL)arg1 ;
-(id)uiDelegateForBrowserController:(id)arg0 ;
-(id)windowForSceneID:(id)arg0 options:(id)arg1 ;
-(void)_cloudTabFeatureAvailabilityDidChange:(id)arg0 ;
-(void)_createCloudTabsStore;
-(void)_destroyCloudTabsStore;
-(void)_mergeTabsFromCloudTabsForDeviceRestoration:(id)arg0 ;
-(void)_mergeTabsFromCloudTabsForDeviceRestorationIfNeededAfterCloudTabsFinishedSyncing:(BOOL)arg0 ;
-(void)_restoreWindowsFromBrowserSavedState:(id)arg0 ;
-(void)_restoreWindowsWithState:(id)arg0 shouldMergeAllWindowsIfNeeded:(BOOL)arg1 ;
-(void)_saveBrowserStateWithQuickUpdate:(BOOL)arg0 ;
-(void)_windowDidClose:(id)arg0 ;
-(void)cloudTabStore:(id)arg0 cloudTabsEnabledDidChange:(BOOL)arg1 ;
-(void)cloudTabStore:(id)arg0 didReceiveTabCloseRequest:(id)arg1 ;
-(void)cloudTabStore:(id)arg0 didUpdateDevicesFromCloudKitWithError:(id)arg1 ;
-(void)cloudTabStoreDidGetCachedDevicesFromCloudKit:(id)arg0 ;
-(void)dealloc;
-(void)dispatchNavigationIntent:(id)arg0 ;
-(void)handleNavigationIntent:(id)arg0 completion:(id)arg1 ;
-(void)mergeAllWindowsIntoWindow:(id)arg0 ;
-(void)openNewWindowWithPrivateBrowsingEnabled:(BOOL)arg0 fromWindow:(id)arg1 ;
-(void)removeWindowsNotMatchingSceneIDs:(id)arg0 supportsMultipleScenes:(BOOL)arg1 ;
-(void)restoreEducationDeviceCloudTabs:(id)arg0 animated:(BOOL)arg1 ;
-(void)restoreEducationDeviceTabs;
-(void)saveBrowserState;
-(void)saveCloudTabs;
-(void)saveCloudTabsUsingCloudTabStore:(id)arg0 ;
-(void)setUpAutomationWindowWithCompletionHandler:(id)arg0 ;
-(void)tearDownAutomationWindow;
-(void)updateCloudTabUpdatesEnabled;
-(void)updateCloudTabsForEnteringBackground;
-(void)updateCloudTabsForEnteringForeground;


@end


#endif