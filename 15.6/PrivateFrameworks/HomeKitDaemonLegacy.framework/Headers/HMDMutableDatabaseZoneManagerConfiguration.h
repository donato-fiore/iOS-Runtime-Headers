// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMUTABLEDATABASEZONEMANAGERCONFIGURATION_H
#define HMDMUTABLEDATABASEZONEMANAGERCONFIGURATION_H

@class HMBCloudZoneConfiguration, NSSet;


#import "HMDDatabaseZoneManagerConfiguration.h"
#import "HMDHomeKitVersion.h"

@interface HMDMutableDatabaseZoneManagerConfiguration : HMDDatabaseZoneManagerConfiguration

@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration;
@property (copy) NSSet *externalRecordTypesForSubscriptions;
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion;
@property (copy) NSSet *requiredSupportedFeatures;
@property BOOL shouldCreateZone;
@property (getter=isZoneOwner) BOOL zoneOwner;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif