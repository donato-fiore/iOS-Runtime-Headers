// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFORYOURECOMMENDATIONMEDIATOR_H
#define WBSFORYOURECOMMENDATIONMEDIATOR_H

@class UABestAppSuggestionManager, UABestAppSuggestion, NSCache, CKContextClient, NSArray, NSString;
@protocol UABestAppSuggestionManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSForYouTopicManager.h"
#import "WBSFoundInRecommendationManager.h"
#import "WBSForYouDataSourceWeightManager.h"
#import "WBSForYouPerSitePreferenceManager.h"

@interface WBSForYouRecommendationMediator : NSObject <UABestAppSuggestionManagerDelegate>

 {
    WBSForYouTopicManager *_topicManager;
    WBSFoundInRecommendationManager *_foundInManager;
    WBSForYouDataSourceWeightManager *_dataSourceWeightManager;
    WBSForYouPerSitePreferenceManager *_perSitePreferenceManager;
    UABestAppSuggestionManager *_appSuggestionManager;
    UABestAppSuggestion *_currentAppSuggestion;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_messagesMetadataCache;
    CKContextClient *_contextClient;
    id *_historyProvider;
}


@property (readonly, copy, nonatomic) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreMinimumNumberOfRecommendationsPerTopic; // ivar: _ignoreMinimumNumberOfRecommendationsPerTopic
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressHistoryDeduplication; // ivar: _suppressHistoryDeduplication


+(CGFloat)scoreForRecommendation:(id)arg0 weightManager:(id)arg1 simplifiedURLStringToLastVisitedDateMap:(id)arg2 ;
+(id)_adjustedTopicsWithTopics:(id)arg0 ;
+(id)_titleForRecommendationSource:(NSUInteger)arg0 ;
+(id)_titleForRecommendationTopicSource:(NSUInteger)arg0 ;
+(void)_rankRecommendationsInPlace:(id)arg0 history:(id)arg1 weightManager:(id)arg2 suppressHistoryDeduplication:(BOOL)arg3 ;
-(id)_dataSourceWeightManager;
-(id)analyticsMetadataForRecommendation:(id)arg0 ;
-(id)initWithContextClient:(id)arg0 historyProvider:(id)arg1 ;
-(id)recommendationFromDictionary:(id)arg0 ;
-(void)_beginListeningForHandoffActivity;
-(void)_createAppSuggestionsManagerIfNecessary;
-(void)_createPreferenceManagerIfNecessary;
-(void)_didUpdateFoundInSuggestions:(id)arg0 ;
-(void)_endListeningForHandoffActivity;
-(void)_fetchImagesForRecommendations:(id)arg0 recommendationsDispatchGroup:(id)arg1 ;
-(void)_retrieveFoundInRecommendationsWithCompletionHandler:(id)arg0 ;
-(void)banURLsOfSameDomainAsURL:(id)arg0 ;
-(void)banURLsOfSameDomainAsURL:(id)arg0 postingChangeNotificationWhenDone:(BOOL)arg1 ;
-(void)beginListeningForURLSuggestionChanges;
-(void)bestAppSuggestionChanged:(id)arg0 ;
-(void)clearDataSourceWeights;
-(void)dealloc;
-(void)downvoteSource:(NSUInteger)arg0 ;
-(void)downvoteSource:(NSUInteger)arg0 postingChangeNotificationWhenDone:(BOOL)arg1 ;
-(void)fetchImageForRecommendation:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadLinkPresentationMetadataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)obtainMessagesImagesWherePossibleForRecommendations:(id)arg0 completionHandler:(id)arg1 ;
-(void)retrieveHandoffRecommendationWithCompletionHandler:(id)arg0 ;
-(void)stopListeningForURLSuggestionChanges;
-(void)updatedRecommendationsForTopics:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)updatedTopicsWithCompletionHandler:(id)arg0 ;


@end


#endif