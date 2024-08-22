// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMUTABLELEGACYCLOUDZONECONFIGURATION_H
#define HMDMUTABLELEGACYCLOUDZONECONFIGURATION_H

@class NSString;
@protocol NSMutableCopying;


#import "HMDLegacyCloudZoneConfiguration.h"

@interface HMDMutableLegacyCloudZoneConfiguration : HMDLegacyCloudZoneConfiguration <NSMutableCopying>



@property (copy) NSString *rootRecordName;


-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif