// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONFIGURATION_H
#define PPCONFIGURATION_H

@class _PASLock, _PASNotificationToken, NSCache;

#import <Foundation/Foundation.h>

#import "PPTrialWrapper.h"

@interface PPConfiguration : NSObject {
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateHandlerToken;
    NSCache *_cachedAlgorithms;
    PPTrialWrapper *_trialWrapper;
}




+(id)sharedInstance;
+(void)reload;
-(BOOL)enableECRMessageTokenCountsPlugin;
-(BOOL)flattenNamedEntitiesForCoreML;
-(BOOL)flattenTopicsForCoreML;
-(BOOL)isMultilingual;
-(BOOL)locationFeedbackUsesCoreML;
-(BOOL)locationScoringUsesCoreML;
-(BOOL)locationScoringUsesHybrid;
-(BOOL)namedEntityFeedbackUsesCoreML;
-(BOOL)namedEntityScoringUsesCoreML;
-(BOOL)namedEntityScoringUsesHybrid;
-(BOOL)notificationExtractionEnabled;
-(BOOL)portraitMusicDataCollectionCollectNonAMPNowPlaying;
-(BOOL)safariDataDetectorsEnabledForHighMemoryDevices;
-(BOOL)safariDonationTitleExtractionEnabled;
-(BOOL)skipInsignificantEmailExtractions;
-(BOOL)storeNewExtractions;
-(BOOL)topicFeedbackUsesCoreML;
-(BOOL)topicMappingUsesCoreML;
-(BOOL)topicScoringUsesCoreML;
-(BOOL)topicScoringUsesHybrid;
-(BOOL)use2StageScoreInterpreterForLocationScoring;
-(BOOL)use2StageScoreInterpreterForNEScoring;
-(BOOL)use2StageScoreInterpreterForTPScoring;
-(BOOL)useCachedPortraitScores;
-(BOOL)useRawNEExtractionScores;
-(CGFloat)decayedFeedbackCountsHalfLifeDays;
-(CGFloat)halfValuePosition;
-(CGFloat)locationDecayHalfLifeSeconds;
-(CGFloat)mapsSearchQueryFromDateInterval;
-(CGFloat)maxEmailHarvestingEligiblityInterval;
-(CGFloat)namedEntityDecayHalfLifeSeconds;
-(CGFloat)navigationMinimumTimeInterval;
-(CGFloat)nonReaderTextWeight;
-(CGFloat)portraitAnalyticsSamplingRate;
-(CGFloat)portraitMusicDataCollectionSamplingRateForAMP;
-(CGFloat)portraitMusicDataCollectionSamplingRateForCTS;
-(CGFloat)routineExtractionScoreCountWeight;
-(CGFloat)routineExtractionScoreDecayHalfLifeDays;
-(CGFloat)routineExtractionScoreDurationWeight;
-(CGFloat)scoreThreshold;
-(CGFloat)socialHighlightCacheTimeoutInterval;
-(CGFloat)socialHighlightDecayInterval;
-(CGFloat)socialHighlightFeedbackDeletionInterval;
-(CGFloat)socialHighlightMetricReportingInterval;
-(CGFloat)socialHighlightRankedStorageMaxAge;
-(CGFloat)sportsMetricsSamplingRate;
-(CGFloat)topicDecayHalfLifeSeconds;
-(CGFloat)topicMappingCoreMLThreshold;
-(NSUInteger)maxUniqueTokensInECRTokenCounts;
-(NSUInteger)sentenceEmbeddingVersion;
-(float)feedbackSessionLogsExtractionsSamplingRate;
-(float)feedbackSessionLogsSamplingRate;
-(float)recordSourceContactsInitialScore;
-(float)recordSourceNonContactsInitialScore;
-(float)remoteTopicsMultiplier;
-(float)scoreThresholdForLocation;
-(float)scoreThresholdForNamedEntity;
-(float)scoreThresholdForTopic;
-(float)topicsMultiplierForBundleId:(id)arg0 algorithm:(NSUInteger)arg1 ;
-(id)_algorithmsForNode:(id)arg0 bundleId:(id)arg1 customRules:(id)arg2 ;
-(id)_algorithmsToDelete:(id)arg0 bundleId:(id)arg1 customRules:(id)arg2 ;
-(id)_mapAlgorithmNamesToNumbers:(id)arg0 domain:(unsigned char)arg1 ;
-(id)availablePortraitVariantNames;
-(id)contactsLabelScoringMap;
-(id)differentiallyPrivateEntityLogLevels;
-(id)engagementKValues;
-(id)extractionAlgorithmsForBundleId:(id)arg0 sourceLanguage:(id)arg1 conservative:(BOOL)arg2 domain:(unsigned char)arg3 ;
-(id)feedbackSessionLogsSamplingRateOverrides;
-(id)hyperparametersForMappingId:(id)arg0 ;
-(id)initWithTrialWrapper:(id)arg0 ;
-(id)naturalPortraitVariantName;
-(id)portraitMusicDataCollectionAMPBundleIds;
-(id)portraitVariantName;
-(id)sportsMetricsEventName;
-(id)topicCalibrationTrie;
-(id)trialWrapperReloadingIfNeeded;
-(int)feedbackSessionLogsGeohashLength;
-(int)maxNumberMappedTopics;
-(int)maxNumberNamedEntities;
-(int)portraitAnalyticsMaximumNumberOfRecords;
-(int)portraitMusicDataCollectionMaximumRecordsPerType;
-(int)queryTimeNextFromMinutes;
-(int)sportsMetricsNumberOfLeaguesLogged;
-(int)sportsMetricsNumberOfTeamsLogged;
-(unsigned char)customTaggerMaxTokenCount;
-(unsigned char)nextEventsFuzzMinutes;
-(unsigned char)peopleSuggesterMax;
-(unsigned int)mapsSearchQueryLimit;
-(unsigned int)maxItemsInFeatureDictionary;
-(unsigned int)maxNEExtractions;
-(unsigned int)maxRelevantHighlightContacts;
-(unsigned int)namedEntityLoadAndMonitorInitialLoadLimit;
-(unsigned int)navigationMinimumDistanceInMeters;
-(unsigned int)queryTimeNextToMinutes;
-(unsigned int)queryTimeOtherToMinutes;
-(unsigned int)socialHighlightMaxNumHighlights;
-(unsigned int)socialHighlightTopKCount;
-(void)_loadConfigParams;
-(void)_loadContactsConfigParams;
-(void)_loadContactsConfigParamsWithGuardedData:(id)arg0 ;
-(void)_loadGlobalConfigParams;
-(void)_loadGlobalConfigParamsWithGuardedData:(id)arg0 ;
-(void)_loadLocationsConfigParams;
-(void)_loadLocationsConfigParamsWithGuardedData:(id)arg0 ;
-(void)_loadNamedEntitiesConfigParams;
-(void)_loadNamedEntitiesConfigParamsWithGuardedData:(id)arg0 ;
-(void)_loadQuickTypeConfigParams;
-(void)_loadQuickTypeConfigParamsWithGuardedData:(id)arg0 ;
-(void)_loadSocialHighlightConfigParams;
-(void)_loadSocialHighlightConfigParamsWithGuardedData:(id)arg0 ;
-(void)_loadTopicsConfigParams;
-(void)_loadTopicsConfigParamsWithGuardedData:(id)arg0 ;
-(void)_loadUniversalSearchConfigParams;
-(void)_loadUniversalSearchConfigParamsWithGuardedData:(id)arg0 ;


@end


#endif