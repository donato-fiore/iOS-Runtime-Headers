// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREMOVIEFILESINKTAILPIPELINE_H
#define FIGCAPTUREMOVIEFILESINKTAILPIPELINE_H

@protocol BWNodeBackPressureSource, BWMRCSceneObserver;


#import "FigCapturePipeline.h"
#import "BWPixelTransferNode.h"
#import "BWVideoCompressorNode.h"
#import "BWBackPressureNode.h"
#import "BWQuickTimeMovieFileSinkNode.h"
#import "FigCaptureVISPipeline.h"

@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline {
    BWPixelTransferNode *_scalerNode;
    BWVideoCompressorNode *_depthCompressorNode;
    BWBackPressureNode *_irisIntermediateJPEGDecompressionBackPressureNode;
    BWBackPressureNode *_visBackPressureNode;
    BWBackPressureNode *_scalerBackPressureNode;
    BWBackPressureNode *_irisSDOFVISBackPressureNode;
    id<BWNodeBackPressureSource> *_visBackPressureSourceNode;
    NSUInteger _tailIndex;
    int _visBackPressureExtraRetainedBufferCount;
    int _videoStabilizationType;
    BOOL _offlineVISEnabled;
}


@property (readonly, nonatomic) CGRect irisVISCleanOutputRectForCLAP;
@property (readonly, nonatomic) BWQuickTimeMovieFileSinkNode *movieFileSinkNode; // ivar: _movieFileSinkNode
@property (nonatomic, setter=setMRCSceneObserver:) NSObject<BWMRCSceneObserver> *mrcSceneObserver; // ivar: _mrcSceneObserver
@property (readonly, nonatomic) ? offlineVISDimensions;
@property (nonatomic) BOOL recording; // ivar: _recording
@property (nonatomic) BOOL sceneClassifierSuspended; // ivar: _sceneClassifierSuspended
@property (readonly, nonatomic) BWVideoCompressorNode *sdofCompressorNode; // ivar: _sdofCompressorNode
@property (readonly, nonatomic) BWVideoCompressorNode *videoCompressorNode; // ivar: _videoCompressorNode
@property (readonly, nonatomic) FigCaptureVISPipeline *visPipeline; // ivar: _visPipeline


-(id)initWithConfiguration:(id)arg0 tailIndex:(NSUInteger)arg1 numTailPipelines:(NSUInteger)arg2 graph:(id)arg3 parentPipeline:(id)arg4 captureDevice:(id)arg5 inferenceScheduler:(id)arg6 recordingStatusDelegate:(id)arg7 workgroup:(id)arg8 ;
-(void)dealloc;


@end


#endif