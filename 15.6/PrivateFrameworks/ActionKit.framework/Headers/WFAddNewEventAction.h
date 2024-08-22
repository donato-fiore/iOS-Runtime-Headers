// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFADDNEWEVENTACTION_H
#define WFADDNEWEVENTACTION_H

@class WFAction;



@interface WFAddNewEventAction : WFAction



+(CGFloat)relativeOffsetFromTimeString:(id)arg0 ;
+(id)calendarFromDescriptor:(id)arg0 ;
+(id)endDateByCorrectingDate:(id)arg0 withStartDate:(id)arg1 ;
+(id)eventFromParameters:(id)arg0 requiringFullySpecifiedEvent:(BOOL)arg1 error:(*id)arg2 ;
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)currentSelectedCalendar;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithoutUI;
-(void)updateCalendars;
-(void)updateForcesAllDayFlags;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif