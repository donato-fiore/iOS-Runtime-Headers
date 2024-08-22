// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOGWORKOUTACTION_H
#define WFLOGWORKOUTACTION_H

@class WFAction;



@interface WFLogWorkoutAction : WFAction



-(id)appIdentifier;
-(id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)resourceAvailabilityChanged;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif