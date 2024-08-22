// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDEVENTTRIGGERMODEL_H
#define HMDEVENTTRIGGERMODEL_H

@class NSString, NSData, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDTriggerModel.h"

@interface HMDEventTriggerModel : HMDTriggerModel <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *evaluationCondition;
@property (retain, nonatomic) NSNumber *executeOnce;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *recurrences;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)createPayload;


@end


#endif