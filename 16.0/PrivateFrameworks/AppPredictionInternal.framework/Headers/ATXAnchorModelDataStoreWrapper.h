// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELDATASTOREWRAPPER_H
#define ATXANCHORMODELDATASTOREWRAPPER_H

@class NSDate, NSMutableDictionary, NSString;
@protocol ATXAnchorModelDataStoreWrapperProtocol;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"
#import "ATXCachedCandidateCounter.h"

@interface ATXAnchorModelDataStoreWrapper : NSObject <ATXAnchorModelDataStoreWrapperProtocol>

 {
    _ATXDataStore *_store;
    NSDate *_twentyOneDaysAgo;
    NSDate *_dateOfOldestAllowedCandidateOccurrenceForCandidateGeneration;
    NSMutableDictionary *_numCandidateOccurrencesInAllContextsForCandidateTypeCache;
    ATXCachedCandidateCounter *_cachedAppLaunchCounter;
    ATXCachedCandidateCounter *_cachedModeCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)dayOfWeekIntegerFromATXAnchorModelPBDayOfWeek:(int)arg0 ;
+(NSInteger)isWeekendFromATXAnchorModelPBDayOfWeek:(int)arg0 ;
+(id)actionCandidateFeaturesFromActionEvent:(id)arg0 actionMetadata:(id)arg1 actionOccurred:(BOOL)arg2 actionEngaged:(BOOL)arg3 ;
+(id)actionDetailsFromActionCandidateId:(id)arg0 ;
+(id)actionKeyFromActionCandidateId:(id)arg0 ;
+(id)anchorFeaturesForAnchorOccurrence:(id)arg0 anchor:(id)arg1 anchorMetadata:(id)arg2 ;
+(id)appCandidateFeaturesFromAppLaunchEvent:(id)arg0 appMetadata:(id)arg1 appWasLaunched:(BOOL)arg2 appEngaged:(BOOL)arg3 ;
+(id)candidateIdFromAppIntentDuetEvent:(id)arg0 ;
+(id)candidateIdFromAppLaunchBiomeEvent:(id)arg0 ;
+(id)candidateIdFromAppLaunchDuetEvent:(id)arg0 ;
+(id)candidateIdFromBiomeEvent:(id)arg0 ;
+(id)candidateIdFromLinkActionBiomeEvent:(id)arg0 ;
+(id)candidateIdFromModeBiomeEvent:(id)arg0 ;
+(id)linkActionCandidateFeaturesFromLinkActionEvent:(id)arg0 actionMetadata:(id)arg1 actionOccurred:(BOOL)arg2 actionEngaged:(BOOL)arg3 ;
+(id)linkActionDetailsFromLinkActionCandidateId:(id)arg0 ;
+(id)modeCandidateFeaturesFromModeEvent:(id)arg0 modeMetadata:(id)arg1 modeOccurred:(BOOL)arg2 modeEngaged:(BOOL)arg3 ;
+(id)modeDetailsFromModeCandidateId:(id)arg0 ;
+(id)populateCandidateOccurrencesForFeatures:(id)arg0 withLaunchHistoryMetadata:(id)arg1 ;
-(CGFloat)timestampOfMostRecentRecordedAnchorOccurrenceForAnchor:(id)arg0 ;
-(NSInteger)latestAlogIdForCandidateId:(id)arg0 ;
-(NSInteger)numActionOccurrencesInAllContexts;
-(NSInteger)numActionOccurrencesInAllContextsForActionId:(id)arg0 ;
-(NSInteger)numAppLaunchOccurrencesInAllContexts;
-(NSInteger)numAppLaunchOccurrencesInAllContextsForAppLaunchCandidateId:(id)arg0 ;
-(NSInteger)numCandidateIdOccurrencesInJointAnchorContext:(id)arg0 anchor:(id)arg1 anchorMetadata:(id)arg2 ;
-(NSInteger)numCandidateOccurrencesInAllContextsForCandidate:(id)arg0 ;
-(NSInteger)numCandidateOccurrencesInAllContextsForCandidateType:(id)arg0 ;
-(NSInteger)numCandidateOccurrencesInAnchorContextForCandidate:(id)arg0 anchor:(id)arg1 ;
-(NSInteger)numCandidateOccurrencesInAnchorContextForCandidateType:(id)arg0 anchor:(id)arg1 ;
-(NSInteger)numLinkActionOccurrencesInAllContexts;
-(NSInteger)numLinkActionOccurrencesInAllContextsForCandidateId:(id)arg0 ;
-(NSInteger)numModeOccurrencesInAllContexts;
-(NSInteger)numModeOccurrencesInAllContextsForModeId:(id)arg0 ;
-(NSInteger)numUniqueAnchorOccurrencesForAnchor:(id)arg0 candidateId:(id)arg1 ;
-(NSInteger)numUniqueAnchorOccurrencesForCandidate:(id)arg0 anchor:(id)arg1 ;
-(NSInteger)numUniqueAnchorOccurrencesForGenericCandidateId:(id)arg0 anchor:(id)arg1 ;
-(NSInteger)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrenceForCandidate:(id)arg0 anchor:(id)arg1 ;
-(NSInteger)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrenceForGenericCandidateId:(id)arg0 anchor:(id)arg1 ;
-(NSUInteger)deleteSamplesForBundleIdsNotInList:(id)arg0 ;
-(NSUInteger)deleteSamplesThatAreMoreThan28DaysOld;
-(id)appIntentDuetEventFromCandidateId:(id)arg0 date:(id)arg1 ;
-(id)appIntentDuetEventsFromCandidateIds:(id)arg0 date:(id)arg1 ;
-(id)appLaunchDuetEventFromCandidateId:(id)arg0 date:(id)arg1 ;
-(id)appLaunchDuetEventsFromCandidateIds:(id)arg0 date:(id)arg1 ;
-(id)candidateIdFromActionMetadata:(id)arg0 ;
-(id)candidateTypeForCandidateId:(id)arg0 ;
-(id)dateAnchorModelWasLastTrainedForAnchor:(id)arg0 ;
-(id)dateOfFirstPositiveCandidateOccurrence:(id)arg0 anchor:(id)arg1 startDate:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)historicalAnchorOccurrenceDatesForAnchor:(id)arg0 ;
-(id)init;
-(id)initWithDataStore:(id)arg0 ;
-(id)linkActionBiomeEventFromCandidateId:(id)arg0 date:(id)arg1 ;
-(id)linkActionBiomeEventsFromCandidateIds:(id)arg0 date:(id)arg1 ;
-(id)minSlotResolutionParametersFromALogId:(NSInteger)arg0 paramHash:(NSInteger)arg1 ;
-(id)modeBiomeEventFromCandidateId:(id)arg0 date:(id)arg1 ;
-(id)modeBiomeEventsFromCandidateIds:(id)arg0 date:(id)arg1 ;
-(id)scoredActionFromAnchorModelPrediction:(id)arg0 ;
-(id)secondsAfterAnchorWhenCandidateOccurredForAnchor:(id)arg0 candidateId:(id)arg1 onlyConsiderFirstOccurrencePerAnchor:(BOOL)arg2 ;
-(id)trainingDataForCandidate:(id)arg0 anchor:(id)arg1 replacementStringForNilStringValues:(id)arg2 ;
-(id)trainingResultsForAnchor:(id)arg0 ;
-(id)uniqueAnchorEventIdentifiersForAnchor:(id)arg0 ;
-(id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)arg0 ;
-(id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)arg0 candidateType:(id)arg1 ;
-(id)uniqueCandidateIdsThatOccurredAfterAnchor:(id)arg0 candidateType:(id)arg1 minOccurrences:(NSInteger)arg2 ;
-(void)assignMetricsForTrainingResult:(id)arg0 anchorType:(id)arg1 anchorEventIdentifier:(id)arg2 candidateId:(id)arg3 ;
-(void)insertAnchorOccurrence:(id)arg0 anchor:(id)arg1 featureMetadata:(id)arg2 ;
-(void)insertAnchorSuggestionOutcome:(NSUInteger)arg0 date:(id)arg1 anchorType:(id)arg2 anchorEventIdentifier:(id)arg3 candidateId:(id)arg4 ;
-(void)populateCachedCountsForCandidateIds:(id)arg0 ;
-(void)updateOrInsertActionTrainingSample:(id)arg0 featurizedAction:(id)arg1 actionOccurred:(BOOL)arg2 actionEngaged:(BOOL)arg3 anchorEvent:(id)arg4 anchor:(id)arg5 ;
-(void)updateOrInsertAnchorEvent:(id)arg0 anchor:(id)arg1 featureMetadata:(id)arg2 ;
-(void)updateOrInsertAnchorModelTrainingResults:(id)arg0 anchor:(id)arg1 ;
-(void)updateOrInsertAnchorType:(id)arg0 ;
-(void)updateOrInsertAppTrainingSample:(id)arg0 featurizedApp:(id)arg1 appWasLaunched:(BOOL)arg2 appEngaged:(BOOL)arg3 anchorEvent:(id)arg4 anchor:(id)arg5 ;
-(void)updateOrInsertCandidateEventToDatabaseWithCandidateFeatures:(id)arg0 anchor:(id)arg1 anchorEvent:(id)arg2 ;
-(void)updateOrInsertLinkActionTrainingSample:(id)arg0 featurizedAction:(id)arg1 actionOccurred:(BOOL)arg2 actionEngaged:(BOOL)arg3 anchorEvent:(id)arg4 anchor:(id)arg5 ;
-(void)updateOrInsertLocation:(id)arg0 ;
-(void)updateOrInsertModeTrainingSample:(id)arg0 featurizedMode:(id)arg1 modeOccurred:(BOOL)arg2 modeEngaged:(BOOL)arg3 anchorEvent:(id)arg4 anchor:(id)arg5 ;


@end


#endif