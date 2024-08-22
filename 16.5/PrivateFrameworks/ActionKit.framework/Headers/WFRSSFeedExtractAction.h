// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRSSFEEDEXTRACTACTION_H
#define WFRSSFEEDEXTRACTACTION_H

@class WFAction;



@interface WFRSSFeedExtractAction : WFAction



-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)addRSSFeedItemsFromHTML:(id)arg0 baseURL:(id)arg1 encoding:(id)arg2 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)getURLsFromInputWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif