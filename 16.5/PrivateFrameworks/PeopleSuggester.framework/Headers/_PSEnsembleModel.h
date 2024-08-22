// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSENSEMBLEMODEL_H
#define _PSENSEMBLEMODEL_H

@class _CDInteractionCache, NSArray, NSSet, CNContactStore, _CDInteractionStore, NSNumber, NSUserDefaults, PPContactStore, NSDictionary, PPTopicStore, TRIClient, NSString, TRITrackingId;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying><_DKKnowledgeSaving;

#import <Foundation/Foundation.h>

#import "_PSFeatureCache.h"
#import "_PSConfidenceModelForSharing.h"
#import "_PSInteractionAndContactMonitor.h"
#import "_PSContactResolver.h"
#import "_PSHeuristics.h"
#import "_PSKNNModel.h"
#import "_PSRuleMiningModel.h"
#import "_PSSharingContactRankerModel.h"
#import "_PSFTZKWOrchestrator.h"
#import "_PSFTZKWTrialData.h"

@interface _PSEnsembleModel : NSObject {
    os_unfair_lock_s _lock;
    _PSFeatureCache *_featureCache;
    NSObject<OS_dispatch_queue> *_featureFetchQueue;
}


@property BOOL PSConfidenceModelInUse; // ivar: _PSConfidenceModelInUse
@property (retain) _CDInteractionCache *allOtherInteractionCache; // ivar: _allOtherInteractionCache
@property (retain, nonatomic) NSArray *allOtherInteractionCacheDirections; // ivar: _allOtherInteractionCacheDirections
@property (retain, nonatomic) NSArray *allOtherInteractionCacheMechanism; // ivar: _allOtherInteractionCacheMechanism
@property (nonatomic) BOOL allowNonSupportedBundleIDs; // ivar: _allowNonSupportedBundleIDs
@property (retain, nonatomic) NSSet *cachedSupportedBundleIDs; // ivar: _cachedSupportedBundleIDs
@property (retain, nonatomic) _PSConfidenceModelForSharing *confidenceModelForSharing; // ivar: _confidenceModelForSharing
@property (retain, nonatomic) _PSInteractionAndContactMonitor *contactMonitor; // ivar: _contactMonitor
@property (retain, nonatomic) _PSContactResolver *contactResolver; // ivar: _contactResolver
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSArray *defaultContactKeysToFetch; // ivar: _defaultContactKeysToFetch
@property (retain, nonatomic) _PSHeuristics *heuristics; // ivar: _heuristics
@property (retain, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (retain, nonatomic) _PSKNNModel *knnMapsModel; // ivar: _knnMapsModel
@property (retain, nonatomic) _PSKNNModel *knnModel; // ivar: _knnModel
@property (retain, nonatomic) _PSKNNModel *knnNameOrContactRankerModel; // ivar: _knnNameOrContactRankerModel
@property (retain, nonatomic) _PSKNNModel *knnSiriNLContactRankerModel; // ivar: _knnSiriNLContactRankerModel
@property (retain, nonatomic) _PSKNNModel *knnZkwModel; // ivar: _knnZkwModel
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) NSArray *messageDirections; // ivar: _messageDirections
@property (retain) _CDInteractionCache *messageInteractionCache; // ivar: _messageInteractionCache
@property (retain, nonatomic) NSNumber *messageMechanism; // ivar: _messageMechanism
@property (retain, nonatomic) NSUserDefaults *peopleSuggesterDefaults; // ivar: _peopleSuggesterDefaults
@property (retain, nonatomic) PPContactStore *portraitContactStore; // ivar: _portraitContactStore
@property (retain) NSDictionary *psConfig; // ivar: _psConfig
@property (retain) NSDictionary *psConfigForAdaptableModel; // ivar: _psConfigForAdaptableModel
@property (retain, nonatomic) _PSRuleMiningModel *ruleMiningModel; // ivar: _ruleMiningModel
@property (retain) _CDInteractionCache *shareInteractionCache; // ivar: _shareInteractionCache
@property (retain, nonatomic) NSArray *shareSheetMechanisms; // ivar: _shareSheetMechanisms
@property (retain, nonatomic) _PSSharingContactRankerModel *sharingContactRankerModel; // ivar: _sharingContactRankerModel
@property (retain, nonatomic) PPTopicStore *topicStore; // ivar: _topicStore
@property (retain) TRIClient *trialClient; // ivar: _trialClient
@property (retain, nonatomic) NSString *trialID; // ivar: _trialID
@property (retain) TRITrackingId *trialTrackingID; // ivar: _trialTrackingID
@property BOOL useSyntheticSharingInteractions; // ivar: _useSyntheticSharingInteractions
@property (retain, nonatomic) _PSFTZKWOrchestrator *zkwFTOrchestrator; // ivar: _zkwFTOrchestrator
@property (retain, nonatomic) _PSFTZKWTrialData *zkwFTTrialData; // ivar: _zkwFTTrialData


