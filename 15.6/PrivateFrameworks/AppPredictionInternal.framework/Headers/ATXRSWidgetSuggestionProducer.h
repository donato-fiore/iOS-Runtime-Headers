// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXRSWIDGETSUGGESTIONPRODUCER_H
#define ATXRSWIDGETSUGGESTIONPRODUCER_H

@class ATXAvocadoDescriptorCache, ATXInfoToBlendingConfidenceMapper, _PASSimpleCoalescingTimer, NSString;
@protocol ATXRSRelevanceMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXDuetHelper.h"
#import "ATXRSRelevanceMonitor.h"
#import "ATXRSFilter.h"
#import "ATXWidgetSuggestionAbuseGuard.h"
#import "ATXInformationFeaturizer.h"
#import "ATXInformationFeatureWeights.h"
#import "ATXInformationDescendingStartDateRanker.h"
#import "ATXClientModelSuggestionReceiver.h"

@interface ATXRSWidgetSuggestionProducer : NSObject <ATXRSRelevanceMonitorDelegate>

 {
    _ATXDuetHelper *_duetHelper;
    ATXAvocadoDescriptorCache *_descriptorCache;
    ATXRSRelevanceMonitor *_relevanceMonitor;
    ATXRSFilter *_filter;
    ATXWidgetSuggestionAbuseGuard *_abuseGuard;
    ATXInformationFeaturizer *_featurizer;
    ATXInformationFeatureWeights *_featureWeights;
    ATXInformationDescendingStartDateRanker *_ranker;
    ATXInfoToBlendingConfidenceMapper *_confidenceMapper;
    ATXClientModelSuggestionReceiver *_suggestionReceiver;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshRelevantShortcutsOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_clientModelIdentifier;
+(id)replacementContainerBundleIdForDonationBundleId:(id)arg0 ;
-(BOOL)_areInfoSuggestions:(id)arg0 equalToProactiveSuggestions:(id)arg1 ;
-(id)_candidatesFromRelevantShortcutToBundleIdDict:(id)arg0 ;
-(id)_infoSuggestionFromCandidate:(id)arg0 suggestionIdentifier:(id)arg1 ;
-(id)_proactiveSuggestionsFromScoredInfoSuggestions:(id)arg0 ;
-(id)init;
-(id)initWithDuetHelper:(id)arg0 descriptorCache:(id)arg1 relevanceMonitor:(id)arg2 filter:(id)arg3 abuseGuard:(id)arg4 featurizer:(id)arg5 featureWeights:(id)arg6 ranker:(id)arg7 confidenceMapper:(id)arg8 suggestionReceiver:(id)arg9 ;
-(void)_coalescedRefreshRelevantShortcuts:(id)arg0 ;
-(void)_pushSuggestionsToBlendingIfNecessary:(id)arg0 ;
-(void)_refreshRelevantShortcuts;
-(void)relevanceMonitorDidUpdateCurrentlyRelevantCandidates:(id)arg0 relevanceProviders:(id)arg1 ;


@end


#endif