// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBEXTENSIONDATA_H
#define WBSWEBEXTENSIONDATA_H

@class NSURL, NSMutableArray, WBSDispatchSourceTimer, NSPointerArray, NSMutableDictionary, NSMapTable, NSMutableOrderedSet, NSBundle, NSDictionary, NSSet, NSArray, NSString, NSUUID, UIImage, NSDate, NSCountedSet, WKWebView, NSExtension, WKContentWorld;
@protocol WKNavigationDelegate, WKUIDelegate, WBSWebExtensionDataForwarding, NSSecureCoding, NSCopying;


#import "WBSSafariExtension.h"
#import "WBSWebExtensionLocalization.h"
#import "WBSWebExtensionStorageAPISQLiteStore.h"
#import "WBSWebExtensionDeclarativeNetRequestSQLiteStore.h"
#import "WBSWebExtensionAlarmState.h"
#import "WBSWebExtensionContextMenuItemManager.h"
#import "WBSWebExtensionToolbarItem.h"

@interface WBSWebExtensionData : WBSSafariExtension <WKNavigationDelegate, WKUIDelegate, WBSWebExtensionDataForwarding, NSSecureCoding, NSCopying>

 {
    NSURL *_resourcesDirectoryURL;
    NSMutableArray *_actionsToPerformAfterBackgroundPageLoads;
    WBSDispatchSourceTimer *_timerToUnloadBackgroundPage;
    NSPointerArray *_relatedWebViewPool;
    NSMutableDictionary *_injectedScriptsPerOriginPattern;
    NSMutableDictionary *_injectedStyleSheetsPerOriginPattern;
    NSMapTable *_temporaryTabPermissionOrigins;
    NSMutableArray *_websiteRequestsPendingApproval;
    NSMutableOrderedSet *_manifestErrors;
    NSBundle *_extensionBundle;
    NSDictionary *_manifestDictionary;
    BOOL _parsedManifestDictionary;
    NSMutableDictionary *_grantedPermissions;
    NSMutableDictionary *_grantedPermissionOrigins;
    NSMutableDictionary *_revokedPermissions;
    NSMutableDictionary *_revokedPermissionOrigins;
    NSMutableOrderedSet *_cachedPermissionURLs;
    NSMutableDictionary *_cachedPermissionStates;
    NSSet *_manifestPermissions;
    NSSet *_manifestOptionalPermissions;
    NSSet *_manifestPermissionOrigins;
    NSSet *_manifestOptionalPermissionOrigins;
    BOOL _didPopulatePermissionsAndOriginsPropertiesFromManifest;
    NSArray *_backgroundScriptPaths;
    NSString *_backgroundPagePath;
    NSString *_backgroundServiceWorkerPath;
    NSString *_generatedBackgroundPageContent;
    BOOL _backgroundPageIsPersistent;
    BOOL _parsedBackgroundManifest;
    BOOL _parsedExternallyConnectableManifest;
    NSSet *_externallyConnectableMatchPatterns;
    BOOL _isExtensionBeingLoadedAsPartOfSafariLaunch;
    NSArray *_injectedContentData;
    BOOL _parsedContentScriptsManifest;
    NSArray *_manifestV3WebAccessibleResources;
    NSArray *_webAccessibleResources;
    BOOL _parsedWebAccessibleResources;
    NSUUID *_baseURIHost;
    NSString *_displayName;
    NSString *_displayShortName;
    NSString *_version;
    NSString *_displayVersion;
    NSString *_displayDescription;
    BOOL _parsedManifestDisplayStrings;
    BOOL _hasCachedPreferencesIcon;
    UIImage *_preferencesIcon;
    BOOL _hasCachedIcon;
    UIImage *_icon;
    BOOL _hasCachedToolbarImage;
    UIImage *_toolbarImage;
    NSArray *_commands;
    WBSWebExtensionLocalization *_localization;
    WBSWebExtensionStorageAPISQLiteStore *_localStorage;
    WBSWebExtensionStorageAPISQLiteStore *_syncedStorage;
    NSDictionary *_queuedInstallEventDetails;
    BOOL _shouldFireStartupEvent;
    BOOL _hasFirstNativeMessagePort;
    NSMutableArray *_queuedNativeMessages;
    NSArray *_declarativeNetRequestRulesets;
    BOOL _parsedDeclarativeNetRequestProperties;
    WBSWebExtensionDeclarativeNetRequestSQLiteStore *_dynamicRulesStorage;
    BOOL _hasDynamicDeclarativeNetRequestRules;
    WBSWebExtensionDeclarativeNetRequestSQLiteStore *_sessionRulesStorage;
    BOOL _hasSessionDeclarativeNetRequestRules;
    NSMutableArray *_matchedDeclarativeNetRequestRules;
    BOOL _permissionsAreBeingUpdatedDueToAnExternalChange;
    NSDate *_lastBackgroundPageLoadDate;
}


