// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCHARACTERISTICCONDITION_H
#define HFCHARACTERISTICCONDITION_H

@class HMCharacteristic;


#import "HFCondition.h"

@interface HFCharacteristicCondition : HFCondition

@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, nonatomic) NSUInteger operatorType; // ivar: _operatorType
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)_characteristicPredicateInCompoundPredicate:(id)arg0 ;
+(id)_valuePredicateInCompoundPredicate:(id)arg0 ;
-(id)_nameFormattingContext:(NSInteger)arg0 ;
-(id)hf_naturalLanguageSummaryWithOptions:(id)arg0 ;
-(id)initWithCharacteristic:(id)arg0 operatorType:(NSUInteger)arg1 value:(id)arg2 ;
-(id)initWithPredicate:(id)arg0 ;


@end


#endif