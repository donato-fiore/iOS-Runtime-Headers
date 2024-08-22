// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYSETTINGGROUPMODEL_H
#define HMDACCESSORYSETTINGGROUPMODEL_H

@class NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDAccessorySettingGroupModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
+(id)schemaHashRoot;
-(void)cd_populateParentRelationshipInContext:(id)arg0 error:(*id)arg1 ;


@end


#endif