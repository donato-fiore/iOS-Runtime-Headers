// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAVISIONSERVICEFACEPROCESSINGWORKER_H
#define PHAVISIONSERVICEFACEPROCESSINGWORKER_H

@class PhotoVision, NSMutableDictionary, NSURL, NSString;
@protocol PVNotificationListener, PVVisionIntegrating, PVPersonPromoterDelegate, PLPhotoAnalysisVisionServiceFaceProcessingProtocol;


#import "PHAVisionServiceWorker.h"
#import "PHAVisionServicePersistenceDelegate.h"

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PVNotificationListener, PVVisionIntegrating, PVPersonPromoterDelegate, PLPhotoAnalysisVisionServiceFaceProcessingProtocol>

 {
    PhotoVision *_photoVision;
    PHAVisionServicePersistenceDelegate *_persistenceDelegate;
    ? _analysisStatistics;
    NSMutableDictionary *_state;
    BOOL _disabledByUserDefaults;
    NSUInteger _faceAnalysisOptions;
    NSUInteger _faceIDModelRebuildPeriod;
    NSURL *_suggestionLoggingDirectory;
    BOOL _suggestionLoggingSessionOpen;
    BOOL _suggestionsLoggingEnabled;
    BOOL _clustererNeedsSyncing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger incrementalPersonProcessingStage; // ivar: _incrementalPersonProcessingStage
@property (nonatomic) NSUInteger lastMinimumFaceGroupSizeForCreatingMergeCandidates; // ivar: _lastMinimumFaceGroupSizeForCreatingMergeCandidates
@property (nonatomic) BOOL personBuilderMergeCandidatesEnabled; // ivar: _personBuilderMergeCandidatesEnabled
@property (readonly) Class superclass;


+(BOOL)runsExclusively;
+(NSInteger)applicationDataFolderIdentifier;
+(short)workerType;
-(BOOL)_buildPersonsIncrementally:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_clusterFacesWithPhotoVision:(id)arg0 incrementally:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_deleteAllVerifiedPersonsWithError:(*id)arg0 ;
-(BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg0 createFaceTorsoprint:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_generateAndPersistFaceCropsOfFaces:(id)arg0 inImage:(id)arg1 forAsset:(id)arg2 error:(*id)arg3 ;
-(BOOL)_generateAndPersistFaceCropsOfUserConfirmedFacesInImage:(id)arg0 forAsset:(id)arg1 error:(*id)arg2 ;
-(BOOL)_needToRunClusteringJobForScenario:(NSUInteger)arg0 ;
-(BOOL)_needToRunFaceCropProcessingJobForScenario:(NSUInteger)arg0 ;
-(BOOL)_needToRunFaceIDModelCreationForScenario:(NSUInteger)arg0 ;
-(BOOL)_needToRunPersonBuildingJobForScenario:(NSUInteger)arg0 ;
-(BOOL)_needToRunPersonPromoterForScenario:(NSUInteger)arg0 ;
-(BOOL)_needsToRunContactClassificationForScenario:(NSUInteger)arg0 ;
-(BOOL)_promotePersonsWithError:(*id)arg0 ;
-(BOOL)_resetFaceClusteringStateWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setAllFaceGroupsNeedPersonBuilding;
-(BOOL)_updateFaceCropFace:(id)arg0 withFaceprintForFaceCrop:(id)arg1 createFaceTorsoprint:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_validateAsset:(id)arg0 error:(*id)arg1 ;
-(BOOL)classifyContactsWithProgress:(id)arg0 extendTimeoutBlock:(id)arg1 ;
-(BOOL)contactClassificationDidExceedTimeInterval;
-(BOOL)deletePersonModelWithError:(*id)arg0 ;
-(BOOL)faceIDModelLastGenerationDidExceedTimeInterval;
-(BOOL)getLocallyAvailableAssetResource:(*id)arg0 forAnalyzingAsset:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasAdditionalJobsForScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(BOOL)hasStandaloneJobsForScenario:(NSUInteger)arg0 ;
-(BOOL)isEnabled;
// -(BOOL)performFaceClusteringWithCompletion:(id)arg0 error:(unk)arg1  ;
// -(BOOL)performPersonBuildingWithCanceler:(id)arg0 extendTimeoutBlock:(id)arg1 error:(unk)arg2  ;
-(BOOL)persistPersonModel:(id)arg0 ;
-(BOOL)processAsset:(id)arg0 error:(*id)arg1 ;
-(BOOL)processDirtyFaceCrop:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldProcessContact:(id)arg0 ;
-(BOOL)shouldRebuildFaceIDModel;
-(BOOL)shouldReclassifyContacts;
-(BOOL)stopAnalysisJob:(id)arg0 error:(*id)arg1 ;
// -(NSUInteger)_analyzeAsset:(id)arg0 withAttributes:(id)arg1 usingPVImageProvidedByBlock:(id)arg2 error:(unk)arg3  ;
-(NSUInteger)analyzeAssetResourceFileAtURL:(id)arg0 forAsset:(id)arg1 withAttributes:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)analyzeImageData:(id)arg0 forAsset:(id)arg1 withAttributes:(id)arg2 error:(*id)arg3 ;
-(id)_analyzePVImage:(id)arg0 forAsset:(id)arg1 withAttributes:(id)arg2 error:(*id)arg3 ;
-(id)_faceToFaceCountMapForFaces:(id)arg0 ;
-(id)_facesRequiringFaceCropGenerationForAsset:(id)arg0 error:(*id)arg1 ;
-(id)_loadPersonsModelWithPhotoLibrary:(id)arg0 ;
-(id)_persistentStorageDirectoryURLWithPhotoLibrary:(id)arg0 ;
-(id)_photoVisionAllowingCreation:(BOOL)arg0 syncClusterCache:(BOOL)arg1 error:(*id)arg2 ;
-(id)_pvImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 error:(*id)arg2 ;
-(id)_pvImageForAssetResource:(id)arg0 asset:(id)arg1 error:(*id)arg2 ;
-(id)_pvImageForAssetResourceFileURL:(id)arg0 forAsset:(id)arg1 error:(*id)arg2 ;
-(id)_suggestionsForPersonLocalIdentifier:(id)arg0 clusterSequenceNumbers:(id)arg1 excludePersonLocalIdentifiers:(id)arg2 operation:(id)arg3 context:(id)arg4 error:(*id)arg5 ;
-(id)_suggestionsForPersonWithLocalIdentifier:(id)arg0 toBeConfirmedPersonSuggestions:(id)arg1 toBeRejectedPersonSuggestions:(id)arg2 operation:(id)arg3 error:(*id)arg4 ;
-(id)bestRepresentativeFaceForPerson:(id)arg0 qualityMeasureByFace:(id)arg1 canceler:(id)arg2 ;
-(id)densityClusteringForObjects:(id)arg0 maximumDistance:(CGFloat)arg1 minimumNumberOfObjects:(NSUInteger)arg2 withDistanceBlock:(id)arg3 ;
-(id)fetchPersonsForFaceIDModel;
-(id)generateFaceCropForFaceCropSourceDescriptors:(id)arg0 ;
-(id)initWithPhotoAnalysisManager:(id)arg0 dataLoader:(id)arg1 ;
-(id)keyFaceForPerson:(id)arg0 qualityMeasureByFace:(id)arg1 updateBlock:(id)arg2 ;
-(id)nextAdditionalJobWithScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 overTheYearsComputation:(BOOL)arg2 updateBlock:(id)arg3 ;
-(id)personModelPath;
-(id)sortedPoolOfContactIdentifiersExcludingContactIdentifiers:(id)arg0 ;
-(id)statusAsDictionary;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 updateBlock:(id)arg2 ;
-(id)workerStateFileURL;
-(int)_faceWorkerTasksToPerformOnAsset:(id)arg0 accordingToAnalysisAttributes:(id)arg1 ;
-(int)_performPersistedFaceAnalysisOfPVImage:(id)arg0 withAttributes:(id)arg1 forAsset:(id)arg2 error:(*id)arg3 ;
-(int)_performPersistedFaceAnalysisOfResource:(id)arg0 withAttributes:(id)arg1 forAsset:(id)arg2 error:(*id)arg3 ;
-(void)_appendToSuggestionsLog:(id)arg0 ;
-(void)_closeSuggestionsLoggingSession;
-(void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg0 ;
-(void)_didPerformFaceClustering;
-(void)_finalizeSuggestionsLog;
-(void)_logAnalysisStatistics;
-(void)_logFaceToSuggestionsLog:(id)arg0 ;
-(void)_openSuggestionsLoggingSession;
-(void)_performFaceCropProcessingWhileKeepingAliveJob:(id)arg0 ;
-(void)_performFullVisionCleanup;
-(void)_performIntermediateVisionCleanup;
-(void)_readState;
-(void)_resetAnalysisStatistics;
-(void)_setStateValue:(id)arg0 forKey:(id)arg1 ;
-(void)_willPerformFaceClustering;
-(void)configureRequest:(id)arg0 algorithmUmbrellaVersion:(unsigned int)arg1 ;
-(void)cooldown;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)faceClusteringInformation:(NSUInteger)arg0 withContext:(id)arg1 reply:(id)arg2 ;
-(void)faceProcessingStatusForUserInterfaceWithContext:(id)arg0 reply:(id)arg1 ;
-(void)generateFaceIDModelShouldForce:(BOOL)arg0 progress:(id)arg1 extendTimeoutBlock:(id)arg2 ;
-(void)handlePVNotification:(id)arg0 ;
-(void)interruptPhotoVision;
-(void)markLastBackgroundContactClassificationJobDate;
-(void)markLastBackgroundFaceIDModelRebuildJobDate;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)personPromoterStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)pingFaceWorkerWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)processDirtyFaceCrops;
-(void)processPersonsWithContext:(id)arg0 reply:(id)arg1 ;
-(void)rebuildPersonsWithContext:(id)arg0 reply:(id)arg1 ;
-(void)reclusterFacesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg0 reply:(id)arg1 ;
-(void)resetFaceClassificationModelWithContext:(id)arg0 reply:(id)arg1 ;
-(void)resetFaceClusteringStateWithContext:(id)arg0 reply:(id)arg1 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(NSUInteger)arg0 ;
-(void)shutdown;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg0 toBeConfirmedPersonSuggestions:(id)arg1 toBeRejectedPersonSuggestions:(id)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)terminatePhotoVision;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg0 forceUpdate:(BOOL)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)validateClusterCacheWithContext:(id)arg0 reply:(id)arg1 ;
-(void)warmupWithProgressBlock:(id)arg0 ;
-(void)willCompleteJob:(id)arg0 ;


@end


#endif