// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNSESSION_H
#define VNSESSION_H

@class NSMutableSet, NSString;
@protocol VNDetectorCacheDelegate, VNDetectorProviding, VNDetectorReleasing, VNTrackerProviding, VNLegacyForcedCleanupImplementing, VNRequestWarming;

#import <Foundation/Foundation.h>

#import "VNFrameworkManager.h"
#import "VNDetectorCache.h"

@interface VNSession : NSObject <VNDetectorCacheDelegate, VNDetectorProviding, VNDetectorReleasing, VNTrackerProviding, VNLegacyForcedCleanupImplementing, VNRequestWarming>

 {
    VNFrameworkManager *_frameworkManager;
    VNDetectorCache *_detectorCache_onlyAccessWithDetectorAccessingLock;
    os_unfair_lock_s _requestedTrackerUUIDsAccessLock;
    NSMutableSet *_requestedTrackerUUIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)globalSession;
-(BOOL)prepareForPerformingRequests:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg0 error:(*id)arg1 ;
-(id)_cachedDetectorOfClass:(Class)arg0 configuredWithOptions:(id)arg1 ;
-(id)detectorOfClass:(Class)arg0 configuredWithOptions:(id)arg1 error:(*id)arg2 ;
-(id)detectorOfType:(id)arg0 configuredWithOptions:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)loadedDetectors;
-(id)trackerWithOptions:(id)arg0 error:(*id)arg1 ;
-(void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)detectorCache:(id)arg0 didCacheDetector:(id)arg1 ;
-(void)detectorCache:(id)arg0 didEvictDetector:(id)arg1 ;
-(void)legacyForcedCleanupOfFacePipelineWithLevel:(id)arg0 ;
-(void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)arg0 ;
-(void)legacyForcedCleanupOfScenePipelineWithLevel:(id)arg0 ;
-(void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)arg0 ;
-(void)legacyForcedCleanupWithOptions:(id)arg0 ;
-(void)releaseCachedResources;
-(void)releaseCachedResourcesWithCompletionBlock:(id)arg0 ;
-(void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg0 withConfiguration:(id)arg1 ;
-(void)releaseTracker:(id)arg0 ;


@end


#endif