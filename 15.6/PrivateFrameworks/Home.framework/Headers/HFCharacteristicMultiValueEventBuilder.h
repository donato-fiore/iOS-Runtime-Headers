// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCHARACTERISTICMULTIVALUEEVENTBUILDER_H
#define HFCHARACTERISTICMULTIVALUEEVENTBUILDER_H

@class HMCharacteristic, NSString, NSSet;
@protocol HFCharacteristicLikeEvent, NSCopying;


#import "HFCharacteristicEventBuilder.h"

@interface HFCharacteristicMultiValueEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent>



@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *hf_representativeTriggerValue;
@property (retain, nonatomic) NSObject<NSCopying> *representativeTargetValue; // ivar: _representativeTargetValue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *triggerValues; // ivar: _triggerValues


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wouldFireForCharacteristic:(id)arg0 value:(id)arg1 ;
-(id)buildNewEventsFromCurrentState;
-(id)comparisonKey;
-(id)initWithCharacteristic:(id)arg0 values:(id)arg1 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;
-(id)triggeringValues;
-(void)copyValuesFromCharacteristicEventBuilder:(id)arg0 ;


@end


#endif