// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSKNNMODEL_H
#define _PSKNNMODEL_H

@class NSDictionary, NSArray, _CDInteractionStore, _CDInteractionCache;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "_PSContactResolver.h"

@interface _PSKNNModel : NSObject

@property (nonatomic) BOOL _PSInteractionModelInUse; // ivar: __PSInteractionModelInUse
@property (nonatomic) NSUInteger _PSKnnMessagesZkwTopNFilter; // ivar: __PSKnnMessagesZkwTopNFilter
@property (nonatomic) NSUInteger _PSKnnModelGroupActivitiesMinimumOccuranceRegularizer; // ivar: __PSKnnModelGroupActivitiesMinimumOccuranceRegularizer
@property (retain, nonatomic) NSDictionary *_PSKnnModelMinimumOccurenceOfInteractionByMechanism; // ivar: __PSKnnModelMinimumOccurenceOfInteractionByMechanism
@property (nonatomic) NSUInteger _PSKnnModelRecencyMarginToPromoteShares; // ivar: __PSKnnModelRecencyMarginToPromoteShares
@property (nonatomic) NSUInteger _PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId; // ivar: __PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId
@property (nonatomic) NSUInteger _PSKnnModelRecencyMarginToRetainGroupActivities; // ivar: __PSKnnModelRecencyMarginToRetainGroupActivities
@property (nonatomic) NSUInteger _PSKnnModelRecencyMarginToRetainShares; // ivar: __PSKnnModelRecencyMarginToRetainShares
@property (nonatomic) NSUInteger _PSKnnModelSharePlayMinimumOccurenceRegularizer; // ivar: __PSKnnModelSharePlayMinimumOccurenceRegularizer
@property (nonatomic) NSUInteger _PSKnnModelShareSheetMinimumOccurenceRegularizer; // ivar: __PSKnnModelShareSheetMinimumOccurenceRegularizer
@property (nonatomic) NSUInteger _PSKnnTopKGroupActivities; // ivar: __PSKnnTopKGroupActivities
@property (nonatomic) NSUInteger _PSKnnTopKShares; // ivar: __PSKnnTopKShares
@property (readonly, nonatomic) _PSContactResolver *contactResolver; // ivar: _contactResolver
@property (readonly, nonatomic) NSArray *filterBundleIds; // ivar: _filterBundleIds
@property (retain, nonatomic) NSArray *groupActivityInteractionCache; // ivar: _groupActivityInteractionCache
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (readonly, nonatomic) NSUInteger k; // ivar: _k
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) _CDInteractionCache *messageInteractionCache; // ivar: _messageInteractionCache
@property (retain, nonatomic) _CDInteractionCache *shareInteractionCache; // ivar: _shareInteractionCache


-(NSInteger)suggestionExists:(id)arg0 withValue:(id)arg1 inArray:(id)arg2 ;
-(NSUInteger)indexToInsertNeighbor:(id)arg0 array:(id)arg1 ;
-(id)_rankedZkwSuggestionsWithPredictionContext:(id)arg0 bundleId:(id)arg1 maxSuggestions:(NSUInteger)arg2 frequencyOnly:(BOOL)arg3 interactions:(id)arg4 interactionCache:(id)arg5 ;
-(id)candidatePropertyFromCandidates:(id)arg0 ;
-(id)extractNearestNeighborLabelsForQueryResult:(id)arg0 andNeighbors:(id)arg1 frequencyOnly:(BOOL)arg2 rankerType:(NSInteger)arg3 contactsOnly:(BOOL)arg4 ;
-(id)extractNearestNeighborsForMapsQueryResult:(id)arg0 andNeighbors:(id)arg1 frequencyOnly:(BOOL)arg2 ;
-(id)featureVectorFromAbsolutePredictionTime:(CGFloat)arg0 bundleId:(id)arg1 ;
-(id)featureVectorFromPredictionDate:(id)arg0 bundleId:(id)arg1 ;
-(id)featuresFromInteractions:(id)arg0 ;
-(id)featuresFromInteractionsSplitRecipients:(id)arg0 ;
-(id)featuresFromMapsFeedbackEvents:(id)arg0 ;
-(id)filterGroupActivityInteractionsWithMinimumOccurences:(NSUInteger)arg0 contextBundleId:(id)arg1 filterOutNonMatchingSourceBundleIDs:(BOOL)arg2 ;
-(id)filterShareInteractions:(id)arg0 minimumOccurencesByMechanism:(id)arg1 contextBundleId:(id)arg2 filterOutNonMatchingSourceBundleIDs:(BOOL)arg3 ;
-(id)filterSuggestionsFrom:(id)arg0 byFilteringOutSeedRecipients:(id)arg1 ;
-(id)indexesOfObjectsWithKey:(id)arg0 withValues:(id)arg1 inArray:(id)arg2 ;
-(id)initWithK:(NSUInteger)arg0 interactionStore:(id)arg1 filterByBundleIds:(id)arg2 knowledgeStore:(id)arg3 contactResolver:(id)arg4 messageInteractionCache:(id)arg5 shareInteractionCache:(id)arg6 groupActivityInteractionCache:(id)arg7 ;
-(id)interactionLabelsForQueryResult:(id)arg0 queryPoint:(id)arg1 rankerType:(NSInteger)arg2 frequencyOnly:(BOOL)arg3 contactsOnly:(BOOL)arg4 ;
-(id)mapsShareEtaDefaultKnnSuggestions:(id)arg0 maxSuggestions:(NSUInteger)arg1 ;
-(id)mergedSuggestionsFromShares:(id)arg0 andInteractions:(id)arg1 ;
-(id)messagesGroupResultsForPredictionContext:(id)arg0 ;
-(id)messagesGroupsMatchingSearchPrefix:(id)arg0 inInteractions:(id)arg1 ;
-(id)neighborsFromTrainingData:(id)arg0 k:(NSUInteger)arg1 queryPoint:(id)arg2 ;
-(id)normalizedScoresForInputDictionary:(id)arg0 ;
-(id)normalizedStringFromString:(id)arg0 ;
-(id)rankedAutocompleteSuggestionsWithPredictionContext:(id)arg0 candidates:(id)arg1 ;
-(id)rankedCoRecipientSuggestionsWithPredictionContext:(id)arg0 modelConfiguration:(id)arg1 maxSuggestions:(NSUInteger)arg2 ;
-(id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)arg0 maxSuggestions:(NSUInteger)arg1 ;
-(id)rankedGlobalSuggestionsWithPredictionContext:(id)arg0 maxSuggestions:(NSUInteger)arg1 contactsOnly:(BOOL)arg2 interactions:(id)arg3 contactIdsCurrentlyInStore:(id)arg4 ;
-(id)rankedHandlesFromCandidateHandles:(id)arg0 ;
-(id)rankedLabelsFromInteractionsMaintainRecipientsArray:(id)arg0 andDistances:(id)arg1 freqOnly:(BOOL)arg2 ;
-(id)rankedLabelsFromInteractionsSingleRecipientArray:(id)arg0 andDistances:(id)arg1 freqOnly:(BOOL)arg2 contactsOnly:(BOOL)arg3 scoreLikeShareSheet:(BOOL)arg4 ;
-(id)rankedLabelsFromInteractionsSiriNLWithInteractions:(id)arg0 andDistances:(id)arg1 freqOnly:(BOOL)arg2 ;
-(id)rankedMapsShareEtaSuggestions:(id)arg0 maxSuggestions:(NSUInteger)arg1 ;
-(id)rankedMessagesAutocompleteSuggestionsWithPredictionContext:(id)arg0 bundleId:(id)arg1 candidates:(id)arg2 ;
-(id)rankedMessagesZkwSuggestionsWithPredictionContext:(id)arg0 bundleId:(id)arg1 maxSuggestions:(NSUInteger)arg2 frequencyOnly:(BOOL)arg3 interactions:(id)arg4 ;
-(id)rankedNameSuggestionsWithPredictionContext:(id)arg0 forName:(id)arg1 ;
-(id)rankedNonMessagesAutocompleteSuggestionsWithPredictionContext:(id)arg0 bundleId:(id)arg1 candidates:(id)arg2 performSecondarySearch:(BOOL)arg3 ;
-(id)rankedSiriMLCRHandles:(id)arg0 context:(id)arg1 ;
-(id)rankedZkwSuggestionsWithPredictionContext:(id)arg0 modelConfiguration:(id)arg1 maxSuggestions:(NSUInteger)arg2 ;
-(id)sliceStart:(NSUInteger)arg0 end:(NSUInteger)arg1 ofArray:(id)arg2 ;
-(id)softmaxAppliedOnScoresForInputDictionary:(id)arg0 ;
-(id)splitShareLabels:(id)arg0 suggestionDate:(id)arg1 contextBundleId:(id)arg2 ;
-(id)suggestionProxiesBasedOnExpanseInteractionsWithPredictionContext:(id)arg0 withOnlyTopCandidates:(BOOL)arg1 withFilterOutNonMatchingSourceBundleIDs:(BOOL)arg2 ;
-(id)suggestionProxiesBasedOnNonSharingInteractionsWithPredictionContext:(id)arg0 ;
-(id)suggestionProxiesBasedOnSharingInteractionsWithPredictionContext:(id)arg0 withOnlyTopShares:(BOOL)arg1 withFilterOutNonMatchingSourceBundleIDs:(BOOL)arg2 ;
-(id)suggestionProxiesWithPredictionContext:(id)arg0 ;
-(id)targetBundleIdsForFilterBundlesIds:(id)arg0 ;
-(void)updateModelProperties:(id)arg0 ;


@end


#endif