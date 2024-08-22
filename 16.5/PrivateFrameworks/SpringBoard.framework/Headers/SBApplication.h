// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATION_H
#define SBAPPLICATION_H

@class FBApplicationProcess, FBSApplicationDataStore, NSUserDefaults, XBApplicationSnapshotManifest, NSHashTable, NSMapTable, NSMutableDictionary, NSString, NSURL, NSArray, FBProcessExitContext, NSDate;
@protocol XBApplicationSnapshotManifestDelegate, SBHApplication, UISApplicationStateServiceDataSource, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBApplicationSupportServiceRequestContext.h"
#import "SBApplicationWakeScheduler.h"
#import "SBApplicationInfo.h"
#import "SBApplicationProcessState.h"
#import "SBDisplayItemLayoutAttributes.h"

@interface SBApplication : NSObject <XBApplicationSnapshotManifestDelegate, SBHApplication, UISApplicationStateServiceDataSource, BSDescriptionProviding>

 {
    FBApplicationProcess *_process;
    FBSApplicationDataStore *_dataStore;
    NSUserDefaults *_lazy_defaults;
    XBApplicationSnapshotManifest *_synchronized_snapshotManifest;
    NSUInteger _displayedLaunchAlerts;
    SBApplicationSupportServiceRequestContext *_initializationContext;
    id *_cachedLastWindowLayoutAttributesOrNSNull;
    BOOL _isRecentlyUpdated;
    BOOL _isNewlyInstalled;
    BOOL _launchWillBePrevented;
    BOOL _uninstalled;
    BOOL _hasBadgeValue;
    BOOL _dataFlags;
    BOOL _dataFlagsIsSet;
    BOOL _doingBackgroundNetworking;
    NSHashTable *_statusBarStyleOverridesAssertions;
    NSMapTable *_statusBarStyleOverridesAssertionsByStyleOverride;
    NSMutableDictionary *_suppressVolumeHUDCategoriesBySceneIdentifier;
    int _showsProgressCount;
    int _applicationRestorationCheckState;
    SBApplicationWakeScheduler *_legacyVOIPPeriodicWakeScheduler;
    BOOL _isRecordingAudio;
    NSInteger _appSnapshotSequenceID;
    BOOL _calculatedSupportedTypes;
    NSUInteger _supportedTypes;
    NSInteger _defaultClassicModeOverride;
    NSInteger _currentClassicMode;
}


