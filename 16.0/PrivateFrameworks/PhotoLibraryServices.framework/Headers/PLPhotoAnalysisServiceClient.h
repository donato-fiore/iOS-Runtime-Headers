// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOANALYSISSERVICECLIENT_H
#define PLPHOTOANALYSISSERVICECLIENT_H

@class NSDictionary, NSXPCConnection, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLPhotoAnalysisServiceClient : NSObject {
    NSDictionary *_cachedRequestContextDictionary;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSXPCConnection *_xpcConnection;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (readonly, nonatomic) NSURL *libraryURL; // ivar: _libraryURL
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;


-(BOOL)rebuildPersonsWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)reclusterFacesWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)reportMetricsWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(BOOL)requestAssetRevGeocodingWithError:(*id)arg0 ;
-(BOOL)requestContactClassificationWithError:(*id)arg0 ;
-(BOOL)requestEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestGenerateDefaultRulesForLibraryScopeWithLocalIdentifier:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)requestHighlightCollectionEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestHighlightEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestInvalidatePersistentCaches:(*id)arg0 ;
-(BOOL)requestInvalidateTransientCaches:(*id)arg0 ;
-(BOOL)requestSetDefaultsObject:(id)arg0 forKey:(id)arg1 withError:(*id)arg2 ;
-(BOOL)requestStartSharedLibrarySuggestionResultWithError:(*id)arg0 ;
-(BOOL)requestSyndicationLibraryRevGeocodingWithError:(*id)arg0 ;
-(BOOL)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg0 format:(NSInteger)arg1 title:(*id)arg2 subtitle:(*id)arg3 error:(*id)arg4 ;
-(BOOL)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg0 format:(NSInteger)arg1 title:(*id)arg2 subtitle:(*id)arg3 error:(*id)arg4 ;
-(BOOL)requestTitleForPersonLocalIdentifiers:(id)arg0 format:(NSInteger)arg1 title:(*id)arg2 subtitle:(*id)arg3 error:(*id)arg4 ;
-(BOOL)resetFaceClassificationModel:(*id)arg0 ;
-(BOOL)resetFaceClusteringState:(*id)arg0 ;
-(BOOL)turboIsEnabled;
-(NSInteger)suggestedPersonsForPersonWithLocalIdentifier:(id)arg0 toBeConfirmedPersonSuggestions:(id)arg1 toBeRejectedPersonSuggestions:(id)arg2 completion:(id)arg3 ;
-(NSInteger)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg0 forceUpdate:(BOOL)arg1 completion:(id)arg2 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(*id)arg0 ;
-(id)dumpAnalysisStatusError:(*id)arg0 ;
-(id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithLibraryURL:(id)arg0 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)requestAllSocialGroupsForPersonIdentifier:(id)arg0 withError:(*id)arg1 ;
-(id)requestAllSocialGroupsForPersonLocalIdentifier:(id)arg0 withError:(*id)arg1 ;
-(id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestAssetLocalIdentifiersByCityNameWithError:(*id)arg0 ;
-(id)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 error:(*id)arg3 ;
-(id)requestAssetsForPersonLocalIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(id)requestAvailableSuggestionTypeInfosWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestCameraSmartSharingProcessingForLibraryScopeWithUUID:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)requestComposabilityScoresOfAssetsForLocalIdentifiers:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestContactInferencesForPersonLocalIdentifiers:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestContextDictionary;
-(id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg0 referenceAssetLocalIdentifier:(id)arg1 precision:(NSUInteger)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg0 duration:(NSUInteger)arg1 precision:(NSUInteger)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestCurationOfLength:(NSUInteger)arg0 forMemoryForLocalIdentifier:(id)arg1 withOptions:(id)arg2 error:(*id)arg3 ;
-(id)requestDefaultsObjectForKey:(id)arg0 withError:(*id)arg1 ;
-(id)requestDiscoveryFeedItemsWithOptions:(id)arg0 generationSessionState:(*id)arg1 error:(*id)arg2 ;
-(id)requestEnergyStatusWithError:(*id)arg0 ;
-(id)requestExportGraphForPurpose:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphInferencesSummaryWithDateInterval:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphInferencesSummaryWithMomentLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphMomentLocalIdentifiersWithDateInterval:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphPerformQuery:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphSearchMetadataWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphStatisticsWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphStatus:(*id)arg0 ;
-(id)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestIconicSceneScoreForAssetLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestKeyAssetLocalIdentifierForPrototypeCategory:(id)arg0 error:(*id)arg1 ;
-(id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestMomentLocalIdentifiersForMeaning:(id)arg0 error:(*id)arg1 ;
-(id)requestMomentMetricsWithError:(*id)arg0 ;
-(id)requestNightlySuggestionsForPosterConfiguration:(id)arg0 atDate:(id)arg1 error:(*id)arg2 ;
-(id)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestPeopleSuggestionLearningStatisticsWithError:(*id)arg0 ;
-(id)requestPeopleSuggestionLearningWithError:(*id)arg0 ;
-(id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg0 andRelatedAssetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg0 andRelatedAssetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)requestRelatedMomentsForPersonLocalIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(id)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 error:(*id)arg3 ;
-(id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 isFullAnalysis:(BOOL)arg2 withOptions:(id)arg3 error:(*id)arg4 ;
-(id)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestSignalModelInfosWithError:(*id)arg0 ;
-(id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestSocialGroupsForPersonLocalIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(id)requestSortedArrayOfPersonLocalIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(id)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestSuggestedContributionsForAssetsMetadata:(id)arg0 error:(*id)arg1 ;
-(id)requestSuggestedMePersonIdentifierWithError:(*id)arg0 ;
-(id)requestSuggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)requestSuggestedPersonsWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg0 momentLocalIdentifiers:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)requestSuggestionInfosWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestSynonymsDictionariesWithError:(*id)arg0 ;
-(id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestTrendsByIdentifierWithCadence:(id)arg0 forYear:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)requestUpNextAssetLocalIdentifiersForAssetWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestUpNextMemoryLocalIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestUtilityAssetInformationWithError:(*id)arg0 ;
-(id)requestUtilityAssetLocalIdentifiersWithError:(*id)arg0 ;
-(id)requestZeroKeywordsWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)runCurationWithItems:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(int)photoanalysisdPid;
-(void)_setupXPCConnection;
-(void)asyncRequestCameraSmartSharingProcessingForLibraryScopeWithUUID:(id)arg0 withOptions:(id)arg1 reply:(id)arg2 ;
-(void)cacheCPAnalyticsPropertiesWithReply:(id)arg0 ;
-(void)cancelOperationsWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)dispatchOnQueue:(id)arg0 blockWithoutBoost:(id)arg1 ;
-(void)exportWallpaperForAssets:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)generateMemoriesWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)generateSuggestionsWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)notifyLibraryAvailableAtURLForMediaanalysisd:(id)arg0 ;
-(void)notifyLibraryAvailableAtURLForPhotoanalysisd:(id)arg0 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)personPromoterAdvancedStatus:(id)arg0 ;
-(void)personPromoterStatus:(id)arg0 ;
-(void)rebuildGraphWithOptions:(id)arg0 progress:(id)arg1 reply:(id)arg2 ;
-(void)recordFeatureUsageFromCounts:(id)arg0 reply:(id)arg1 ;
-(void)reloadWallpaperSuggestions:(id)arg0 reply:(id)arg1 ;
-(void)reloadWidgetTimelineWithReply:(id)arg0 ;
-(void)requestCacheSongSourceWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestClearMusicCacheWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestFlexMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)arg0 reply:(id)arg1 ;
-(void)requestFlexMusicCurationForAssetCollectionLocalIdentifier:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestGraphRebuildFractionCompletedWithReply:(id)arg0 ;
-(void)requestHighlightEstimatesWithReply:(id)arg0 ;
-(void)requestMusicCacheStatusWithReply:(id)arg0 ;
-(void)requestMusicCatalogAdamIDsForPurchasedSongID:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)requestMusicCurationDebugInformationForSongWithAdamID:(id)arg0 reply:(id)arg1 ;
-(void)requestMusicCurationForAssetCollectionLocalIdentifier:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestMusicCurationForAssetLocalIdentifiers:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDemandTasksWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestPeopleForWallpaperSuggestionsWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestPrecachingOfAudioDataForAdamIDs:(id)arg0 reply:(id)arg1 ;
-(void)requestReprocessSuggestionsOnLibraryScopeRulesChangeWithReply:(id)arg0 ;
-(void)requestRunPFLWithAttachments:(id)arg0 recipeUserInfo:(id)arg1 resultBlock:(id)arg2 ;
-(void)requestRunShadowEvaluationWithRecipe:(id)arg0 models:(id)arg1 trialDeploymentID:(id)arg2 trialExperimentID:(id)arg3 trialTreatmentID:(id)arg4 resultBlock:(id)arg5 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg0 andRelatedResultsForLocalIdentifiers:(id)arg1 precision:(NSUInteger)arg2 relatedType:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg0 andRelatedResultsForLocalIdentifiers:(id)arg1 precision:(NSUInteger)arg2 relatedType:(NSUInteger)arg3 additionalSnapshotSummaryInfo:(id)arg4 reply:(id)arg5 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)requestSongsForAdamIDs:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestSyndicationProcessingWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestUpdateFeaturedContentBasedOnUserFeedbackWithReply:(id)arg0 ;
-(void)requestUpdatePetIdentitiesWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestWallpaperProperties:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)runTurboAnalysis;
-(void)setJobProcessingConstraintsWithValues:(id)arg0 mask:(id)arg1 completionHandler:(id)arg2 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)stopTurboAnalysis;
-(void)upgradePosterConfigurationWithAssetDirectory:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)writeQALog:(id)arg0 ;


@end


#endif