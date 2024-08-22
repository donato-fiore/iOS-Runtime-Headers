// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEVERNOTECREATEACTION_H
#define WFEVERNOTECREATEACTION_H

@class WFAction;



@interface WFEvernoteCreateAction : WFAction



-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif