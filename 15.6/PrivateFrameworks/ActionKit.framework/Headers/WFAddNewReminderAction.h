// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFADDNEWREMINDERACTION_H
#define WFADDNEWREMINDERACTION_H

@class WFAction, WFActionParameterSummary, NSDateFormatter;



@interface WFAddNewReminderAction : WFAction {
    WFActionParameterSummary *_parameterSummary;
}


@property (readonly, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter


-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)parameterKeysToHideWhenAttachmentsAreUnavailable;
-(id)parameterSummary;
-(id)selectedList;
-(id)selectedListIfDeterministic;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)addAlertToReminderChange:(id)arg0 forAccount:(id)arg1 completionHandler:(id)arg2 ;
-(void)addImagesToReminderChange:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishAddingReminderWithSaveRequest:(id)arg0 reminderChange:(id)arg1 reminderStore:(id)arg2 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)getSelectedListOrParentReminder:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateHiddenParameters;
-(void)updateLists;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif