// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARSCENERECONSTRUCTIONHANDLER_H
#define ARSCENERECONSTRUCTIONHANDLER_H

@protocol ARSceneReconstructionDelegate;

#import <Foundation/Foundation.h>

#import "ARSceneReconstructionOptions.h"

@interface ARSceneReconstructionHandler : NSObject {
    *CV3DReconSession _reconstructionSession;
    os_unfair_lock_s _reconstructionSessionLock;
    *CV3DSLAMSession _slamSessionHandle;
    BOOL _sessionActivated;
    *__CVPixelBufferPool _postProcessedDepthConfidencePool;
    BOOL _occupancyMappingEnabled;
    os_unfair_lock_s _slamStateBufferBackLock;
    vector<std::shared_ptr<const CV3DSLAMStateContext>, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> _slamStateBufferBack;
    vector<std::shared_ptr<const CV3DSLAMStateContext>, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> _slamStateBufferFront;
    optional<unsigned long long> _slamStateCbID;
}


@property (weak, nonatomic) NSObject<ARSceneReconstructionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) ARSceneReconstructionOptions *options; // ivar: _options
@property (readonly, nonatomic) NSUInteger sceneReconstruction; // ivar: _sceneReconstruction


-(BOOL)_canReconfigureExistingSessionForSceneReconstruction:(NSUInteger)arg0 options:(id)arg1 ;
-(BOOL)_configureMeshingConfiguration:(struct CV3DReconMeshingConfiguration *)arg0 error:(*id)arg1 ;
-(BOOL)_reconfigureSession:(struct CV3DReconSession *)arg0 error:(*id)arg1 ;
-(BOOL)_recreateReconstructionSessionWithError:(*id)arg0 ;
-(BOOL)queryOccupancyWithPoints:(id)arg0 callback:(id)arg1 ;
-(id)initWithSceneReconstruction:(NSUInteger)arg0 options:(id)arg1 slamSessionHandle:(struct CV3DSLAMSession *)arg2 ;
-(struct __CVBuffer *)postProcessConfidenceBuffer:(struct __CVBuffer *)arg0 fromSegmentationData:(id)arg1 ;
-(void)_didReceiveKeyframeListUpdateCallbackWithKeyframeList:(struct CV3DReconKeyframeList *)arg0 timestamp:(CGFloat)arg1 error:(struct __CFError *)arg2 ;
-(void)_didReceiveMeshListUpdateCallbackWithMeshList:(struct CV3DReconMeshList *)arg0 timestamp:(CGFloat)arg1 error:(struct __CFError *)arg2 ;
-(void)_setupSLAMStateBuffering;
-(void)bufferSlamState:(struct CV3DSLAMStateContext *)arg0 ;
-(void)dealloc;
-(void)handleCFError:(struct __CFError *)arg0 withErrorMessage:(id)arg1 ;
-(void)handleCFError:(struct __CFError *)arg0 withErrorMessage:(id)arg1 failSession:(BOOL)arg2 ;
-(void)meshPlaneHarmonizationShouldEnable:(BOOL)arg0 ;
-(void)pause;
-(void)processPlaneList:(struct CV3DPlaneDetectionPlaneList *)arg0 ;
-(void)pushDepth:(id)arg0 semanticSegmentation:(id)arg1 personSegmentation:(id)arg2 pose:(id)arg3 ;
-(void)reconfigureSceneReconstruction:(NSUInteger)arg0 options:(id)arg1 ;
-(void)reset;
-(void)start;
-(void)swapSlamStateBuffers;


@end


#endif