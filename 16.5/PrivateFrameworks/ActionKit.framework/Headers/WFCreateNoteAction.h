// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCREATENOTEACTION_H
#define WFCREATENOTEACTION_H

@class WFLinkCreateEntityAction;



@interface WFCreateNoteAction : WFLinkCreateEntityAction



+(id)overrideInputParameterName;
-(BOOL)inputRequired;
-(BOOL)openWhenRunParameterIsHidden;
-(BOOL)shouldLocalizeValueForSelector:(SEL)arg0 ;
-(BOOL)shouldOverrideParameterSummary;
-(NSUInteger)outputDisclosureLevel;
-(id)entityName;
-(id)keywords;
-(id)localizedKeyParameterDisplayName;
-(id)overrideDescriptionSummary;
-(id)overrideParameterSummary;
-(id)parameterOverrides;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif