// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREPOLICYMACRECOVERYOSUPDATE_H
#define SUCOREPOLICYMACRECOVERYOSUPDATE_H

@class NSString;


#import "SUCorePolicy.h"

@interface SUCorePolicyMacRecoveryOSUpdate : SUCorePolicy

@property (retain, nonatomic) NSString *installedRecoveryOSBuildVersion; // ivar: _installedRecoveryOSBuildVersion
@property (retain, nonatomic) NSString *installedRecoveryOSProductVersion; // ivar: _installedRecoveryOSProductVersion
@property (retain, nonatomic) NSString *installedRecoveryOSReleaseType; // ivar: _installedRecoveryOSReleaseType
@property (retain, nonatomic) NSString *installedRecoveryOSRestoreVersion; // ivar: _installedRecoveryOSRestoreVersion
@property (retain, nonatomic) NSString *installedSFRRestoreVersion; // ivar: _installedSFRRestoreVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)arg0 assetAudience:(id)arg1 ;
-(id)constructSoftwareUpdateMAAssetQuery;
-(id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAssetType:(id)arg0 targetRestoreVersion:(id)arg1 usingPolicies:(NSInteger)arg2 usingExtensions:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)selectSoftwareUpdatePrimaryAsset:(*id)arg0 secondaryAsset:(*id)arg1 fromAssetQuery:(id)arg2 ;


@end


#endif