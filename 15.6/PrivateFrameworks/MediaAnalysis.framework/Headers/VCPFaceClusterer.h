// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPFACECLUSTERER_H
#define VCPFACECLUSTERER_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "VCPClusterer.h"
#import "VCPPhotosFaceProcessingContext.h"

@interface VCPFaceClusterer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPClusterer *_clusterer;
    VCPPhotosFaceProcessingContext *_context;
    id *_cancelBlock;
    id *_extendTimeoutBlock;
}




-(BOOL)_resetFaceClusteringStateWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)clustererIsReadyToReturnSuggestions;
-(BOOL)getFaceClusters:(*id)arg0 clusteringThreshold:(*CGFloat)arg1 utilizingGPU:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)reclusterFacesWithThreshold:(id)arg0 shouldRecluster:(BOOL)arg1 error:(*id)arg2 ;
// -(BOOL)reclusterFacesWithThreshold:(id)arg0 shouldRecluster:(BOOL)arg1 withContext:(id)arg2 extendTimeout:(id)arg3 cancel:(unk)arg4 error:(id)arg5  ;
-(BOOL)resetFaceClusteringState:(*id)arg0 ;
-(NSUInteger)clustererState;
-(NSUInteger)numberOfFacesPendingClustering;
-(id)clusterer;
-(id)clusteringStatus;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(*id)arg0 ;
// -(id)initWithPhotoLibrary:(id)arg0 context:(id)arg1 extendTimeoutBlock:(id)arg2 andCancelBlock:(unk)arg3  ;
// -(int)clusterFacesIfNecessaryWithExtendTimeoutBlock:(id)arg0 andCancelBlock:(unk)arg1  ;
// -(int)clusterFacesWithExtendTimeoutBlock:(id)arg0 andCancelBlock:(unk)arg1  ;
-(void)cancelFaceClustering;
-(void)performFaceClusteringAndWait;
-(void)performFaceClusteringIfNecessaryAndWait;
-(void)performFaceClusteringWithCompletion:(id)arg0 ;
-(void)resetClusterer;
-(void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg0 ;
-(void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg0 ;
-(void)startAndSyncClusterCacheWithLibrary:(BOOL)arg0 reply:(id)arg1 ;
-(void)stop;


@end


#endif