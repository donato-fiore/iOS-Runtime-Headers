// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXINFORMATIONENGINE_H
#define ATXINFORMATIONENGINE_H

@class _PASQueueLock, _PASSimpleCoalescingTimer, ATXInfoToBlendingConfidenceMapper, ATXInformationStore, NSString;
@protocol ATXTimelineRelevanceDelegate, OS_dispatch_queue, OS_dispatch_source, ATXInformationFeaturizerProtocol, ATXInformationRankerProtocol;

#import <Foundation/Foundation.h>

#import "ATXInformationFilter.h"
#import "ATXInformationFeatureWeights.h"
#import "ATXTimelineAbuseControlConfig.h"

@interface ATXInformationEngine : NSObject <ATXTimelineRelevanceDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    _PASQueueLock *_lock;
    _PASSimpleCoalescingTimer *_coalescedPredictionUpdateOperation;
    ATXInfoToBlendingConfidenceMapper *_confidenceMapper;
    ATXInformationStore *_store;
    ATXInformationFilter *_filter;
    id<ATXInformationFeaturizerProtocol> *_featurizer;
    id<ATXInformationRankerProtocol> *_ranker;
    ATXInformationFeatureWeights *_featureWeights;
}


@property (readonly, nonatomic) ATXTimelineAbuseControlConfig *abuseControlConfig; // ivar: _abuseControlConfig
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_areSuggestions:(id)arg0 equalTo:(id)arg1 ;
-(BOOL)_currentActivePredictionsContainSuggestionFromSourceId:(id)arg0 guardedData:(id)arg1 ;
-(BOOL)deleteAllSuggestionsForSourceId:(id)arg0 excludingSuggestionId:(id)arg1 ;
-(BOOL)shouldSkipUpdatingPredictionRefreshDateForPreviouslyScheduledDate:(id)arg0 newDate:(id)arg1 ;
-(NSInteger)_clientModelTypeForInfoSuggestion:(id)arg0 ;
-(NSUInteger)countOfInfoSuggestionsForBundleId:(id)arg0 ;
-(NSUInteger)countOfInfoSuggestionsForSourceId:(id)arg0 ;
-(id)_clearSuggestionsForInfoSourceIdentifier:(id)arg0 ;
-(id)_insertSuggestions:(id)arg0 forInfoSourceIdentifier:(id)arg1 ;
-(id)_proactiveSuggestionFromScoredInfoSuggestion:(id)arg0 clientModelId:(id)arg1 clientModelVersion:(id)arg2 ;
-(id)allInfoSuggestions;
-(id)allInfoSuggestionsForSourceId:(id)arg0 ;
-(id)allRelevantInfoSuggestions;
-(id)currentPredictions;
-(id)forceUpdateAndReturnPredictions;
-(id)init;
-(id)initWithFilter:(id)arg0 featurizer:(id)arg1 ranker:(id)arg2 infoStore:(id)arg3 confidenceMapper:(id)arg4 abuseControlConfig:(id)arg5 featureWeights:(id)arg6 ;
-(id)latestInfoSuggestionRelevantNowForSourceId:(id)arg0 ;
-(id)latestUpdateDateForSourceId:(id)arg0 ;
-(id)scheduledPredictionRefreshDate;
-(void)_pushPredictionsToBlendingLayer:(id)arg0 forClientModel:(id)arg1 withClientModelVersion:(id)arg2 ;
-(void)_pushPredictionsToBlendingLayerIfDifferentFromTheLastCacheUpdate:(id)arg0 forClientModel:(id)arg1 withClientModelVersion:(id)arg2 cachedSuggestions:(id)arg3 ;
-(void)_pushSuggestionsToBlendingLayerIfDifferentFromTheLastCacheUpdate:(id)arg0 cachedSuggestions:(id)arg1 ;
-(void)_schedulePredictionUpdateNoLaterThanDate:(id)arg0 guardedData:(id)arg1 ;
-(void)_updateClientModelWithClientModelId:(id)arg0 withSuggestions:(id)arg1 ;
-(void)_updatePredictionRefreshDateIfNecessaryForSuggestions:(id)arg0 ;
-(void)_updatePredictionsWithGuardedData:(id)arg0 ;
-(void)clearSuggestionsForInfoSourceIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSuggestionsForInfoSourceIdentifier:(id)arg0 withReply:(id)arg1 ;
-(void)handleProactiveStackRotationForInfoSuggestion:(id)arg0 isStalenessRotation:(BOOL)arg1 ;
-(void)handleSuggestionDismissal:(id)arg0 isDismissalLongTerm:(BOOL)arg1 completion:(id)arg2 ;
-(void)insertSuggestions:(id)arg0 forInfoSourceIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)recordRecentTimelineEntries:(id)arg0 forWidget:(id)arg1 ;
-(void)resetSuggestionsTo:(id)arg0 forInfoSourceIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif