// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCHARACTERISTICTHRESHOLDRANGEEVENTBUILDER_H
#define HFCHARACTERISTICTHRESHOLDRANGEEVENTBUILDER_H

@class HMCharacteristic, NSString, HMNumberRange;
@protocol HFCharacteristicLikeEvent;


#import "HFCharacteristicEventBuilder.h"

@interface HFCharacteristicThresholdRangeEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent>



@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *hf_representativeTriggerValue;
@property (readonly) Class superclass;
@property (retain, nonatomic) HMNumberRange *thresholdRange; // ivar: _thresholdRange


+(BOOL)_wouldFireForValue:(id)arg0 thresholdRange:(id)arg1 characteristic:(id)arg2 ;
-(BOOL)hf_wouldFireForValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wouldFireForCharacteristic:(id)arg0 value:(id)arg1 ;
-(id)buildNewEventsFromCurrentState;
-(id)compareToObject:(id)arg0 ;
-(id)comparisonKey;
-(id)initWithCharacteristic:(id)arg0 thresholdRange:(id)arg1 ;
-(id)initWithEvent:(id)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;
-(id)triggeringValues;
-(void)copyValuesFromCharacteristicEventBuilder:(id)arg0 ;


@end


#endif