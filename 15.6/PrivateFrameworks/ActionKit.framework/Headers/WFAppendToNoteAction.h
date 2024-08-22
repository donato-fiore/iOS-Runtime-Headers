// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAPPENDTONOTEACTION_H
#define WFAPPENDTONOTEACTION_H

@class WFHandleSystemIntentAction;



@interface WFAppendToNoteAction : WFHandleSystemIntentAction



-(BOOL)skipsProcessingHiddenParameters;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)getOutputFromIntentResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveSlot:(id)arg0 withProcessedValue:(id)arg1 parameter:(id)arg2 input:(id)arg3 completion:(id)arg4 ;


@end


#endif