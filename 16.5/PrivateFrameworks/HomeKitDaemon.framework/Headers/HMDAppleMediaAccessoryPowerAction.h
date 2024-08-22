// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYPOWERACTION_H
#define HMDAPPLEMEDIAACCESSORYPOWERACTION_H

@class NSString, NSUUID;
@protocol NSSecureCoding, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol;


#import "HMDAction.h"
#import "HMDAppleMediaAccessory.h"

@interface HMDAppleMediaAccessoryPowerAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol>



@property (weak, nonatomic) HMDAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger targetSleepWakeState; // ivar: _targetSleepWakeState


+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(BOOL)isCompatibleWithAction:(id)arg0 ;
-(BOOL)isStaleWithAccessory:(id)arg0 ;
-(BOOL)isUnsecuringAction;
-(BOOL)requiresDeviceUnlock;
-(NSUInteger)type;
-(id)associatedAccessories;
-(id)attributeDescriptions;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 parent:(id)arg1 error:(*id)arg2 ;
-(id)initWithUUID:(id)arg0 accessory:(id)arg1 targetSleepWakeState:(NSUInteger)arg2 actionSet:(id)arg3 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)stateDump;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithSource:(NSUInteger)arg0 clientName:(id)arg1 completionHandler:(id)arg2 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif