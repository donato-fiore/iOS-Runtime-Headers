// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLOGHEALTHSAMPLEACTION_H
#define WFLOGHEALTHSAMPLEACTION_H

@class WFAction, NSDate;



@interface WFLogHealthSampleAction : WFAction

@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate


-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)appIdentifier;
-(id)dateForParameterValueWithKey:(id)arg0 error:(*id)arg1 ;
-(id)generatedResourceNodes;
-(id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)outputContentClasses;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg0 ;
-(void)forceUpdateSelectedUnit;
-(void)handleWithCategoryType:(id)arg0 ;
-(void)handleWithQuantityType:(id)arg0 ;
-(void)initializeParameters;
-(void)resourceAvailabilityChanged;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)saveObject:(id)arg0 withObjectType:(id)arg1 item:(id)arg2 ;
-(void)updateParameterStates;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif