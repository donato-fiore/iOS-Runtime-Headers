// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDEVICEMODEL_H
#define HMDDEVICEMODEL_H

@class NSArray, NSUUID, NSString, HMFProductInfo;


#import "HMDBackingStoreModelObject.h"
#import "HMDRPIdentity.h"
#import "HMDHomeKitVersion.h"

@interface HMDDeviceModel : HMDBackingStoreModelObject

@property (readonly, nonatomic) NSArray *deviceHandles;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) HMFProductInfo *productInfo;
@property (copy, nonatomic) HMDRPIdentity *rpIdentity;
@property (copy, nonatomic) HMDHomeKitVersion *version;


+(id)properties;
+(id)schemaHashRoot;
-(BOOL)diff:(id)arg0 differingFields:(*id)arg1 ;


@end


#endif