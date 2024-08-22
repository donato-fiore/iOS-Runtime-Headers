// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLEGACYCLOUDZONECONFIGURATION_H
#define HMDLEGACYCLOUDZONECONFIGURATION_H

@class HMBCloudZoneConfiguration, NSString;
@protocol NSMutableCopying;



@interface HMDLegacyCloudZoneConfiguration : HMBCloudZoneConfiguration <NSMutableCopying>



@property (copy) NSString *rootRecordName; // ivar: _rootRecordName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif