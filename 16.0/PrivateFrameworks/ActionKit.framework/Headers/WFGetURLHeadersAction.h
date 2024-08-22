// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGETURLHEADERSACTION_H
#define WFGETURLHEADERSACTION_H

@class WFAction;



@interface WFGetURLHeadersAction : WFAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif