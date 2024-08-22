// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


-(BOOL)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)processPersonsWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)rebuildPersonsWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)reclusterFacesWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)reportMetricsWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(BOOL)requestAssetRevGeocodingWithError:(*id)arg0 ;
-(BOOL)requestEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestHighlightCollectionEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestHighlightEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestInvalidatePersistentCaches:(*id)arg0 ;
-(BOOL)requestInvalidateTransientCaches:(*id)arg0 ;
-(BOOL)requestSetDefaultsObject:(id)arg0 forKey:(id)arg1 withError:(*id)arg2 ;
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
-(id)faceClusteringInformation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithLibraryURL:(id)arg0 ;
-(id)localizedLabelForSceneIdentifier:(unsigned int)arg0 error:(*id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)requestAllSocialGroupsForPersonIdentifier:(id)arg0 withError:(*id)arg1 ;
-(id)requestAllSocialGroupsForPersonLocalIdentifier:(id)arg0 withError:(*id)arg1 ;
-(id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 error:(*id)arg3 ;
-(id)requestAssetsForPersonLocalIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(id)requestAvailableSuggestionTypeInfosWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
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
-(id)requestExportGraphForPurpose:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphPerformQuery:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphSearchMetadataWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphStatisticsWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestGraphStatus:(*id)arg0 ;
-(id)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestMemoryInfosWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestMemoryTreeDebugInformationWithOptions:(id)arg0 error:(*id)arg1 ;
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
-(id)requestSuggestedPersonsWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg0 momentLocalIdentifiers:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)requestSuggestionInfosWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestSynonymsDictionariesWithError:(*id)arg0 ;
-(id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestTransientMemoryPropertiesWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestUpNextMemoryLocalIdentifiersWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestUtilityAssetInformationWithError:(*id)arg0 ;
-(id)requestZeroKeywordsWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)runCurationWithItems:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)sceneNodesForSceneIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)searchResultNodesForSceneClassifications:(id)arg0 error:(*id)arg1 ;
-(id)searchResultNodesForSceneIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(int)photoanalysisdPid;
-(void)_setupXPCConnection;
-(void)cacheCPAnalyticsPropertiesWithReply:(id)arg0 ;
-(void)cancelOperationsWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)dispatchOnQueue:(id)arg0 blockWithoutBoost:(id)arg1 ;
-(void)generateMemoriesWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)generateSuggestionsWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)notifyLibraryAvailableAtURLForMediaanalysisd:(id)arg0 ;
-(void)notifyLibraryAvailableAtURLForPhotoanalysisd:(id)arg0 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)personPromoterAdvancedStatus:(id)arg0 ;
-(void)personPromoterStatus:(id)arg0 ;
-(void)rebuildGraphWithOptions:(id)arg0 progress:(id)arg1 reply:(id)arg2 ;
-(void)recordFeatureUsageFromCounts:(id)arg0 reply:(id)arg1 ;
-(void)reloadWidgetTimelineWithReply:(id)arg0 ;
-(void)requestClearMusicCacheWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestFlexMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)arg0 reply:(id)arg1 ;
-(void)requestFlexMusicCurationForAssetCollectionLocalIdentifier:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestGraphRebuildFractionCompletedWithReply:(id)arg0 ;
-(void)requestHighlightEstimatesWithReply:(id)arg0 ;
-(void)requestMusicCacheStatusWithReply:(id)arg0 ;
-(void)requestMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)requestMusicCurationDebugInformationForSongWithAdamID:(id)arg0 reply:(id)arg1 ;
-(void)requestMusicCurationForAssetCollectionLocalIdentifier:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestMusicCurationForAssetLocalIdentifiers:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDemandTasksWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestPrecachingOfAudioDataForAdamIDs:(id)arg0 reply:(id)arg1 ;
-(void)requestRunPFLWithAttachments:(id)arg0 recipeUserInfo:(id)arg1 resultBlock:(id)arg2 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg0 andRelatedResultsForLocalIdentifiers:(id)arg1 precision:(NSUInteger)arg2 relatedType:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg0 andRelatedResultsForLocalIdentifiers:(id)arg1 precision:(NSUInteger)arg2 relatedType:(NSUInteger)arg3 additionalSnapshotSummaryInfo:(id)arg4 reply:(id)arg5 ;
-(void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)requestSongsForAdamIDs:(id)arg0 options:(id)arg1 reply:(id)arg2 ;
-(void)requestSyndicationProcessingWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestUpdateFeaturedContentBasedOnUserFeedbackWithReply:(id)arg0 ;
-(void)requestUpdatePetIdentitiesWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)runTurboAnalysis;
-(void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg0 workerType:(short)arg1 workerFlags:(int)arg2 completionHandler:(id)arg3 ;
-(void)setJobProcessingConstraintsWithValues:(id)arg0 mask:(id)arg1 completionHandler:(id)arg2 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)stopTurboAnalysis;
-(void)writeQALog:(id)arg0 ;


@end


#endif