-(BOOL)allowConcurrentReads;
-(BOOL)copyRemoteRuleMinerMLModel:(id)arg0 ;
-(BOOL)excludeSuggestionWithConversationId:(id)arg0 ;
-(BOOL)loadPSConfig:(id)arg0 ;
-(id)_knnZKWSuggestionsWithPredictionContext:(id)arg0 modelConfiguration:(id)arg1 maxSuggestions:(NSUInteger)arg2 ;
-(id)appExtensionSuggestionsFromContext:(id)arg0 ;
-(id)autocompleteSearchResultsWithPredictionContext:(id)arg0 ;
-(id)candidatesForShareSheetRanking;
-(id)computeEphemeralFeaturesWithPredictionContext:(id)arg0 ;
-(id)familyPredictionsWithMaxSuggestions:(NSUInteger)arg0 predictionContext:(id)arg1 ;
-(id)fetchShareSheetSupportedBundleIDs;
-(id)fetchSupportedBundleIDsWithPredictionContextFilters:(id)arg0 ;
-(id)getLatestTrialMLModelVersion;
-(id)getMeContactIdentifier;
-(id)getModelProxiesArray;
-(id)getModelSuggestionsProxyDictWithModelProxiesArray:(id)arg0 ;
-(id)init;
-(id)mapsSuggestionArrayWithArray:(id)arg0 appendingUniqueElementsFromArray:(id)arg1 contactResolver:(id)arg2 meContactId:(id)arg3 ;
-(id)mergedSuggestionsWithFamilySuggestions:(id)arg0 shareSheetSuggestions:(id)arg1 maxSuggestions:(NSUInteger)arg2 supportedBundleIds:(id)arg3 ;
-(id)predictWithMapsPredictionContext:(id)arg0 maxSuggestions:(NSUInteger)arg1 ;
-(id)predictWithPredictionContext:(id)arg0 maxSuggestions:(NSUInteger)arg1 ;
-(id)predictWithPredictionContext:(id)arg0 maxSuggestions:(NSUInteger)arg1 contactKeysToFetch:(id)arg2 ;
-(id)rankedAutocompleteSuggestionsFromContext:(id)arg0 candidates:(id)arg1 ;
-(id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)arg0 maxSuggestions:(NSUInteger)arg1 interactionId:(id)arg2 ;
-(id)rankedGlobalSuggestionsWithPredictionContext:(id)arg0 contactsOnly:(BOOL)arg1 maxSuggestions:(NSUInteger)arg2 ;
-(id)rankedHandlesFromCandidateHandles:(id)arg0 ;
-(id)rankedNameSuggestionsWithPredictionContext:(id)arg0 name:(id)arg1 ;
-(id)rankedSiriMLCRHandles:(id)arg0 context:(id)arg1 ;
-(id)rerankMapsSuggestions:(id)arg0 usingPredictionContext:(id)arg1 contactResolver:(id)arg2 ;
-(id)suggestZKWSuggestionsWithPredictionContext:(id)arg0 maxSuggestions:(NSUInteger)arg1 ;
-(id)suggestionsFromSuggestionProxies:(id)arg0 supportedBundleIDs:(id)arg1 contactKeysToFetch:(id)arg2 meContactIdentifier:(id)arg3 maxSuggestions:(NSUInteger)arg4 ;
-(id)visualIdentifierHandle;
-(int)modelProxyToVirtualFeatureStoreFeature:(id)arg0 ;
-(void)addAdaptedModelUsageInfoToSuggestions:(id)arg0 ;
-(void)addExtraInformationWithSuggestions:(id)arg0 modelSuggestionProxiesDict:(id)arg1 ;
-(void)addSupportedBundleIDs:(id)arg0 ;
-(void)addUTIInfo:(id)arg0 predictionContext:(id)arg1 ;
-(void)discardAdaptedModel;
-(void)discardTrialModels;
-(void)getHeuristicSuggestionProxies:(id)arg0 supportedBundleIDs:(id)arg1 modelSuggestionProxiesDict:(id)arg2 meContactIdentifier:(id)arg3 ;
-(void)getKnnSuggestionProxies:(id)arg0 supportedBundleIDs:(id)arg1 modelSuggestionProxiesDict:(id)arg2 ;
-(void)getOtherSuggestionProxies:(id)arg0 supportedBundleIDs:(id)arg1 modelSuggestionProxiesDict:(id)arg2 ;
-(void)getRuleMiningSuggestionProxies:(id)arg0 supportedBundleIDs:(id)arg1 modelSuggestionProxiesDict:(id)arg2 ;
-(void)loadDefaultAdaptableModelConfig;
-(void)loadDefaultPSConfig;
-(void)populateCaches;
-(void)populateCachesWithSupportedBundleIDs:(id)arg0 ;
-(void)prewarmVisualIdentifierHandle;
-(void)refreshCaches;
-(void)registerWithTrial;
-(void)setPhotoAnalysisFromAssetsWithPredictionContext:(id)arg0 identifiersOfPeopleInPhotos:(id)arg1 ;
-(void)updateFactorLevels;
-(void)updateTrialID:(id)arg0 ;


@end


#endif