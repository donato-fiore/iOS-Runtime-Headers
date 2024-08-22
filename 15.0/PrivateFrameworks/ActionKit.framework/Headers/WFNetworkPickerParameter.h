// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNETWORKPICKERPARAMETER_H
#define WFNETWORKPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFNetworkPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}




-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;


@end


#endif