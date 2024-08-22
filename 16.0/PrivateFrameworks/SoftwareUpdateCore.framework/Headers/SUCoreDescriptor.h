// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREDESCRIPTOR_H
#define SUCOREDESCRIPTOR_H

@class NSString, NSDictionary, MAAsset, MAAbsoluteAssetId, SUCoreMAIdentifier, NSData, NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SUCoreDocumentation.h"

@interface SUCoreDescriptor : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *alternateAssetAudienceUUID; // ivar: _alternateAssetAudienceUUID
@property (retain, nonatomic) NSString *assetAudienceUUID; // ivar: _assetAudienceUUID
@property (retain, nonatomic) NSString *assetID; // ivar: _assetID
@property (nonatomic) BOOL autoDownloadAllowableOverCellular; // ivar: _autoDownloadAllowableOverCellular
@property (nonatomic) NSUInteger autoInstallDelay; // ivar: _autoInstallDelay
@property (nonatomic) BOOL autoUpdateEnabled; // ivar: _autoUpdateEnabled
@property (retain, nonatomic) NSDictionary *bundleAttributes; // ivar: _bundleAttributes
@property (nonatomic) BOOL containsSFRContent; // ivar: _containsSFRContent
@property (nonatomic) BOOL criticalCellularOverride; // ivar: _criticalCellularOverride
@property (nonatomic) BOOL criticalOutOfBoxOnly; // ivar: _criticalOutOfBoxOnly
@property (nonatomic) BOOL criticalUpdate; // ivar: _criticalUpdate
@property (nonatomic) NSInteger descriptorAudienceType; // ivar: _descriptorAudienceType
@property (nonatomic) NSInteger descriptorType; // ivar: _descriptorType
@property (nonatomic) BOOL disableAppDemotion; // ivar: _disableAppDemotion
@property (nonatomic) BOOL disableCDLevel4; // ivar: _disableCDLevel4
@property (nonatomic) BOOL disableInstallTonight; // ivar: _disableInstallTonight
@property (readonly, nonatomic) BOOL disableRecoveryOSUpdates; // ivar: _disableRecoveryOSUpdates
@property (nonatomic) BOOL disableRosettaUpdates; // ivar: _disableRosettaUpdates
@property (nonatomic) BOOL disableSiriVoiceDeletion; // ivar: _disableSiriVoiceDeletion
@property (retain, nonatomic) SUCoreDocumentation *documentation; // ivar: _documentation
@property (retain, nonatomic) MAAsset *documentationAsset; // ivar: _documentationAsset
@property (retain, nonatomic) MAAbsoluteAssetId *documentationAssetAbsoluteID; // ivar: _documentationAssetAbsoluteID
@property (retain, nonatomic) SUCoreMAIdentifier *documentationAssetIdentifier; // ivar: _documentationAssetIdentifier
@property (retain, nonatomic) NSString *documentationAssetPurpose; // ivar: _documentationAssetPurpose
@property (retain, nonatomic) NSString *documentationAssetType; // ivar: _documentationAssetType
@property (retain, nonatomic) NSString *documentationID; // ivar: _documentationID
@property (nonatomic) BOOL downloadAllowableOverCellular; // ivar: _downloadAllowableOverCellular
@property (nonatomic) NSUInteger downloadSize; // ivar: _downloadSize
@property (nonatomic) BOOL downloadable; // ivar: _downloadable
@property (nonatomic) BOOL enableAlternateAssetAudience; // ivar: _enableAlternateAssetAudience
@property (readonly, nonatomic) BOOL fullReplacement;
@property (nonatomic) NSInteger hideInstallAlert; // ivar: _hideInstallAlert
@property (readonly, retain, nonatomic) NSString *humanReadableMoreInfoLink;
@property (readonly, retain, nonatomic) NSString *humanReadableUpdateName;
@property (nonatomic) NSUInteger installationSize; // ivar: _installationSize
@property (retain, nonatomic) NSString *lastEmergencyBuild; // ivar: _lastEmergencyBuild
@property (retain, nonatomic) NSString *lastEmergencyOSVersion; // ivar: _lastEmergencyOSVersion
@property (nonatomic) BOOL mandatoryUpdateEligible; // ivar: _mandatoryUpdateEligible
@property (nonatomic) BOOL mandatoryUpdateOptional; // ivar: _mandatoryUpdateOptional
@property (nonatomic) BOOL mandatoryUpdateRestrictedToOutOfTheBox; // ivar: _mandatoryUpdateRestrictedToOutOfTheBox
@property (retain, nonatomic) NSString *mandatoryUpdateVersionMax; // ivar: _mandatoryUpdateVersionMax
@property (retain, nonatomic) NSString *mandatoryUpdateVersionMin; // ivar: _mandatoryUpdateVersionMin
@property (nonatomic) NSUInteger mdmDelayInterval; // ivar: _mdmDelayInterval
@property (retain, nonatomic) NSData *measurement; // ivar: _measurement
@property (retain, nonatomic) NSString *measurementAlgorithm; // ivar: _measurementAlgorithm
@property (retain, nonatomic) NSString *minimumBridgeVersion; // ivar: _minimumBridgeVersion
@property (nonatomic) NSUInteger minimumSystemPartitionSize; // ivar: _minimumSystemPartitionSize
@property (nonatomic) NSUInteger msuPrepareSize; // ivar: _msuPrepareSize
@property (readonly, retain, nonatomic) NSString *notificationBodyString;
@property (readonly, nonatomic) BOOL notificationEnabled;
@property (readonly, retain, nonatomic) NSString *notificationTitleString;
@property (nonatomic) BOOL notifyAfter; // ivar: _notifyAfter
@property (nonatomic) NSInteger preferredUpdateType; // ivar: _preferredUpdateType
@property (readonly, nonatomic) NSUInteger preparationSize;
@property (retain, nonatomic) NSString *prerequisiteBuild; // ivar: _prerequisiteBuild
@property (retain, nonatomic) NSString *prerequisiteOSVersion; // ivar: _prerequisiteOSVersion
@property (retain, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (retain, nonatomic) NSString *productSystemName; // ivar: _productSystemName
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (nonatomic) BOOL promoteAlternateUpdate; // ivar: _promoteAlternateUpdate
@property (retain, nonatomic) NSString *publisher; // ivar: _publisher
@property (nonatomic) BOOL rampEnabled; // ivar: _rampEnabled
@property (retain, nonatomic) NSString *rawProductVersion; // ivar: _rawProductVersion
@property (retain, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (retain, nonatomic) NSString *releaseType; // ivar: _releaseType
@property (readonly, nonatomic) BOOL requireInstallAssistantUpdate; // ivar: _requireInstallAssistantUpdate
@property (retain, nonatomic) NSString *restoreVersion; // ivar: _restoreVersion
@property (readonly, nonatomic) BOOL revoked; // ivar: _revoked
@property (retain, nonatomic) NSData *rsepDigest; // ivar: _rsepDigest
@property (retain, nonatomic) NSData *rsepTBMDigests; // ivar: _rsepTBMDigests
@property (readonly, nonatomic) BOOL semiSplatEnabled; // ivar: _semiSplatEnabled
@property (readonly, retain, nonatomic) NSArray *semiSplatMustQuitApps; // ivar: _semiSplatMustQuitApps
@property (retain, nonatomic) NSData *sepDigest; // ivar: _sepDigest
@property (retain, nonatomic) NSData *sepTBMDigests; // ivar: _sepTBMDigests
@property (retain, nonatomic) NSString *setupCritical; // ivar: _setupCritical
@property (retain, nonatomic) MAAsset *softwareUpdateAsset; // ivar: _softwareUpdateAsset
@property (retain, nonatomic) MAAbsoluteAssetId *softwareUpdateAssetAbsoluteID; // ivar: _softwareUpdateAssetAbsoluteID
@property (retain, nonatomic) SUCoreMAIdentifier *softwareUpdateAssetIdentifier; // ivar: _softwareUpdateAssetIdentifier
@property (retain, nonatomic) NSString *softwareUpdateAssetPurpose; // ivar: _softwareUpdateAssetPurpose
@property (retain, nonatomic) NSString *softwareUpdateAssetType; // ivar: _softwareUpdateAssetType
@property (retain, nonatomic) NSString *softwareUpdateURL; // ivar: _softwareUpdateURL
@property (readonly, nonatomic) BOOL splatOnly; // ivar: _splatOnly
@property (nonatomic) BOOL streamingZipCapable; // ivar: _streamingZipCapable
@property (retain, nonatomic) NSArray *supportedDevices; // ivar: _supportedDevices
@property (retain, nonatomic) NSDictionary *systemPartitionPadding; // ivar: _systemPartitionPadding
@property (retain, nonatomic) NSString *targetUpdateBridgeVersion; // ivar: _targetUpdateBridgeVersion
@property (retain, nonatomic) NSString *targetUpdateSFRVersion; // ivar: _targetUpdateSFRVersion
@property (readonly, nonatomic) NSUInteger totalRequiredFreeSpace;
@property (nonatomic) NSUInteger unarchivedSize; // ivar: _unarchivedSize
@property (retain, nonatomic) NSString *uniqueBuildID; // ivar: _uniqueBuildID
@property (retain, nonatomic) NSString *updateBrainPath; // ivar: _updateBrainPath
@property (retain, nonatomic) NSString *updateBundlePath; // ivar: _updateBundlePath
@property (nonatomic) NSInteger updateType; // ivar: _updateType


+(BOOL)isEmergencyUpdate:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)cleanProductVersion:(id)arg0 ;
+(id)nameForDescriptorAudienceType:(NSInteger)arg0 ;
+(id)nameForDescriptorPreferredUpdateType:(NSInteger)arg0 ;
+(id)nameForDescriptorType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)requiresDocumentationReload;
-(BOOL)requiresSoftwareUpdateAssetReload;
-(id)criticalOverrideCellularPolicy;
-(id)description;
-(id)getMADocumentationAsset;
-(id)getMASoftwareUpdateAsset;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSUAsset:(id)arg0 releaseDate:(id)arg1 defaultValues:(id)arg2 ;
-(id)initWithUpdateBrainPath:(id)arg0 updateBundlePath:(id)arg1 bundleAttributes:(id)arg2 ;
-(id)initWithUpdateBrainPath:(id)arg0 updateBundlePath:(id)arg1 bundleAttributes:(id)arg2 descriptorType:(NSInteger)arg3 ;
-(id)overview;
-(id)overviewWithMaxValueLength:(NSUInteger)arg0 providingSubstitutionMap:(id)arg1 ;
-(id)summary;
-(void)assignDescriptorAudienceType:(NSInteger)arg0 descriptorPreferredUpdateType:(NSInteger)arg1 assetAudienceUUID:(id)arg2 ;
-(void)assignDocumentationFromAsset:(id)arg0 ;
-(void)assignDocumentationFromAsset:(id)arg0 extendingBundleProperties:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transferNonAssetPropertiesFromDescriptor:(id)arg0 ;


@end


#endif