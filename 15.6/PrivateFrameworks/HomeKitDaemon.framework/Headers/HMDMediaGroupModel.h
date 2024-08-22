// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIAGROUPMODEL_H
#define HMDMEDIAGROUPMODEL_H

@class NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDMediaGroupModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *name;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)initWithUUID:(id)arg0 parentUUID:(id)arg1 name:(id)arg2 changeType:(NSUInteger)arg3 ;


@end


#endif