// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONINFO_H
#define SBAPPLICATIONINFO_H

@class UIApplicationInfo, NSArray, NSSet, NSURL, NSUserDefaults, NSString, CRCarPlayAppDeclaration, XBSnapshotContainerIdentity;



@interface SBApplicationInfo : UIApplicationInfo {
    NSArray *_staticApplicationShortcutItems;
    NSSet *_supportedContentTypes;
    NSURL *_dataContainerURLOverride;
    NSUserDefaults *_lazy_userDefaults;
    NSInteger _forcedUserInterfaceStyle;
    unsigned int _codeSignatureVersion;
    BOOL _isOkemoLinked;
    BOOL _staticApplicationShortcutItemsHaveBeenLocalized;
    BOOL _canChangeBackgroundStyle;
    BOOL _allowNonDefaultBackgroundStyle;
}


@property (readonly, nonatomic) NSUInteger allowedNKNotificationsPerDay; // ivar: _allowedNKNotificationsPerDay
@property (readonly, nonatomic) BOOL alwaysDeliversOpenURLActionsUsingWorkspace; // ivar: _alwaysDeliversOpenURLActionsUsingWorkspace
@property (readonly, nonatomic) BOOL alwaysReceivesOpenURLSource; // ivar: _alwaysReceivesOpenURLSource
@property (readonly, nonatomic, getter=isAppClip) BOOL appClip; // ivar: _appClip
@property (readonly, nonatomic, getter=isAppleApplication) BOOL appleApplication;
@property (readonly, copy, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // ivar: _applicationShortcutWidgetBundleIdentifier
@property (readonly, nonatomic) NSUInteger applicationSizeInBytes; // ivar: _applicationSizeInBytes
@property (readonly, nonatomic, getter=isArcadeApplication) BOOL arcadeApplication; // ivar: _arcadeApplication
@property (readonly, nonatomic, getter=isAzulBLinked) BOOL azulBLinked; // ivar: _isAzulBLinked
@property (readonly, nonatomic, getter=isAzulHWLinked) BOOL azulHWLinked; // ivar: _isAzulHWLinked
@property (readonly, nonatomic, getter=isAzulLinked) BOOL azulLinked; // ivar: _isAzulLinked
@property (readonly, nonatomic) CRCarPlayAppDeclaration *carPlayDeclaration; // ivar: _carPlayDeclaration
@property (readonly, nonatomic, getter=isCloudDemoted) BOOL cloudDemoted; // ivar: _cloudDemoted
@property (readonly, nonatomic) NSInteger defaultStatusBarStyle; // ivar: _defaultStatusBarStyle
@property (readonly, nonatomic) BOOL disablesClassicMode; // ivar: _disablesClassicMode
@property (readonly, nonatomic) BOOL disablesSnapshots; // ivar: _disablesSnapshots
@property (readonly, nonatomic) BOOL disallowsControlCenter; // ivar: _disallowsControlCenter
@property (readonly, nonatomic) BOOL disallowsNotificationCenter; // ivar: _disallowsNotificationCenter
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSURL *documentInboxURL; // ivar: _documentInboxURL
@property (readonly, nonatomic) NSArray *domainsToPreheat; // ivar: _domainsToPreheat
@property (readonly, nonatomic) NSUInteger dynamicApplicationShortcutItemsVersion; // ivar: _dynamicApplicationShortcutItemsVersion
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled; // ivar: _isGameCenterEnabled
@property (readonly, nonatomic) BOOL hasHiddenTag; // ivar: _hasHiddenTag
@property (readonly, copy, nonatomic) NSArray *iTunesCategoriesOrderedByRelevancy; // ivar: _iTunesCategoriesOrderedByRelevancy
@property (readonly, nonatomic) NSUInteger ignoredStatusBarStyleOverrides; // ivar: _ignoredStatusBarStyleOverrides
@property (readonly, nonatomic) NSString *installInstanceID; // ivar: _installInstanceID
@property (readonly, nonatomic, getter=isInternalApplication) BOOL internalApplication;
@property (readonly, nonatomic) NSArray *launchImageInfo; // ivar: _launchImageInfo
@property (readonly, nonatomic) NSString *launchInterfaceFileName; // ivar: _launchInterfaceFileName
@property (readonly, nonatomic, getter=isLaunchableDuringSetup) BOOL launchableDuringSetup; // ivar: _isLaunchableDuringSetup
@property (readonly, nonatomic, getter=isLicensedToDevice) BOOL licensedToDevice; // ivar: _isLicensedToDevice
@property (readonly, nonatomic) XBSnapshotContainerIdentity *manifestContainerIdentity; // ivar: _manifestContainerIdentity
@property (readonly, nonatomic, getter=isMonarchLinked) BOOL monarchLinked; // ivar: _isMonarchLinked
@property (readonly, nonatomic) int networkUsageTypes; // ivar: _networkUsageTypes
@property (readonly, nonatomic, getter=isNewsstand) BOOL newsstand; // ivar: _isNewsstand
@property (readonly, nonatomic, getter=isPeaceBLinked) BOOL peaceBLinked; // ivar: _isPeaceBLinked
@property (readonly, nonatomic, getter=isPeaceLinked) BOOL peaceLinked; // ivar: _isPeaceLinked
@property (readonly, nonatomic) BOOL prefersSavedSnapshots; // ivar: _prefersSavedSnapshots
@property (readonly, nonatomic) BOOL preventsLaunchInterfaceSplitting; // ivar: _preventsLaunchInterfaceSplitting
@property (readonly, nonatomic) BOOL representsWebApplication; // ivar: _representsWebApplication
@property (readonly, nonatomic) BOOL requiresHiDPI; // ivar: _requiresHiDPI
@property (readonly, nonatomic) NSURL *restorationArchiveContainerURL; // ivar: _restorationArchiveContainerURL
@property (readonly, nonatomic) BOOL shouldLaunchSuspendedAlways; // ivar: _alwaysLaunchesSuspended
@property (readonly, nonatomic) BOOL shouldLaunchWithLiveContentASAP; // ivar: _shouldLaunchWithLiveContentASAP
@property (readonly, nonatomic) BOOL shouldSkipCrossfadeToLive; // ivar: _shouldSkipCrossfadeToLive
@property (readonly, nonatomic, getter=isSkyLinked) BOOL skyLinked; // ivar: _isSkyLinked
@property (readonly, nonatomic) NSArray *staticApplicationShortcutItems;
@property (readonly, nonatomic, getter=isStatusBarLegacy) BOOL statusBarIsLegacy; // ivar: _statusBarIsLegacy
@property (readonly, nonatomic) NSUInteger supportedTypes; // ivar: _supportedTypes
@property (readonly, nonatomic) BOOL supports64Bit; // ivar: _supports64Bit
@property (readonly, nonatomic) BOOL supportsAudioBackgroundMode;
@property (readonly, nonatomic) BOOL supportsDirectToAirplay; // ivar: _supportsDirectToAirplay
@property (readonly, nonatomic) BOOL supportsDirectToAirplayOrIsAllowListed;
@property (readonly, nonatomic) BOOL supportsFetchBackgroundMode;
@property (readonly, nonatomic) BOOL supportsLegacyVOIPBackgroundMode;
@property (readonly, nonatomic) BOOL supportsMultiwindow; // ivar: _supportsMultiwindow
@property (readonly, nonatomic) BOOL supportsNewsstandContentBackgroundMode;
@property (readonly, nonatomic) BOOL supportsRemoteNotificationBackgroundMode;
@property (readonly, nonatomic) BOOL suppressUserNotificationPermissionAlert;
@property (readonly, nonatomic, getter=isSydneyLinked) BOOL sydneyLinked; // ivar: _isSydneyLinked
@property (readonly, nonatomic) BOOL systemAppSupportsLocalNotifications; // ivar: _systemAppSupportsLocalNotifications
@property (readonly, nonatomic, getter=isSystemApplication) BOOL systemApplication;
@property (readonly, nonatomic, getter=isTigrisLinked) BOOL tigrisLinked; // ivar: _isTigrisLinked
@property (readonly, nonatomic) BOOL triggersStoreKitMessaging; // ivar: _triggersStoreKitMessaging
@property (readonly, nonatomic) NSUInteger uninstallCapability; // ivar: _uninstallCapability
@property (readonly, nonatomic) NSSet *urlSchemes; // ivar: _urlSchemes
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL usesRLNDataProvider; // ivar: _usesRLNDataProvider
@property (readonly, nonatomic) BOOL usesSplashBoard; // ivar: _usesSplashBoard
@property (readonly, copy, nonatomic) NSString *vendorName; // ivar: _vendorName
@property (readonly, nonatomic) NSUInteger visibilityOverride; // ivar: _visibilityOverride
@property (readonly, nonatomic) NSUInteger voipClass; // ivar: _voipClass
@property (readonly, nonatomic) BOOL wantsExclusiveForeground; // ivar: _wantsExclusiveForeground
@property (readonly, nonatomic) BOOL wantsFullScreen; // ivar: _wantsFullScreen
@property (readonly, nonatomic) BOOL wantsLaunchWithoutPNG; // ivar: _wantsLaunchWithoutPNG
@property (readonly, nonatomic) BOOL wasGameCenterEverEnabled; // ivar: _wasGameCenterEverEnabled
@property (readonly, nonatomic) NSInteger whitePointAdaptivityStyle; // ivar: _whitePointAdaptivityStyle
@property (readonly, nonatomic, getter=isYukonELinked) BOOL yukonELinked; // ivar: _isYukonELinked
@property (readonly, nonatomic, getter=isYukonLinked) BOOL yukonLinked; // ivar: _isYukonLinked


+(id)_directToAirPlayBundleIDs;
-(BOOL)canChangeBackgroundStyle;
-(BOOL)statusBarHiddenWhenVerticallyCompact;
-(NSInteger)backgroundStyle;
-(NSInteger)backgroundStyleForRequestedBackgroundStyle:(NSInteger)arg0 ;
-(id)dataContainerURL;
-(void)_loadFromProxy:(id)arg0 ;


@end


#endif