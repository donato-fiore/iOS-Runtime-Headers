// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFILELABELCOLORPICKERPARAMETER_H
#define WFFILELABELCOLORPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray, NSDictionary;



@interface WFFileLabelColorPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}


@property (readonly, nonatomic) NSDictionary *localizedLabelsForLabelNumbers; // ivar: _localizedLabelsForLabelNumbers


-(Class)singleStateClass;
-(id)accessoryColorForPossibleState:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;


@end


#endif