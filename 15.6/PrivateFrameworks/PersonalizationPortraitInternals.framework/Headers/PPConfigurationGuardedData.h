// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONFIGURATIONGUARDEDDATA_H
#define PPCONFIGURATIONGUARDEDDATA_H

@class NSArray, NSString, NSDictionary, _PASCFBurstTrie;

#import <Foundation/Foundation.h>


@interface PPConfigurationGuardedData : NSObject {
    float remoteTopicsMultiplier;
    CGFloat halfValuePosition;
    CGFloat nonReaderTextWeight;
    CGFloat analyticsSamplingRate;
    CGFloat musicDataCollectionSamplingRateForCTS;
    CGFloat musicDataCollectionSamplingRateForAMP;
    int musicDataCollectionMaximumRecordsPerType;
    BOOL musicDataCollectionCollectNonAMPNowPlaying;
    NSArray *musicDataCollectionAMPBundleIds;
    int sportsMetricsNumberOfTeamsLogged;
    int sportsMetricsNumberOfLeaguesLogged;
    NSString *sportsMetricsEventName;
    CGFloat sportsMetricsSamplingRate;
    NSString *variantName;
    NSString *naturalVariantName;
    NSArray *availableVariantNames;
    NSDictionary *differentiallyPrivateEntityLogLevels;
    NSDictionary *topicsSourceMultiplier;
    NSDictionary *topicsAlgorithmMultiplier;
    NSDictionary *namedEntityAlgorithmConfiguration;
    NSDictionary *topicAlgorithmConfiguration;
    NSDictionary *locationAlgorithmConfiguration;
    _PASCFBurstTrie *topicCalibration;
    BOOL safariDonationTitleExtractionEnabled;
    BOOL safariDataDetectorsEnabledForHighMemoryDevices;
    float scoreThresholdForNamedEntity;
    float scoreThresholdForTopic;
    float scoreThresholdForLocation;
    float feedbackSessionLogsSamplingRate;
    NSDictionary *feedbackSessionLogsSamplingRateOverrides;
    float feedbackSessionLogsExtractionsSamplingRate;
    int feedbackSessionLogsGeohashLength;
    int analyticsMaximumNumberOfRecords;
    CGFloat topicDecayHalfLifeSeconds;
    CGFloat namedEntityDecayHalfLifeSeconds;
    CGFloat locationDecayHalfLifeSeconds;
    BOOL topicScoringUsesCoreML;
    BOOL namedEntityScoringUsesCoreML;
    BOOL flattenTopicsForCoreML;
    BOOL flattenNamedEntitiesforCoreML;
    BOOL namedEntityScoringUsesHybrid;
    BOOL topicScoringUsesHybrid;
    BOOL locationScoringUsesHybrid;
    CGFloat decayedFeedbackCountsHalfLifeDays;
    BOOL notificationExtractionEnabled;
    BOOL namedEntityFeedbackUsesCoreML;
    BOOL topicFeedbackUsesCoreML;
    BOOL locationFeedbackUsesCoreML;
    NSArray *engagementKValues;
    BOOL use2StageScoreInterpreterForNEScoring;
    BOOL use2StageScoreInterpreterForTPScoring;
    BOOL use2StageScoreInterpreterForLocationScoring;
    BOOL topicMappingUsesCoreML;
    CGFloat topicMappingCoreMLThreshold;
    BOOL locationScoringUsesCoreML;
    CGFloat routineExtractionScoreCountWeight;
    CGFloat routineExtractionScoreDurationWeight;
    CGFloat routineExtractionScoreDecayHalfLifeDays;
    NSDictionary *linearModelHyperparameters;
    int maxNumberMappedTopics;
    int maxNumberNamedEntities;
    unsigned char customTaggerMaxTokenCount;
    unsigned int mapsSearchQueryLimit;
    CGFloat mapsSearchQueryFromDateInterval;
    unsigned int namedEntityLoadAndMonitorInitialLoadLimit;
    NSDictionary *contactsLabelScoringMap;
    float recordSourceContactsInitialScore;
    float recordSourceNonContactsInitialScore;
    unsigned char peopleSuggesterMaxCount;
    CGFloat navigationMinimumTimeInterval;
    unsigned int navigationMinimumDistanceInMeters;
    unsigned char nextEventFuzzMinutes;
    int queryTimeNextEventFromMinutes;
    unsigned int queryTimeNextEventToMinutes;
    unsigned int queryTimeOtherEventToMinutes;
    NSUInteger sentenceEmbeddingVersion;
    unsigned int maxRelevantHighlightContacts;
    unsigned int maxNEExtractions;
    CGFloat scoreThreshold;
    BOOL storeNewExtractions;
    BOOL useRawNEExtractionScores;
    BOOL useCachedPortraitScores;
    unsigned int maxItemsInFeatureDictionary;
    CGFloat socialHighlightDecayInterval;
    CGFloat socialHighlightRankedStorageMaxAge;
    CGFloat socialHighlightCacheTimeoutInterval;
    CGFloat socialHighlightFeedbackDeletionInterval;
    CGFloat socialHighlightMetricReportingInterval;
    unsigned int socialHighlightMaxNumHighlights;
    unsigned int socialHighlightTopKCount;
    BOOL skipInsignificantEmailExtractions;
    CGFloat maxEmailHarvestingEligiblityInterval;
}






@end


#endif