// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIASYSTEMMODEL_H
#define HMDMEDIASYSTEMMODEL_H

@class NSString, NSArray, NSData;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDMediaSystemModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (copy, nonatomic) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *mediaSystemComponents;
@property (retain, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *symptoms;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
+(id)schemaHashRoot;
-(id)dependentUUIDs;


@end


#endif