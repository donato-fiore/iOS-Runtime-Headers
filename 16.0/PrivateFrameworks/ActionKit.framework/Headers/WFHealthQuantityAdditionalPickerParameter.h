// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHEALTHQUANTITYADDITIONALPICKERPARAMETER_H
#define WFHEALTHQUANTITYADDITIONALPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray, HKQuantityType;



@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}


@property (retain, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType


-(BOOL)isHidden;
-(id)defaultSerializedRepresentation;
-(id)importQuestionBehavior;
-(id)localizedLabel;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(void)updatePossibleStates;


@end


#endif