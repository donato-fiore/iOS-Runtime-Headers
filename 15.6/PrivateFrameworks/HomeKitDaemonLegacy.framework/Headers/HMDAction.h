// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACTION_H
#define HMDACTION_H

@class HMFObject, NSArray, NSString, NSDictionary, NSUUID;
@protocol NSSecureCoding, HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging;


#import "HMDActionSet.h"

@interface HMDAction : HMFObject <NSSecureCoding, HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging>



@property (weak, nonatomic) HMDActionSet *actionSet; // ivar: _actionSet
@property (readonly, copy) NSArray *associatedAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger entitlementsForNotification;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isUnsecuringAction;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property (readonly) BOOL requiresDeviceUnlock;
@property (readonly, nonatomic) NSString *stateDump;
@property (readonly) Class superclass;
@property (readonly) NSUInteger type;
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(id)attributeDescriptions;
-(id)backingStoreObjectsWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 actionSet:(id)arg1 ;
-(id)logIdentifier;
-(id)modelBackedObjects;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(void)configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithSource:(NSUInteger)arg0 clientName:(id)arg1 completionHandler:(id)arg2 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateActionSetIfNil:(id)arg0 ;


@end


#endif