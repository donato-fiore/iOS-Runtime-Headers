// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCHARACTERISTICUPDATETUPLE_H
#define HMDCHARACTERISTICUPDATETUPLE_H

@class HMFObject;


#import "HMDCharacteristic.h"
#import "HMDCharacteristicResponse.h"

@interface HMDCharacteristicUpdateTuple : HMFObject

@property (readonly, nonatomic, getter=isBroadcast) BOOL broadcast; // ivar: _broadcast
@property (readonly, nonatomic) HMDCharacteristic *characteristic; // ivar: _characteristic
@property (retain, nonatomic) HMDCharacteristicResponse *characteristicResponse; // ivar: _characteristicResponse
@property (readonly, nonatomic) id *updatedValue;
@property (retain, nonatomic) id *value; // ivar: _value


+(id)characteristicUpdateTuplesWithCharacteristics:(id)arg0 isBroadcast:(BOOL)arg1 ;
-(id)description;
-(id)initWithCharacteristic:(id)arg0 updatedValue:(id)arg1 isBroadcast:(BOOL)arg2 ;


@end


#endif