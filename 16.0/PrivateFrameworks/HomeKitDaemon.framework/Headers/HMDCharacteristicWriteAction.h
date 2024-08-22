// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCHARACTERISTICWRITEACTION_H
#define HMDCHARACTERISTICWRITEACTION_H

@class NSUUID, NSDictionary, NSNumber, NSString;
@protocol NSSecureCoding, HMDBackingStoreObjectProtocol;


#import "HMDAction.h"
#import "HMDHAPAccessory.h"
#import "HMDCharacteristic.h"
#import "HMDHome.h"

@interface HMDCharacteristicWriteAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>



@property (readonly) HMDHAPAccessory *accessory;
@property (readonly, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, nonatomic) NSDictionary *actionInformation; // ivar: _actionInformation
@property (readonly, weak, nonatomic) HMDCharacteristic *characteristic;
@property (readonly, nonatomic) NSNumber *characteristicID; // ivar: _characteristicID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *dumpState; // ivar: _dumpState
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSNumber *serviceID; // ivar: _serviceID
@property (readonly) Class superclass;
@property (copy, nonatomic) id *targetValue; // ivar: _targetValue


+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
-(BOOL)isActionForCharacteristic:(id)arg0 ;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(BOOL)isSecureAction;
-(BOOL)isStaleWithAccessory:(id)arg0 ;
-(BOOL)isUnsecuringAction;
-(BOOL)requiresDeviceUnlock;
-(NSUInteger)entitlementsForNotification;
-(NSUInteger)type;
-(id)associatedAccessories;
-(id)attributeDescriptions;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 accessoryUUID:(id)arg1 serviceIID:(id)arg2 characteristicIID:(id)arg3 targetValue:(id)arg4 actionSet:(id)arg5 ;
-(id)initWithUUID:(id)arg0 characteristic:(id)arg1 targetValue:(id)arg2 actionSet:(id)arg3 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)stateDump;
-(void)_processWriteActionModelUpdated:(id)arg0 message:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif