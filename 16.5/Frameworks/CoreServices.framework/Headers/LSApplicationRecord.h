// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSAPPLICATIONRECORD_H
#define LSAPPLICATIONRECORD_H

@class NSArray, NSString, NSDictionary, NSSet, NSURL, NSUUID, NSData;


#import "LSBundleRecord.h"
#import "_LSLazyPropertyList.h"
#import "LSAppClipMetadata.h"
#import "_LSApplicationState.h"
#import "LSApplicationProxy.h"
#import "_LSDiskUsage.h"
#import "LSiTunesMetadata.h"
#import "LSApplicationRecord.h"
#import "LSStashedAppMetadata.h"

@interface LSApplicationRecord : LSBundleRecord

@property (readonly) NSArray *VPNPlugins;
@property (readonly) int _bundleModTime;
@property (readonly) NSString *_deviceIdentifierVendorName;
@property (readonly) NSArray *_iconFileNames;
@property (readonly) NSString *_linkedParentApplicationBundleID;
@property (readonly) NSDictionary *_localizedNamesWithContext;
@property (readonly) NSArray *_personasWithAttributes;
@property (readonly) NSString *_preferredLaunchArchitecture;
@property (readonly) NSUInteger _rawBundleFlags;
@property (readonly) _LSLazyPropertyList *_rawEnvironmentVariables;
@property (readonly) _LSLazyPropertyList *_rawIconDictionary;
@property (readonly) unsigned char _rawIconFlags;
@property (readonly) LSBundleMoreFlags _rawMoreFlags;
@property (readonly) unsigned int _rawPlistFlags;
@property (readonly, getter=isAdHocCodeSigned) BOOL adHocCodeSigned;
@property (readonly) NSDictionary *additionalEnvironmentVariables;
@property (readonly) NSString *alternateIconName;
@property (readonly) LSAppClipMetadata *appClipMetadata;
@property (readonly) NSString *appStoreToolsBuildVersion;
@property (readonly, nonatomic, getter=isAppStoreVendable) BOOL appStoreVendable;
@property (readonly) NSArray *appTags;
@property (readonly) NSUInteger applicationDSID;
@property (readonly) NSUInteger applicationDownloaderDSID;
@property (readonly) NSSet *applicationExtensionRecords;
@property (readonly) NSUInteger applicationFamilyID;
@property (readonly) BOOL applicationHasMIDBasedSINF;
@property (readonly) BOOL applicationMissingRequiredSINF;
@property (readonly) _LSApplicationState *applicationState;
@property (readonly, getter=isArcadeApp) BOOL arcadeApp;
@property (readonly) NSArray *audioComponents;
@property (readonly) NSArray *backgroundTaskSchedulerPermittedIdentifiers;
@property (readonly, getter=isBeta) BOOL beta;
@property (readonly) NSURL *bundleContainerURL;
@property (readonly) BOOL canHandleWebAuthentication;
@property (readonly) NSArray *carPlayInstrumentClusterURLSchemes;
@property (readonly) unsigned int codeSignatureVersion;
@property (readonly) NSString *companionBundleIdentifier;
@property (readonly, nonatomic) LSApplicationProxy *compatibilityObject;
@property (readonly) NSString *complicationPrincipalClassName;
@property (readonly, getter=isContainerized) BOOL containerized;
@property (readonly) NSArray *counterpartIdentifiers;
@property (readonly) BOOL defaultsToPrivateAlwaysOnDisplayTreatment;
@property (readonly, getter=isDeletable) BOOL deletable;
@property (readonly, getter=isDeletableSystemApplication) BOOL deletableSystemApplication;
@property (readonly) NSArray *deviceFamilies;
@property (readonly, nonatomic) NSUUID *deviceIdentifierForAdvertising;
@property (readonly, nonatomic) NSUUID *deviceIdentifierForVendor;
@property (readonly) NSArray *directionsModes;
@property (readonly) _LSDiskUsage *diskUsage;
@property (readonly) NSArray *driverExtensionPaths;
@property (readonly) NSString *exactBundleVersion;
@property (readonly) NSArray *externalAccessoryProtocols;
@property (readonly, getter=isFileSharingEnabled) BOOL fileSharingEnabled;
@property (readonly) BOOL hasComplication;
@property (readonly) BOOL hasCustomNotification;
@property (readonly) BOOL hasGlance;
@property (readonly) BOOL hasParallelPlaceholder;
@property (readonly) BOOL hasSettingsBundle;
@property (readonly) LSiTunesMetadata *iTunesMetadata;
@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSArray *identities;
@property (readonly) NSData *installSessionIdentifier;
@property (readonly) NSUInteger installType;
@property (readonly) NSString *jobLabel;
@property (readonly, getter=isLaunchProhibited) BOOL launchProhibited;
@property (readonly) LSApplicationRecord *linkedParentApplication;
@property (readonly, getter=isMailClient) BOOL mailClient;
@property (readonly) NSString *managementDomain;
@property (readonly) NSString *maximumSystemVersion;
@property (readonly) BOOL mayBeBUIVisible;
@property (readonly) NSString *minimumSystemVersion;
@property (readonly, getter=isPlaceholder) BOOL placeholder;
@property (readonly) NSUInteger placeholderFailureReason;
@property (readonly) NSString *regulatoryPrivacyDisclosureVersion;
@property (readonly, getter=isRemovableByInstallMachinery) BOOL removableByInstallMachinery;
@property (readonly, getter=wasRenamed) BOOL renamed;
@property (readonly) NSDictionary *requiredDeviceCapabilities;
@property (readonly) BOOL requiresNativeExecution;
@property (readonly) BOOL requiresPostProcessing;
@property (readonly) BOOL runsIndependentlyOfCompanionApp;
@property (readonly) NSUInteger sequenceNumber;
@property (readonly) NSString *shortVersionString;
@property (readonly) BOOL shouldShowSecurityPromptsOnSignIn;
@property (readonly) BOOL shouldSkipWatchAppInstall;
@property (readonly) NSArray *spotlightActions;
@property (readonly) LSStashedAppMetadata *stashedAppMetadata;
@property (readonly) NSArray *staticShortcutItems;
@property (readonly) NSArray *supportedComplicationFamilies;
@property (readonly) NSArray *supportedGameControllers;
@property (readonly) BOOL supportsAlternateIconNames;
@property (readonly) BOOL supportsAlwaysOnDisplay;
@property (readonly) BOOL supportsAudiobooks;
@property (readonly) BOOL supportsCarPlayDashboardScene;
@property (readonly) BOOL supportsCarPlayInstrumentClusterScene;
@property (readonly) BOOL supportsControllerUserInteraction;
@property (readonly) BOOL supportsExternallyPlayableContent;
@property (readonly) BOOL supportsLiveActivities;
@property (readonly) BOOL supportsLiveActivitiesFrequentUpdates;
@property (readonly) BOOL supportsMultiwindow;
@property (readonly) BOOL supportsOnDemandResources;
@property (readonly) BOOL supportsOpenInPlace;
@property (readonly) BOOL supportsPurgeableLocalStorage;
@property (readonly) BOOL supportsSessions;
@property (readonly) BOOL supportsSpotlightQueryContinuation;
@property (readonly, getter=isSwiftPlaygroundsApp) BOOL swiftPlaygroundsApp;
@property (readonly, getter=isSystemPlaceholder) BOOL systemPlaceholder;
@property (readonly) NSString *teamIdentifier;
@property (readonly) NSString *typeForInstallMachinery;
@property (readonly) NSData *uniqueInstallIdentifier;
@property (readonly, getter=isUpdate) BOOL update;
@property (readonly) NSUInteger updateAvailability;
@property (readonly) NSSet *userActivityTypes;
@property (readonly) NSString *watchKitApplicationTintColorName;
@property (readonly) unsigned char watchKitApplicationType;
@property (readonly) NSString *watchKitVersion;
@property (readonly, getter=isWatchOnly) BOOL watchOnly;
@property (readonly, getter=isWebAppPlaceholder) BOOL webAppPlaceholder;
@property (readonly, getter=isWebBrowser) BOOL webBrowser;
@property (readonly, getter=isWrapped) BOOL wrapped;
@property (readonly, getter=isWrapper) BOOL wrapper;


