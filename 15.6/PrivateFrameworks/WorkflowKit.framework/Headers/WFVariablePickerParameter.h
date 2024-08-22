// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLEPICKERPARAMETER_H
#define WFVARIABLEPICKERPARAMETER_H

@class NSString;
@protocol WFParameterValuePickable;


#import "WFEnumerationParameter.h"

@interface WFVariablePickerParameter : WFEnumerationParameter <WFParameterValuePickable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wf_allowsMultipleSelection;
@property (readonly, nonatomic) BOOL wf_alwaysScaleIconImage;
@property (readonly, nonatomic) NSString *wf_displayLocalizedPrompt;
@property (readonly, nonatomic) BOOL wf_shouldValidateCurrentStateOnCollectionChanged;
@property (readonly, nonatomic) BOOL wf_supportsSearch;
@property (readonly, nonatomic) BOOL wf_usesGroupTableViewStyle;
@property (readonly, nonatomic) BOOL wf_usesTogglesForSelection;


-(BOOL)alwaysShowsButton;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)importQuestionBehavior;
-(id)possibleStates;
-(id)wf_pickerLocalizedImageForState:(id)arg0 ;
-(id)wf_pickerLocalizedSubtitleForState:(id)arg0 ;
-(id)wf_pickerLocalizedTitleForState:(id)arg0 ;
-(void)wf_loadStatesWithSearchTerm:(id)arg0 completionHandler:(id)arg1 ;
-(void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id)arg0 ;


@end


#endif