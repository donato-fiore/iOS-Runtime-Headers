// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASTORYTELLINGCLIENTREQUESTHANDLER_H
#define PHASTORYTELLINGCLIENTREQUESTHANDLER_H

@class NSMutableDictionary, NSString, PGManager, PHPhotoLibrary;
@protocol PLPhotoAnalysisGraphServiceMusicProtocol, PHAServiceOperationHandling, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface PHAStorytellingClientRequestHandler : NSObject <PLPhotoAnalysisGraphServiceMusicProtocol, PHAServiceOperationHandling>

 {
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableDictionary *_progressReporterByQueryID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGManager *graphManager; // ivar: _graphManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


+(id)_fetchOptionsForMusicCurationWithPhotoLibrary:(id)arg0 ;
-(BOOL)updatePetIdentityWithProcessor:(id)arg0 errors:(id)arg1 ;
-(NSInteger)_phTitleCategoryForPGTitleCategory:(NSInteger)arg0 ;
-(NSInteger)_titleTupleFormatForPhotoAnalysisTitleFormat:(NSInteger)arg0 ;
-(NSUInteger)_validatedMemoryNotificationState:(int)arg0 ;
-(id)_assetCollectionForRelatedIdentifier:(id)arg0 ;
-(id)_basicPropertiesFromMemory:(id)arg0 ;
-(id)_collectionListForLocalIdentifier:(id)arg0 ;
-(id)_featureVectorWithMemory:(id)arg0 ;
-(id)_infoForGraphCollectionBasedMemory:(id)arg0 ;
-(id)_infoForMemory:(id)arg0 representativeAssetCount:(NSUInteger)arg1 isTransientMemory:(BOOL)arg2 ;
-(id)_infoForMomentsBackingMemory:(id)arg0 ;
-(id)_memoryInfoFromMemory:(id)arg0 options:(id)arg1 ;
-(id)_minimalLegacyFeatureVectorWithMemory:(id)arg0 ;
-(id)_propertiesFromMemory:(id)arg0 ;
-(id)informationDictionaryForAsset:(id)arg0 ;
-(id)initWithGraphManager:(id)arg0 ;
-(id)relatedRequestPredicateValidator;
-(id)stringForQoS:(unsigned int)arg0 ;
-(void)_processMoodForMemory:(id)arg0 withMoodHistory:(id)arg1 moodGenerationContext:(id)arg2 ;
-(void)handleOperation:(id)arg0 ;
-(void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)recordFeatureUsageFromCounts:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)reloadWidgetTimelineWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestAllSocialGroupsForPersonLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetCollectionsForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)requestAssetsForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestClearMusicCacheWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestComposabilityScoresOfAssetsForLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestContactInferencesForPersonLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg0 referenceAssetLocalIdentifier:(id)arg1 precision:(NSUInteger)arg2 options:(id)arg3 context:(id)arg4 reply:(id)arg5 ;
-(void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg0 duration:(NSUInteger)arg1 precision:(NSUInteger)arg2 options:(id)arg3 context:(id)arg4 reply:(id)arg5 ;
-(void)requestCurationDebugInformationForAsset:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestCurationOfLength:(NSUInteger)arg0 forMemoryForLocalIdentifier:(id)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)requestDefaultsObjectForKey:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestDiscoveryFeedItemsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestExportGraphServiceForPurpose:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestFlexMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestFlexMusicCurationForAssetCollectionLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestGraphRebuildFractionCompletedWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestGraphSearchMetadataWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphServicePerformsQueryWithContext:(id)arg0 query:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphServiceStatisticsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGraphServiceStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestHighlightEstimatesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestInvalidateServicePersistentCachesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestInvalidateServiceTransientCachesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMemoryInfosWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMemoryTreeDebugInformationWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMusicCacheStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMusicCurationDebugInformationForSongWithAdamID:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestMusicCurationForAssetCollectionLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestMusicCurationForAssetLocalIdentifiers:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestPeopleSuggestionLearningWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestPrecachingOfAudioDataForAdamIDs:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg0 andRelatedAssetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 context:(id)arg5 reply:(id)arg6 ;
-(void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg0 andRelatedAssetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 context:(id)arg5 reply:(id)arg6 ;
-(void)requestRelatedMomentsForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
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
-(void)requestSongsForAdamIDs:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSortedArrayOfPersonLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSuggestedContributionsForAssetsMetadata:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestSuggestedPersonsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg0 momentLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)requestSuggestionInfosWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSynonymsDictionariesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg0 format:(NSInteger)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg0 format:(NSInteger)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestTitleForPersonLocalIdentifiers:(id)arg0 format:(NSInteger)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)requestTransientMemoryPropertiesWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestUpNextMemoriesWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestUpdateFeaturedContentBasedOnUserFeedbackWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestUpdatePetIdentitiesWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestUtilityAssetInformationWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestZeroKeywordsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)runCurationWithItems:(id)arg0 options:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;


@end


#endif