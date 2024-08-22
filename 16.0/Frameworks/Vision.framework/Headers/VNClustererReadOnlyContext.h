// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCLUSTERERREADONLYCONTEXT_H
#define VNCLUSTERERREADONLYCONTEXT_H

@protocol VNClustererModelQuerying, VNClusteringReadOnly><VNClusteringCancelling;


#import "VNClustererContextBase.h"

@interface VNClustererReadOnlyContext : VNClustererContextBase <VNClustererModelQuerying>

 {
    id<VNClusteringReadOnly><VNClusteringCancelling> *_clusterer;
}




+(id)clustererModelFileNamesFromState:(id)arg0 storedInPath:(id)arg1 error:(*id)arg2 ;
+(id)distanceBetweenFacesWithFaceObservation:(id)arg0 andFaceObservation:(id)arg1 error:(*id)arg2 ;
+(id)distanceBetweenFacesWithFaceprint:(id)arg0 andFaceprint:(id)arg1 error:(*id)arg2 ;
+(id)nonGroupedGroupID;
+(id)representativenessForFaces:(id)arg0 error:(*id)arg1 ;
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
-(id)suggestionsForClustersWithFaceIds:(id)arg0 affinityThreshold:(float)arg1 canceller:(id)arg2 error:(*id)arg3 ;


@end


#endif