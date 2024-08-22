// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPCHARACTERISTICWRITEREQUESTTUPLE_H
#define HAPCHARACTERISTICWRITEREQUESTTUPLE_H

@class HMFObject, NSData, NSString, NSNumber;
@protocol HAP2CharacteristicTupleValue, NSCopying;


#import "HAPCharacteristic.h"

@interface HAPCharacteristicWriteRequestTuple : HMFObject <HAP2CharacteristicTupleValue, NSCopying>



@property (retain, nonatomic) NSData *authorizationData; // ivar: _authorizationData
@property (retain, nonatomic) HAPCharacteristic *characteristic; // ivar: _characteristic
@property (retain, nonatomic) NSData *contextData; // ivar: _contextData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *enableEvents; // ivar: _enableEvents
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeResponseValue; // ivar: _includeResponseValue
@property (readonly) Class superclass;
@property (nonatomic) BOOL timedWrite; // ivar: _timedWrite
@property (retain, nonatomic) id *value; // ivar: _value
@property (nonatomic) NSUInteger writeType; // ivar: _writeType


+(id)writeRequestTupleForCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 timedWrite:(BOOL)arg3 responseValue:(BOOL)arg4 type:(NSUInteger)arg5 ;
+(id)writeRequestTupleForCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 timedWrite:(BOOL)arg3 responseValue:(BOOL)arg4 type:(NSUInteger)arg5 contextData:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif