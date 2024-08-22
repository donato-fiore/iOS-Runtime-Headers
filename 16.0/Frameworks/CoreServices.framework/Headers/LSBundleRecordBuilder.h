// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSBUNDLERECORDBUILDER_H
#define LSBUNDLERECORDBUILDER_H

@class NSData, NSMutableDictionary, NSArray, NSString, NSURL, NSNumber, NSMutableSet, NSDictionary;


#import "LSRecordBuilder.h"
#import "LSRegistrationInfo.h"

@interface LSBundleRecordBuilder : LSRecordBuilder {
    unsigned int _bundleClass;
    LSRegistrationInfo *_registrationInfo;
    NSData *_bundleAlias;
    NSUInteger _bundleFlags;
    unsigned int _plistContentFlags;
    unsigned char _iconFlags;
    unsigned int _itemFlags;
    LSBundleMoreFlags _moreFlags;
    LSBundleBaseFlags _baseFlags;
    unsigned int _platform;
    unsigned int _minSystemVersionPlatform;
    unsigned int _hfsType;
    unsigned int _hfsCreator;
    NSUInteger _inode;
    BOOL _canDefineSystemExtensionPoint;
    NSMutableDictionary *_plistRarities;
    NSMutableDictionary *_commonInfoPlistEntries;
    NSArray *_supportedGameControllers;
    LSVersionNumber _sdkVersionNumber;
}