@property (readonly, nonatomic, getter=isAppClip) BOOL appClip;
@property (readonly, nonatomic, getter=isAppleApplication) BOOL appleApplication;
@property (retain, nonatomic) id *badgeValue;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) BOOL classicAppFullScreen;
@property (readonly, nonatomic) BOOL classicAppNonFullScreenWithHomeAffordance;
@property (readonly, nonatomic) BOOL classicAppPhoneAppRunningOnPad;
@property (readonly, nonatomic) BOOL classicAppRequiresHiDPI;
@property (readonly, nonatomic) BOOL classicAppScaled;
@property (readonly, nonatomic) BOOL classicAppScaledWithAspectRatioCloseEnoughToBeTreatedAsFullScreen;
@property (readonly, nonatomic) BOOL classicAppWithOwnSafeArea;
@property (readonly, nonatomic) BOOL classicAppWithRoundedCorners;
@property (readonly, nonatomic) BOOL classicAppZoomedIn;
@property (nonatomic, setter=_setClassicAppZoomedIn:) BOOL classicAppZoomedIn;
@property (readonly, nonatomic) BOOL classicAppZoomedInOrRequiresHiDPI;
@property (readonly, nonatomic, getter=_classicMode) NSInteger classicMode;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (nonatomic, getter=isConnectedToExternalAccessory) BOOL connectedToExternalAccessory; // ivar: _isConnectedToExternalAccessory
@property (readonly, nonatomic) int dataUsage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_defaultClassicMode) NSInteger defaultClassicMode;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property (nonatomic) NSUInteger failedAutoLaunchCountForVOIP; // ivar: _failedAutoLaunchCountForVOIP
@property (readonly, nonatomic) NSUInteger failedLaunchCount; // ivar: _failedLaunchCount
@property (readonly, nonatomic) BOOL hasHiddenTag;
@property (nonatomic) BOOL hasProminentlyIndicatedLocationUseWhileForeground; // ivar: _hasProminentlyIndicatedLocationUseWhileForeground
@property (nonatomic) BOOL hasShownDataPlanAlertSinceLock; // ivar: _hasShownDataPlanAlertSinceLock
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *iconIdentifier;
@property (readonly, nonatomic) BOOL ignoreScalingOfJailedStatusBar;
@property (retain, nonatomic) SBApplicationInfo *info; // ivar: _appInfo
@property (readonly, nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic, getter=isInternalApplication) BOOL internalApplication;
@property (retain, getter=_internalProcessState, setter=_setInternalProcessState:) SBApplicationProcessState *internalProcessState; // ivar: _threadUnsafe_processState
@property (readonly, nonatomic) BOOL isClassic;
@property (readonly, nonatomic) BOOL isFaceTime;
@property (readonly, nonatomic) BOOL isMedusaCapable;
@property (readonly, nonatomic) BOOL isMobilePhone;
@property (readonly, nonatomic) BOOL isPaperBoard;
@property (readonly, nonatomic) BOOL isSetup;
@property (readonly, nonatomic) BOOL isSpotlight;
@property (readonly, nonatomic) BOOL isSpringBoard;
@property (readonly, nonatomic) FBProcessExitContext *lastExitContext; // ivar: _lastExitContext
@property (retain, nonatomic) SBDisplayItemLayoutAttributes *lastWindowLayoutAttributes;
@property (readonly, nonatomic) SBApplicationWakeScheduler *legacyVOIPPeriodicWakeScheduler;
@property (retain, nonatomic) NSDate *nextWakeDate;
@property (nonatomic, getter=isNowRecordingApplication) BOOL nowRecordingApplication; // ivar: _isNowRecordingApplication
@property (nonatomic, getter=isPlayingAudio) BOOL playingAudio; // ivar: _isPlayingAudio
@property (readonly, nonatomic) SBApplicationProcessState *processState;
@property (nonatomic, getter=isRestoringIcon) BOOL restoringIcon; // ivar: _isRestoringApplicationFromHiding
@property (nonatomic) BOOL showsProgress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMultitaskingShelf;
@property (readonly, nonatomic) BOOL suppressesControlCenter;
@property (readonly, nonatomic) BOOL suppressesCoverSheetGesture;
@property (readonly, nonatomic, getter=isSystemApplication) BOOL systemApplication;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic, getter=isAnyTerminationAssertionHeld) BOOL terminationAssertionHeld;
@property (readonly, nonatomic, getter=isAnyTerminationAssertionInEffect) BOOL terminationAssertionInEffect;
@property (readonly, nonatomic, getter=isUninstallSupported) BOOL uninstallSupported;
@property (nonatomic, getter=isUninstalled) BOOL uninstalled;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) BOOL usesBackgroundNetwork;
@property (nonatomic) BOOL usesEdgeNetwork;
@property (nonatomic) BOOL usesWiFiNetwork;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (nonatomic) BOOL wantsAutoLaunchForVOIP;


+(BOOL)KJHKJHw39rq9w87q903475q0983rskjd;
+(NSInteger)_bestAvailableClassicModeForHostingExtensionContainedInApplication:(BOOL)arg0 ;
+(NSInteger)_classicModeForLaunchingSize:(struct CGSize )arg0 ;
+(NSUInteger)_canonicalScreenTypeForClassicMode:(NSInteger)arg0 ;
+(NSUInteger)_niceScreenTypeForClassicType:(NSUInteger)arg0 matchingAValidDisplayZoomModeOnScreenType:(NSUInteger)arg1 ;
+(id)_appStateKeysToPrefetch;
+(id)_deviceSafeAreaInsets;
+(id)restrictedClassicModeDisplayConfigurationForDisplayConfiguration:(id)arg0 classicMode:(NSInteger)arg1 ;
+(id)snapshotSortDescriptorForContentTypeMask;
+(id)snapshotSortDescriptorForCreationDate;
+(id)snapshotSortDescriptorForCustomSafeAreaInsets:(id)arg0 ;
+(id)snapshotSortDescriptorForImageScale:(CGFloat)arg0 ;
+(id)snapshotSortDescriptorForInterfaceOrientationMask:(NSUInteger)arg0 ;
+(id)snapshotSortDescriptorForLaunchInterfaceIdentifier:(id)arg0 ;
+(id)snapshotSortDescriptorForNames:(id)arg0 ;
+(id)snapshotSortDescriptorForReferenceSize:(struct CGSize )arg0 ;
+(id)snapshotSortDescriptorForRequiredOSVersion:(id)arg0 ;
+(id)snapshotSortDescriptorForScheme:(id)arg0 ;
+(id)snapshotSortDescriptorForStatusBarStateMask:(NSUInteger)arg0 ;
+(id)snapshotSortDescriptorForUIUserInterfaceStyle:(NSInteger)arg0 ;
+(id)snapshotSortDescriptorPreferringProtectedContent;
+(id)snapshotSortDescriptorsForNames:(id)arg0 scheme:(id)arg1 imageScale:(CGFloat)arg2 referenceSize:(struct CGSize )arg3 userInterfaceStyle:(NSInteger)arg4 statusBarStateMask:(NSUInteger)arg5 interfaceOrientationMask:(NSUInteger)arg6 requiredOSVersion:(id)arg7 ;
+(struct CGSize )_defaultLaunchingSizeForDisplayConfiguration:(id)arg0 classicMode:(NSInteger)arg1 ;
+(void)_markAllManifestsForReingestion;
+(void)_reingestStaticDefaultImagesForAllApps;
-(BOOL)_bypassesClassicMode;
-(BOOL)_canLaunchInClassicMode:(NSInteger)arg0 ;
-(BOOL)_exposeRealDisplayCornerRadii;
-(BOOL)_isNewEnoughToKnowAbout2020Phones;
-(BOOL)_isNewEnoughToKnowAboutRoundPads;
-(BOOL)_isNewlyInstalled;
-(BOOL)_isRecentlyUpdated;
-(BOOL)_supportsApplicationType:(NSUInteger)arg0 ;
-(BOOL)_useSupportedTypesForSplashBoard;
-(BOOL)alwaysMaximizedInChamois;
-(BOOL)canGenerateIconsInBackgroundForIcon:(id)arg0 ;
-(BOOL)canShowSystemVolumeHUDForCategory:(id)arg0 forSceneIdentifier:(id)arg1 ;
-(BOOL)hasDisplayedLaunchAlertForType:(NSUInteger)arg0 ;
-(BOOL)icon:(id)arg0 launchFromLocation:(id)arg1 context:(id)arg2 ;
-(BOOL)iconAllowsLaunch:(id)arg0 ;
-(BOOL)iconCanTightenLabel:(id)arg0 ;
-(BOOL)iconCanTruncateLabel:(id)arg0 ;
-(BOOL)iconCompleteUninstall:(id)arg0 ;
-(BOOL)iconDisallowsLaunchForObscuredReason:(id)arg0 ;
-(BOOL)iconSupportsUninstall:(id)arg0 ;
-(BOOL)includesStatusBarInClassicJailForInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)isCacheCleaningTerminationAssertionHeld;
-(BOOL)isLaunchDisallowedForObscuredReason;
-(BOOL)isSameExecutableAsApplication:(id)arg0 ;
-(BOOL)isTimedOutForIcon:(id)arg0 ;
-(BOOL)isWebApplication;
-(BOOL)restrictedToTheEmbeddedDisplayInChamois;
-(BOOL)shouldReceiveSourceApplicationContextFromOriginatingApplication:(id)arg0 ;
-(BOOL)supportsChamoisOnExternalDisplay;
-(BOOL)supportsChamoisSceneResizing;
-(BOOL)supportsChamoisViewResizing;
-(BOOL)supportsMixedOrientationForSwitcherWindowManagementStyle:(NSUInteger)arg0 displayIdentity:(id)arg1 ;
-(BOOL)supportsMultiWindowLayoutsForSwitcherWindowManagementStyle:(NSUInteger)arg0 displayIdentity:(id)arg1 ;
-(NSInteger)_classicModeForHostingExtensionContainedInApplication:(id)arg0 ;
-(NSInteger)labelAccessoryTypeForIcon:(id)arg0 ;
-(NSInteger)preferredSizingPolicyForSwitcherWindowManagementStyle:(NSUInteger)arg0 displayIdentity:(id)arg1 contentOrientation:(NSInteger)arg2 containerOrientation:(NSInteger)arg3 ;
-(NSUInteger)_screenTypeForClassicMode:(NSInteger)arg0 ;
-(NSUInteger)_supportedTypeForClassicModeNone;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(NSUInteger)supportedGridSizeClassesForIcon:(id)arg0 ;
-(NSUInteger)supportedSizingPoliciesForSwitcherWindowManagementStyle:(NSUInteger)arg0 displayIdentity:(id)arg1 contentOrientation:(NSInteger)arg2 containerOrientation:(NSInteger)arg3 ;
-(id)_baseSceneIdentifier;
-(id)_dataStore;
-(id)_defaultLaunchImageBaseName;
-(id)_defaultPNGNameFromSuspensionSettingsWithExpiration:(*CGFloat)arg0 sceneID:(id)arg1 ;
-(id)_defaultPNGNameUsingFallbacksWithSceneID:(id)arg0 contentOverridesContext:(id)arg1 ;
-(id)_initializationContext;
-(id)_normalizeSnapshotName:(id)arg0 ;
-(id)_preferredImagePathByScaleInBundle:(id)arg0 resourceName:(id)arg1 ofType:(id)arg2 scale:(CGFloat)arg3 outScale:(*CGFloat)arg4 ;
-(id)_preferredImagePathInBundle:(id)arg0 baseResourceName:(id)arg1 ofType:(id)arg2 forMainScene:(BOOL)arg3 size:(struct CGSize )arg4 scale:(CGFloat)arg5 outScale:(*CGFloat)arg6 ;
-(id)_prepareInitializationContextIfNecessaryForLaunchOnDisplayConfiguration:(id)arg0 ;
-(id)_sceneIdentifierForStoredPersistenceIdentifier:(id)arg0 ;
-(id)_snapshotManifest;
-(id)_snapshotsWithImageName:(id)arg0 sceneHandle:(id)arg1 referenceSize:(struct CGSize )arg2 requireExactSize:(BOOL)arg3 launchingScale:(CGFloat)arg4 contentTypeMask:(NSUInteger)arg5 statusBarStateMask:(NSUInteger)arg6 launchingOrientation:(NSInteger)arg7 contentOverridesContext:(id)arg8 userInterfaceStyle:(NSInteger)arg9 displayEdgeInfo:(id)arg10 ;
-(id)_windowSceneFromApplicationSceneHandle:(id)arg0 ;
-(id)badgeNumberOrStringForIcon:(id)arg0 ;
-(id)bestSnapshotWithImageName:(id)arg0 sceneHandle:(id)arg1 variantID:(id)arg2 scale:(CGFloat)arg3 referenceSize:(struct CGSize )arg4 requireExactSize:(BOOL)arg5 contentTypeMask:(NSUInteger)arg6 statusBarStateMask:(NSUInteger)arg7 launchingOrientation:(NSInteger)arg8 contentOverridesContext:(id)arg9 userInterfaceStyle:(NSInteger)arg10 displayEdgeInfo:(id)arg11 ;
-(id)cachedImageForSnapshot:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)folderFallbackTitleForIcon:(id)arg0 ;
-(id)folderTitleOptionsForIcon:(id)arg0 ;
-(id)iTunesCategoriesOrderedByRelevancyForIcon:(id)arg0 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)icon:(id)arg0 displayNameForObscuredDisabledLaunchForLocation:(id)arg1 ;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)icon:(id)arg0 unmaskedImageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)imageForSnapshot:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(id)initWithApplicationInfo:(id)arg0 ;
-(id)mostRecentSceneSnapshotsForSceneHandle:(id)arg0 scale:(CGFloat)arg1 launchingOrientation:(NSInteger)arg2 ;
-(id)restrictedClassicModeDisplayConfigurationForDisplayConfiguration:(id)arg0 ;
-(id)statusBarStyleOverridesAssertionsByStyleOverride;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)tagsForIcon:(id)arg0 ;
-(int)_applicationRestorationCheckState;
-(struct CGRect )snapshotFrameForClassicInsideBounds:(struct CGRect )arg0 forOrientation:(NSInteger)arg1 scaleFactor:(*CGFloat)arg2 inReferenceSpace:(BOOL)arg3 ;
-(struct CGSize )defaultLaunchingSizeForDisplayConfiguration:(id)arg0 ;
-(struct CGSize )snapshotSizeAdjustedForLegacyStatusBarBasedOnSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 contentFrame:(struct CGRect *)arg2 ;
-(void)__noteSnapshotDidUpdate:(NSInteger)arg0 forSceneIdentifier:(id)arg1 ;
-(void)_calculateSupportedTypesForSplashBoard;
-(void)_calculateSupportedTypesLazilyIfNecessary;
-(void)_cancelPreheatForUserLaunchIfNecessary;
-(void)_clearSceneTitles;
-(void)_didExitWithContext:(id)arg0 ;
-(void)_didSuspend;
-(void)_ingestDefaultPNGsInManifest:(id)arg0 withLaunchImageBaseName:(id)arg1 ;
-(void)_ingestInfoPlistImagesInManifest:(id)arg0 ;
-(void)_invalidateStatusBarStyleOverridesAssertions;
-(void)_lockStateDidChange:(id)arg0 ;
-(void)_noteIconDataSourceDidChange;
-(void)_noteProcess:(id)arg0 didChangeToState:(id)arg1 ;
-(void)_noteSnapshotDidUpdateForSceneIdentifier:(id)arg0 ;
-(void)_noteSnapshotDidUpdateForSceneIdentifiers:(id)arg0 ;
-(void)_processDidLaunch:(id)arg0 ;
-(void)_processWillLaunch:(id)arg0 ;
-(void)_purgeAndResetStaticDefaultImagesInSnapshotManifest;
-(void)_purgeStaticDefaultImagesInSnapshotManifest;
-(void)_recalculateApplicationSupportedTypes;
-(void)_reingestStaticDefaultImagesInSnapshotManifest;
-(void)_resetLaunchImageIngestionStatus;
-(void)_setApplicationRestorationCheckState:(int)arg0 ;
-(void)_setCurrentClassicMode:(NSInteger)arg0 ;
-(void)_setLaunchPrevented:(BOOL)arg0 ;
-(void)_setNewlyInstalled:(BOOL)arg0 ;
-(void)_setRecentlyUpdated:(BOOL)arg0 ;
-(void)_updateProcess:(id)arg0 withState:(id)arg1 ;
-(void)_updateRecentlyUpdatedTimer;
-(void)_xbactivity_saveSnapshotForSceneHandle:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)createDownscaledVariantForSnapshot:(id)arg0 sceneHandle:(id)arg1 scaleFactor:(CGFloat)arg2 didSaveImage:(id)arg3 ;
-(void)dealloc;
-(void)deleteAllSnapshots;
-(void)deleteSnapshotForContext:(id)arg0 ;
-(void)flushSnapshotsForAllScenes;
-(void)flushSnapshotsForAllScenesIncludingAllLegacyImages;
-(void)flushSnapshotsForSceneID:(id)arg0 ;
-(void)launchFromIcon:(id)arg0 location:(id)arg1 context:(id)arg2 ;
-(void)manifest:(id)arg0 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)arg1 ;
-(void)markNewlyInstalled;
-(void)markRecentlyUpdated;
-(void)possibleUserTapBeganWithAbsoluteTime:(NSUInteger)arg0 andContinuousTime:(NSUInteger)arg1 ;
-(void)possibleUserTapDidCancel;
-(void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(NSUInteger)arg0 andContinuousTime:(NSUInteger)arg1 ;
-(void)purgeCaches;
-(void)refreshLaunchImagesInSnapshotManifestIfNeeded;
-(void)releaseStatusBarStyleOverridesAssertion:(id)arg0 ;
-(void)saveSnapshotForSceneHandle:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)saveSuspendSnapshot:(id)arg0 forSceneHandle:(id)arg1 ;
-(void)setAudioCategoriesThatDisableSystemVolumeHUD:(id)arg0 forSceneIdentifier:(id)arg1 ;
-(void)setHasDisplayedLaunchAlert:(BOOL)arg0 forType:(NSUInteger)arg1 ;
-(void)takeStatusBarStyleOverridesAssertion:(id)arg0 ;
-(void)uninstall;


@end


#endif