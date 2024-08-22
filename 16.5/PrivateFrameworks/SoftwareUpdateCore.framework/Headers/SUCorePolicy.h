// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREPOLICY_H
#define SUCOREPOLICY_H

@class NSString, NSDictionary, NSData, NSNumber, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SUCorePolicyApply.h"
#import "SUCorePolicyDocumentationDownload.h"
#import "SUCorePolicyDocumentationScan.h"
#import "SUCorePolicyPreflightDownloadSU.h"
#import "SUCorePolicyPreflightFDRRecovery.h"
#import "SUCorePolicyLoadBrain.h"
#import "SUCorePolicyPreflightPersonalize.h"
#import "SUCorePolicyPrepare.h"
#import "SUCorePolicyPreflightPrerequisiteCheck.h"
#import "SUCorePolicyResume.h"
#import "SUCorePolicyRollback.h"
#import "SUCorePolicySoftwareUpdateDownload.h"
#import "SUCorePolicySoftwareUpdateScan.h"
#import "SUCorePolicySuspend.h"
#import "SUCorePolicyPreflightWakeup.h"

@interface SUCorePolicy : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowSameVersion; // ivar: _allowSameVersion
@property (nonatomic) BOOL allowsCellular; // ivar: _allowsCellular
@property (retain, nonatomic) NSString *alternateAssetAudienceUUID; // ivar: _alternateAssetAudienceUUID
@property (retain, nonatomic) SUCorePolicyApply *applyPolicy; // ivar: _applyPolicy
@property (retain, nonatomic) NSString *assetAudienceUUID; // ivar: _assetAudienceUUID
@property (nonatomic) BOOL background; // ivar: _background
@property (retain, nonatomic) NSString *bridgeOSDownloadDirectory; // ivar: _bridgeOSDownloadDirectory
@property (nonatomic) BOOL bridgeOSIgnoreMinimumVersionCheck; // ivar: _bridgeOSIgnoreMinimumVersionCheck
@property (nonatomic) int cacheDeleteUrgency; // ivar: _cacheDeleteUrgency
@property (nonatomic) BOOL checkAvailableSpace; // ivar: _checkAvailableSpace
@property (retain, nonatomic) NSDictionary *defaultDescriptorValues; // ivar: _defaultDescriptorValues
@property (retain, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (nonatomic) BOOL disableAlternateUpdate; // ivar: _disableAlternateUpdate
@property (retain, nonatomic) NSString *documentationAssetType; // ivar: _documentationAssetType
@property (retain, nonatomic) SUCorePolicyDocumentationDownload *documentationDownloadPolicy; // ivar: _documentationDownloadPolicy
@property (retain, nonatomic) SUCorePolicyDocumentationScan *documentationScanPolicy; // ivar: _documentationScanPolicy
@property (retain, nonatomic) NSString *downloadAuthorizationHeader; // ivar: _downloadAuthorizationHeader
@property (retain, nonatomic) SUCorePolicyPreflightDownloadSU *downloadPreflightPolicy; // ivar: _downloadPreflightPolicy
@property (nonatomic) BOOL enableBridgeOSInstall; // ivar: _enableBridgeOSInstall
@property (nonatomic) BOOL enableEmbeddedOSInstall; // ivar: _enableEmbeddedOSInstall
@property (nonatomic) BOOL enableOSPersonalization; // ivar: _enableOSPersonalization
@property (retain, nonatomic) SUCorePolicyPreflightFDRRecovery *fdrRecoveryPreflightPolicy; // ivar: _fdrRecoveryPreflightPolicy
@property (retain, nonatomic) NSString *hwModelStr; // ivar: _hwModelStr
@property (retain, nonatomic) NSString *installedSFRVersion; // ivar: _installedSFRVersion
@property (nonatomic) BOOL isInternal; // ivar: _isInternal
@property (retain, nonatomic) SUCorePolicyLoadBrain *loadBrainPolicy; // ivar: _loadBrainPolicy
@property (retain, nonatomic) NSData *localAuthenticationContext; // ivar: _localAuthenticationContext
@property (retain, nonatomic) NSNumber *localAuthenticationUserID; // ivar: _localAuthenticationUserID
@property (nonatomic) BOOL performPreflightEncryptedCheck; // ivar: _performPreflightEncryptedCheck
@property (nonatomic) BOOL performPreflightSnapshotCheck; // ivar: _performPreflightSnapshotCheck
@property (retain, nonatomic) NSString *personalizationServerURL; // ivar: _personalizationServerURL
@property (retain, nonatomic) SUCorePolicyPreflightPersonalize *personalizePreflightPolicy; // ivar: _personalizePreflightPolicy
@property (retain, nonatomic) NSString *personalizedManifestRootsPath; // ivar: _personalizedManifestRootsPath
@property (retain, nonatomic) NSArray *policyExtensions; // ivar: _policyExtensions
@property (retain, nonatomic) SUCorePolicyPrepare *preparePolicy; // ivar: _preparePolicy
@property (retain, nonatomic) NSString *prerequisiteBuildVersion; // ivar: _prerequisiteBuildVersion
@property (retain, nonatomic) SUCorePolicyPreflightPrerequisiteCheck *prerequisiteCheckPreflightPolicy; // ivar: _prerequisiteCheckPreflightPolicy
@property (retain, nonatomic) NSString *prerequisiteProductVersion; // ivar: _prerequisiteProductVersion
@property (retain, nonatomic) NSString *prerequisiteRestoreVersion; // ivar: _prerequisiteRestoreVersion
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *proxyHostName; // ivar: _proxyHostName
@property (retain, nonatomic) NSNumber *proxyPortNumber; // ivar: _proxyPortNumber
@property (nonatomic) int qualityOfService; // ivar: _qualityOfService
@property (retain, nonatomic) NSString *releaseType; // ivar: _releaseType
@property (nonatomic) BOOL restrictToFull; // ivar: _restrictToFull
@property (retain, nonatomic) SUCorePolicyResume *resumePolicy; // ivar: _resumePolicy
@property (retain, nonatomic) SUCorePolicyRollback *rollbackPolicy; // ivar: _rollbackPolicy
@property (nonatomic) BOOL skipVolumeSealing; // ivar: _skipVolumeSealing
@property (retain, nonatomic) NSString *softwareUpdateAssetType; // ivar: _softwareUpdateAssetType
@property (retain, nonatomic) SUCorePolicySoftwareUpdateDownload *softwareUpdateDownloadPolicy; // ivar: _softwareUpdateDownloadPolicy
@property (retain, nonatomic) SUCorePolicySoftwareUpdateScan *softwareUpdateScanPolicy; // ivar: _softwareUpdateScanPolicy
@property NSInteger specifiedUsedPolicies; // ivar: _specifiedUsedPolicies
@property (retain, nonatomic) NSData *ssoToken; // ivar: _ssoToken
@property (retain, nonatomic) SUCorePolicySuspend *suspendPolicy; // ivar: _suspendPolicy
@property (retain, nonatomic) NSString *targetRestoreVersion; // ivar: _targetRestoreVersion
@property (retain, nonatomic) NSString *targetVolumeUUID; // ivar: _targetVolumeUUID
@property (retain, nonatomic) NSString *updateBrainLocationOverride; // ivar: _updateBrainLocationOverride
@property (retain, nonatomic) NSString *updateMetricContext; // ivar: _updateMetricContext
@property (retain, nonatomic) NSDictionary *updateMetricEventFields; // ivar: _updateMetricEventFields
@property (retain, nonatomic) NSString *updateVolumePath; // ivar: _updateVolumePath
@property (retain, nonatomic) NSString *userAgentString; // ivar: _userAgentString
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated
@property (retain, nonatomic) SUCorePolicyPreflightWakeup *wakeupPreflightPolicy; // ivar: _wakeupPreflightPolicy


+(BOOL)getAllowSameProductVersionPredicateResultWithAssetOSVersion:(id)arg0 assetBuildVersion:(id)arg1 prerequisiteProductVersion:(id)arg2 prerequisiteBuildVersion:(id)arg3 ;
+(BOOL)getNoAllowSameProductVersionPredicateResultWithAssetOSVersion:(id)arg0 assetBuildVersion:(id)arg1 prerequisiteProductVersion:(id)arg2 prerequisiteBuildVersion:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)_cleanProductVersion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRequestedPMVSupervisedPolicy;
-(BOOL)isSplatPolicy;
-(BOOL)isSupervisedPolicy;
-(NSInteger)delayPeriodDays;
-(id)_copyGestaltValueForKey:(struct __CFString *)arg0 ;
-(id)assetTypeSummary;
-(id)constructDocumentationMAAssetQueryWithDocID:(id)arg0 purpose:(id)arg1 ;
-(id)constructMADocumentationAssetDownloadOptionsWithUUID:(id)arg0 ;
-(id)constructMADocumentationCatalogDownloadOptionsWithUUID:(id)arg0 usingDescriptor:(id)arg1 ;
-(id)constructMASoftwareUpdateAssetDownloadOptionsWithUUID:(id)arg0 ;
-(id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)arg0 assetAudience:(id)arg1 ;
-(id)constructSoftwareUpdateMAAssetQuery;
-(id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg0 documentationAssetType:(id)arg1 updateBrainAssetType:(id)arg2 usingExtensions:(id)arg3 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg0 documentationAssetType:(id)arg1 usingExtensions:(id)arg2 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg0 documentationAssetType:(id)arg1 usingPolicies:(NSInteger)arg2 usingExtensions:(id)arg3 ;
-(id)mdmPathName;
-(id)requestedProductMarketingVersion;
-(id)stringForQoS:(int)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)selectDocumentationAsset:(*id)arg0 fromAssetQuery:(id)arg1 ;
-(void)selectSoftwareUpdateMajorPrimaryAsset:(*id)arg0 majorSecondaryAsset:(*id)arg1 minorPrimaryAsset:(*id)arg2 minorSecondaryAsset:(*id)arg3 fromAssetQuery:(id)arg4 ;
-(void)selectSoftwareUpdatePrimaryAsset:(*id)arg0 secondaryAsset:(*id)arg1 fromAssetQuery:(id)arg2 ;
-(void)updateApplyOptionsWithExtensions:(id)arg0 ;
-(void)updateRollbackOptionsWithExtensions:(id)arg0 ;


@end


#endif