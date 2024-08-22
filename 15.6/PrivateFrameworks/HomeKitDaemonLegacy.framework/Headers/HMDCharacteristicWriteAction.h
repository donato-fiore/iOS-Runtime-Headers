// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCHARACTERISTICWRITEACTION_H
#define HMDCHARACTERISTICWRITEACTION_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, HMDBackingStoreObjectProtocol;


#import "HMDAction.h"
#import "HMDCharacteristic.h"

@interface HMDCharacteristicWriteAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>



@property (readonly, nonatomic) NSDictionary *actionInformation; // ivar: _actionInformation
@property (readonly, weak, nonatomic) HMDCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *dumpState; // ivar: _dumpState
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *targetValue; // ivar: _targetValue


+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
-(BOOL)isActionForCharacteristic:(id)arg0 ;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(BOOL)isSecureAction;
-(BOOL)isUnsecuringAction;
-(BOOL)requiresDeviceUnlock;
-(NSUInteger)entitlementsForNotification;
-(NSUInteger)type;
-(id)associatedAccessories;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 characteristic:(id)arg1 targetValue:(id)arg2 actionSet:(id)arg3 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)stateDump;
-(void)_processWriteActionModelUpdated:(id)arg0 message:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceCharacteristic:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif