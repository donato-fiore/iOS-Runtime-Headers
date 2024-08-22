// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRANSLATETEXTLANGUAGEPICKERPARAMETER_H
#define WFTRANSLATETEXTLANGUAGEPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;



@interface WFTranslateTextLanguagePickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates
@property (readonly, nonatomic) BOOL supportsLanguageDetection; // ivar: _supportsLanguageDetection


-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)getAvailableLanguagesWithCompletionHandler:(id)arg0 ;
-(void)wasAddedToWorkflow;


@end


#endif