// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)createPayload;
-(id)createPayloadWithCondition:(id)arg0 ;


@end


#endif