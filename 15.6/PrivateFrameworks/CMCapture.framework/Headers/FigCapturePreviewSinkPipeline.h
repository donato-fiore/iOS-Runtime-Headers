// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREPREVIEWSINKPIPELINE_H
#define FIGCAPTUREPREVIEWSINKPIPELINE_H

@class NSArray, NSDictionary, NSString;
@protocol BWMRCSceneObserver, BWSemanticStyleSceneObserver;


#import "FigCaptureSinkPipeline.h"
#import "BWSceneClassifierSinkNode.h"
#import "BWNodeOutput.h"
#import "BWInferenceNode.h"
#import "BWPreviewStitcherNode.h"
#import "BWStreamingFilterNode.h"
#import "BWImageQueueSinkNode.h"
#import "BWPixelTransferNode.h"
#import "FigCaptureSemanticStyle.h"
#import "BWPreviewTimeMachineSinkNode.h"

@interface FigCapturePreviewSinkPipeline : FigCaptureSinkPipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    BWInferenceNode *_semanticStylePersonSegmentationNode;
    BWPreviewStitcherNode *_previewStitcher;
    BOOL _cinematicVideoEnabled;
    BOOL _overCaptureEnabled;
    CGFloat _videoStabilizationOverscan;
    NSInteger _primaryCaptureRectUniqueID;
}


@property (readonly, nonatomic) BWNodeOutput *depthDataSinkOutput; // ivar: _depthDataSinkOutput
@property (readonly, nonatomic) BOOL depthFilterRenderingEnabled; // ivar: _depthFilterRenderingEnabled
@property (nonatomic) BOOL discardsImageQueueSampleData;
@property BOOL displaysWidestCameraOnly;
@property (readonly, nonatomic) BWStreamingFilterNode *filterNode; // ivar: _filterNode
@property (retain, nonatomic) NSArray *filters;
@property (readonly, nonatomic) BWImageQueueSinkNode *imageQueueSinkNode; // ivar: _imageQueueSinkNode
@property (readonly, nonatomic) NSDictionary *imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration; // ivar: _imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration
@property (readonly, nonatomic) BWNodeOutput *metadataSinkOutput; // ivar: _metadataSinkOutput
@property (nonatomic, setter=setMRCSceneObserver:) NSObject<BWMRCSceneObserver> *mrcSceneObserver;
@property (readonly, nonatomic) FigCaptureVideoTransform outputTransform; // ivar: _outputTransform
@property (nonatomic) float portraitLightingEffectStrength;
@property (readonly) CGFloat primaryCaptureRectAspectRatio;
@property (readonly) CGPoint primaryCaptureRectCenter;
@property (readonly) NSInteger primaryCaptureRectUniqueID;
@property (readonly, nonatomic) BWPixelTransferNode *scalerNode; // ivar: _scalerNode
@property (nonatomic) BOOL sceneClassifierSuspended;
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (readonly, nonatomic) NSObject<BWSemanticStyleSceneObserver> *semanticStyleSceneObserver;
@property (nonatomic) float simulatedAperture;
@property (readonly, nonatomic) int sourceDeviceType; // ivar: _sourceDeviceType
@property (readonly, nonatomic) NSString *sourceID; // ivar: _sourceID
@property (readonly, nonatomic) BWPreviewTimeMachineSinkNode *timeMachineSinkNode; // ivar: _timeMachineSinkNode
@property (readonly, nonatomic) BWNodeOutput *videoDataSinkOutput; // ivar: _videoDataSinkOutput
@property (readonly, nonatomic) BWNodeOutput *videoThumbnailSinkOutput; // ivar: _videoThumbnailSinkOutput
@property (readonly, nonatomic) FigCaptureVideoTransform videoThumbnailSinkOutputTransform; // ivar: _videoThumbnailSinkOutputTransform


+(void)initialize;
-(id)initWithConfiguration:(id)arg0 sourcePreviewOutput:(id)arg1 imageQueueSinkNode:(id)arg2 graph:(id)arg3 name:(id)arg4 inferenceScheduler:(id)arg5 captureDevice:(id)arg6 previewTapDelegate:(id)arg7 ;
-(void)dealloc;
-(void)prepareForRenderingWithPreparedPixelBufferPool;
-(void)setStoppingForModeSwitch:(BOOL)arg0 ;
-(void)setVideoStabilizationOverscanCropEnabled:(BOOL)arg0 momentMovieRecordingEnabled:(BOOL)arg1 ;


@end


#endif