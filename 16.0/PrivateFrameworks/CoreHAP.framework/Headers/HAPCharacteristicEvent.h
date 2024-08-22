// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPCHARACTERISTICEVENT_H
#define HAPCHARACTERISTICEVENT_H

@class HMFObject, NSNumber, NSString, NSDate;



@interface HAPCharacteristicEvent : HMFObject

@property (readonly, copy, nonatomic) NSNumber *accessoryInstanceID; // ivar: _accessoryInstanceID
@property (readonly, copy, nonatomic) NSNumber *characteristicInstanceID; // ivar: _characteristicInstanceID
@property (readonly, copy, nonatomic) NSString *serverIdentifier; // ivar: _serverIdentifier
@property (readonly, copy, nonatomic) NSNumber *serviceInstanceID; // ivar: _serviceInstanceID
@property (readonly, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber
@property (readonly, nonatomic) NSDate *updateTime; // ivar: _updateTime
@property (readonly, copy, nonatomic) id *value; // ivar: _value


+(id)eventWithCharacteristic:(id)arg0 ;
-(id)init;
-(id)initWithCharacteristic:(id)arg0 ;


@end


#endif