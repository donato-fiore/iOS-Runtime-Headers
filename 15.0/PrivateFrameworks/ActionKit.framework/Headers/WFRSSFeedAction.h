// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRSSFEEDACTION_H
#define WFRSSFEEDACTION_H

@class WFAction, NSString;
@protocol MWFeedParserDelegate;


#import "MWFeedParser.h"

@interface WFRSSFeedAction : WFAction <MWFeedParserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MWFeedParser *parser; // ivar: _parser
@property (readonly) Class superclass;


-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)cancel;
-(void)feedParser:(id)arg0 didFailWithError:(id)arg1 ;
-(void)feedParser:(id)arg0 didParseFeedItem:(id)arg1 ;
-(void)feedParserDidFinish:(id)arg0 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)getURLsFromInputWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif