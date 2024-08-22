// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVAPORTRAITVIDEOPIPELINE_IMPL_H
#define CVAPORTRAITVIDEOPIPELINE_IMPL_H

@class NSDictionary, NSString;
@protocol CVADisparityPostprocessingVideoPipeline, CVAMattingVideoPipeline, CVAPortraitVideoPipeline, OS_dispatch_queue, CVAVideoPipelinePropertiesSPI, MTLTexture, CVAVideoPipelineProperties;

#import <Foundation/Foundation.h>

#import "VideoMattingMetal.h"
#import "VideoRelightingMetal.h"
#import "CVAFilterAlphaBlend.h"

@interface CVAPortraitVideoPipeline_Impl : NSObject <CVADisparityPostprocessingVideoPipeline, CVAMattingVideoPipeline, CVAPortraitVideoPipeline>

 {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<CVAVideoPipelinePropertiesSPI> *_properties;
    BOOL _treatFixedPointDisparityAsDense;
    BOOL _useSixteenBitPrecisionForDenseStereoDisparityConversion;
    float _disparityOffset;
    *__CVBuffer _untransformedCanonicalDisparityPixelBuffer;
    *__CVPixelBufferPool _canonicalDisparityPixelBufferPool;
    VideoPostprocessingParams _vmPostprocessingParams;
    VideoMattingStaticParams _vmStaticParams;
    VideoMattingDynamicParams _vmDynamicParams;
    DynamicMetaParams _vmDynamicMetaParams;
    Preferences _preferences;
    unique_ptr<DisparityConversion, std::default_delete<DisparityConversion>> _disparityConversion;
    unique_ptr<GeometricTransformation, std::default_delete<GeometricTransformation>> _disparityGeometricTransformation;
    unique_ptr<FocusStatsPostprocessing, std::default_delete<FocusStatsPostprocessing>> _focusStatsPostprocessing;
    unique_ptr<DisparityAutofocus, std::default_delete<DisparityAutofocus>> _disparityAutofocus;
    unique_ptr<DisparityStatistics, std::default_delete<DisparityStatistics>> _disparityStatistics;
    unique_ptr<cva::FocusStateMachine, std::default_delete<cva::FocusStateMachine>> _focusStateMachine;
    unique_ptr<StageLightStateMachine, std::default_delete<StageLightStateMachine>> _stageLightStateMachine;
    unique_ptr<SdofStateMachine, std::default_delete<SdofStateMachine>> _sdofIntensityStateMachine;
    VideoMattingMetal *_vmAccelerator;
    VideoRelightingMetal *_vrAccelerator;
    CVAFilterAlphaBlend *_filterAlphaBlend;
    RetainPtr<__CVBuffer *> _intermediateRelightSourceBuffer;
    RetainPtr<__CVBuffer *> _intermediateTransitionBufferFrom;
    RetainPtr<__CVBuffer *> _intermediateTransitionBufferTo;
    NSDictionary *_faceKitProcessOutput;
    float _portraitStyleStrength;
    TransitionData _transitionData;
    float _referenceLensPosition_um;
    CVAPhotoMetalContext _metalContext;
    int _debugGPUCaptureFrameNumber;
    BOOL _debugLogTransition;
    BOOL _debugLogTransitionPrintTrivial01;
    id<MTLTexture> *_yuvSourceDownsampledAlias;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<CVAVideoPipelineProperties> *videoPipelineProperties;


+(int)pixelBufferPoolCreateWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 pool:(struct __CVPixelBufferPool **)arg3 ;
+(void)drawDisparity:(struct __CVBuffer *)arg0 onColor:(struct __CVBuffer *)arg1 canonical:(BOOL)arg2 rawShiftInvalidThreshold:(int)arg3 focusMachineState:(int)arg4 offsetX:(NSUInteger)arg5 offsetY:(NSUInteger)arg6 ;
-(BOOL)validateDisparityPostprocessingRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateMattingRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)validatePortraitRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateSegmentationPixelBuffer:(struct __CVBuffer *)arg0 matchFormat:(id)arg1 error:(*id)arg2 ;
-(id)initWithProperties:(id)arg0 error:(*id)arg1 ;
// -(id)internal_extractMatteWithRequest:(id)arg0 disparityPostprocessingResult:(id)arg1 usePostprocessedDisparity:(BOOL)arg2 dilateForegroundMask:(BOOL)arg3 gravity:(struct CVAVector )arg4 transitionData:(struct TransitionData *)arg5 mattingCompletionHandler:(id)arg6 isFinalStage:(unk)arg7 status:(BOOL)arg8  ;
// -(id)internal_postprocessDisparityWithRequest:(id)arg0 disparityPostprocessingCompletionHandler:(id)arg1 isFinalStage:(unk)arg2 status:(BOOL)arg3  ;
-(int)extractMatteWithRequest:(id)arg0 ;
// -(int)extractMatteWithRequest:(id)arg0 disparityPostprocessingCompletionHandler:(id)arg1 mattingCompletionHandler:(unk)arg2  ;
-(int)internal_fixFocusPositionWithDisparityPostprocessingRequest:(id)arg0 ;
-(int)postprocessDisparityWithRequest:(id)arg0 ;
-(int)postprocessDisparityWithRequest:(id)arg0 disparityPostprocessingCompletionHandler:(id)arg1 ;
// -(int)renderSingleEffectWithRequest:(id)arg0 destinationColorPixelBuffer:(struct __CVBuffer *)arg1 error:(*id)arg2 disparityPostprocessingCompletionHandler:(id)arg3 mattingCompletionHandler:(unk)arg4 portraitCompletionHandler:(id)arg5 requestFrom:(unk)arg6 requestTo:(id)arg7  ;
-(int)renderWithRequest:(id)arg0 ;
// -(int)renderWithRequest:(id)arg0 disparityPostprocessingCompletionHandler:(id)arg1 mattingCompletionHandler:(unk)arg2 portraitCompletionHandler:(id)arg3  ;
// -(int)renderWithRequest:(id)arg0 requestTo:(id)arg1 mixValue:(float)arg2 destinationColorPixelBuffer:(struct __CVBuffer *)arg3 error:(*id)arg4 disparityPostprocessingCompletionHandler:(id)arg5 mattingCompletionHandler:(unk)arg6 portraitCompletionHandler:(id)arg7  ;
-(void)dealloc;
// -(void)internal_relightWithRequest:(id)arg0 intermediateSourceBuffer:(struct __CVBuffer *)arg1 faceKitProcessOutput:(id)arg2 portraitStyleStrength:(float)arg3 mattingResult:(id)arg4 singleCubeData:(id)arg5 portraitCompletionHandler:(id)arg6 timestamp:(unk)arg7 status:(NSInteger)arg8  ;
// -(void)internal_renderStageLightWithRequest:(id)arg0 mattingResult:(id)arg1 portraitCompletionHandler:(id)arg2 status:(unk)arg3  ;
// -(void)internal_renderWithRequest:(id)arg0 dstBuffer:(struct __CVBuffer *)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(id)arg3 status:(unk)arg4 timestamp:(*int)arg5  ;


@end


#endif