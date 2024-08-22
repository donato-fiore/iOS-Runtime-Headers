// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBMUTABLECLOUDZONECONFIGURATION_H
#define HMBMUTABLECLOUDZONECONFIGURATION_H

@protocol NSCopying, NSMutableCopying;


#import "HMBCloudZoneConfiguration.h"

@interface HMBMutableCloudZoneConfiguration : HMBCloudZoneConfiguration <NSCopying, NSMutableCopying>



@property BOOL shouldRebuildOnManateeKeyLoss;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif