// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPCHARACTERISTICCONFIGURATIONREQUESTTUPLE_H
#define HAPCHARACTERISTICCONFIGURATIONREQUESTTUPLE_H

@class HMFObject;


#import "HAPCharacteristic.h"

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject

@property (nonatomic) BOOL broadcastEnable; // ivar: _broadcastEnable
@property (nonatomic) NSUInteger broadcastInterval; // ivar: _broadcastInterval
@property (retain, nonatomic) HAPCharacteristic *characteristic; // ivar: _characteristic


+(id)configurationTupleForCharacteristic:(id)arg0 broadcastEnable:(BOOL)arg1 broadcastInterval:(NSUInteger)arg2 ;


@end


#endif