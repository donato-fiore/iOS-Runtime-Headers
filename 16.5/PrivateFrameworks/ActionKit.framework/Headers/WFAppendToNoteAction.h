// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAPPENDTONOTEACTION_H
#define WFAPPENDTONOTEACTION_H

@class WFOverridableLinkAction;



@interface WFAppendToNoteAction : WFOverridableLinkAction



+(id)overrideInputParameterName;
-(BOOL)inputRequired;
-(BOOL)shouldLocalizeValueForSelector:(SEL)arg0 ;
-(id)defaultOutputName;
-(id)descriptionResult;
-(id)keywords;
-(id)overrideDescriptionSummary;
-(id)overrideParameterSummary;
-(id)remoteExecuteOnPlatforms;
-(id)serializationKeysByParameter;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;


@end


#endif