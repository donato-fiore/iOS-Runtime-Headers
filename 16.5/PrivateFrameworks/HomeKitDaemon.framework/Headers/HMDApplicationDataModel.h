// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLICATIONDATAMODEL_H
#define HMDAPPLICATIONDATAMODEL_H

@class NSDictionary, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDApplicationDataModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_modelWithMKFHomeManager:(id)arg0 ;
+(id)cd_parentReferenceName;
+(id)properties;
+(id)schemaHashRoot;
-(BOOL)cd_updateManagedObjectInContext:(id)arg0 error:(*id)arg1 ;
-(id)cd_childrenExcluding:(id)arg0 error:(*id)arg1 ;
-(id)cd_currentManagedObjectInContext:(id)arg0 error:(*id)arg1 ;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;


@end


#endif