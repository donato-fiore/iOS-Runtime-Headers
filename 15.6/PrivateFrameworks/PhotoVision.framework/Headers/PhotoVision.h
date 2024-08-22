// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHOTOVISION_H
#define PHOTOVISION_H

@class NSURL;
@protocol PVVisionIntegrating, PVNotificationListener, PVPersistenceDelegate;

#import <Foundation/Foundation.h>

#import "PVContext.h"
#import "PVVisionAnalyzer.h"
#import "PVFaceMerger.h"
#import "PVEventManager.h"
#import "PVClusterer.h"

@interface PhotoVision : NSObject {
    id<PVVisionIntegrating> *_visionIntegration;
    id<PVNotificationListener> *_notificationListener;
    id<PVPersistenceDelegate> *_persistenceDelegate;
    PVContext *_context;
    PVVisionAnalyzer *_analyzer;
    PVFaceMerger *_faceMerger;
    PVEventManager *_eventManager;
    PVClusterer *_clusterer;
    NSURL *_cacheDirUrl;
}


@property (readonly, nonatomic) unsigned int faceAlgorithmUmbrellaVersion; // ivar: _faceAlgorithmUmbrellaVersion
@property (readonly, nonatomic) unsigned int sceneAlgorithmUmbrellaVersion; // ivar: _sceneAlgorithmUmbrellaVersion


+(BOOL)isAppleInternal;
+(NSUInteger)defaultFaceAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned int)arg0 ;
+(NSUInteger)faceprintAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned int)arg0 ;
+(id)supportedFaceAlgorithmUmbrellaVersions;
+(id)supportedSceneAlgorithmUmbrellaVersions;
+(int)_intValueForKey:(id)arg0 defaultValue:(int)arg1 ;
+(unsigned int)maximumFaceAlgorithmUmbrellaVersion;
+(unsigned int)maximumSceneAlgorithmUmbrellaVersion;
+(unsigned int)minimumFaceAlgorithmUmbrellaVersion;
+(unsigned int)minimumSceneAlgorithmUmbrellaVersion;
+(void)setAlgorithmRevisionForRequest:(id)arg0 algorithmUmbrellaVersion:(unsigned int)arg1 algorithmCollectionType:(NSUInteger)arg2 ;
// -(BOOL)buildPersonsWithCanceler:(id)arg0 keyFaceUpdateBlock:(id)arg1 extendTimeoutBlock:(unk)arg2 error:(id)arg3  ;
-(BOOL)clustererIsReadyToReturnSuggestions;
-(BOOL)getFaceClusters:(*id)arg0 clusteringThreshold:(*CGFloat)arg1 utilizingGPU:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)reclusterFacesWithThreshold:(id)arg0 shouldRecluster:(BOOL)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)resetFaceClusteringStateWithContext:(id)arg0 error:(*id)arg1 ;
-(NSInteger)clustererState;
-(NSUInteger)numberOfFacesPendingClustering;
-(id)analyzeImage:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)clusteringStatus;
-(id)context;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(*id)arg0 ;
-(id)initWithPersistenceDelegate:(id)arg0 visionIntegration:(id)arg1 workingDirectoryURL:(id)arg2 faceAlgorithmUmbrellaVersion:(unsigned int)arg3 sceneAlgorithmUmbrellaVersion:(unsigned int)arg4 notificationListener:(id)arg5 ;
-(id)mergeExistingFaces:(id)arg0 withDetectedFaces:(id)arg1 forImage:(id)arg2 ;
// -(id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg0 withClusteringFlags:(id)arg1 updateHandler:(id)arg2 error:(unk)arg3  ;
-(id)suggestedPersonLocalIdentifierForFaceLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)suggestionsForFaceClusterSequenceNumbers:(id)arg0 error:(*id)arg1 ;
-(void)cancelAllSuggestionRequests;
-(void)cancelFaceClustering;
-(void)cancelSuggestionRequest:(id)arg0 ;
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