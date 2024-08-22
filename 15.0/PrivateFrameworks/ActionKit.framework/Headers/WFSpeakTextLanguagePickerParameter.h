// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSPEAKTEXTLANGUAGEPICKERPARAMETER_H
#define WFSPEAKTEXTLANGUAGEPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFSpeakTextLanguagePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}




-(id)availableLanguageCodes;
-(id)defaultLanguageCode;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;


@end


#endif