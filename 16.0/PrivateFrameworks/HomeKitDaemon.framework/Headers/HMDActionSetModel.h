// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACTIONSETMODEL_H
#define HMDACTIONSETMODEL_H

@class NSString, NSDate;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDActionSetModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastExecutionDate;
@property (retain, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *type;


+(Class)cd_entityClass;
+(id)cd_getMKFActionSetFromActionSet:(id)arg0 ;
+(id)cd_getMKFActionSetFromActionSetUUID:(id)arg0 ;
+(id)cd_parentReferenceName;
+(id)properties;


@end


#endif