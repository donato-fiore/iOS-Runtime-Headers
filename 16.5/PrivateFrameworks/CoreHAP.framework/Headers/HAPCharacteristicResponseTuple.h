// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPCHARACTERISTICRESPONSETUPLE_H
#define HAPCHARACTERISTICRESPONSETUPLE_H

@class HMFObject, NSError, NSData, NSNumber, NSDate;


#import "HAPCharacteristic.h"

@interface HAPCharacteristicResponseTuple : HMFObject

@property (retain, nonatomic) HAPCharacteristic *characteristic; // ivar: _characteristic
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSData *notificationContext; // ivar: _notificationContext
@property (retain, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber
@property (retain, nonatomic) id *value; // ivar: _value
@property (retain, nonatomic) NSDate *valueUpdatedTime; // ivar: _valueUpdatedTime


+(id)responseTupleForCharacteristic:(id)arg0 error:(id)arg1 ;
-(id)description;


@end


#endif