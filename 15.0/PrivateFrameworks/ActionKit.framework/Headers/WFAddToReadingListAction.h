// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFADDTOREADINGLISTACTION_H
#define WFADDTOREADINGLISTACTION_H

@class WFAction;



@interface WFAddToReadingListAction : WFAction



-(id)contentDestinationWithError:(*id)arg0 ;
-(id)service;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)addReadingListItem:(id)arg0 title:(id)arg1 previewText:(id)arg2 withService:(id)arg3 error:(*id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif