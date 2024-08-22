// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYSETTINGMODEL_H
#define HMDACCESSORYSETTINGMODEL_H

@class NSNumber, NSString, NSData;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDAccessorySettingModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (copy, nonatomic) NSNumber *configurationVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *properties;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSData *value;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)schemaHashRoot;


@end


#endif