// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPCHARACTERISTIC_H
#define HAPCHARACTERISTIC_H

@class HMFObject, CBCharacteristic, NSString, NSNumber, NSData, NSDate;
@protocol HAP2CharacteristicTupleValue, HMFMerging, NSCopying;


#import "HAPCharacteristicMetadata.h"
#import "HAPService.h"

@interface HAPCharacteristic : HMFObject <HAP2CharacteristicTupleValue, HMFMerging, NSCopying>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) HAPCharacteristicMetadata *accessoryMetadata; // ivar: _accessoryMetadata
@property (retain, nonatomic, setter=setCBCharacteristic:) CBCharacteristic *cbCharacteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL eventNotificationsEnabled; // ivar: _eventNotificationsEnabled
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isWriteWithResponseImplicitlySupported) BOOL implicitWriteWithResponse; // ivar: _implicitWriteWithResponse
@property (copy, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (copy, nonatomic) HAPCharacteristicMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSData *notificationContext; // ivar: _notificationContext
@property (nonatomic) BOOL prohibitCaching; // ivar: _prohibitCaching
@property (nonatomic) NSUInteger properties; // ivar: _properties
@property (weak, nonatomic) HAPService *service; // ivar: _service
@property (nonatomic) BOOL shouldValidateValueAfterReading; // ivar: _shouldValidateValueAfterReading
@property (readonly, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAdditionalAuthorizationData;
@property (readonly, nonatomic) BOOL supportsEventNotificationContext;
@property (readonly, nonatomic) BOOL supportsWriteWithResponse;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic, setter=setValue:) id *value; // ivar: _value
@property (retain, nonatomic) NSDate *valueUpdatedTime; // ivar: _valueUpdatedTime


+(id)hap2_shortTypeFromUUID:(id)arg0 ;
-(BOOL)hap2_canUseCachedValue;
-(BOOL)hap2_mergeWithCharacteristic:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCharacteristic:(id)arg0 ;
-(BOOL)mergeObject:(id)arg0 ;
-(BOOL)shouldMergeObject:(id)arg0 ;
-(id)_generateValidMetadata:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(id)arg0 instanceID:(id)arg1 value:(id)arg2 stateNumber:(id)arg3 properties:(NSUInteger)arg4 eventNotificationsEnabled:(BOOL)arg5 implicitWriteWithResponse:(BOOL)arg6 metadata:(id)arg7 ;
-(id)initWithType:(id)arg0 instanceID:(id)arg1 value:(id)arg2 stateNumber:(id)arg3 properties:(NSUInteger)arg4 eventNotificationsEnabled:(BOOL)arg5 metadata:(id)arg6 ;
-(id)validateValue:(id)arg0 outValue:(*id)arg1 ;
-(void)_updateMetadata:(id)arg0 withProvidedMetadata:(id)arg1 ;


@end


#endif