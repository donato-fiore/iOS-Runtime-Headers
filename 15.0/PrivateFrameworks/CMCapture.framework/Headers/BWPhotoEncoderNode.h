// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPHOTOENCODERNODE_H
#define BWPHOTOENCODERNODE_H

@class NSDictionary, NSArray, NSString;
@protocol BWInferenceFormatProvider, OS_dispatch_queue, OS_dispatch_group;


#import "BWNode.h"
#import "FigCapturePixelConverter.h"
#import "BWCMPhotoCompressionSession.h"
#import "BWDNGCompressionSession.h"
#import "BWInferenceEngine.h"

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
    NSUInteger _heifThumbnailMaxPixelSize;
    float _heifQualityOverride;
    BOOL _heifForceEmbedThumb;
    BOOL _heifForceCABAC;
    BOOL _heifForceHEVC;
    BOOL _heifUseTiling;
    int _heifTileWidth;
    int _heifTileHeight;
    NSInteger _prewarmedSettingsID;
    BOOL _allowHEIFPrewarming;
    BOOL _prewarmingOngoing;
    NSArray *_alwaysEncodedSemanticSegmentationMatteURNs;
    NSDictionary *_attachedMediaConfigurationByAttachedMediaKey;
    *void _prewarmQueueID;
    BWInferenceEngine *_inferenceEngine;
    BOOL _preparedInferenceEngine;
    uint8_t _opportunisticInferenceCompleted;
    BOOL _alwaysAwaitInference;
    *opaqueCMFormatDescription _inferenceInputFormatDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct CGRect )_cropRectForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 metadata:(id)arg1 ;
+(void)_updateMetadataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 cropRect:(struct CGRect )arg1 ;
+(void)initialize;
-(?)_generatePreviewForSampleBuffer:(?)arg0 requestedStillImageCaptureSettings:(?)arg1 cropRectpreviewPixelBuffer;
-(?)_scaleInputPixelBuffer:(?)arg0 toDimensions:(?)arg1 colorSpaceProperties:(?)arg2 cropRect:(?)arg3 pixelConverter:(?)arg4 poolCapacitythumbnailPixelBuffer;
-(BOOL)_addDepthForEncodingScheme:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(BOOL)_addGainMapForEncodingScheme:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 outputWidth:(unsigned int)arg2 outputHeight:(unsigned int)arg3 ;
-(BOOL)_addPortraitEffectsMatteForEncodingScheme:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 primaryOutputAspectRatio:(CGFloat)arg2 ;
-(BOOL)_isSupportedThumbnailCodecType:(unsigned int)arg0 forEncodingScheme:(int)arg1 ;
-(BOOL)cameraSupportsFlash;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(BOOL)usesHighEncodingPriority;
-(BOOL)zeroShutterLagEnabled;
-(id)_arrayInColumnMajorOrderFrom3x3MatrixData:(struct ? )arg0 ;
-(id)_arrayInColumnMajorOrderFrom3x4MatrixData:(struct ? )arg0 ;
-(id)_compressionSessionForEncodingScheme:(int)arg0 ;
-(id)_depthEncodingOptionsFromDepthMetadata:(id)arg0 pixelFormat:(unsigned int)arg1 ;
-(id)_encodingOptionsForAuxiliaryImageWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelBufferAttributes:(id)arg2 ;
-(id)_newMetadataAttachmentsForEncodingScheme:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 requestedSettings:(id)arg2 captureType:(int)arg3 ;
-(id)_newRawMetadataAttachmentsForEncodingScheme:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 dngDictionary:(id)arg2 requestedSettings:(id)arg3 captureType:(int)arg4 dngContainsDepthData:(BOOL)arg5 dngContainsSemanticSegmentationMattes:(BOOL)arg6 ;
-(id)_thumbnailOptionsForImageWithMetadata:(id)arg0 requestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 cropRect:(struct CGRect )arg3 codecType:(unsigned int)arg4 maxPixelSize:(NSUInteger)arg5 ;
-(id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg0 ;
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
-(int)_addCompressedThumbnailForEncodingScheme:(int)arg0 thumbnailSurface:(struct __IOSurface *)arg1 thumbnailSurfaceSize:(NSUInteger)arg2 ;
-(int)_addMetadataAttachmentsForEncodingScheme:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 requestedSettings:(id)arg2 captureType:(int)arg3 ;
-(int)_addSemanticMatteToCompressionSession:(id)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachedMediaKey:(id)arg2 auxImageType:(int)arg3 primaryOutputAspectRatio:(CGFloat)arg4 sourceCropRectKey:(id)arg5 ;
-(int)_addThumbnailForEncodingScheme:(int)arg0 thumbnailPixelBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(struct CGRect )arg5 codecType:(unsigned int)arg6 maxPixelSize:(NSUInteger)arg7 ;
-(int)_addValue:(id)arg0 toAuxiliaryImageProperties:(struct CGImageMetadata *)arg1 namespace:(struct __CFString *)arg2 prefix:(struct __CFString *)arg3 key:(struct __CFString *)arg4 ;
-(int)_containerFormatForEncodingScheme:(int)arg0 ;
-(int)_defaultJPEGIndexedQTableForPixelBuffer:(struct __CVBuffer *)arg0 metadata:(id)arg1 captureType:(int)arg2 quantizationTableIndexOut:(*int)arg3 isHighGainImageOut:(*BOOL)arg4 ;
-(int)_encodeDNGForEncodingScheme:(int)arg0 rawSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 dngDictionary:(id)arg2 requestedSettings:(id)arg3 captureType:(int)arg4 cropRect:(struct CGRect )arg5 dngContainsDepthData:(BOOL)arg6 dngContainsSemanticSegmentationMattes:(BOOL)arg7 ;
-(int)_encodePhotoForEncodingScheme:(int)arg0 pixelBuffer:(struct __CVBuffer *)arg1 imageDimensions:(struct ? )arg2 metadata:(id)arg3 thumbnailOptions:(id)arg4 requestedStillImageCaptureSettings:(id)arg5 resolvedStillImageCaptureSettings:(id)arg6 cropRect:(struct CGRect )arg7 usePixelsOutsideCrop:(BOOL)arg8 ;
-(int)_fileTypeForEncodingScheme:(int)arg0 ;
-(int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned int)arg0 sourceWidth:(int)arg1 sourceHeight:(int)arg2 destinationPixelFormat:(unsigned int)arg3 ;
-(int)_resolveEncodingSchemeForCompressedPhotoWithLinDNGWithRequestedSettings:(id)arg0 ;
-(int)_resolveEncodingSchemeForRequestedSettings:(id)arg0 ;
-(struct CGImageMetadata *)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg0 ;
-(struct CGImageMetadata *)_newAuxiliaryImagePropertiesFromGainMapSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(struct CGImageMetadata *)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg0 ;
-(struct CGImageMetadata *)_newAuxiliaryImagePropertiesFromSemanticMatteSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(struct __IOSurface *)_closeContainerAndCopySurfaceForEncodingScheme:(int)arg0 ;
-(unsigned int)_codecTypeForEncodingScheme:(int)arg0 ;
-(void)_addAuxImagesIfNeededForEncodingScheme:(int)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2 stillImageSettings:(id)arg3 processingFlags:(unsigned int)arg4 embedThumbToCompressedImage:(BOOL)arg5 ;
-(void)_addQualityOptionsToDictionary:(id)arg0 codecType:(unsigned int)arg1 pixelBuffer:(struct __CVBuffer *)arg2 imageDimensions:(struct ? )arg3 metadata:(id)arg4 requestedStillImageCaptureSettings:(id)arg5 resolvedStillImageCaptureSettings:(id)arg6 enableHEIFTiling:(BOOL)arg7 enableHEIFOrientation:(BOOL)arg8 ;
-(void)_addSemanticMattesForEncodingScheme:(int)arg0 semanticSegmentationMatteURNs:(id)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 primaryOutputAspectRatio:(CGFloat)arg3 settingsID:(NSInteger)arg4 ;
-(void)_closeContainerForEncodingScheme:(int)arg0 ;
-(void)_getAssetsSizeForEncodingScheme:(int)arg0 containerSizeOut:(*NSUInteger)arg1 thumbnailSizeOut:(*NSUInteger)arg2 auxiliaryImagesSizeOut:(*NSUInteger)arg3 ;
-(void)_performInferenceWithBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_removeNonPropagatedAttachedMediaFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
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