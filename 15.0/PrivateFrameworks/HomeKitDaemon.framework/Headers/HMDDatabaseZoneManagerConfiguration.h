// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDATABASEZONEMANAGERCONFIGURATION_H
#define HMDDATABASEZONEMANAGERCONFIGURATION_H

@class HMFObject, HMBCloudZoneConfiguration, NSSet;
@protocol NSCopying, NSMutableCopying;


#import "HMDHomeKitVersion.h"

@interface HMDDatabaseZoneManagerConfiguration : HMFObject <NSCopying, NSMutableCopying>



@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration; // ivar: _cloudZoneConfiguration
@property (copy) NSSet *externalRecordTypesForSubscriptions; // ivar: _externalRecordTypesForSubscriptions
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion; // ivar: _minimumHomeKitVersion
@property (copy) NSSet *requiredSupportedFeatures; // ivar: _requiredSupportedFeatures
@property BOOL shouldCreateZone; // ivar: _shouldCreateZone
@property (getter=isZoneOwner) BOOL zoneOwner; // ivar: _zoneOwner


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif