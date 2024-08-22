// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVCLUSTERER_H
#define PVCLUSTERER_H

@class NSURL, NSString, NSNumber, NSSet, NSMutableSet, VNCanceller, VNClustererBuilder, NSMutableArray, NSLock, NSMutableDictionary, NSDate;
@protocol PVFaceClusteringProtocol, PVVisionIntegrating, PVPersistenceDelegate;

#import <Foundation/Foundation.h>

#import "PVQueue.h"
#import "PVContext.h"
#import "PVCanceler.h"
#import "PVSuggestionRequest.h"
#import "PVEventManager.h"

@interface PVClusterer : NSObject <PVFaceClusteringProtocol>

 {
    id<PVVisionIntegrating> *_visionIntegration;
    id<PVPersistenceDelegate> *_persistenceDelegate;
    PVQueue *_processingQueue;
    PVContext *_context;
    NSURL *_cacheDirUrl;
    NSURL *_cacheFileUrl;
    NSString *_clusteringType;
    NSNumber *_threshold;
    NSSet *_faceCSNsInClusterCache;
    NSUInteger _nextSeqNum;
    NSMutableSet *_faceIdStrsToAdd;
    NSMutableSet *_faceCSNsToRemove;
    NSUInteger _accumulatedChangesCount;
    NSUInteger _nextClusterTriggeringAccumulatedChangesCount;
    PVCanceler *_clusteringCanceler;
    VNCanceller *_visionCanceler;
    VNClustererBuilder *_clusterBuilder;
    BOOL _rebuildClusterer;
    NSMutableArray *_outstandingSuggestionRequests;
    PVSuggestionRequest *_currentSuggestionRequest;
    NSLock *_suggestionLock;
    NSLock *_currentStatusSnapshotLock;
    ? _currentStatusSnapshot;
    BOOL _currentStatusSnapshotIsValid;
    NSLock *_propertyDictionaryLock;
    NSMutableDictionary *_propertyDictionary;
    NSDate *_timestampOfLastClusterComparison;
}


@property (nonatomic) NSInteger clustererBringUpState; // ivar: _clustererBringUpState
@property (readonly, nonatomic) NSInteger clustererState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) PVEventManager *eventManager; // ivar: _eventManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsFullSync;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly) Class superclass;


+(BOOL)removeClusteringStateCacheWithContext:(id)arg0 cacheDirectoryUrl:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(BOOL)_performAndPersistClustersByAddingFaceObs:(id)arg0 groupingIdentifiers:(id)arg1 removingFaceObs:(id)arg2 updateFaces:(id)arg3 canceler:(id)arg4 error:(*id)arg5 ;
-(BOOL)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(*id)arg0 lastClusterSequenceNumber:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_processingQueueGetVisionClusters:(id)arg0 minimumClusterSize:(NSUInteger)arg1 returnClusterAsCountedSet:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_processingQueuePerformForcedFaceClustering:(BOOL)arg0 withCanceler:(id)arg1 ;
-(BOOL)_processingQueueResetClusterCache:(*id)arg0 ;
-(BOOL)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg0 clusterState:(id)arg1 threshold:(id)arg2 error:(*id)arg3 ;
-(BOOL)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_processingQueueSaveClusterCache:(*id)arg0 ;
-(BOOL)getClusters:(*id)arg0 threshold:(*CGFloat)arg1 utilizingGPU:(*BOOL)arg2 error:(*id)arg3 ;
-(NSInteger)restoreClusterCacheAndSyncWithLibrary:(BOOL)arg0 error:(*id)arg1 ;
-(NSUInteger)numberOfAccumulatedClusterChanges;
-(id)_faceObservationsFromFaceCSNs:(id)arg0 ;
-(id)_faceObservationsFromFaceIdStrs:(id)arg0 assignClusterSeqNumberIfNeeded:(BOOL)arg1 updatedFaces:(id)arg2 groupingIdentifiers:(id)arg3 ;
-(id)_faceObservationsFromFaces:(id)arg0 assignClusterSeqNumberIfNeeded:(BOOL)arg1 updatedFaces:(id)arg2 ;
-(id)_propertyDictionaryFileURL;
-(id)_stringForPVClustererBringUpState:(NSInteger)arg0 ;
-(id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg0 clusterState:(id)arg1 error:(*id)arg2 ;
-(id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg0 error:(*id)arg1 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(*id)arg0 ;
-(id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(NSUInteger)arg0 andLevel0ClusterIdentifiedByFaceCSN:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg0 toClustersIdentifiedByFaceCSNs:(id)arg1 error:(*id)arg2 ;
-(id)initWithContext:(id)arg0 persistenceDelegate:(id)arg1 cacheDirectoryURL:(id)arg2 visionIntegration:(id)arg3 ;
-(id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(NSUInteger)arg0 error:(*id)arg1 ;
// -(id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg0 withClusteringFlags:(id)arg1 updateHandler:(id)arg2 error:(unk)arg3  ;
-(id)status;
-(id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg0 error:(*id)arg1 ;
-(void)_cancelClusteringAndRestoreClusterCache:(BOOL)arg0 ;
-(void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
-(void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg0 visionClusters:(*id)arg1 withCanceler:(id)arg2 ;
-(void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg0 withCanceler:(id)arg1 ;
-(void)_readPropertyDictionary;
-(void)_recordClusterRebuildRequired:(BOOL)arg0 ;
-(void)_recordClusteringState:(BOOL)arg0 ;
-(void)_recordCountOfPendingFacesToAdd:(NSUInteger)arg0 ;
-(void)_recordCurrentStatus:(struct ? )arg0 ;
-(void)_recordIncrementCountOfPendingFacesToAdd:(NSUInteger)arg0 ;
-(void)_removeEmptyGroups;
-(void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg0 ;
-(void)_setPropertyDictionaryValue:(id)arg0 forKey:(id)arg1 ;
-(void)cancelAllSuggestionRequests;
-(void)cancelClustering;
-(void)cancelSuggestionRequest:(id)arg0 ;
-(void)clusterAndWait;
-(void)clusterIfNecessaryAndWait;
-(void)performClusteringWithCompletion:(id)arg0 ;
-(void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg0 addingFaceIdStrs:(id)arg1 ;
-(void)terminate;


@end


#endif