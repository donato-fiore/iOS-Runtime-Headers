// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFIMAGECONVERTFORMATPICKERPARAMETER_H
#define WFIMAGECONVERTFORMATPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFImageConvertFormatPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}




-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;


@end


#endif