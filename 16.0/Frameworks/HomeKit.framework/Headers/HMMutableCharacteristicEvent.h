// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMUTABLECHARACTERISTICEVENT_H
#define HMMUTABLECHARACTERISTICEVENT_H

@protocol NSCopying;


#import "HMCharacteristicEvent.h"
#import "HMCharacteristic.h"

@interface HMMutableCharacteristicEvent : HMCharacteristicEvent

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (copy, nonatomic) NSObject<NSCopying> *triggerValue;




@end


#endif