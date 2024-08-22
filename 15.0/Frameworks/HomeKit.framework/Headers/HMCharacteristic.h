// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCHARACTERISTIC_H
#define HMCHARACTERISTIC_H

@class HMFUnfairLock, NSString, NSNumber, NSDate, NSArray, NSDictionary, NSUUID;
@protocol NSSecureCoding, HMObjectMerge;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMCharacteristicMetadata.h"
#import "HMService.h"

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge>

 {
    HMFUnfairLock *_lock;
}


@property (copy, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL hasAuthorizationData; // ivar: _hasAuthorizationData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) HMCharacteristicMetadata *metadata; // ivar: _metadata
@property (nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled; // ivar: _notificationEnabled
@property (nonatomic) BOOL notificationEnabledByThisClient; // ivar: _notificationEnabledByThisClient
@property (copy, nonatomic) NSDate *notificationEnabledTime; // ivar: _notificationEnabledTime
@property (copy, nonatomic) NSArray *properties; // ivar: _properties
@property (nonatomic) BOOL requiresDeviceUnlock; // ivar: _requiresDeviceUnlock
@property (readonly, copy) NSDictionary *serializedDictionaryRepresentation;
@property (weak, nonatomic) HMService *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (copy, nonatomic) id *value; // ivar: _value
@property (copy, nonatomic) NSDate *valueUpdatedTime; // ivar: _valueUpdatedTime


+(BOOL)supportsSecureCoding;
+(id)__localizedDescriptionForCharacteristicType:(id)arg0 ;
+(id)_characteristicTypeAsString:(id)arg0 ;
+(id)characteristicWithCharacteristicReference:(id)arg0 home:(id)arg1 ;
+(id)characteristicWithSerializedDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)localizedDescriptionForCharacteristicType:(id)arg0 ;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(id)mapHAPProperties:(NSInteger)arg0 ;
-(void)__configureWithContext:(id)arg0 service:(id)arg1 ;
-(void)_enableNotification:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_readValueWithCompletionHandler:(id)arg0 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateAuthorizationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateValue:(id)arg0 updateTime:(id)arg1 ;
-(void)_writeValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)enableNotification:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)readValueWithCompletionHandler:(id)arg0 ;
-(void)updateAuthorizationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif