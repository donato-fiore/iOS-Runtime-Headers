// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSAPPLICATIONPROXY_H
#define LSAPPLICATIONPROXY_H

@class NSString, NSArray, NSNumber, NSSet, NSUUID, NSProgress, NSDate, NSDictionary;
@protocol LSDetachable, NSSecureCoding;


#import "LSBundleProxy.h"
#import "LSApplicationRecord.h"
#import "_LSApplicationState.h"
#import "_LSDiskUsage.h"

@interface LSApplicationProxy : LSBundleProxy <LSDetachable, NSSecureCoding>

 {
    NSString *_deviceIdentifierVendorName;
    LSApplicationRecord *_record;
    NSArray *_plugInKitPlugins;
}


@property (readonly, nonatomic) NSNumber *ODRDiskUsage;
@property (readonly, nonatomic) NSArray *UIBackgroundModes;
@property (readonly, nonatomic) NSArray *VPNPlugins;
@property (readonly, nonatomic) NSArray *activityTypes;
@property (readonly, nonatomic, getter=isAdHocCodeSigned) BOOL adHocCodeSigned;
@property (readonly, nonatomic) NSString *appIDPrefix;
@property (readonly, nonatomic) _LSApplicationState *appState;
@property (readonly, nonatomic) NSString *appStoreToolsBuildVersion;
@property (readonly, nonatomic, getter=isAppStoreVendable) BOOL appStoreVendable;
@property (readonly, nonatomic) NSArray *appTags;
@property (readonly, nonatomic, getter=isAppUpdate) BOOL appUpdate;
@property (readonly, nonatomic) NSString *applicationDSID;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) NSString *applicationType;
@property (readonly, nonatomic) NSString *applicationVariant;
@property (readonly, nonatomic, getter=isArcadeApp) BOOL arcadeApp;
@property (readonly, nonatomic) NSArray *audioComponents;
@property (readonly, nonatomic) NSArray *backgroundTaskSchedulerPermittedIdentifiers;
@property (readonly, nonatomic, getter=isBetaApp) BOOL betaApp;
@property (readonly, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (readonly, nonatomic) int bundleModTime;
@property (readonly, nonatomic) BOOL canHandleWebAuthentication;
@property (readonly, nonatomic) NSArray *carPlayInstrumentClusterURLSchemes;
@property (readonly, nonatomic) NSSet *claimedDocumentContentTypes;
@property (readonly, nonatomic) NSSet *claimedURLSchemes;
@property (readonly, nonatomic) NSString *companionApplicationIdentifier;
@property (readonly, nonatomic) NSString *complicationPrincipalClass;
@property (readonly, nonatomic) LSApplicationRecord *correspondingApplicationRecord;
@property (readonly, nonatomic) NSArray *counterpartIdentifiers;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly, nonatomic, getter=isDeviceBasedVPP) BOOL deviceBasedVPP;
@property (readonly, nonatomic) NSArray *deviceFamily;
@property (readonly, nonatomic) NSUUID *deviceIdentifierForAdvertising;
@property (readonly, nonatomic) NSUUID *deviceIdentifierForVendor;
@property (readonly, nonatomic) NSInteger deviceManagementPolicy;
@property (readonly, nonatomic) NSArray *directionsModes;
@property (readonly, nonatomic) _LSDiskUsage *diskUsage;
@property (readonly, nonatomic) NSNumber *downloaderDSID;
@property (readonly, nonatomic) NSNumber *dynamicDiskUsage;
@property (readonly, nonatomic) NSArray *externalAccessoryProtocols;
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic) NSNumber *familyID;
@property (readonly, nonatomic) BOOL fileSharingEnabled;
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly, nonatomic) BOOL gameCenterEverEnabled;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSNumber *genreID;
@property (readonly, nonatomic) BOOL hasComplication;
@property (readonly, nonatomic) BOOL hasCustomNotification;
@property (readonly, nonatomic) BOOL hasGlance;
@property (readonly, nonatomic) BOOL hasMIDBasedSINF;
@property (readonly, nonatomic) BOOL hasParallelPlaceholder;
@property (readonly, nonatomic) BOOL hasSettingsBundle;
@property (readonly, nonatomic) BOOL iconIsPrerendered;
@property (readonly, nonatomic) BOOL iconUsesAssetCatalog;
@property (readonly, nonatomic) NSNumber *installFailureReason;
@property (readonly, nonatomic) NSProgress *installProgress;
@property (readonly, nonatomic) NSUInteger installType;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) NSNumber *itemID;
@property (readonly, nonatomic) NSString *itemName;
@property (readonly, nonatomic, getter=isLaunchProhibited) BOOL launchProhibited;
@property (readonly, nonatomic) NSArray *managedPersonas;
@property (readonly, nonatomic) NSString *maximumSystemVersion;
@property (readonly, nonatomic) NSString *minimumSystemVersion;
@property (readonly, nonatomic) BOOL missingRequiredSINF;
@property (readonly, nonatomic, getter=isNewsstandApp) BOOL newsstandApp;
@property (readonly, nonatomic) NSUInteger originalInstallType;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSArray *plugInKitPlugins;
@property (readonly, nonatomic) NSString *preferredArchitecture;
@property (readonly, nonatomic, getter=isPurchasedReDownload) BOOL purchasedReDownload;
@property (readonly, nonatomic) NSNumber *purchaserDSID;
@property (readonly, nonatomic) NSString *ratingLabel;
@property (readonly, nonatomic) NSNumber *ratingRank;
@property (readonly, nonatomic) NSDate *registeredDate;
@property (readonly, nonatomic, getter=isRemoveableSystemApp) BOOL removeableSystemApp;
@property (readonly, nonatomic, getter=isRemovedSystemApp) BOOL removedSystemApp;
@property (readonly, nonatomic) NSArray *requiredDeviceCapabilities;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic) BOOL runsIndependentlyOfCompanionApp;
@property (readonly, nonatomic) NSString *shortVersionString;
@property (readonly, nonatomic) BOOL shouldSkipWatchAppInstall;
@property (readonly, nonatomic) NSDictionary *siriActionDefinitionURLs;
@property (readonly, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, nonatomic, getter=isStandaloneWatchApp) BOOL standaloneWatchApp;
@property (readonly, nonatomic) NSNumber *staticDiskUsage;
@property (readonly, nonatomic) NSArray *staticShortcutItems;
@property (readonly, nonatomic) NSString *storeCohortMetadata;
@property (readonly, nonatomic) NSNumber *storeFront;
@property (readonly, nonatomic) NSArray *subgenres;
@property (readonly, nonatomic) NSArray *supportedComplicationFamilies;
@property (readonly, nonatomic) BOOL supportsAlternateIconNames;
@property (readonly, nonatomic) BOOL supportsAudiobooks;
@property (readonly, nonatomic) BOOL supportsExternallyPlayableContent;
@property (readonly, nonatomic) BOOL supportsMultiwindow;
@property (readonly, nonatomic) BOOL supportsODR;
@property (readonly, nonatomic) BOOL supportsOpenInPlace;
@property (readonly, nonatomic) BOOL supportsPurgeableLocalStorage;
@property (readonly, nonatomic) NSString *teamID;
@property (nonatomic) BOOL userInitiatedUninstall; // ivar: _userInitiatedUninstall
@property (readonly, nonatomic) NSString *vendorName;
@property (readonly, nonatomic, getter=isWatchKitApp) BOOL watchKitApp;
@property (readonly, nonatomic) NSString *watchKitVersion;
@property (readonly, nonatomic, getter=isWhitelisted) BOOL whitelisted;


+(BOOL)supportsSecureCoding;
+(id)applicationProxyForBundleType:(NSUInteger)arg0 identifier:(id)arg1 isCompanion:(BOOL)arg2 URL:(id)arg3 itemID:(id)arg4 bundleUnit:(*unsigned int)arg5 ;
+(id)applicationProxyForBundleURL:(id)arg0 ;
+(id)applicationProxyForCompanionIdentifier:(id)arg0 ;
+(id)applicationProxyForIdentifier:(id)arg0 ;
+(id)applicationProxyForIdentifier:(id)arg0 placeholder:(BOOL)arg1 ;
+(id)applicationProxyForIdentifier:(id)arg0 withContext:(struct LSContext *)arg1 ;
+(id)applicationProxyForItemID:(id)arg0 ;
+(id)applicationProxyForSystemPlaceholder:(id)arg0 ;
+(id)applicationProxyWithBundleUnitID:(unsigned int)arg0 withContext:(struct LSContext *)arg1 ;
-(BOOL)UPPValidated;
-(BOOL)_usesSystemPersona;
-(BOOL)freeProfileValidated;
-(BOOL)getGenericTranslocationTargetURL:(*id)arg0 error:(*id)arg1 ;
-(BOOL)profileValidated;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_initWithBundleUnit:(unsigned int)arg0 context:(struct LSContext *)arg1 bundleIdentifier:(id)arg2 ;
-(id)_initWithContext:(struct LSContext *)arg0 bundleUnit:(unsigned int)arg1 applicationRecord:(id)arg2 bundleID:(id)arg3 resolveAndDetach:(BOOL)arg4 ;
-(id)_localizedNameWithPreferredLocalizations:(id)arg0 useShortNameOnly:(BOOL)arg1 ;
-(id)alternateIconName;
-(id)bundleType;
-(id)dataContainerURL;
-(id)description;
-(id)environmentVariables;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)getBundleMetadata;
-(id)groupContainerURLs;
-(id)handlerRankOfClaimForContentType:(id)arg0 ;
-(id)iconDataForVariant:(int)arg0 ;
-(id)iconDataForVariant:(int)arg0 withOptions:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedNameForContext:(id)arg0 ;
-(id)localizedNameForContext:(id)arg0 preferredLocalizations:(id)arg1 ;
-(id)localizedNameForContext:(id)arg0 preferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)primaryIconDataForVariant:(int)arg0 ;
-(id)signerIdentity;
-(id)signerOrganization;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)clearAdvertisingIdentifier;
-(void)detach;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getDeviceManagementPolicyWithCompletionHandler:(id)arg0 ;
-(void)setAlternateIconName:(id)arg0 withResult:(id)arg1 ;


@end


#endif