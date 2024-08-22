// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDEVICEMODEL_H
#define HMDDEVICEMODEL_H

@class NSString, NSArray, NSUUID, HMFProductInfo;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"
#import "HMDRPIdentity.h"
#import "HMDHomeKitVersion.h"

@interface HMDDeviceModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *deviceHandles;
@property (copy, nonatomic) NSArray *handles;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) HMFProductInfo *productInfo;
@property (copy, nonatomic) HMDRPIdentity *rpIdentity;
@property (readonly) Class superclass;
@property (copy, nonatomic) HMDHomeKitVersion *version;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
+(id)schemaHashRoot;
-(BOOL)diff:(id)arg0 differingFields:(*id)arg1 ;
-(id)cd_childrenExcluding:(id)arg0 error:(*id)arg1 ;


@end


#endif