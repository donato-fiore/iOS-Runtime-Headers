// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMANAGER_H
#define PGMANAGER_H

@class NSURL, NSMutableArray, CPAnalytics, NSArray, NSString, PHPhotoLibrary, NSProgress;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGMusicCache.h"
#import "PGMutableGraph.h"
#import "PGCurationManager.h"
#import "PGMusicBag.h"

@interface PGManager : NSObject {
    PGGraph *_graph;
    NSURL *_cachedGraphPersistenceParentDirectoryURL;
    uint8_t _fullGraphRebuildStamp;
    PGMusicCache *_musicCache;
    PGMutableGraph *_mutableGraph;
    NSObject<OS_dispatch_queue> *_graphAccessQueue;
    NSObject<OS_dispatch_queue> *_applicationDataQueue;
    uint8_t _numberOfCurrentGraphAccesses;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableArray *_coalescingGraphIsReady;
}


@property (readonly, nonatomic) CPAnalytics *analytics; // ivar: _analytics
@property (readonly, copy, nonatomic) NSArray *availableMetricEvents;
@property (readonly, nonatomic) PGCurationManager *curationManager; // ivar: _curationManager
@property (readonly, nonatomic) NSObject<OS_os_log> *enrichmentLoggingConnection; // ivar: _enrichmentLoggingConnection
@property (readonly, nonatomic) NSObject<OS_os_log> *graphLoggingConnection; // ivar: _graphLoggingConnection
@property (readonly, copy) NSString *graphName; // ivar: _graphName
@property (retain, nonatomic) NSURL *graphPersistenceParentDirectoryURL;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *graphUpdateQueue; // ivar: _graphUpdateQueue
@property (readonly, nonatomic) NSObject<OS_os_log> *guessWhoLoggingConnection; // ivar: _guessWhoLoggingConnection
@property (readonly, nonatomic) NSObject<OS_os_log> *ingestLoggingConnection; // ivar: _ingestLoggingConnection
@property (readonly) NSUInteger libraryAnalysisState;
@property NSUInteger libraryAnalysisState; // ivar: _libraryAnalysisState
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) NSObject<OS_os_log> *memoriesLoggingConnection; // ivar: _memoriesLoggingConnection
@property (retain, nonatomic) NSURL *metadataSnapshotOutputPathURL; // ivar: _metadataSnapshotOutputPathURL
@property (readonly, nonatomic) NSObject<OS_os_log> *metricsLoggingConnection; // ivar: _metricsLoggingConnection
@property (retain, nonatomic) PGMusicBag *musicBag; // ivar: _musicBag
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) BOOL photoLibraryIsReadonly; // ivar: _photoLibraryIsReadonly
@property (retain, nonatomic) NSProgress *rebuildProgress; // ivar: _rebuildProgress
@property (readonly, nonatomic) NSObject<OS_os_log> *relatedLoggingConnection; // ivar: _relatedLoggingConnection
@property (readonly, nonatomic) NSObject<OS_os_log> *suggestionsLoggingConnection; // ivar: _suggestionsLoggingConnection
@property (readonly, nonatomic) NSObject<OS_os_log> *upNextLoggingConnection; // ivar: _upNextLoggingConnection


+(BOOL)clientIsPhotoAnalysis;
+(BOOL)geoServiceProviderDidChangeForGraph:(id)arg0 ;
+(BOOL)photosChallengeIsEnabled;
+(Class)graphClass;
+(id)_calendarEventsBetweenDate:(id)arg0 andDate:(id)arg1 atLocation:(id)arg2 withPersonLocalIdentifiers:(id)arg3 inPhotoLibrary:(id)arg4 ;
+(id)allRecomputedTripMomentsInGraph:(id)arg0 ;
+(id)defaultRulesWithOptions:(id)arg0 graph:(id)arg1 ;
+(id)exportableDictionaryFromKeywords:(id)arg0 ;
+(id)stringFromPGDuration:(NSUInteger)arg0 ;
+(id)stringFromPGPrecision:(NSUInteger)arg0 ;
+(void)initialize;
-(BOOL)_supportsSemanticalDedupingForMemory:(id)arg0 ;
-(BOOL)canProceedWithFullGraphRebuildStamp:(uint8_t)arg0 ;
-(BOOL)copyGraphToURL:(id)arg0 ;
-(BOOL)generateDefaultRulesForLibraryScopeWithLocalIdentifier:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)graphIsUsable:(id)arg0 ;
-(BOOL)hasPendingGraphAccess;
-(BOOL)isBusy;
-(BOOL)isInterestingForMoment:(id)arg0 ;
-(BOOL)isReady;
-(BOOL)isSmartInterestingForMoment:(id)arg0 ;
-(BOOL)memoriesOfTheDayAreWorthNotifying;
-(BOOL)performLibraryAnalysisWithGraphURL:(id)arg0 withRecipe:(id)arg1 processedGraphUpdate:(*id)arg2 progressBlock:(id)arg3 ;
-(BOOL)requiresReadOnly;
-(BOOL)saveGraphToURL:(id)arg0 ;
-(BOOL)suggestsToStartSharedLibraryWithError:(*id)arg0 ;
-(BOOL)swapInGraphAtURL:(id)arg0 progressBlock:(id)arg1 ;
-(BOOL)updateGraph:(id)arg0 withGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(id)arg3 ;
-(CGFloat)graphScoreForMoment:(id)arg0 ;
-(CGFloat)libraryDuration;
-(CGFloat)neighborScoreForMoment:(id)arg0 ;
-(CGFloat)targetCurationDurationWithCurationLength:(NSUInteger)arg0 customDuration:(CGFloat)arg1 ;
-(NSInteger)validatePHObject:(id)arg0 featureAggregationValidator:(id)arg1 assetFetchOptionPropertySet:(id)arg2 error:(*id)arg3 ;
-(NSInteger)validatePHObject:(id)arg0 graphRelationsFeatureValidator:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_numberOfAssetsMatchingInternalPredicate:(id)arg0 ;
-(NSUInteger)_numberOfFamilyHolidayMomentsWithGraph:(id)arg0 ;
-(NSUInteger)_numberOfMomentsOverWeekendsWithGraph:(id)arg0 ;
-(NSUInteger)_numberOfNightOutMomentsWithGraph:(id)arg0 ;
-(NSUInteger)currentGraphVersion;
-(NSUInteger)medianValueFromUnsignedItegerArray:(id)arg0 ;
-(id)UUIDForMoment:(id)arg0 ;
-(id)_behavioralStatisticsWithGraph:(id)arg0 ;
-(id)_checkConsistencyOfGraph:(id)arg0 ;
-(id)_collectionStatisticsForCurrentPhotoLibrary;
-(id)_curationDebugInformationForHighlight:(id)arg0 options:(id)arg1 ;
-(id)_dateFormatter;
-(id)_dayOfWeekStatisticsWithGraph:(id)arg0 ;
-(id)_debugInformationForRelated:(id)arg0 referenceKeywords:(id)arg1 andRelatedMoment:(id)arg2 relatedType:(NSUInteger)arg3 precision:(NSUInteger)arg4 curationContext:(id)arg5 ;
-(id)_defaultStatisticsWithGraph:(id)arg0 verbose:(BOOL)arg1 forDiagnostics:(BOOL)arg2 ;
-(id)_diagnosticSummaryInfoForMemory:(id)arg0 ;
-(id)_domainLabelCountStatisticsWithGraph:(id)arg0 ;
-(id)_extractDatesAndAssetCountsFromMemory:(id)arg0 ;
-(id)_extractYearStatsFromOrderedCollectionFetchResults:(id)arg0 fetchOptions:(id)arg1 yearEntryKey:(id)arg2 numberOfYearsEntryKey:(id)arg3 ;
-(id)_fallbackCurationOfLength:(NSUInteger)arg0 forMemory:(id)arg1 customDuration:(CGFloat)arg2 curationContext:(id)arg3 ;
-(id)_featureNodesForEncodedFeatures:(id)arg0 inGraph:(id)arg1 ;
-(id)_fetchResultMatchingInternalPredicate:(id)arg0 ;
-(id)_getDefaultOutputPathForMetadataSnapshot;
-(id)_highlightEstimatesStatisticsWithCurationContext:(id)arg0 ;
-(id)_highlightTitleStatisticsWithGraph:(id)arg0 titleGenerationContext:(id)arg1 ;
-(id)_interestingStatisticsWithGraph:(id)arg0 ;
-(id)_memoryFetchOptions;
-(id)_messagesStatistics;
-(id)_mobilityStatisticsWithGraph:(id)arg0 ;
-(id)_momentNodesFromMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)_momentsStatisticsForCurrentPhotoLibrary;
-(id)_moodStatisticsWithGraph:(id)arg0 ;
-(id)_oneOnOneTripsWithGraph:(id)arg0 ;
-(id)_partOfDayStatisticsWithGraph:(id)arg0 titleGenerationContext:(id)arg1 ;
-(id)_peopleContactSuggestionStatisticsWithGraph:(id)arg0 includingDebugInfo:(BOOL)arg1 ;
-(id)_peopleNameBiologicalSexStatisticsWithGraph:(id)arg0 ;
-(id)_peopleRelationshipsStatisticsWithGraph:(id)arg0 includingDebugInfo:(BOOL)arg1 ;
-(id)_peopleVisionAgeStatisticsWithGraph:(id)arg0 ;
-(id)_peopleVisionBiologicalSexStatisticsWithGraph:(id)arg0 ;
-(id)_poiStatisticsWithGraph:(id)arg0 ;
-(id)_recentlyUsedSongAdamIDsFromCurationOptions:(id)arg0 ;
-(id)_sanitizeGraphDataDictionaryForArchiving:(id)arg0 referencedMemory:(id)arg1 ;
-(id)_sharedLibraryStatistics:(id)arg0 ;
-(id)_snapshotFilenameForLookupKey:(id)arg0 ;
-(id)_socialGroupsDebugStatistics:(id)arg0 ;
-(id)_socialGroupsDebugStringIncludingMeNode:(BOOL)arg0 withGraph:(id)arg1 ;
-(id)_socialGroupsDebugStringWithGraph:(id)arg0 ;
-(id)_socialGroupsStatistics:(id)arg0 ;
-(id)_sortedTextFeaturesFromTextFeatures:(id)arg0 ;
-(id)_stringDescriptionForBabiesWithGraph:(id)arg0 ;
-(id)_stringDescriptionForBusinessItemsWithGraph:(id)arg0 includingInferredThroughPublicEvents:(BOOL)arg1 verbose:(BOOL)arg2 ;
-(id)_stringDescriptionForContactCache;
-(id)_stringDescriptionForDisambiguatedLocationsWithGraph:(id)arg0 ;
-(id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)arg0 ;
-(id)_stringDescriptionForInterestingAreas:(id)arg0 ;
-(id)_stringDescriptionForInterestingCities:(id)arg0 ;
-(id)_stringDescriptionForLanguagesWithGraph:(id)arg0 ;
-(id)_stringDescriptionForLocationsWithGraph:(id)arg0 ;
-(id)_stringDescriptionForMeNode:(id)arg0 ;
-(id)_stringDescriptionForMeaningfulEvents:(id)arg0 isTrip:(BOOL)arg1 forDiagnostics:(BOOL)arg2 titleGenerationContext:(id)arg3 ;
-(id)_stringDescriptionForMemoriesNotification;
-(id)_stringDescriptionForMusicWithGraph:(id)arg0 summaryOnly:(BOOL)arg1 ;
-(id)_stringDescriptionForPeopleEventsWithGraph:(id)arg0 ;
-(id)_stringDescriptionForPetsWithGraph:(id)arg0 ;
-(id)_stringDescriptionForPublicEventsWithGraph:(id)arg0 verbose:(BOOL)arg1 ;
-(id)_stringDescriptionForSocialGroups:(id)arg0 includeImportance:(BOOL)arg1 ;
-(id)_stringDescriptionForUrbanCities:(id)arg0 ;
-(id)_titleStatisticsWithGraph:(id)arg0 titleGenerationContext:(id)arg1 ;
-(id)_yearsStatisticsForCurrentPhotoLibrary;
-(id)allSocialGroupsForPersonLocalIdentifier:(id)arg0 ;
-(id)assetCollectionFingerprintsWithVersion:(NSInteger)arg0 forAssetCollections:(id)arg1 withTransformers:(id)arg2 error:(*id)arg3 ;
-(id)assetCollectionsForPersonLocalIdentifiers:(id)arg0 ;
-(id)assetFingerprintsWithVersion:(NSInteger)arg0 forAssets:(id)arg1 withTransformers:(id)arg2 error:(*id)arg3 ;
-(id)assetIdentifiersForPersonLocalIdentifiers:(id)arg0 ;
-(id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg0 ofType:(NSUInteger)arg1 ;
-(id)blockedFeatures;
-(id)contactInferencesForPersonLocalIdentifiers:(id)arg0 queryOptions:(NSUInteger)arg1 ;
-(id)curatedKeyAssetForAssetCollection:(id)arg0 curatedAssetCollection:(id)arg1 options:(id)arg2 curationContext:(id)arg3 ;
-(id)curationDebugInformationForAssetCollection:(id)arg0 options:(id)arg1 curationContext:(id)arg2 ;
-(id)curationOfLength:(NSUInteger)arg0 forMemory:(id)arg1 customDuration:(CGFloat)arg2 useAssetEligibility:(BOOL)arg3 curationContext:(id)arg4 ;
-(id)defaultGraphExportFullPath;
-(id)defaultPeopleClustersExportIntermediatePath;
-(id)defaultSnapshotRootPath;
-(id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;
-(id)fastGraphExportFullPath;
-(id)featureVectorsForAsset:(id)arg0 ;
-(id)featureVectorsForMoment:(id)arg0 ;
-(id)graphAndAlgorithmVersionsWithGraph:(id)arg0 ;
-(id)graphForLibraryFullAnalysisAtURL:(id)arg0 alreadyIngestedMomentIdentifiers:(*id)arg1 alreadyIngestedHighlightIdentifiers:(*id)arg2 progressBlock:(id)arg3 ;
-(id)graphPersistenceParentDirectoryCandidateURLs;
-(id)highlightDebugInformationWithHighlight:(id)arg0 ;
-(id)homeCircularRegions;
-(id)inferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg0 ;
-(id)inferredContactIdentifierForPersonLocalIdentifier:(id)arg0 ;
-(id)init;
-(id)initForTesting;
-(id)initWithGraph:(id)arg0 ;
-(id)initWithGraph:(id)arg0 photoLibrary:(id)arg1 ;
-(id)initWithGraph:(id)arg0 readonlyPhotoLibrary:(id)arg1 ;
-(id)initWithImmutableGraph:(id)arg0 ;
-(id)initWithImmutableGraph:(id)arg0 photoLibrary:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 analytics:(id)arg1 progressBlock:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithReadonlyPhotoLibrary:(id)arg0 ;
-(id)instantiateMutableGraphWithProgressReporter:(id)arg0 ;
-(id)keywordsForAsset:(id)arg0 relatedType:(NSUInteger)arg1 ;
-(id)keywordsForAssetCollection:(id)arg0 relatedType:(NSUInteger)arg1 ;
-(id)keywordsForMomentNodeName:(id)arg0 relatedType:(NSUInteger)arg1 ;
-(id)lastTriggeredNotificationDate;
-(id)libraryStatisticsForCurrentPhotoLibrary;
-(id)maximalSocialGroupsForPersonLocalIdentifiers:(id)arg0 ;
-(id)memoryDebugInformationWithMoments:(id)arg0 meaningLabels:(id)arg1 ;
-(id)momentLocalIdentifiersInDateInterval:(id)arg0 error:(*id)arg1 ;
-(id)musicCurationInflationContextWithInflationOptions:(id)arg0 error:(*id)arg1 ;
-(id)musicCuratorContextWithCurationOptions:(id)arg0 error:(*id)arg1 ;
-(id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)arg0 error:(*id)arg1 ;
-(id)newSearchComputationCache;
-(id)nextPossibleNotificationDate;
-(id)peopleSuggestionLearningStatistics;
-(id)performerIdentifiersForMomentUUIDs:(id)arg0 ;
-(id)processSubdirectoryName;
-(id)recentFrequentLocationRegions;
-(id)relatedDebugInformationBetweenAsset:(id)arg0 andRelatedAssetCollection:(id)arg1 relatedType:(NSUInteger)arg2 precision:(NSUInteger)arg3 curationContext:(id)arg4 ;
-(id)relatedDebugInformationBetweenReferenceAssetCollection:(id)arg0 andRelatedAssetCollection:(id)arg1 relatedType:(NSUInteger)arg2 precision:(NSUInteger)arg3 curationContext:(id)arg4 ;
-(id)relationshipInferencesForPersonLocalIdentifiers:(id)arg0 ;
-(id)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)searchKeywordsByEventWithUUIDs:(id)arg0 ofType:(NSUInteger)arg1 ;
-(id)searchMetadataWithOptions:(id)arg0 ;
-(id)searchSynonymsDictionaries;
-(id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg0 ofType:(NSUInteger)arg1 isFullAnalysis:(BOOL)arg2 ;
-(id)sharingMessageSuggestionDebugInformationForAssetCollection:(id)arg0 ;
-(id)sharingSuggestionDebugInformationForSuggestion:(id)arg0 ;
-(id)snapshotOuputFilePathURLForKey:(id)arg0 ;
-(id)socialGroupsForPersonLocalIdentifiers:(id)arg0 ;
-(id)sortedArrayForPersonLocalIdentifiers:(id)arg0 ;
-(id)statisticsWithTypeStrings:(id)arg0 ;
-(id)suggestedContactIdentifiersForPersonLocalIdentifier:(id)arg0 ;
-(id)suggestedContributionsForAssetsMetadata:(id)arg0 ;
-(id)suggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)suggestedPersonsForHome;
-(id)suggestedPersonsForSharedLibraryContentInclusion;
-(id)suggestedPersonsForSharedLibraryParticipants;
-(id)suggestedRecipientsForAssetLocalIdentifiers:(id)arg0 momentLocalIdentifiers:(id)arg1 sharingOptions:(id)arg2 ;
-(id)summaryOfInferencesPerMomentByLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)summaryOfInferencesPerMomentInDateInterval:(id)arg0 error:(*id)arg1 ;
-(id)textFeaturesForMomentLocalIdentifiers:(id)arg0 ;
-(id)titleTupleForAlbum:(id)arg0 format:(NSInteger)arg1 error:(*id)arg2 ;
-(id)titleTupleForAssetCollection:(id)arg0 format:(NSInteger)arg1 error:(*id)arg2 ;
-(id)titleTupleForMoment:(id)arg0 format:(NSInteger)arg1 error:(*id)arg2 ;
-(id)titleTupleForMomentList:(id)arg0 format:(NSInteger)arg1 error:(*id)arg2 ;
-(id)titleTupleForPersonLocalIdentifiers:(id)arg0 format:(NSInteger)arg1 error:(*id)arg2 ;
-(id)utilityAssetInformation;
-(id)workingContext;
-(id)workingContextForEnrichment;
-(id)workingContextForMemories;
-(id)workingContextForMetrics;
-(id)workingContextForRelated;
-(id)workingContextForSuggestions;
-(id)workingContextForUpNext;
-(id)zeroKeywordsWithOptions:(id)arg0 ;
-(uint8_t)currentFullGraphRebuildStamp:(SEL)arg0 ;
-(unsigned int)identifierForMoment:(id)arg0 ;
-(void)_exportGraphToDiskOrRemoveItDependingOnUserDefault;
-(void)_invalidatePersistentCaches;
-(void)_invalidatePersistentCachesForGeoServiceProviderChange;
-(void)_invalidateTransientCaches;
-(void)_precachePersonsInformationFromGraph:(id)arg0 progressBlock:(id)arg1 ;
-(void)_unloadGraph;
-(void)_waitGraphUntilFinishedUsingBlock:(id)arg0 ;
-(void)_waitLibraryUpdateUntilFinishedUsingBlock:(id)arg0 ;
-(void)commonInitWithProgressBlock:(id)arg0 ;
-(void)dealloc;
-(void)invalidatePersistentCaches;
-(void)invalidateTransientCaches;
-(void)legacyPerformAsynchronousBarrierGraphWriteUsingBlock:(id)arg0 ;
-(void)loadGraphWithProgressBlock:(id)arg0 ;
-(void)matchWithVisualFormat:(id)arg0 elements:(id)arg1 usingBlock:(id)arg2 ;
-(void)matchWithVisualFormat:(id)arg0 usingBlock:(id)arg1 ;
-(void)notifyCoalescingBlocksGraphAnalysisFinished:(BOOL)arg0 error:(id)arg1 ;
-(void)peopleSuggestionLearning;
-(void)performApplicationDataBlock:(id)arg0 ;
-(void)performAsynchronousGraphBarrierUsingBlock:(id)arg0 ;
-(void)performAsynchronousGraphWriteUsingBlock:(id)arg0 ;
-(void)performAsynchronousNotification:(id)arg0 ;
-(void)performFullLibraryAnalysisInGraph:(id)arg0 withRecipe:(id)arg1 withAlreadyIngestedMomentIdentifiers:(id)arg2 alreadyIngestedHighlightIdentifiers:(id)arg3 processedGraphUpdate:(*id)arg4 progressBlock:(id)arg5 ;
-(void)performSynchronousConcurrentGraphReadUsingBlock:(id)arg0 ;
-(void)regenerateMeaningsWithProgressReporter:(id)arg0 completionBlock:(id)arg1 ;
-(void)regenerateMemoriesOfCategory:(NSUInteger)arg0 progressReporter:(id)arg1 completionBlock:(id)arg2 ;
-(void)registerCoalescingBlockWhenGraphAnalysisFinishes:(id)arg0 ;
-(void)setGraph:(id)arg0 ;
-(void)setMutableGraph:(id)arg0 ;
-(void)stampFullGraphRebuild;
// -(void)startGraphUpdate:(id)arg0 progressBlock:(id)arg1 completionBlock:(unk)arg2  ;
// -(void)startLibraryAnalysis:(id)arg0 keepExistingGraph:(unk)arg1 completionBlock:(BOOL)arg2  ;
// -(void)startLibraryAnalysisWithRecipe:(id)arg0 progressBlock:(id)arg1 keepExistingGraph:(unk)arg2 completionBlock:(BOOL)arg3  ;
-(void)unloadGraph;
// -(void)updateGraphWithRecipe:(id)arg0 keepExistingGraph:(BOOL)arg1 progressBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)waitUntilFinishedUsingBlock:(id)arg0 ;


@end


#endif