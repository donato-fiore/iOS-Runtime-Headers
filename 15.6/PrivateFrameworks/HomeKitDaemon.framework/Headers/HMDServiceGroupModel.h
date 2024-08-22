// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSERVICEGROUPMODEL_H
#define HMDSERVICEGROUPMODEL_H

@class NSString, NSArray;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDServiceGroupModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *services;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;


@end


#endif