// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEMANAGERHOMEMODEL_H
#define HMDHOMEMANAGERHOMEMODEL_H

@class NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"
#import "HMDHomeManagerHomeHandle.h"

@interface HMDHomeManagerHomeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDHomeManagerHomeHandle *handle;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)deriveUUIDFromHomeUUID:(id)arg0 ;
+(id)modelForHomeUUID:(id)arg0 ;
+(id)properties;


@end


#endif