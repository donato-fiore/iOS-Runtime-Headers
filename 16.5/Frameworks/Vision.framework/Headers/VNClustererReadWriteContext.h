// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCLUSTERERREADWRITECONTEXT_H
#define VNCLUSTERERREADWRITECONTEXT_H

@protocol VNClustererModelQuerying, VNClustererModelBuilding, VNClusteringReadOnly><VNClusteringWritable><VNClusteringCancelling;


#import "VNClustererContextBase.h"

@interface VNClustererReadWriteContext : VNClustererContextBase <VNClustererModelQuerying, VNClustererModelBuilding>

 {
    id<VNClusteringReadOnly><VNClusteringWritable><VNClusteringCancelling> *_clusterer;
}




+(id)clustererModelFileNamesFromState:(id)arg0 storedInPath:(id)arg1 error:(*id)arg2 ;
+(id)distanceBetweenFacesWithFaceObservation:(id)arg0 andFaceObservation:(id)arg1 error:(*id)arg2 ;
+(id)distanceBetweenFacesWithFaceprint:(id)arg0 andFaceprint:(id)arg1 error:(*id)arg2 ;
+(id)nonGroupedGroupID;
+(id)representativenessForFaces:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelClustering:(*id)arg0 ;
-(BOOL)resetModelState:(id)arg0 error:(*id)arg1 ;
-(id)_updateClustererWithOptions:(id)arg0 canceller:(id)arg1 error:(*id)arg2 ;
-(id)allClusteredFaceIdsAndReturnError:(*id)arg0 ;
-(id)clusteredFaceIdsForClusterContainingFaceId:(id)arg0 error:(*id)arg1 ;
-(id)distanceBetweenClustersWithFaceId:(id)arg0 andFaceId:(id)arg1 error:(*id)arg2 ;
-(id)distanceBetweenLevel1Clusters:(id)arg0 error:(*id)arg1 ;
-(id)getAllClustersAndReturnError:(*id)arg0 ;
-(id)getDistances:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 requestRevision:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 requestRevision:(NSUInteger)arg4 torsoprintRequestRevision:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 torsoThreshold:(float)arg4 requestRevision:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 torsoThreshold:(float)arg4 requestRevision:(NSUInteger)arg5 torsoprintRequestRevision:(NSUInteger)arg6 error:(*id)arg7 ;
-(id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg0 error:(*id)arg1 ;
-(id)maximumFaceIdInModelAndReturnError:(*id)arg0 ;
-(id)saveAndReturnCurrentModelState:(*id)arg0 ;
-(id)suggestionsForClustersWithFaceIds:(id)arg0 affinityThreshold:(float)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(id)updateModelByAddingFaces:(id)arg0 andRemovingFaces:(id)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(id)updateModelByAddingFaces:(id)arg0 canceller:(id)arg1 error:(*id)arg2 ;
-(id)updateModelByAddingFaces:(id)arg0 withGroupingIdentifiers:(id)arg1 andRemovingFaces:(id)arg2 canceller:(id)arg3 error:(*id)arg4 ;
-(id)updateModelByAddingPersons:(id)arg0 withGroupingIdentifiers:(id)arg1 andRemovingPersons:(id)arg2 canceller:(id)arg3 error:(*id)arg4 ;
-(id)updateModelByRemovingFaces:(id)arg0 canceller:(id)arg1 error:(*id)arg2 ;


@end


#endif