// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSFEEDBACKPROXY_H
#define PRSFEEDBACKPROXY_H

@class NSString, PARSession;
@protocol SFFeedbackListener, SPCustomFeedbackSender, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PRSFeedbackProxy : NSObject <SFFeedbackListener, SPCustomFeedbackSender>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *feedbackQueue; // ivar: _feedbackQueue
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PARSession *listener; // ivar: _listener
@property (readonly) Class superclass;


-(id)init;
-(void)cardViewDidAppear:(id)arg0 ;
-(void)cardViewDidDisappear:(id)arg0 ;
-(void)didAppendLateSections:(id)arg0 ;
-(void)didClearInput:(id)arg0 ;
-(void)didEndSearch:(id)arg0 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didEngageSection:(id)arg0 ;
-(void)didEngageSuggestion:(id)arg0 ;
-(void)didErrorOccur:(id)arg0 ;
-(void)didGradeResultRelevancy:(id)arg0 ;
-(void)didPerformCommand:(id)arg0 ;
-(void)didRankSections:(id)arg0 ;
-(void)didReceiveResultsAfterTimeout:(id)arg0 ;
-(void)didReportUserResponseFeedback:(id)arg0 ;
-(void)didStartSearch:(id)arg0 ;
-(void)reportFeedback:(id)arg0 queryId:(NSInteger)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg0 ;
-(void)searchViewDidAppear:(id)arg0 ;
-(void)searchViewDidDisappear:(id)arg0 ;
-(void)sectionHeaderDidBecomeVisible:(id)arg0 ;
-(void)sendCustomFeedback:(id)arg0 ;
-(void)sendCustomFeedback:(id)arg0 clientID:(id)arg1 ;
-(void)sendFeedback:(id)arg0 ;
-(void)sendFeedback:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)suggestionsDidBecomeVisible:(id)arg0 ;


@end


#endif