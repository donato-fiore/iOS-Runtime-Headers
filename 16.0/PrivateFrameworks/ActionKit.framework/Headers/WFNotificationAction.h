// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFNOTIFICATIONACTION_H
#define WFNOTIFICATIONACTION_H

@class WFAction;



@interface WFNotificationAction : WFAction



-(id)actionAlert;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)getNotificationAttachmentsWithInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithUserNotificationCenterInput:(id)arg0 ;


@end


#endif