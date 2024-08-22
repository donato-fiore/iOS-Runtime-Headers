// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPRINTACTION_H
#define WFPRINTACTION_H

@class WFAction;



@interface WFPrintAction : WFAction



+(id)userInterfaceProtocol;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif