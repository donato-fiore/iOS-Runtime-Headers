// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECDFEEDBACKDISPATCHER_H
#define WBSPARSECDFEEDBACKDISPATCHER_H

@class NSMapTable, NSArray, NSString;
@protocol WBSParsecFeedbackDispatcher, WBSParsecGlobalFeedbackDispatcher, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSParsecDFeedbackDispatcher : NSObject <WBSParsecFeedbackDispatcher, WBSParsecGlobalFeedbackDispatcher>

 {
    NSMapTable *_queriesToDictionariesFromSearchTypesToStartSearchFeedbacks;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    NSObject<OS_dispatch_queue> *_queriesToDictionariesMappingQueue;
    NSArray *_feedbackListeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_customFeedbackOfType:(NSUInteger)arg0 JSONDictionary:(id)arg1 ;
-(id)_takeStartSearchFeedbackForSearchOfType:(NSInteger)arg0 forQuery:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(void)_postFeedbackOnFeedbackQueue:(id)arg0 forQueryID:(NSInteger)arg1 ;
-(void)_setStartSearchFeedback:(id)arg0 forSearchOfType:(NSInteger)arg1 withQuery:(id)arg2 ;
-(void)didBeginSearchOfType:(NSInteger)arg0 withQuery:(id)arg1 endpoint:(NSUInteger)arg2 ;
-(void)didBeginSearchOfType:(NSInteger)arg0 withQuery:(id)arg1 urlString:(id)arg2 headers:(id)arg3 endpoint:(NSUInteger)arg4 ;
-(void)didDisplayCompletionListItems:(id)arg0 forQuery:(id)arg1 forEvent:(NSInteger)arg2 ;
-(void)didGenerateCompletionListItemsWithRankingObserver:(id)arg0 forQueryID:(NSInteger)arg1 ;
-(void)didRankSections:(id)arg0 blendingDuration:(CGFloat)arg1 feedbackForHiddenAndDuplicateResults:(id)arg2 forQueryID:(NSInteger)arg3 ;
-(void)didReceiveLocalResultsForQuery:(id)arg0 ;
-(void)didReceiveParsecResultsAfterTimeout:(id)arg0 ;
-(void)didReceiveWebSuggestionsForQuery:(id)arg0 fromSearchProvider:(id)arg1 responseSize:(NSInteger)arg2 statusCode:(NSInteger)arg3 networkTimingData:(id)arg4 ;
-(void)flush;
-(void)postFeedback:(id)arg0 forQueryID:(NSInteger)arg1 ;
-(void)searchViewAppearedBecauseOfEvent:(NSUInteger)arg0 forQueryID:(NSInteger)arg1 usesLoweredSearchBar:(BOOL)arg2 ;
-(void)searchViewAppearedBecauseOfEvent:(NSUInteger)arg0 isSafariReaderAvailable:(BOOL)arg1 forQueryID:(NSInteger)arg2 usesLoweredSearchBar:(BOOL)arg3 ;
-(void)searchViewDisappearedBecauseOfEvent:(NSInteger)arg0 forQueryID:(NSInteger)arg1 ;
-(void)sendClearInputFeedbackWithTriggerEvent:(NSUInteger)arg0 forQueryID:(NSInteger)arg1 ;
-(void)sendCrowdsourcedAutoFillFeedback:(id)arg0 forQueryID:(NSInteger)arg1 ;
-(void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg0 forQueryID:(NSInteger)arg1 ;
-(void)sendNewTabFeedback:(BOOL)arg0 ;
-(void)triggeredExperimentWithTreatmentId:(id)arg0 withQueryID:(NSInteger)arg1 ;
-(void)triggeredExperimentWithTreatmentId:(id)arg0 withQueryID:(NSInteger)arg1 cfDiffered:(BOOL)arg2 cfUsed:(BOOL)arg3 cfError:(NSUInteger)arg4 ;
-(void)userDidCancelSession;
-(void)userDidCancelSession:(NSInteger)arg0 ;
-(void)userDidEngageWithCompletionListItem:(id)arg0 onActionButton:(BOOL)arg1 method:(NSInteger)arg2 ;
-(void)userDidEngageWithCompletionListItem:(id)arg0 onActionButton:(BOOL)arg1 method:(NSInteger)arg2 doesMatchSiriSuggestion:(BOOL)arg3 ;
-(void)userDidTapMicKey:(NSInteger)arg0 ;
-(void)userDidTypeKey:(NSInteger)arg0 ;
-(void)userTypedGoToSearch:(id)arg0 endpoint:(NSUInteger)arg1 triggerEvent:(NSInteger)arg2 forQueryID:(NSInteger)arg3 ;
-(void)userTypedURLDirectlyForQuery:(id)arg0 triggerEvent:(NSInteger)arg1 ;


@end


#endif