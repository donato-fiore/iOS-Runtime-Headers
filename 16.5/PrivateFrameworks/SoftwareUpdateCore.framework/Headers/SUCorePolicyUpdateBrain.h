// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREPOLICYUPDATEBRAIN_H
#define SUCOREPOLICYUPDATEBRAIN_H

@class NSNumber;


#import "SUCorePolicy.h"

@interface SUCorePolicyUpdateBrain : SUCorePolicy

@property (retain, nonatomic) NSNumber *compatibilityVersion; // ivar: _compatibilityVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)constructSoftwareUpdateMAAssetQuery;
-(id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg0 documentationAssetType:(id)arg1 usingExtensions:(id)arg2 ;
-(id)initWithSoftwareUpdateAssetType:(id)arg0 documentationAssetType:(id)arg1 usingPolicies:(NSInteger)arg2 usingExtensions:(id)arg3 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)selectSoftwareUpdatePrimaryAsset:(*id)arg0 secondaryAsset:(*id)arg1 fromAssetQuery:(id)arg2 ;


@end


#endif