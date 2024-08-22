// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPHOTOENCODERNODE_H
#define BWPHOTOENCODERNODE_H

@class NSDictionary, NSArray, NSString;
@protocol BWInferenceFormatProvider, OS_dispatch_queue, OS_dispatch_group;


#import "BWNode.h"
#import "FigCapturePixelConverter.h"
#import "BWCMPhotoCompressionSession.h"
#import "BWDNGCompressionSession.h"
#import "BWInferenceEngine.h"
#import "BWInferenceVideoFormat.h"

@interface BWPhotoEncoderNode : BWNode <BWInferenceFormatProvider>

 {
    NSObject<OS_dispatch_queue> *_prewarmQueue;
    NSObject<OS_dispatch_queue> *_previewGenerationQueue;
    NSObject<OS_dispatch_group> *_previewGenerationGroup;
    FigCapturePixelConverter *_previewPixelConverter;
    FigCapturePixelConverter *_thumbnailPixelConverter;
    FigCapturePixelConverter *_clientThumbnailPixelConverter;
    BOOL _cameraSupportsFlash;
    BOOL _zeroShutterLagEnabled;
    BWCMPhotoCompressionSession *_cmPhotoCompressionSession;
    BWDNGCompressionSession *_dngCompressionSession;
    NSUInteger _dngBitDepth;
    NSUInteger _maxThreads;
    FigCapturePixelConverter *_jpegPixelConverter;
    int _portraitRenderQuality;
    NSDictionary *_inputColorInfo;
    BOOL _usesHighEncodingPriority;
    float _heifQualityOverride;
    BOOL _heifForceEmbedThumb;
    BOOL _heifUseTiling;
    int _heifTileWidth;
    int _heifTileHeight;
    NSInteger _prewarmedSettingsID;
    BOOL _allowHEIFPrewarming;
    BOOL _prewarmingOngoing;
    NSArray *_alwaysEncodedSemanticSegmentationMatteURNs;
    NSDictionary *_attachedMediaConfigurationByAttachedMediaKey;
    BWInferenceEngine *_inferenceEngine;
    BOOL _preparedInferenceEngine;
    uint8_t _opportunisticInferenceCompleted;
    NSObject<OS_dispatch_group> *_inferenceGroup;
    BOOL _alwaysAwaitInference;
    BWInferenceVideoFormat *_inferenceInputVideoFormat;
    *opaqueCMFormatDescription _inferenceInputFormatDescription;
    NSDictionary *_adaptiveQualityValueForHEIF;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)cameraSupportsFlash;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(BOOL)usesHighEncodingPriority;
-(BOOL)zeroShutterLagEnabled;
-(id)attachedMediaConfigurationByAttachedMediaKey;
-(id)initWithNodeConfiguration:(id)arg0 semanticDevelopmentVersion:(int)arg1 inferenceScheduler:(id)arg2 alwaysAwaitInference:(BOOL)arg3 portraitRenderQuality:(int)arg4 deferredPhotoProcessorEnabled:(BOOL)arg5 alwaysEncodedSemanticSegmentationMatteURNs:(id)arg6 ;
-(id)inputColorInfo;
-(id)inputFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)outputFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAttachedMediaConfigurationByAttachedMediaKey:(id)arg0 ;
-(void)setCameraSupportsFlash:(BOOL)arg0 ;
-(void)setInputColorInfo:(id)arg0 ;
-(void)setUsesHighEncodingPriority:(BOOL)arg0 ;
-(void)setZeroShutterLagEnabled:(BOOL)arg0 ;


@end


#endif