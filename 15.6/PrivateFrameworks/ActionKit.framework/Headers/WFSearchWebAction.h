// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSEARCHWEBACTION_H
#define WFSEARCHWEBACTION_H

@class WFAction;



@interface WFSearchWebAction : WFAction



-(id)getDestinationURLFromInputString:(id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif