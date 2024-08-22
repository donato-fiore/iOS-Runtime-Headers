// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFLOCALEPICKERPARAMETER_H
#define WFLOCALEPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFLocalePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}




+(id)availableLocaleIdentifiers;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)localizedPlaceholder;
-(id)possibleStates;


@end


#endif