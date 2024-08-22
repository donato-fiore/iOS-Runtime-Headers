// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFUNITTYPEPICKERPARAMETER_H
#define WFUNITTYPEPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFUnitTypePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}




-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;


@end


#endif