// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREPOLICYMACUPDATEBRAIN_H
#define SUCOREPOLICYMACUPDATEBRAIN_H

@class NSNumber, NSString;


#import "SUCorePolicy.h"

@interface SUCorePolicyMacUpdateBrain : SUCorePolicy

@property (retain, nonatomic) NSNumber *compatibilityVersion; // ivar: _compatibilityVersion
@property (retain, nonatomic) NSString *majorTargetBuildVersion; // ivar: _majorTargetBuildVersion
@property (retain, nonatomic) NSString *minorTargetBuildVersion; // ivar: _minorTargetBuildVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)arg0 assetAudience:(id)arg1 ;
-(id)constructSoftwareUpdateMAAssetQuery;
-(id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAssetType:(id)arg0 majorTargetBuild:(id)arg1 minorTargetBuild:(id)arg2 usingPolicies:(NSInteger)arg3 usingExtensions:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)selectSoftwareUpdateMajorPrimaryAsset:(*id)arg0 majorSecondaryAsset:(*id)arg1 minorPrimaryAsset:(*id)arg2 minorSecondaryAsset:(*id)arg3 fromAssetQuery:(id)arg4 ;


@end


#endif