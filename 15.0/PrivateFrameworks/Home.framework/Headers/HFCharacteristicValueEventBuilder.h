// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHARACTERISTICVALUEEVENTBUILDER_H
#define HFCHARACTERISTICVALUEEVENTBUILDER_H

@class HMCharacteristic, NSString;
@protocol HFCharacteristicLikeEvent, NSCopying;


#import "HFCharacteristicEventBuilder.h"

@interface HFCharacteristicValueEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent>



@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *hf_representativeTriggerValue;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSCopying> *triggerValue; // ivar: _triggerValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wouldFireForCharacteristic:(id)arg0 value:(id)arg1 ;
-(id)buildNewEventsFromCurrentState;
-(id)compareToObject:(id)arg0 ;
-(id)comparisonKey;
-(id)initWithCharacteristic:(id)arg0 triggerValue:(id)arg1 ;
-(id)initWithEvent:(id)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;
-(id)triggeringValues;
-(void)copyValuesFromCharacteristicEventBuilder:(id)arg0 ;


@end


#endif