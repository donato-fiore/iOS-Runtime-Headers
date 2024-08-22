// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMUTABLECHARACTERISTICTHRESHOLDRANGEEVENT_H
#define HMMUTABLECHARACTERISTICTHRESHOLDRANGEEVENT_H



#import "HMCharacteristicThresholdRangeEvent.h"
#import "HMCharacteristic.h"
#import "HMNumberRange.h"

@interface HMMutableCharacteristicThresholdRangeEvent : HMCharacteristicThresholdRangeEvent

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (copy, nonatomic) HMNumberRange *thresholdRange;




@end


#endif