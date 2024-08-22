// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYNETWORKPROTECTIONGROUPMODEL_H
#define HMDACCESSORYNETWORKPROTECTIONGROUPMODEL_H

@class NSNumber, NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDAccessoryNetworkProtectionGroupModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSNumber *targetProtectionMode;


+(id)modelIDForHome:(id)arg0 manufacturer:(id)arg1 category:(id)arg2 ;
+(id)modelNamespace;
+(id)properties;


@end


#endif