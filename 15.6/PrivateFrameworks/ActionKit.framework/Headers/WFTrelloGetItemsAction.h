// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRELLOGETITEMSACTION_H
#define WFTRELLOGETITEMSACTION_H

@class WFAction;



@interface WFTrelloGetItemsAction : WFAction



-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)updateBoards:(id)arg0 onAccount:(id)arg1 ;
-(void)updateListCache:(id)arg0 board:(id)arg1 account:(id)arg2 ;


@end


#endif