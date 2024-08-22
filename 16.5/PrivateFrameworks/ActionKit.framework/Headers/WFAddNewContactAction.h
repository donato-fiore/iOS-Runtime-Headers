// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFADDNEWCONTACTACTION_H
#define WFADDNEWCONTACTACTION_H

@class WFAction;



@interface WFAddNewContactAction : WFAction



+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
+(void)contactFromParameters:(id)arg0 completionHandler:(id)arg1 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithoutUI;


@end


#endif