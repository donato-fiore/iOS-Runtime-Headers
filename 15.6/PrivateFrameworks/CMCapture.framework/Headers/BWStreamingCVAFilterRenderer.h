// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTREAMINGCVAFILTERRENDERER_H
#define BWSTREAMINGCVAFILTERRENDERER_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol BWFilterRenderer, OS_dispatch_queue, CVAPortraitVideoPipeline;

#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWSpringSimulation.h"
#import "BWStreamingCVAFilterRendererAnimator.h"

@interface BWStreamingCVAFilterRenderer : NSObject <BWFilterRenderer>

 {
    NSObject<OS_dispatch_queue> *_sharedContextQueue;
    ? _sharedContext;
    id<CVAPortraitVideoPipeline> *_portraitVideoPipeline;
    BWPixelBufferPool *_postprocessedDisparityBufferPool;
    *__CVBuffer _mattingBuffer;
    int _depthDataSource;
    BWFigVideoCaptureDevice *_captureDevice;
    BWSpringSimulation *_stageProxyLiveRenderingSpringSimulation;
    BWStreamingCVAFilterRendererAnimator *_animator;
    NSMutableDictionary *_faceVisibilityByFaceID;
    NSMutableArray *_postprocessedFaces;
}


@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property float portraitLightingEffectStrength;
@property float simulatedAperture;
@property (readonly, nonatomic) BOOL stageRenderingEnabled; // ivar: _stageRenderingEnabled
@property (readonly, nonatomic) BOOL studioAndContourRenderingEnabled; // ivar: _studioAndContourRenderingEnabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) short type;


+(void)initialize;
-(id)initWithCaptureDevice:(id)arg0 studioAndContourRenderingEnabled:(BOOL)arg1 stageRenderingEnabled:(BOOL)arg2 depthDataSource:(int)arg3 ;
-(int)prepareForRenderingWithParameters:(id)arg0 inputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;
-(void)_removeFaceVisibilityForFacesMissingFromDetectedFaces:(id)arg0 ;
-(void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)disparityPostprocessingRequest:(id)arg0 didCompleteDisparityPostprocessingWithResult:(id)arg1 ;
-(void)mattingRequest:(id)arg0 didCompleteMattingWithResult:(id)arg1 ;
-(void)portraitRequest:(id)arg0 didCompletePortraitWithResult:(id)arg1 completionHandler:(id)arg2 ;
-(void)renderUsingParameters:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 originalPixelBuffer:(struct __CVBuffer *)arg3 processedPixelBuffer:(struct __CVBuffer *)arg4 completionHandler:(id)arg5 ;


@end


#endif