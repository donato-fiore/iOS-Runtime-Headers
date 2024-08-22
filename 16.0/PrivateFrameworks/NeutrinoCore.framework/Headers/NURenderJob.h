// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURENDERJOB_H
#define NURENDERJOB_H

@class NSError, NSString, NSMutableString, NSArray, NSDate, AVAudioMix, CIImage, AVComposition, AVVideoComposition;
@protocol OS_dispatch_queue, NUDevice, NUExtentPolicy, OS_dispatch_group, NUScalePolicy, NURenderStatistics;

#import <Foundation/Foundation.h>

#import "NUObservatory.h"
#import "NUComposition.h"
#import "NUImageGeometry.h"
#import "NURenderNode.h"
#import "NUPriority.h"
#import "NURenderPipeline.h"
#import "NURenderRequest.h"
#import "NUGeometrySpaceMap.h"

@interface NURenderJob : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NUObservatory *_observatory;
    NSError *_error;
    BOOL _failed;
    BOOL _replySynchronous;
    BOOL _didRespond;
    NSString *_memoizationCacheKey;
}


@property (readonly, nonatomic) NSMutableString *additionalDebugInfo;
@property (retain, nonatomic) NUComposition *composition; // ivar: _composition
@property (readonly) NSInteger currentStage; // ivar: _currentStage
@property (retain) NSArray *dependentJobs; // ivar: _dependentJobs
@property (readonly, nonatomic) NSObject<NUDevice> *device; // ivar: _device
@property (readonly) NSError *error;
@property (readonly) NSObject<NUExtentPolicy> *extentPolicy;
@property (readonly) BOOL failed;
@property (retain, nonatomic) NUImageGeometry *fullSizeGeometry; // ivar: _fullSizeGeometry
@property (readonly) ? imageSize;
@property (readonly) BOOL isAborted; // ivar: _isAborted
@property (readonly) BOOL isCanceled; // ivar: _isCanceled
@property (readonly) BOOL isExecuting; // ivar: _isExecuting
@property (readonly) BOOL isFinished; // ivar: _isFinished
@property (readonly, nonatomic) NSDate *jobCreationDate; // ivar: _jobCreationDate
@property (readonly) NSUInteger jobNumber; // ivar: _jobNumber
@property (retain, nonatomic) NSString *nodeCacheAtStartOfJob; // ivar: _nodeCacheAtStartOfJob
@property (retain, nonatomic) AVAudioMix *outputAudioMix; // ivar: _outputAudioMix
@property (retain, nonatomic) NUImageGeometry *outputGeometry; // ivar: _outputGeometry
@property (retain, nonatomic) CIImage *outputImage; // ivar: _outputImage
@property (retain, nonatomic) AVComposition *outputVideo; // ivar: _outputVideo
@property (retain, nonatomic) AVVideoComposition *outputVideoComposition; // ivar: _outputVideoComposition
@property (retain, nonatomic) NURenderNode *prepareNode; // ivar: _prepareNode
@property (readonly) NUPriority *priority;
@property (retain, nonatomic) NURenderNode *renderNode; // ivar: _renderNode
@property (retain, nonatomic) NURenderPipeline *renderPipeline; // ivar: _renderPipeline
@property (nonatomic) ? renderScale; // ivar: _renderScale
@property (readonly, nonatomic) int rendererType; // ivar: _rendererType
@property (retain, nonatomic) NSObject<OS_dispatch_group> *replyGroup; // ivar: _replyGroup
@property (readonly) NURenderRequest *request; // ivar: _request
@property (retain, nonatomic) NUGeometrySpaceMap *resolvedSpaceMap; // ivar: _resolvedSpaceMap
@property (readonly) NSObject<NUScalePolicy> *scalePolicy;
@property (nonatomic) BOOL shouldWriteJobDebugFile; // ivar: _shouldWriteJobDebugFile
@property (readonly, nonatomic) NSObject<NURenderStatistics> *statistics; // ivar: _stats
@property (readonly) BOOL succeeded;
@property (readonly, nonatomic) BOOL wantsCompleteStage;
@property (readonly, nonatomic) BOOL wantsOutputGeometry;
@property (readonly, nonatomic) BOOL wantsOutputImage;
@property (readonly, nonatomic) BOOL wantsOutputVideo;
@property (readonly, nonatomic) BOOL wantsOutputVideoFrame;
@property (readonly, nonatomic) BOOL wantsPrepareNodeCached;
@property (readonly, nonatomic) BOOL wantsRenderNodeCached;
@property (readonly, nonatomic) BOOL wantsRenderScaleClampedToNativeScale;
@property (readonly, nonatomic) BOOL wantsRenderStage;


+(void)flushCache;
-(BOOL)_cancelCoalescedJob;
-(BOOL)_checkForMemoizedResult;
-(BOOL)_shouldCancelCoalescedJob;
-(BOOL)_shouldWaitForDependentJobs;
-(BOOL)cancelCoalescedJob;
-(BOOL)complete:(*id)arg0 ;
-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)renderVideoFrames:(id)arg0 videoMetadataSamples:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(struct ? )arg3 colorSpace:(id)arg4 error:(*id)arg5 ;
-(BOOL)requiresVideoComposition;
-(BOOL)runStage:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)shouldWriteCanceledJob;
-(BOOL)shouldWriteTombstone;
-(NSInteger)_nextStageForStage:(NSInteger)arg0 ;
-(NSInteger)resolvedSampleMode:(NSInteger)arg0 ;
-(NSInteger)willRun;
-(id)cacheKey;
-(id)debugFilePath;
-(id)description;
-(id)evaluateComposition:(id)arg0 pipeline:(id)arg1 pipelineState:(id)arg2 error:(*id)arg3 ;
-(id)evaluateOutputGeometry:(*id)arg0 ;
-(id)generateVideoComposition:(*id)arg0 ;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)memoizationCacheKey;
-(id)newRenderPipelineStateForEvaluationMode:(NSInteger)arg0 ;
-(id)pipelineForComposition:(id)arg0 error:(*id)arg1 ;
-(id)prepareNodeWithPipelineState:(id)arg0 error:(*id)arg1 ;
-(id)renderImage:(id)arg0 into:(id)arg1 colorSpace:(id)arg2 roi:(id)arg3 imageSize:(struct ? )arg4 alpha:(*NSUInteger)arg5 error:(*id)arg6 ;
-(id)renderImage:(id)arg0 into:(id)arg1 colorSpace:(id)arg2 roi:(id)arg3 imageSize:(struct ? )arg4 error:(*id)arg5 ;
-(id)renderNodeWithPipelineState:(id)arg0 error:(*id)arg1 ;
-(id)renderer:(*id)arg0 ;
-(id)result;
-(id)validateComposition:(*id)arg0 ;
-(struct ? )_atomicCancel;
-(void)_cancel;
-(void)_didPrepare;
-(void)_emitSignpostEventType:(unsigned char)arg0 forStage:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)_finish;
-(void)_memoizeResult:(id)arg0 ;
-(void)_notifyCanceled:(NSInteger)arg0 ;
-(void)_notifyStageTransition:(NSInteger)arg0 ;
-(void)_pause;
-(void)_reply:(id)arg0 ;
-(void)_resume;
-(void)_run:(NSInteger)arg0 ;
-(void)abortComplete;
-(void)abortPrepare;
-(void)abortRender;
-(void)abortStage:(NSInteger)arg0 ;
-(void)addCancelObserver:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)addStageObserver:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)cancel;
-(void)cleanUp;
-(void)didRun;
-(void)fail:(id)arg0 ;
-(void)finalize:(BOOL)arg0 ;
-(void)finish;
-(void)pause;
-(void)removeObserver:(id)arg0 ;
-(void)renderJobDebugCanceled;
-(void)renderJobDebugInit;
-(void)renderJobDebugResponded;
-(void)reply:(id)arg0 ;
-(void)respond;
-(void)resume;
-(void)run:(NSInteger)arg0 ;
-(void)runSynchronous;
-(void)runToPrepareSynchronous;
-(void)writeRenderDebugFileToDisk;
-(void)writeRenderJobDebugTombstone;


@end


#endif