// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFWEBEXTENSIONSCONTROLLER_H
#define SFWEBEXTENSIONSCONTROLLER_H

@class WBSWebExtensionsController, NSMutableOrderedSet, UIViewController, NSString, WKProcessPool, NSMutableDictionary;
@protocol WBSUserDefaultObservation, OS_dispatch_queue, SFWebExtensionsControllerDelegate, _SFNavigationIntentHandling;


#import "SFDialogController.h"
#import "SFWebExtension.h"

@interface SFWebExtensionsController : WBSWebExtensionsController {
    SFDialogController *_dialogController;
    NSMutableOrderedSet *_queueOfExtensionsToShowInPermissionBanner;
    id<WBSUserDefaultObservation> *_stubUnsupportedAPIsUserDefaultObserver;
    NSObject<OS_dispatch_queue> *_blocklistQueue;
    UIViewController *_viewControllerToPresentDialogsFrom;
}


@property (retain, nonatomic) NSString *applicationNameForUserAgent; // ivar: _applicationNameForUserAgent
@property (readonly, nonatomic) SFWebExtension *currentExtensionForPermissionBanner;
@property (weak, nonatomic) NSObject<SFWebExtensionsControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (readonly, nonatomic) BOOL parentalControlsAreEnabledForExtensions;
@property (retain, nonatomic) WKProcessPool *processPool; // ivar: _processPool
@property (readonly, nonatomic) NSUInteger recentlyInstalledExtensionCount;
@property (retain, nonatomic) NSMutableDictionary *tabIDToTabPositionForTabsInTransit; // ivar: _tabIDToTabPositionForTabsInTransit
@property (weak, nonatomic) UIViewController *viewControllerToPresentDialogsFrom;


+(Class)_extensionDataClass;
+(id)_extensionDefaults;
+(id)_skipLoadingEnabledExtensionsAtLaunchPreferenceKey;
+(id)contentBlockerStore;
+(id)extensionIdentifierToBaseURIMapBundleParameterKey;
+(id)sharedController;
+(void)_createWebExtensionContentBlockerDirectoryWithURL:(id)arg0 ;
-(BOOL)_canSendMessageFromWebView:(id)arg0 ;
-(BOOL)_isExtensionBlockedByBlocklist:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_isExtensionBlockedByBlocklist:(id)arg0 developerIdentifier:(id)arg1 ;
-(BOOL)extensionsEnabled;
-(BOOL)hasUpdatedToolbarItemBadgeTextInTabWithIdentifier:(id)arg0 ;
-(NSUInteger)toolbarItemIdealPointSize;
-(id)_allWindowsForWebExtension:(id)arg0 ;
-(id)_commandShortcutConflictAlertForExtension:(id)arg0 conflict:(id)arg1 okAction:(id)arg2 ;
-(id)_developerIdentifierForExtension:(id)arg0 untrustedCodeSigningDictionary:(id)arg1 ;
-(id)_deviceName;
-(id)_deviceUUIDString;
-(id)_duplicateTab:(id)arg0 ;
-(id)_findTabInAnyWindowWithID:(CGFloat)arg0 ;
-(id)_findWindowWithID:(CGFloat)arg0 ;
-(id)_safariShortVersion;
-(id)_tabForTabID:(id)arg0 webView:(id)arg1 extension:(id)arg2 ;
-(id)_tabForWebView:(id)arg0 ;
-(id)_windowForWindowID:(id)arg0 webView:(id)arg1 extension:(id)arg2 ;
-(id)lastFocusedWindow;
-(id)userContentController;
-(void)_captureVisibleTab:(id)arg0 format:(id)arg1 quality:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)_clearNewTabPreferenceIfNecessaryForRemovedExtensionWithComposedIdentifier:(id)arg0 ;
-(void)_createNewTabInWindow:(id)arg0 tabIndex:(id)arg1 url:(id)arg2 makeActive:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_didDiscoverExtensionCount:(int)arg0 ;
-(void)_extensionWithComposedIdentifier:(id)arg0 wasEnabledOrDisabledByExtensionSettings:(BOOL)arg1 ;
-(void)_notifyObserversContentBlockerListDidChange;
-(void)_pinTab:(id)arg0 ;
-(void)_relateParentTab:(id)arg0 toTab:(id)arg1 ;
-(void)_reportCommandShortcutConflictsForExtension:(id)arg0 conflicts:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id)arg3 ;
-(void)_showAccessRequestAlertForExtension:(id)arg0 domains:(id)arg1 callingAPIName:(id)arg2 responseBlock:(id)arg3 ;
-(void)_showPromptForExtensionDisabledBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)_unpinTab:(id)arg0 ;
-(void)_updateExtensionsStateAfterExtensionSettingsWereUpdatedExternally:(id)arg0 shouldUpdateExtensionPermissionsAndEnabledState:(BOOL)arg1 ;
-(void)_updateWebExtensionDataMapForExtension:(id)arg0 ;
-(void)_updateWindow:(id)arg0 updateInfo:(id)arg1 ;
-(void)compileDeclarativeNetRequestExtension:(id)arg0 rules:(id)arg1 completionHandler:(id)arg2 ;
-(void)didDeactivateWindow;
-(void)didViewToolbarItemBadgesInTabWithIdentifier:(id)arg0 ;
-(void)extensionSettingsWereUpdatedExternallyFromSettingsApp:(BOOL)arg0 ;
-(void)fireAppropriateTabMovementEventForTabState:(id)arg0 ;
-(void)fireAttachmentEventsForTabsWithPreviousTabPositions:(id)arg0 ;
-(void)fireOnMovedEventForTabsWithPreviousTabPositions:(id)arg0 currentTabsPositions:(id)arg1 ;
-(void)hidePermissionBannerForExtension:(id)arg0 ;
-(void)openPopupForWindow:(id)arg0 extensionIdentifier:(id)arg1 webView:(id)arg2 completionHandler:(id)arg3 ;
-(void)removeContentBlockerForExtension:(id)arg0 ;
-(void)reportCommandShortcutConflictsIfNecessaryForExtension:(id)arg0 presentingViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)showPermissionBannerForExtension:(id)arg0 ;


@end


#endif