@property (readonly, nonatomic) NSArray *URLClaims; // ivar: _URLClaims
@property (readonly, nonatomic) NSArray *activityTypes; // ivar: _activityTypes
@property (readonly, nonatomic) NSArray *alternateNames; // ivar: _alternateNames
@property (readonly, nonatomic) NSString *alternatePrimaryIconName; // ivar: _alternatePrimaryIconName
@property (readonly, nonatomic) NSString *appStoreToolsBuildVersion; // ivar: _appStoreToolsBuildVersion
@property (readonly, nonatomic) NSString *appType; // ivar: _appType
@property (readonly, nonatomic) NSString *appVariant; // ivar: _appVariant
@property (readonly, nonatomic) NSString *applicationManagementDomain; // ivar: _applicationManagementDomain
@property (readonly, nonatomic) NSArray *bgPermittedIdentifiers; // ivar: _bgPermittedIdentifiers
@property (readonly, nonatomic) NSURL *bundleContainerURL; // ivar: _bundleContainerURL
@property (readonly, nonatomic) NSString *bundleName; // ivar: _bundleName
@property (readonly, nonatomic) NSArray *carPlayInstrumentClusterURLSchemes; // ivar: _carPlayInstrumentClusterURLSchemes
@property (readonly, nonatomic) NSString *categoryType; // ivar: _categoryType
@property (readonly, nonatomic) NSString *codeInfoIdentifier; // ivar: _codeInfoIdentifier
@property (readonly, nonatomic) NSNumber *compatibilityState; // ivar: _compatibilityState
@property (readonly, nonatomic) NSString *complicationPrincipalClass; // ivar: _complicationPrincipalClass
@property (readonly, nonatomic) BOOL containerized; // ivar: _containerized
@property (readonly, nonatomic) NSMutableSet *counterpartAppBundleIDs; // ivar: _counterpartAppBundleIDs
@property (readonly, nonatomic) NSURL *dataContainerURL; // ivar: _dataContainerURL
@property (readonly, nonatomic) NSArray *deviceFamily; // ivar: _deviceFamily
@property (readonly, nonatomic) NSNumber *directoryClass; // ivar: _directoryClass
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSArray *documentClaims; // ivar: _documentClaims
@property (readonly, nonatomic) NSNumber *downloaderDSID; // ivar: _downloaderDSID
@property (readonly, nonatomic) NSArray *driverExtensionPaths; // ivar: _driverExtensionPaths
@property (readonly, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (readonly, nonatomic) NSString *execPath; // ivar: _execPath
@property (readonly, nonatomic) NSArray *exportedTypes; // ivar: _exportedTypes
@property (readonly, nonatomic) NSDictionary *extensionSDK; // ivar: _extensionSDK
@property (readonly, nonatomic) NSNumber *familyID; // ivar: _familyID
@property (readonly, nonatomic) NSString *genre; // ivar: _genre
@property (readonly, nonatomic) NSNumber *genreID; // ivar: _genreID
@property (readonly, nonatomic) NSDictionary *groupContainers; // ivar: _groupContainers
@property (readonly, nonatomic) NSArray *iconFileNames; // ivar: _iconFileNames
@property (readonly, nonatomic) NSDictionary *iconsDict; // ivar: _iconsDict
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *identityUsageDescription; // ivar: _identityUsageDescription
@property (readonly, nonatomic) NSArray *importedTypes; // ivar: _importedTypes
@property (readonly, nonatomic) NSNumber *installFailureReason; // ivar: _installFailureReason
@property (readonly, nonatomic) NSNumber *installType; // ivar: _installType
@property (readonly, nonatomic) NSDictionary *intentDefinitionURLs; // ivar: _intentDefinitionURLs
@property (readonly, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (readonly, nonatomic) NSString *itemName; // ivar: _itemName
@property (readonly, nonatomic) NSArray *libraryItems; // ivar: _libraryItems
@property (readonly, nonatomic) NSString *libraryPath; // ivar: _libraryPath
@property (readonly, nonatomic) NSString *linkedParentBundleID; // ivar: _linkedParentBundleID
@property (readonly, nonatomic) NSDictionary *localizedIdentityUsageDescription; // ivar: _localizedIdentityUsageDescription
@property (readonly, nonatomic) NSDictionary *localizedMicrophoneUsageDescription; // ivar: _localizedMicrophoneUsageDescription
@property (readonly, nonatomic) NSDictionary *localizedNames; // ivar: _localizedNames
@property (readonly, nonatomic) NSDictionary *localizedShortNames; // ivar: _localizedShortNames
@property (readonly, nonatomic) NSDictionary *localizedStrings; // ivar: _localizedStrings
@property (readonly, nonatomic) NSArray *machOUUIDs; // ivar: _machOUUIDs
@property (readonly, nonatomic) NSArray *managedPersonas; // ivar: _managedPersonas
@property (readonly, nonatomic) NSString *maxSystemVersion; // ivar: _maxSystemVersion
@property (readonly, nonatomic) NSString *microphoneUsageDescription; // ivar: _microphoneUsageDescription
@property (readonly, nonatomic) NSString *minSystemVersion; // ivar: _minSystemVersion
@property (readonly) NSDictionary *mobileInstallIDs; // ivar: _mobileInstallIDs
@property (readonly, nonatomic) NSArray *parentApplicationIdentifiers; // ivar: _parentApplicationIdentifiers
@property (readonly, nonatomic) NSDictionary *pluginMIDicts; // ivar: _pluginMIDicts
@property (readonly, nonatomic) NSDictionary *pluginPlists; // ivar: _pluginPlists
@property (nonatomic) unsigned int previousInstallType; // ivar: _previousInstallType
@property (readonly, nonatomic) NSString *primaryIconName; // ivar: _primaryIconName
@property (nonatomic) unsigned char profileValidationState; // ivar: _profileValidationState
@property (readonly, nonatomic) NSNumber *purchaserDSID; // ivar: _purchaserDSID
@property (readonly, nonatomic) NSArray *queriableSchemes; // ivar: _queriableSchemes
@property (readonly, nonatomic) NSString *ratingLabel; // ivar: _ratingLabel
@property (readonly, nonatomic) NSNumber *ratingRank; // ivar: _ratingRank
@property (readonly, nonatomic) BOOL registerChildItemsTrusted; // ivar: _registerChildItemsTrusted
@property (nonatomic) unsigned char retries; // ivar: _retries
@property (readonly, nonatomic) NSDictionary *sandboxEnvironmentVariables; // ivar: _sandboxEnvironmentVariables
@property (readonly, nonatomic) NSString *sdkVersion; // ivar: _sdkVersion
@property (readonly, nonatomic) NSString *secondCategoryType; // ivar: _secondCategoryType
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) NSString *shortDisplayName; // ivar: _shortDisplayName
@property (readonly, nonatomic) NSString *shortVersionString; // ivar: _shortVersionString
@property (readonly) NSNumber *signatureVersion; // ivar: _signatureVersion
@property (readonly, nonatomic) NSString *signerIdentity; // ivar: _signerIdentity
@property (readonly, nonatomic) NSString *signerOrganization; // ivar: _signerOrganization
@property (readonly, nonatomic) NSArray *slices; // ivar: _slices
@property (readonly, nonatomic) NSString *sourceAppBundleID; // ivar: _sourceAppBundleID
@property (readonly, nonatomic) NSDictionary *stashedAppInfo; // ivar: _stashedAppInfo
@property (readonly, nonatomic) NSNumber *staticDiskUsage; // ivar: _staticDiskUsage
@property (readonly, nonatomic) NSNumber *storefront; // ivar: _storefront
@property (readonly, nonatomic) NSArray *supportedComplicationFamilies; // ivar: _supportedComplicationFamilies
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID
@property (readonly, nonatomic) NSDictionary *unlocalizedNamesWithContext; // ivar: _unlocalizedNamesWithContext
@property (readonly, nonatomic) NSString *vendorName; // ivar: _vendorName
@property (readonly, nonatomic) NSString *version; // ivar: _version
@property (readonly, nonatomic) NSNumber *versionID; // ivar: _versionID
@property (readonly, nonatomic) NSString *watchKitVersion; // ivar: _watchKitVersion
@property (readonly, nonatomic) BOOL webNotificationPlaceholder; // ivar: _webNotificationPlaceholder


-(BOOL)parseInfoPlist:(id)arg0 ;
-(BOOL)parseInstallationInfo:(id)arg0 ;
-(id)_LSBundleFlagMap;
-(id)_LSKeyTypeMap;
-(id)_LSPlistRaritiesMap;
-(id)iconsDictionaryFromDict:(id)arg0 ;
-(id)truncate:(*BOOL)arg0 queriableSchemesIfNeeded:(id)arg1 ;
-(int)activateBindings:(id)arg0 unitID:(unsigned int)arg1 bundleData:(struct LSBundleData *)arg2 ;
-(int)registerQueriableSchemes:(id)arg0 bundleData:(struct LSBundleData *)arg1 ;
-(struct LSBundleData )buildBundleData:(id)arg0 error:(*id)arg1 ;
-(unsigned int)registerBundleRecord:(id)arg0 error:(*id)arg1 ;
-(void)addBundleFlag:(NSUInteger)arg0 ;
-(void)addIconFlag:(unsigned char)arg0 ;
-(void)addItemInfoFlag:(unsigned int)arg0 ;
-(void)addPlistFlag:(unsigned int)arg0 ;
-(void)parseActivityTypesFromDictionary:(id)arg0 ;
-(void)parseArchitecturesFromDict:(id)arg0 ;
-(void)parseDeviceFamilyFromDict:(id)arg0 ;
-(void)parseIconFilenamesFromDict:(id)arg0 ;
-(void)parseNSExtensionSDKDefinitionsFromDictionary:(id)arg0 ;
-(void)parseURLClaimsFromDict:(id)arg0 ;
-(void)setCommonInfoPlistKeysFromDictionary:(id)arg0 ;
-(void)setFlagsFromDictionary:(id)arg0 ;
-(void)setRaritiesFromDictionary:(id)arg0 ;
-(void)setRegistrationInfo:(id)arg0 alias:(id)arg1 ;


@end


#endif