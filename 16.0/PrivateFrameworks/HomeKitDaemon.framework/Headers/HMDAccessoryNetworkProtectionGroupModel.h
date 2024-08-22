// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYNETWORKPROTECTIONGROUPMODEL_H
#define HMDACCESSORYNETWORKPROTECTIONGROUPMODEL_H

@class NSNumber, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDAccessoryNetworkProtectionGroupModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (copy, nonatomic) NSNumber *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *manufacturer;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *targetProtectionMode;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)modelIDForHome:(id)arg0 manufacturer:(id)arg1 category:(id)arg2 ;
+(id)modelNamespace;
+(id)properties;


@end


#endif