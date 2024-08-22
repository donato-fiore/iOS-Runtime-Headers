// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSEXTENSIONSCONTROLLER_H
#define WBSEXTENSIONSCONTROLLER_H

@class NSMutableDictionary, NSMutableSet, NSTimer, NSPointerArray, NSArray, NSString, NSDictionary, NSMutableArray, WKUserContentController, WKWebsiteDataStore;
@protocol WBSCloudExtensionStateProvider, WBSExtensionsControllerDelegate;

#import <Foundation/Foundation.h>

#import "WBSExtensionsAnalyticsEventCoalescer.h"

@interface WBSExtensionsController : NSObject <WBSCloudExtensionStateProvider>

 {
    id *_extensionMatchingContext;
    NSMutableDictionary *_extensionUniqueIdentifierToExtensionDataMap;
    NSMutableDictionary *_extensionIdentifierToStateMap;
    NSMutableDictionary *_extensionIdentifierToBaseURIMap;
    NSMutableDictionary *_baseURIHostToExtensionIdentifier;
    NSMutableSet *_enabledExtensions;
    NSMutableSet *_replacedExtensions;
    NSMutableSet *_blockedExtensions;
    NSTimer *_deleteStateForRemovedExtensionsTimer;
    NSPointerArray *_observers;
    NSArray *_allDiscoveredExtensions;
    BOOL _loadingDiscoveredExtensions;
}


@property (readonly, nonatomic) WBSExtensionsAnalyticsEventCoalescer *analyticsEventCoalescer; // ivar: _analyticsEventCoalescer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WBSExtensionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *enabledExtensions;
@property (readonly, copy, nonatomic) NSDictionary *extensionIdentifierToBaseURIMap;
@property (readonly, copy, nonatomic) NSMutableArray *extensions; // ivar: _extensions
@property (readonly, nonatomic) BOOL extensionsEnabled; // ivar: _extensionsEnabled
@property (readonly, nonatomic) BOOL hasAnyEnabledExtensions;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL loadEnabledExtensionsWasCalled; // ivar: _loadEnabledExtensionsWasCalled
@property (readonly, nonatomic) BOOL loadingEnabledExtensionsAtStartup; // ivar: _loadingEnabledExtensionsAtStartup
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserContentController *userContentController;
@property (readonly, copy, nonatomic) WKWebsiteDataStore *websiteDataStore;


+(BOOL)_initializeExtensionData:(id)arg0 forExtension:(id)arg1 ;
+(BOOL)hasBlockedPromptAppearedForExtensionWithIdentifier:(id)arg0 ;
+(CGFloat)temporarySiteAccessTimeInterval;
+(Class)_extensionDataClass;
+(id)_bundleIdentifierFromComposedIdentifier:(id)arg0 ;
+(id)_composedIdentifierForStateOfExtensionWithBundleIdentifier:(id)arg0 developerIdentifier:(id)arg1 ;
+(id)_extensionDefaults;
+(id)_extensionFromComposedIdentifier:(id)arg0 ;
+(id)_extensionPointIdentifier;
+(id)_skipLoadingEnabledExtensionsAtLaunchPreferenceKey;
+(id)extensionURLScheme;
+(void)removeExtensionBundleIDFromArrayOfBlocklistedExtensions:(id)arg0 ;
-(BOOL)_extensionShouldBeAutomaticallyEnabled:(id)arg0 ;
-(BOOL)_extensionShouldBeEnabled:(id)arg0 ;
-(BOOL)_isExtensionBlockedByBlocklist:(id)arg0 developerIdentifier:(id)arg1 ;
-(BOOL)_shouldDisableExtensionIfAdditionalPermissionsAreRequired:(id)arg0 previousExtensionState:(id)arg1 ;
-(BOOL)extensionIsEnabled:(id)arg0 ;
-(BOOL)hasExtensionWithComposedIdentifier:(id)arg0 ;
-(BOOL)hasShownPerSiteAccessPermissionForExtension:(id)arg0 ;
-(BOOL)validateAndReadResourceWithExtensionURL:(id)arg0 inExtension:(id)arg1 codeRef:(struct __SecCode *)arg2 outResourceData:(*id)arg3 ;
-(BOOL)validateAndReadResourceWithExtensionURL:(id)arg0 inExtension:(id)arg1 outResourceData:(*id)arg2 ;
-(BOOL)validateAndReadResourceWithExtensionURL:(id)arg0 outResourceData:(*id)arg1 ;
-(id)_computeCodeSigningDictionaryOnDiskForExtension:(id)arg0 attemptRetryOnFailure:(BOOL)arg1 ;
-(id)_developerIdentifierForExtension:(id)arg0 ;
-(id)_developerIdentifierForExtension:(id)arg0 untrustedCodeSigningDictionary:(id)arg1 ;
-(id)_displayNameForExtension:(id)arg0 ;
-(id)_displayShortNameForExtension:(id)arg0 ;
-(id)_displayVersionForExtension:(id)arg0 ;
-(id)_extensionStateForExtension:(id)arg0 ;
-(id)_generateBaseURIForExtension:(id)arg0 ;
-(id)_updatedExtensionStateForCurrentPermissions:(id)arg0 previousExtensionState:(id)arg1 ;
-(id)_urlForExtensionSettings;
-(id)_versionNumberForExtension:(id)arg0 ;
-(id)cloudExtensionStateForStateManager:(id)arg0 ;
-(id)composedIdentifierForExtensionStateForExtension:(id)arg0 ;
-(id)extensionDataForExtension:(id)arg0 ;
-(id)extensionWithBaseURIHost:(id)arg0 ;
-(id)extensionWithBundleIdentifier:(id)arg0 ;
-(id)extensionWithComposedIdentifier:(id)arg0 ;
-(id)extensionWithUUID:(id)arg0 ;
-(id)init;
-(id)lastSeenBaseURIForExtension:(id)arg0 updatingWithCurrentBaseURI:(id)arg1 ;
-(id)readExtensionsStateFromStorage;
-(void)_addExtensionToBaseURIMap:(id)arg0 withResourceURL:(id)arg1 ;
-(void)_beginExtensionDiscovery;
-(void)_blockExtension:(id)arg0 ;
-(void)_connectToExtensionForValidation:(id)arg0 untrustedCodeSigningDictionary:(id)arg1 attemptRetryOnFailure:(BOOL)arg2 ;
-(void)_deleteStateForExtensionWithComposedIdentifier:(id)arg0 ;
-(void)_deleteStateForRemovedExtensions;
-(void)_deleteStateForRemovedExtensionsAfterDelay:(CGFloat)arg0 ;
-(void)_deleteStateForRemovedExtensionsSoon;
-(void)_deleteStateForRemovedExtensionsTimerFired:(id)arg0 ;
-(void)_deleteStorageForExtensionWithComposedIdentifier:(id)arg0 ;
-(void)_didDiscoverExtensionCount:(int)arg0 ;
-(void)_disableAndBlockExtension:(id)arg0 ;
-(void)_enableExtension:(id)arg0 completionHandler:(id)arg1 ;
-(void)_finishedLoadingExtensions;
-(void)_loadEnabledExtension:(id)arg0 ;
-(void)_loadExtensions:(id)arg0 ;
-(void)_notifyObserversContentBlockerListDidChange;
-(void)_removeSafariExtensionDataForExtension:(id)arg0 ;
-(void)_replaceExtensionsObsoletedByExtension:(id)arg0 developerIdentifier:(id)arg1 ;
-(void)_setExtensionIdentifierToStateMap:(id)arg0 forExtensionWithComposedIdentifier:(id)arg1 ;
-(void)_setExtensionIdentifierToStateMap:(id)arg0 forExtensionWithComposedIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setExtensionState:(id)arg0 forExtension:(id)arg1 ;
-(void)_setExtensionState:(id)arg0 forExtension:(id)arg1 completionHandler:(id)arg2 ;
-(void)_showNewExtensionBannerIfNecessaryForExtensions:(id)arg0 ;
-(void)_showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)_unloadPreviouslyEnabledExtension:(id)arg0 ;
-(void)_updateExtensionNewTabPageIfNecessary;
-(void)_updateExtensionStateAfterExtensionWasAddedWithComposedIdentifier:(id)arg0 ;
-(void)_updateExtensionStateAfterExtensionWasRemovedWithComposedIdentifier:(id)arg0 ;
-(void)_updateExtensionStateIfPermissionsIncreased:(id)arg0 ;
-(void)_updateExtensionStateIfThisVersionOfSafariIsNotSupported:(id)arg0 ;
-(void)_updateExtensionsCrashReporterMessage;
-(void)_validateAndLoadExtensionIfNecessary:(id)arg0 attemptRetryOnFailure:(BOOL)arg1 isExtensionNewlyInstalled:(*BOOL)arg2 ;
-(void)_validateContainingAppOfExtensionIfNecessary:(id)arg0 attemptRetryOnFailure:(BOOL)arg1 ;
-(void)_writeExtensionsStateToStorage;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)didShowPerSiteAccessPermissionForExtension:(id)arg0 ;
-(void)disableUnsignedExtensionsIfNecessary;
-(void)findExtensions;
-(void)loadEnabledExtensions;
-(void)loadSuitableDiscoveredExtensions;
-(void)moveLocalStorageForExtension:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)setExtension:(id)arg0 isEnabled:(BOOL)arg1 ;
-(void)setExtension:(id)arg0 isEnabled:(BOOL)arg1 dueToUserGesture:(BOOL)arg2 skipSavingToStorage:(BOOL)arg3 ;
-(void)setExtension:(id)arg0 isEnabled:(BOOL)arg1 skipSavingToStorage:(BOOL)arg2 ;
-(void)setExtensionWithComposedIdentifier:(id)arg0 isEnabledInCloud:(BOOL)arg1 ;
-(void)test_enableExtension:(id)arg0 withResourceURL:(id)arg1 ;
-(void)unloadExtensionIfNecessary:(id)arg0 ;
-(void)writeExtensionsStateToStorageWithCompletionHandler:(id)arg0 ;


@end


#endif