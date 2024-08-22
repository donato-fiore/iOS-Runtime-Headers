// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASERVICEUNAVAILABLECLIENTHANDLER_H
#define PHASERVICEUNAVAILABLECLIENTHANDLER_H

@class NSString;
@protocol PLPhotoAnalysisServiceProtocol, PHAServiceOperationHandling;

#import <Foundation/Foundation.h>


@interface PHAServiceUnavailableClientHandler : NSObject <PLPhotoAnalysisServiceProtocol, PHAServiceOperationHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateOperation:(id)arg0 forConnection:(id)arg1 ;
-(id)error;
-(void)cacheCPAnalyticsPropertiesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)cancelOperationsWithIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)dumpAnalysisStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)exportWallpaperForAssets:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)generateMemoriesWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)generateSuggestionsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)handleOperation:(id)arg0 ;
-(void)notifyLibraryAvailableAtURL:(id)arg0 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)personPromoterStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)processPersonsWithContext:(id)arg0 reply:(id)arg1 ;
-(void)rebuildGraphWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)rebuildPersonsWithContext:(id)arg0 reply:(id)arg1 ;
-(void)reclusterFacesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)recordFeatureUsageFromCounts:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)reloadWallpaperSuggestionsWithSuggestionUUIDs:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)reloadWidgetTimelineWithContext:(id)arg0 reply:(id)arg1 ;
-(void)reportMetricsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)reportTurboEnabledWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestAllSocialGroupsForPersonLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetCollectionsForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestAssetLocalIdentifiersByCityNameWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetRevGeocodingWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)requestAssetsForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestCacheSongSourceWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestCameraSmartSharingProcessingForLibraryScopeWithUUID:(id)arg0 withOptions:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestClearMusicCacheWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestComposabilityScoresOfAssetsForLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestContactClassificationWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg0 referenceAssetLocalIdentifier:(id)arg1 precision:(NSUInteger)arg2 options:(id)arg3 context:(id)arg4 reply:(id)arg5 ;
-(void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg0 duration:(NSUInteger)arg1 precision:(NSUInteger)arg2 options:(id)arg3 context:(id)arg4 reply:(id)arg5 ;
-(void)requestCurationDebugInformationForAsset:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestCurationOfLength:(NSUInteger)arg0 forMemoryForLocalIdentifier:(id)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)requestDefaultsObjectForKey:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestDiscoveryFeedItemsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestEnergyStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestEnrichmentWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestExportGraphServiceForPurpose:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestFlexMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestFlexMusicCurationForAssetCollectionLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestGenerateDefaultRulesForLibraryScopeWithLocalIdentifier:(id)arg0 withOptions:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphInferencesSummaryWithDateInterval:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphInferencesSummaryWithMomentLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphMomentLocalIdentifiersWithDateInterval:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphRebuildFractionCompletedWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestGraphSearchMetadataWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphServicePerformsQueryWithContext:(id)arg0 query:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphServiceStatisticsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphServiceStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestHighlightCollectionEnrichmentWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestHighlightEnrichmentWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestHighlightEstimatesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestIconicSceneScoreForAssetLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestInvalidateServicePersistentCachesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestInvalidateServiceTransientCachesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestKeyAssetLocalIdentifierForPrototypeCategory:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMomentLocalIdentifiersForMeaning:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMomentMetricsWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestMusicCacheStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestMusicCatalogAdamIDsForPurchasedSongID:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMusicCurationDebugInformationForSongWithAdamID:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMusicCurationForAssetCollectionLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestMusicCurationForAssetLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestNightlySuggestionsForPosterConfiguration:(id)arg0 atDate:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDemandTasksWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDiskContactInferencesForPersonLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestOnDiskRelationshipInferencesForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDiskSuggestedContributionsForAssetsMetadata:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestOnDiskSuggestedPersonsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDiskSuggestedRecipientsForAssetLocalIdentifiers:(id)arg0 momentLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)requestPeopleForWallpaperSuggestionsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestPeopleSuggestionLearningWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestPrecachingOfAudioDataForAdamIDs:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg0 andRelatedAssetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 context:(id)arg5 reply:(id)arg6 ;
-(void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg0 andRelatedAssetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 context:(id)arg5 reply:(id)arg6 ;
-(void)requestRelatedMomentsForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestReprocessSuggestionsOnLibraryScopeRulesChangeWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestRevGeocodingSyndicationLibraryWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestRunPFLWithAttachments:(id)arg0 recipeUserInfo:(id)arg1 context:(id)arg2 resultBlock:(id)arg3 ;
-(void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 isFullAnalysis:(BOOL)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(id)arg5 ;
-(void)requestSetDefaultsObject:(id)arg0 forKey:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSignalModelInfosWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg0 andRelatedResultsForLocalIdentifiers:(id)arg1 precision:(NSUInteger)arg2 relatedType:(NSUInteger)arg3 context:(id)arg4 reply:(id)arg5 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg0 andRelatedResultsForLocalIdentifiers:(id)arg1 precision:(NSUInteger)arg2 relatedType:(NSUInteger)arg3 additionalSnapshotSummaryInfo:(id)arg4 context:(id)arg5 reply:(id)arg6 ;
-(void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSocialGroupsForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSongsForAdamIDs:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestSortedArrayOfPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestStartSharedLibrarySuggestionResultWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestSuggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(id)arg0 withOptions:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestSuggestionInfosWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSyndicationProcessingWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSynonymsDictionariesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg0 format:(NSInteger)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg0 format:(NSInteger)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestTitleForPersonLocalIdentifiers:(id)arg0 format:(NSInteger)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestTrendsByIdentifierWithCadence:(id)arg0 forYear:(NSUInteger)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestUpNextAssetLocalIdentifiersForAssetWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestUpNextMemoriesWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestUpdateFeaturedContentBasedOnUserFeedbackWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestUpdatePetIdentitiesWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestUtilityAssetInformationWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestUtilityAssetLocalIdentifiersWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestWallpaperPropertiesForAssets:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestZeroKeywordsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)resetFaceClassificationModelWithContext:(id)arg0 reply:(id)arg1 ;
-(void)resetFaceClusteringStateWithContext:(id)arg0 reply:(id)arg1 ;
-(void)runCurationWithItems:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)runShadowEvaluationWithRecipe:(id)arg0 models:(id)arg1 trialDeploymentID:(id)arg2 trialExperimentID:(id)arg3 trialTreatmentID:(id)arg4 context:(id)arg5 resultBlock:(id)arg6 ;
-(void)setJobProcessingConstraintsWithValues:(id)arg0 mask:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg0 toBeConfirmedPersonSuggestions:(id)arg1 toBeRejectedPersonSuggestions:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg0 forceUpdate:(BOOL)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)upgradePosterConfigurationWithAssetDirectory:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)validateClusterCacheWithContext:(id)arg0 reply:(id)arg1 ;
-(void)writeQALog:(id)arg0 ;


@end


#endif