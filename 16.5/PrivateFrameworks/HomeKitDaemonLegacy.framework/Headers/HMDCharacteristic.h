// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHARACTERISTIC_H
#define HMDCHARACTERISTIC_H

@class HMFObject, NSMutableSet, NSData, NSDictionary, NSNumber, NSString, NSUUID, NSSet, NSDate;
@protocol HMDBulletinIdentifiers, HMFLogging, NSSecureCoding, HMFDumpState;


#import "HMDHAPAccessory.h"
#import "HMDCharacteristicMetadata.h"
#import "HMDService.h"

@interface HMDCharacteristic : HMFObject <HMDBulletinIdentifiers, HMFLogging, NSSecureCoding, HMFDumpState>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_notificationRegistrations;
}


@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (copy, nonatomic) NSData *authorizationData; // ivar: _authorizationData
@property (nonatomic) BOOL broadcastNotificationEnabled; // ivar: _broadcastNotificationEnabled
@property (readonly, nonatomic) NSDictionary *bulletinContext;
@property (retain, nonatomic) NSNumber *characteristicInstanceID; // ivar: _characteristicInstanceID
@property (nonatomic) NSInteger characteristicProperties; // ivar: _characteristicProperties
@property (retain, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *hapCharacteristicTuples; // ivar: _hapCharacteristicTuples
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (retain, nonatomic) id *lastKnownValue; // ivar: _lastKnownValue
@property (retain, nonatomic) NSDate *lastKnownValueUpdateTime; // ivar: _lastKnownValueUpdateTime
@property (readonly, nonatomic) HMDCharacteristicMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSData *notificationContext; // ivar: _notificationContext
@property (retain, nonatomic) NSDate *notificationEnabledTime; // ivar: _notificationEnabledTime
@property (nonatomic) BOOL notificationRegisteredWithRemoteGateway; // ivar: _notificationRegisteredWithRemoteGateway
@property (readonly, copy, nonatomic) NSSet *notificationRegistrations;
@property (retain, nonatomic) id *previousValue; // ivar: _previousValue
@property (readonly, nonatomic) NSInteger properties;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (readonly, weak, nonatomic) HMDService *service; // ivar: _service
@property (readonly) BOOL shouldIgnoreCacheValueForRead;
@property (readonly, copy, nonatomic) NSUUID *spiClientIdentifier;
@property (copy, nonatomic, setter=setStateNumber:) NSNumber *stateNumber; // ivar: _stateNumber
@property (readonly) Class superclass;
@property (readonly) BOOL supportsNotificationContext;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) id *value;


+(BOOL)supportsSecureCoding;
+(BOOL)value:(id)arg0 differentThan:(id)arg1 ;
+(id)currentTargetStateCharacteristicTypeMap;
+(id)logCategory;
+(id)sortComparatorForCharacteristicDictionary:(SEL)arg0 ;
-(BOOL)deregisterNotificationForClientIdentifier:(id)arg0 ;
-(BOOL)deregisterNotificationIfNotLastForClientIdentifier:(id)arg0 ;
-(BOOL)isClientNotificationEnabled;
-(BOOL)isNonClientNotificationEnabled;
-(BOOL)isNonHomeNotificationsEnabled;
-(BOOL)isNotificationEnabled;
-(BOOL)isNotificationEnabledForClientIdentifier:(id)arg0 ;
-(BOOL)isNotificationEnabledForClientIdentifierPrefix:(id)arg0 ;
-(BOOL)isValueUpdatedFromHAPCharacteristic:(id)arg0 ;
-(BOOL)setNotificationEnabled:(BOOL)arg0 forClientIdentifier:(id)arg1 removeLast:(BOOL)arg2 ;
-(BOOL)supportsNotification;
-(BOOL)supportsRead;
-(BOOL)supportsWrite;
-(BOOL)updateWithDictionary:(id)arg0 ;
-(id)_characteristicDictionaryWithAuthData:(BOOL)arg0 ;
-(id)attributeDescriptions;
-(id)characteristicForHAPAccessory:(id)arg0 ;
-(id)contextDataForWriteRequestWithIdentifier:(id)arg0 ;
-(id)dumpState;
-(id)getCharacteristicDictionary;
-(id)hapCharacteristicTupleWithIdentifier:(id)arg0 linkType:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCharacteristic:(id)arg0 service:(id)arg1 accessory:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localClientIdentifiersWithNotificationsEnabled;
-(id)logIdentifier;
-(id)shortDescription;
-(id)validateValue:(id)arg0 outValue:(*id)arg1 ;
-(id)validateValueForNotify:(id)arg0 outValue:(*id)arg1 ;
-(id)validateValueForWrite:(id)arg0 outValue:(*id)arg1 ;
-(void)configureWithCharacteristic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getLastKnownValueUpdateTime:(*id)arg0 stateNumber:(*id)arg1 notificationContext:(*id)arg2 ;
-(void)setNotificationEnabled:(BOOL)arg0 forClientIdentifier:(id)arg1 ;
-(void)unconfigure;
-(void)unconfigureForServerIdentifier:(id)arg0 linkType:(NSInteger)arg1 ;
-(void)updateLastKnownValue;
-(void)updateService:(id)arg0 accessory:(id)arg1 ;
-(void)updateValue:(id)arg0 updatedTime:(id)arg1 stateNumber:(id)arg2 notificationContext:(id)arg3 ;


@end


#endif