+(BOOL)supportsSecureCoding;
+(id)_alternateIconQueue;
+(id)_propertyClasses;
+(id)applicationRecordsForUserActivityDomainName:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)applicationRecordsForUserActivityType:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)enumeratorOnVolumeAtURL:(id)arg0 options:(NSUInteger)arg1 ;
+(id)enumeratorWithOptions:(NSUInteger)arg0 ;
+(id)personalPersonaAttributes;
+(id)systemPlaceholderEnumerator;
-(BOOL)_containerized;
-(BOOL)_usesSystemPersona;
-(BOOL)getGenericTranslocationTargetURL:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isAppStoreVendableWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(BOOL)isDeletableSystemApplicationWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(BOOL)isDeletableWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(BOOL)isSystemPlaceholderWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(NSUInteger)_containerClass;
-(NSUInteger)_rawBundleFlagsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(NSUInteger)applicationDSIDWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(NSUInteger)applicationDownloaderDSIDWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(NSUInteger)applicationFamilyIDWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(NSUInteger)compatibilityState;
-(NSUInteger)compatibilityStateWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(NSUInteger)installTypeWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(NSUInteger)placeholderFailureReasonWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)VPNPluginsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)_compatibilityObjectWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)_deviceIdentifierVendorNameWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)_iconFileNamesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)_initWithBundleIdentifier:(id)arg0 placeholder:(BOOL)arg1 error:(*id)arg2 ;
-(id)_initWithContext:(struct LSContext *)arg0 bundleID:(unsigned int)arg1 bundleData:(struct LSBundleData *)arg2 error:(*id)arg3 ;
-(id)_initWithContext:(struct LSContext *)arg0 persistentIdentifierData:(struct LSPersistentIdentifierData *)arg1 length:(NSUInteger)arg2 ;
-(id)_initWithNode:(id)arg0 bundleIdentifier:(id)arg1 context:(struct LSContext *)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 bundleBaseData:(struct LSBundleBaseData *)arg5 error:(*id)arg6 ;
-(id)_initWithNode:(id)arg0 bundleIdentifier:(id)arg1 placeholderBehavior:(NSInteger)arg2 systemPlaceholder:(BOOL)arg3 itemID:(NSUInteger)arg4 forceInBundleContainer:(BOOL)arg5 context:(struct LSContext *)arg6 error:(*id)arg7 ;
-(id)_linkedParentApplicationBundleIDWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)_localizedNamesWithContextWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)_persistentIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)_personasWithAttributesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)_preferredLaunchArchitectureWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)_rawEnvironmentVariablesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)_rawIconDictionaryWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)appClipMetadataWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)appStoreToolsBuildVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)appTagsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)applicationExtensionRecordsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)applicationStateWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)audioComponentsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)backgroundTaskSchedulerPermittedIdentifiersWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)bundleContainerURLWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)bundleMetadataReturningError:(*id)arg0 ;
-(id)bundleVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)carPlayInstrumentClusterURLSchemesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)companionBundleIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)counterpartIdentifiersWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)deviceFamiliesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)directionsModesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)diskUsageWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)driverExtensionPathsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)exactBundleVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)extensionPointRecordForIdentifier:(id)arg0 platform:(unsigned int)arg1 error:(*id)arg2 ;
-(id)externalAccessoryProtocolsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)getApplicationExtensionDiagnosticDescriptionWithError:(*id)arg0 ;
-(id)iTunesMetadataWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)iconDictionaryWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)initForInstallMachineryWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initForInstallMachineryWithBundleIdentifier:(id)arg0 placeholder:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg0 allowPlaceholder:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithBundleIdentifierOfCompanionApplication:(id)arg0 error:(*id)arg1 ;
-(id)initWithBundleIdentifierOfSystemPlaceholder:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStoreItemIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 allowPlaceholder:(BOOL)arg1 error:(*id)arg2 ;
-(id)installSessionIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)intentsRestrictedWhileLocked;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)linkedChildApplicationRecordEnumeratorWithOptions:(NSUInteger)arg0 ;
-(id)localizedNameWithContext:(id)arg0 ;
-(id)localizedNameWithContext:(id)arg0 preferredLocalizations:(id)arg1 ;
-(id)managedPersonas;
-(id)managementDomainWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)maximumSystemVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)minimumSystemVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)regulatoryPrivacyDisclosureVersionWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)requiredDeviceCapabilitiesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)shortVersionStringWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)stashedAppMetadataWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)staticShortcutItemsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)supportedGameControllersWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)supportedIntentMediaCategories;
-(id)supportedIntents;
-(id)typeForInstallMachineryWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)uniqueInstallIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(id)userActivityTypesWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(int)_bundleModTimeWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(struct LSBundleMoreFlags )_rawMoreFlagsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(unsigned char)_rawIconFlagsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(unsigned int)_rawPlistFlagsWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(struct LSBundleData *)arg3 ;
-(void)_LSRecord_resolve_compatibilityState;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(void)clearAdvertisingIdentifier;
-(void)getDeviceManagementPolicyWithCompletionHandler:(id)arg0 ;


@end


#endif