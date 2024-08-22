// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRELLOCREATELISTACTION_H
#define WFTRELLOCREATELISTACTION_H

@class WFAction;



@interface WFTrelloCreateListAction : WFAction



-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateListCacheForBoard:(id)arg0 onAccount:(id)arg1 ;


@end


#endif