// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPCHARACTERISTICTUPLE_H
#define HAPCHARACTERISTICTUPLE_H

@class HMFObject, HAPCharacteristic, NSString;



@interface HAPCharacteristicTuple : HMFObject

@property (retain, nonatomic) HAPCharacteristic *hapCharacteristic; // ivar: _hapCharacteristic
@property NSInteger linkType; // ivar: _linkType
@property (retain, nonatomic) NSString *serverIdentifier; // ivar: _serverIdentifier


-(id)initWithHAPCharacteristic:(id)arg0 serverIdentifier:(id)arg1 linkType:(NSInteger)arg2 ;


@end


#endif