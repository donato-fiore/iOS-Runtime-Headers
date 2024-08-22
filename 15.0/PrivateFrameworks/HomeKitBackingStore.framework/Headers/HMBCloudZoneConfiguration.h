// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBCLOUDZONECONFIGURATION_H
#define HMBCLOUDZONECONFIGURATION_H

@class HMFObject;



@interface HMBCloudZoneConfiguration : HMFObject

@property BOOL shouldRebuildOnManateeKeyLoss; // ivar: _shouldRebuildOnManateeKeyLoss


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif