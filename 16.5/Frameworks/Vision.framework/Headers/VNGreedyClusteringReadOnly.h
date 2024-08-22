// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNGREEDYCLUSTERINGREADONLY_H
#define VNGREEDYCLUSTERINGREADONLY_H

@class NSString, NSData;
@protocol VNClusteringReadOnly, VNClusteringCancelling;

#import <Foundation/Foundation.h>

#import "VNClusteringLogger.h"
#import "VNSuggestionsLogger.h"

@interface VNGreedyClusteringReadOnly : NSObject <VNClusteringReadOnly, VNClusteringCancelling>

 {
    VNClusteringLogger *_clusteringLogger;
    VNSuggestionsLogger *_suggestionsLogger;
    NSString *_cacheFolderPath;
    NSString *_algorithmType;
    NSData *_state;
    BOOL _vectorMapReadOnlyFlag;
    NSUInteger _faceprintRevision;
    NSUInteger _torsoprintRevision;
    NSString *_ageClassifierFilePath;
    float _ageClassifierBabyThreshold;
    float _ageClassifierKidThreshold;
    ? m_ClusteringImpl_const;
}




+(id)clustererModelFileNamesFromState:(id)arg0 storedInPath:(id)arg1 error:(*id)arg2 ;
+(id)getRepresentativenessForFaces:(id)arg0 error:(*id)arg1 ;
+(id)nonGroupedGroupID;
+(void)addFaceObservations:(id)arg0 toFaceDescriptorBuffer:(*void)arg1 ;
+(void)addFaceObservations:(id)arg0 withGroupingIdentifiers:(id)arg1 toFaceDescriptorBuffer:(*void)arg2 ;
+(void)addPersonData:(id)arg0 withGroupingIdentifiers:(id)arg1 toFaceDescriptorBuffer:(*void)arg2 ;
-(BOOL)_parseOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelClustering:(*id)arg0 ;
-(id)convertUpdatePairsToClusters:(*void)arg0 ;
-(id)getAllClustersFromStateAndReturnError:(*id)arg0 ;
-(id)getClusterState:(*id)arg0 ;
-(id)getClusteredIds:(*id)arg0 ;
-(id)getClustersForClusterIds:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg0 andFaceId:(id)arg1 error:(*id)arg2 ;
-(id)getDistanceBetweenLevel1Clusters:(id)arg0 error:(*id)arg1 ;
-(id)getDistances:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)getLevel0ClusteredIdsForFaceId:(id)arg0 error:(*id)arg1 ;
-(id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)maximumFaceIdInModelAndReturnError:(*id)arg0 ;
-(id)suggestionsForClusterIdsWithFlags:(id)arg0 affinityThreshold:(float)arg1 error:(*id)arg2 ;
-(void)initializeLogging;
-(void)setGreedyClustererFaces_const:(struct shared_ptr<const vision::mod::FaceClustering> )arg0 ;


@end


#endif