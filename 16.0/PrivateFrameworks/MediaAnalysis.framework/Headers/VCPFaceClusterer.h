// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
    id *_cancelOrExtendTimeoutBlock;
}




-(BOOL)_resetFaceClusteringState:(*id)arg0 ;
-(BOOL)clustererIsReadyToReturnSuggestions;
// -(BOOL)getFaceClusters:(*id)arg0 clusteringThreshold:(*CGFloat)arg1 utilizingGPU:(*BOOL)arg2 cancelOrExtendTimeoutBlock:(id)arg3 error:(unk)arg4  ;
-(BOOL)reclusterFacesWithThreshold:(id)arg0 shouldRecluster:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)resetFaceClusteringState:(*id)arg0 ;
-(NSUInteger)clustererState;
-(NSUInteger)numberOfFacesPendingClustering;
-(id)clusterer;
-(id)initWithPhotoLibrary:(id)arg0 context:(id)arg1 cancelOrExtendTimeoutBlock:(id)arg2 ;
-(int)clusterFaces;
-(int)clusterFacesIfNecessary;
-(void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg0 ;
-(void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg0 ;


@end


#endif