@property (readonly, nonatomic) WBSWebExtensionAlarmState *alarmState; // ivar: _alarmState
@property (readonly, nonatomic) NSArray *allRelatedWebViews;
@property (readonly, nonatomic) NSSet *apiNamesPendingApproval;
@property (copy, nonatomic) NSCountedSet *backgroundPageEventListeners; // ivar: _backgroundPageEventListeners
@property (readonly, nonatomic) BOOL backgroundPageIsPersistent;
@property (readonly, nonatomic) BOOL backgroundPageIsServiceWorker;
@property (readonly, nonatomic) NSURL *backgroundPageURL;
@property (readonly, nonatomic) WKWebView *backgroundWebView; // ivar: _backgroundWebView
@property (readonly, nonatomic) NSArray *commands;
@property (readonly, nonatomic) NSString *composedIdentifier; // ivar: _composedIdentifier
@property (readonly, nonatomic) NSDictionary *configuredPermissionOrigins;
@property (readonly, nonatomic) NSDictionary *configuredPermissions;
@property (readonly, nonatomic) NSString *containingAppBundleIdentifier; // ivar: _containingAppBundleIdentifier
@property (readonly, nonatomic) NSString *contentSecurityPolicy;
@property (readonly, nonatomic) WBSWebExtensionContextMenuItemManager *contextMenuItemManager; // ivar: _contextMenuItemManager
@property (readonly, copy, nonatomic) NSArray *corsDisablingPatterns;
@property (readonly, nonatomic) NSSet *currentAccessibleOrigins;
@property (readonly, nonatomic) NSSet *currentPermissionOrigins;
@property (readonly, nonatomic) NSSet *currentPermissions;
@property (retain, nonatomic) NSDate *dateOfLastMessageSentFromAnyPortInBackgroundPage; // ivar: _dateOfLastMessageSentFromAnyPortInBackgroundPage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *declarativeNetRequestRulesets;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayDescription;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayShortName;
@property (readonly, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (retain, nonatomic) WKContentWorld *extensionWorldForInjectedContent; // ivar: _extensionWorldForInjectedContent
@property (readonly, nonatomic) NSArray *externallyConnectableMatchPatternStrings;
@property (readonly, nonatomic) NSSet *externallyConnectableMatchPatterns;
@property (readonly, nonatomic) NSString *generatedBackgroundPageContent;
@property (copy, nonatomic) NSDictionary *grantedPermissionOrigins;
@property (copy, nonatomic) NSDictionary *grantedPermissions;
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasBrowserAction;
@property (readonly, nonatomic) BOOL hasCommands;
@property (readonly, nonatomic) BOOL hasDynamicOrSessionDeclarativeNetRequestRules;
@property (nonatomic) BOOL hasLoadedPermissionsFromStorage; // ivar: _hasLoadedPermissionsFromStorage
@property (readonly, nonatomic) BOOL hasPageAction;
@property (readonly, nonatomic) BOOL hasStorage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSArray *injectedContentData;
@property (readonly, nonatomic) WBSWebExtensionStorageAPISQLiteStore *localStorage;
@property (readonly, nonatomic) WBSWebExtensionLocalization *localization;
@property (readonly, copy, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) NSSet *manifestAccessibleOrigins;
@property (readonly, nonatomic) NSArray *manifestErrors;
@property (readonly, nonatomic) NSSet *manifestOptionalPermissionOrigins;
@property (readonly, nonatomic) NSSet *manifestOptionalPermissions;
@property (readonly, nonatomic) BOOL manifestParsedSuccessfully;
@property (readonly, nonatomic) NSSet *manifestPermissionOrigins;
@property (readonly, nonatomic) NSSet *manifestPermissions;
@property (readonly, nonatomic) NSInteger manifestVersion;
@property (readonly, copy, nonatomic) NSArray *matchedDeclarativeNetRequestRules;
@property (readonly, nonatomic) NSURL *newTabOverridePageURL;
@property (readonly, nonatomic) NSURL *optionsPageURL;
@property (readonly, nonatomic) UIImage *preferencesIcon;
@property (readonly, nonatomic) NSString *processDisplayName;
@property (readonly, nonatomic) WKWebView *relatedWebView;
@property (nonatomic) BOOL requestedOptionalAccessToAllHosts; // ivar: _requestedOptionalAccessToAllHosts
@property (readonly, nonatomic) NSSet *requestedPermissionOriginsNotAlreadyConfigured;
@property (readonly, nonatomic) NSSet *requestedPermissionsNotAlreadyConfigured;
@property (readonly, nonatomic) BOOL requestsAccessToAllHosts;
@property (copy, nonatomic) NSDictionary *revokedPermissionOrigins;
@property (copy, nonatomic) NSDictionary *revokedPermissions;
@property (readonly, nonatomic) NSString *runtimeIdentifier;
@property (readonly, nonatomic) BOOL serviceWorkerFailedToLoad; // ivar: _serviceWorkerFailedToLoad
@property (readonly, nonatomic) BOOL shouldShowInWebsitePreferences;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBSWebExtensionStorageAPISQLiteStore *syncedStorage;
@property (readonly, nonatomic) UIImage *toolbarImage;
@property (retain, nonatomic) WBSWebExtensionToolbarItem *toolbarItem; // ivar: _toolbarItem
@property (readonly, copy, nonatomic) NSString *toolbarLabel;
@property (readonly, copy, nonatomic) NSString *toolbarPopupPath;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSSet *urlsPendingApproval;
@property (readonly, nonatomic) NSDictionary *userVisiblePermissions;
@property (readonly, nonatomic) BOOL usesDeclarativeNetRequest;
@property (readonly, nonatomic) BOOL usesManifestVersion3;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSArray *webAccessibleResources;


+(BOOL)_isShortVersion:(id)arg0 supportedInSafariVersion:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_manifestKeySupportForDictionary:(id)arg0 withSupportedFeatures:(id)arg1 currentSafariShortVersion:(id)arg2 ;
+(id)_originPatternMatchesAnyPatternInAllowedPatterns:(SEL)arg0 ;
+(id)_unsupportedKeysFromKeySupportDictionary:(id)arg0 ;
+(id)_unsupportedValuesInArray:(id)arg0 withSupportedFeatures:(id)arg1 currentSafariShortVersion:(id)arg2 ;
+(id)createWebExtensionError:(NSInteger)arg0 ;
+(id)createWebExtensionError:(NSInteger)arg0 customLocalizedDescription:(id)arg1 ;
+(id)createWebExtensionError:(NSInteger)arg0 underlyingError:(id)arg1 ;
+(id)generatedBackgroundPageFilename;
+(id)supportedPermissions;
+(id)supportedPermissionsForExtensionConverter;
+(id)supportedWebExtensionFeaturesForManifestVersion:(NSUInteger)arg0 ;
+(id)supportedWebExtensionPatternSchemes;
+(id)unlocalizedManifestDictionaryFromData:(id)arg0 withExtensionIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)unsupportedManifestKeysInDictionary:(id)arg0 withSupportedFeatures:(id)arg1 currentSafariShortVersion:(id)arg2 ;
+(void)_mergeKeySupportDictionary:(id)arg0 intoDictionary:(id)arg1 ;
-(BOOL)_applicationIsActive;
-(BOOL)canLoad;
-(BOOL)canLoadWithErrorString:(*id)arg0 ;
-(BOOL)hasActiveUserGestureInTab:(id)arg0 ;
-(BOOL)hasDeclarativeNetRequestPermission;
-(BOOL)hasInjectedContentDataForURL:(id)arg0 ;
-(BOOL)hasMoreThanOneRequestedOriginNotAlreadyConfigured;
-(BOOL)hasPendingWebsiteRequests;
-(BOOL)hasPermission:(id)arg0 ;
-(BOOL)hasPermission:(id)arg0 inTab:(id)arg1 ;
-(BOOL)hasPermissionToAccessAllHosts;
-(BOOL)hasPermissionToAccessAllURLs;
-(BOOL)hasPermissionToAccessURL:(id)arg0 ;
-(BOOL)hasPermissionToAccessURL:(id)arg0 inTab:(id)arg1 ;
-(BOOL)hasPermissions:(id)arg0 origins:(id)arg1 ;
-(BOOL)isAccessibleResourceURL:(id)arg0 fromWebPageWithURL:(id)arg1 ;
-(BOOL)purgeMatchedRulesOlderThan:(id)arg0 ;
-(BOOL)shouldShowToolbarItemForTab:(id)arg0 ;
-(BOOL)verifyRequestedPermissions:(id)arg0 origins:(id)arg1 errorMessage:(*id)arg2 ;
-(BOOL)webViewIsDisplayingFullPageExtensionContent:(id)arg0 ;
-(CGFloat)_delayForNonPersistentBackgroundPageBeforeUnloading;
-(NSInteger)extensionSupportsSafariShortVersion:(id)arg0 ;
-(NSInteger)permissionStateForURL:(id)arg0 ;
-(NSInteger)permissionStateForURL:(id)arg0 inTab:(id)arg1 ;
-(NSInteger)permissionStateForURL:(id)arg0 inTab:(id)arg1 options:(NSUInteger)arg2 ;
-(NSInteger)permissionStateForURL:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_actionDictionary;
-(id)_configuredDictionaryWithRequested:(id)arg0 granted:(id)arg1 revoked:(id)arg2 ;
-(id)_containingAppIcon;
-(id)_createDeclarativeNetRequestErrors:(id)arg0 ;
-(id)_maximumSafariVersionString;
-(id)_minimumSafariVersionString;
-(id)_serviceWorkerErrorsFromErrorStrings:(id)arg0 ;
-(id)_storageTypeForRulesStorage:(id)arg0 ;
-(id)_userInfoDictionaryForPermissionsNotificationWithPermissions:(id)arg0 origins:(id)arg1 ;
-(id)_validateAndReadResourceBlock:(SEL)arg0 ;
-(id)baseURIHost;
-(id)bestIconSizeKeyInIconsDictionary:(id)arg0 idealPixelSize:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dynamicRulesStorage;
-(id)extensionIconWithBaseURI:(id)arg0 idealPointSize:(NSInteger)arg1 validateAndReadResourceHandler:(id)arg2 ;
-(id)extensionStateWithPreviousState:(id)arg0 ;
-(id)imageForBestIconInIconsDictionary:(id)arg0 idealPointSize:(NSInteger)arg1 ;
-(id)imageForBestIconInIconsDictionary:(id)arg0 idealPointSize:(NSInteger)arg1 withBaseURI:(id)arg2 validateAndReadResourceHandler:(id)arg3 ;
-(id)imageForPath:(id)arg0 withBaseURI:(id)arg1 validateAndReadResourceHandler:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;
-(id)initWithExtension:(id)arg0 extensionBundle:(id)arg1 extensionIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 baseURIHost:(id)arg4 ;
-(id)initWithManifestDictionary:(id)arg0 extensionIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)pathForBestIconInIconsDictionary:(id)arg0 idealPixelSize:(NSInteger)arg1 ;
-(id)sessionRulesStorage;
-(id)toolbarImageWithBaseURI:(id)arg0 idealPointSize:(NSInteger)arg1 validateAndReadResourceHandler:(id)arg2 ;
-(id)urlForBackgroundPageWithBaseURI:(id)arg0 ;
-(id)urlForOptionsPageWithBaseURI:(id)arg0 ;
-(void)_addInjectedContentForAllGrantedOrigins;
-(void)_addInjectedContentForGrantedOriginPattern:(id)arg0 ;
-(void)_applyModificationsToDeclarativeNetRequestRulesetsFromUpdateEnabledRulesets;
-(void)_clearCachedPermissions;
-(void)_compileDeclarativeNetRequestRules:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fireStartupAndInstallEventsIfNecessaryForWebView:(id)arg0 ;
-(void)_getDeclarativeNetRequestRulesFromStorage:(id)arg0 completionHandler:(id)arg1 ;
-(void)_hidePermissionBanner;
-(void)_loadBackgroundPageWithURL:(id)arg0 ;
-(void)_loadBackgroundWebView;
-(void)_loadBackgroundWebViewDuringExtensionLoad;
-(void)_loadContentScriptsAndStyleSheets;
-(void)_loadToolbarItem;
-(void)_performTasksAfterBackgroundPageLoads;
-(void)_populateBackgroundPropertiesIfNeeded;
-(void)_populateContentScriptPropertiesIfNeeded;
-(void)_populateDeclarativeNetRequestPropertiesIfNeeded;
-(void)_populateDisplayStringsIfNeeded;
-(void)_populateExternallyConnectablePropertiesIfNeeded;
-(void)_populatePermissionsAndOriginsPropertiesIfNeeded;
-(void)_populateWebAccessibleResources;
-(void)_queueEventToFireAfterBackgroundPageLoads:(id)arg0 ;
-(void)_recordManifestErrorIfNecessary:(id)arg0 ;
-(void)_removeExpiredGrantedPermissionsAndPostNotification:(BOOL)arg0 ;
-(void)_removeExpiredPermissions:(id)arg0 origins:(id)arg1 notificationName:(id)arg2 ;
-(void)_removeExpiredRevokedPermissionsAndPostNotification:(BOOL)arg0 ;
-(void)_removeInjectedContentForOriginPattern:(id)arg0 ;
-(void)_removePermissions:(id)arg0 origins:(id)arg1 exactPatternMatchesOnly:(BOOL)arg2 fromPermissions:(id)arg3 fromOrigins:(id)arg4 notificationName:(id)arg5 ;
-(void)_unloadBackgroundWebView;
-(void)_unloadToolbarItem;
-(void)_updateDeclarativeNetRequestRulesInStorage:(id)arg0 byRemovingRules:(id)arg1 addRules:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateInjectedContentForRevokedOriginPattern:(id)arg0 ;
-(void)_validateToolbarItemInAllWindows;
-(void)addInjectedContentForGrantedOriginPatterns:(id)arg0 ;
-(void)addListener:(NSUInteger)arg0 ;
-(void)addWebViewToRelatedWebViewPool:(id)arg0 ;
-(void)checkPermissionAndPromptIfNecessaryToAccessURL:(id)arg0 inTab:(id)arg1 callingAPIName:(id)arg2 completionHandler:(id)arg3 ;
-(void)checkPermissionAndPromptIfNecessaryToAccessURL:(id)arg0 inTab:(id)arg1 options:(NSUInteger)arg2 callingAPIName:(id)arg3 completionHandler:(id)arg4 ;
-(void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)arg0 inTab:(id)arg1 callingAPIName:(id)arg2 completionHandler:(id)arg3 ;
-(void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)arg0 inTab:(id)arg1 options:(NSUInteger)arg2 callingAPIName:(id)arg3 completionHandler:(id)arg4 ;
-(void)dispatchAllPendingWebsiteRequests;
-(void)dispatchExpiredPendingWebsiteRequests;
-(void)dispatchPendingWebsiteRequestsMatchingOriginPatterns:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fireEvents:(id)arg0 completionHandler:(id)arg1 ;
-(void)getDeclarativeNetRequestDynamicRulesWithCompletionHandler:(id)arg0 ;
-(void)getDeclarativeNetRequestSessionRulesWithCompletionHandler:(id)arg0 ;
-(void)grantPermissions:(id)arg0 origins:(id)arg1 expirationDate:(id)arg2 ;
-(void)invalidateStorage;
-(void)load;
-(void)loadBackgroundPageIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)loadDeclarativeNetRequestRulesetsIfNeededWithCompletionHandler:(id)arg0 ;
-(void)messageReceivedFromContainingAppWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)nativePortConnectionOpened;
-(void)populateAllPropertiesIfNeededToRecordManifestErrors;
-(void)prepareToFireEvent:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)previouslyGrantedPermissionOriginsMayHaveBeenChangedExternally:(id)arg0 previouslyRevokedPermissionOrigins:(id)arg1 ;
-(void)queueStartupEvent;
-(void)recordContentRuleListAction:(id)arg0 forURL:(id)arg1 inTab:(id)arg2 ;
-(void)removeGrantedAndRevokedPermissions:(id)arg0 origins:(id)arg1 exactPatternMatchesOnly:(BOOL)arg2 ;
-(void)removeGrantedPermissions:(id)arg0 origins:(id)arg1 exactPatternMatchesOnly:(BOOL)arg2 ;
-(void)removeInjectedContentForRemovedOriginPatterns:(id)arg0 ;
-(void)removeListener:(NSUInteger)arg0 ;
-(void)removeRevokedPermissions:(id)arg0 origins:(id)arg1 exactPatternMatchesOnly:(BOOL)arg2 ;
-(void)removeTemporaryPermissionsForTab:(id)arg0 ;
-(void)revokePermissions:(id)arg0 origins:(id)arg1 expirationDate:(id)arg2 ;
-(void)scheduleBackgroundPageToUnload;
-(void)setQueuedInstallEventDetails:(id)arg0 ;
-(void)unload;
-(void)updateBackgroundPageClipboardPermission;
-(void)updateDeclarativeNetRequestDynamicRulesByRemovingRules:(id)arg0 addRules:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateDeclarativeNetRequestSessionRulesByRemovingRules:(id)arg0 addRules:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateInjectedContentForChangedRevokedOriginPatterns:(id)arg0 ;
-(void)userGesturePerformedInTab:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif