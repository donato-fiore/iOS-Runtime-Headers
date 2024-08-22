// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCHARACTERISTICEVENTBASE_H
#define HMDCHARACTERISTICEVENTBASE_H

@class NSUUID, NSNumber;


#import "HMDEvent.h"
#import "HMDCharacteristic.h"

@interface HMDCharacteristicEventBase : HMDEvent

@property (readonly, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (retain, nonatomic) HMDCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, nonatomic) NSNumber *characteristicInstanceID; // ivar: _characteristicInstanceID
@property (retain, nonatomic) id *previousValue; // ivar: _previousValue
@property (readonly, nonatomic) NSNumber *serviceID; // ivar: _serviceID


+(BOOL)supportsSecureCoding;
+(id)compareValueOfCharacteristic:(id)arg0 againstValue:(id)arg1 operatorType:(id)arg2 ;
+(id)logCategory;
+(id)lookForCharacteristicByAccessoryUUID:(id)arg0 serviceID:(id)arg1 characteristicID:(id)arg2 inHome:(id)arg3 checkForSupport:(BOOL)arg4 outError:(*id)arg5 ;
-(BOOL)_activate:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)_evaluateNewValue:(id)arg0 ;
-(BOOL)isActive;
-(id)createPayload;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(void)__handleCharacteristicsChangedPayload:(id)arg0 ;
-(void)_registerForMessages;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fixCharacteristicInHome:(id)arg0 ;
-(void)handleCharacteristicsChangedNotification:(id)arg0 ;
-(void)replaceCharacteristic:(id)arg0 ;


@end


#endif