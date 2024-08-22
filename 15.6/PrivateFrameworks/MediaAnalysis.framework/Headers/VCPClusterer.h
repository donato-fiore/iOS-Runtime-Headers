// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCLUSTERER_H
#define VCPCLUSTERER_H

@class PHPhotoLibrary, NSURL, NSString, NSNumber, NSSet, NSMutableSet, VNCanceller, VNClustererBuilder, NSMutableArray, NSLock, NSMutableDictionary, NSDate;
@protocol PVFaceClusteringProtocol, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "VCPPhotosPersistenceDelegate.h"
#import "VCPPhotosFaceProcessingContext.h"
#import "VCPSuggestionRequest.h"

@interface VCPClusterer : NSObject <PVFaceClusteringProtocol>

 {
    PHPhotoLibrary *_photoLibrary;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_group> *_processingGroup;
    atomic<bool> _canceled;
    VCPPhotosFaceProcessingContext *_context;
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
    VNCanceller *_visionCanceler;
    VNClustererBuilder *_clusterBuilder;
    BOOL _rebuildClusterer;
    NSMutableArray *_outstandingSuggestionRequests;
    VCPSuggestionRequest *_currentSuggestionRequest;
    NSLock *_suggestionLock;
    NSLock *_currentStatusSnapshotLock;
    ? _currentStatusSnapshot;
    BOOL _currentStatusSnapshotIsValid;
    NSLock *_propertyDictionaryLock;
    NSMutableDictionary *_propertyDictionary;
    NSDate *_timestampOfLastClusterComparison;
    mach_timebase_info _timebase;
    id *_cancelBlock;
    id *_extendTimeoutBlock;
}


@property (nonatomic) NSUInteger clustererBringUpState; // ivar: _clustererBringUpState
@property (readonly, nonatomic) NSUInteger clustererState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsFullSync;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly) Class superclass;


+(BOOL)removeClusteringStateCacheWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_performAndPersistClustersWithFaceTorsoprintsToAdd:(id)arg0 groupingIdentifiersToAdd:(id)arg1 faceTorsoprintsToRemove:(id)arg2 updatedFaces:(id)arg3 andError:(*id)arg4 ;
-(BOOL)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(*id)arg0 lastClusterSequenceNumber:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_processingQueueGetVisionClusters:(id)arg0 minimumClusterSize:(NSUInteger)arg1 returnClusterAsCountedSet:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_processingQueuePerformForcedFaceClustering:(BOOL)arg0 ;
-(BOOL)_processingQueueResetClusterCache:(*id)arg0 ;
-(BOOL)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg0 clusterState:(id)arg1 threshold:(id)arg2 error:(*id)arg3 ;
-(BOOL)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_processingQueueSaveClusterCache:(*id)arg0 ;
-(BOOL)getClusters:(*id)arg0 threshold:(*CGFloat)arg1 utilizingGPU:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)isCanceled;
-(NSUInteger)clusterCount;
-(NSUInteger)clusteredFaceCount;
-(NSUInteger)numberOfAccumulatedClusterChanges;
-(NSUInteger)restoreClusterCacheAndSyncWithLibrary:(BOOL)arg0 error:(*id)arg1 ;
-(id)_faceTorsoprintsFromFaceCSNs:(id)arg0 ;
-(id)_faceTorsoprintsFromFaceIdentifiers:(id)arg0 assignClusterSeqNumberIfNeeded:(BOOL)arg1 updatedFaces:(id)arg2 groupingIdentifiers:(id)arg3 ;
-(id)_faceTorsoprintsFromFaces:(id)arg0 assignClusterSeqNumberIfNeeded:(BOOL)arg1 updatedFaces:(id)arg2 ;
-(id)_propertyDictionaryFileURL;
-(id)_stringForVCPClustererBringUpState:(NSUInteger)arg0 ;
-(id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg0 clusterState:(id)arg1 error:(*id)arg2 ;
-(id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg0 error:(*id)arg1 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(*id)arg0 ;
-(id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(NSUInteger)arg0 andLevel0ClusterIdentifiedByFaceCSN:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg0 toClustersIdentifiedByFaceCSNs:(id)arg1 error:(*id)arg2 ;
// -(id)initWithPhotoLibrary:(id)arg0 context:(id)arg1 extendTimeoutBlock:(id)arg2 andCancelBlock:(unk)arg3  ;
-(id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(NSUInteger)arg0 error:(*id)arg1 ;
// -(id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg0 withClusteringFlags:(id)arg1 updateHandler:(id)arg2 error:(unk)arg3  ;
-(id)status;
-(id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg0 error:(*id)arg1 ;
-(void)_cancelClusteringAndRestoreClusterCache:(BOOL)arg0 ;
-(void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
-(void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg0 visionClusters:(*id)arg1 ;
-(void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg0 ;
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