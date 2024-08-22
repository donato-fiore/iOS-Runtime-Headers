// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYSETTINGCONSTRAINTMODEL_H
#define HMDACCESSORYSETTINGCONSTRAINTMODEL_H

@class NSString, NSNumber, NSData;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDAccessorySettingConstraintModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSData *value;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
+(id)schemaHashRoot;


@end


#endif