// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEORELIGHTINGMETAL_H
#define VIDEORELIGHTINGMETAL_H

@class MTLRenderPassDescriptor, NSData, CIColor;
@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLCommandQueue, CVAVideoPipelinePropertiesSPI, MTLRenderPipelineState, MTLTexture, MTLDepthStencilState, MTLComputePipelineState, OS_dispatch_queue, OS_dispatch_semaphore, MTLBuffer;


#import "ImageSaverAndFileConfigRegistrator.h"
#import "CVAPhotoMTLRingBuffer.h"
#import "CVAFilterColorAlphaToFgBg.h"
#import "CVAFilterMaskedVariableBlur.h"

@interface VideoRelightingMetal : ImageSaverAndFileConfigRegistrator {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    id<MTLCommandQueue> *_commandQueue;
    *void _metalContext;
    id<CVAVideoPipelinePropertiesSPI> *_properties;
    MTLRenderPassDescriptor *_tcRenderDesc;
    id<MTLRenderPipelineState> *_tcKernel;
    id<MTLTexture> *_tcDepthTexture;
    id<MTLTexture> *_tcTexture;
    id<MTLTexture> *_lightTexture;
    TC_MatrixUniforms _tcMatrixUniformsBuffer;
    id<MTLDepthStencilState> *_depthStencilState;
    id<MTLComputePipelineState> *_kernel_CountVertical;
    id<MTLComputePipelineState> *_kernel_Count;
    id<MTLComputePipelineState> *_kernel_Slide;
    id<MTLComputePipelineState>"]] _kernel_Relight;
    id<MTLComputePipelineState> *_kernel_AlphaBlendRGBATextureArray;
    id<MTLTexture> *_texStub;
    NSData *_colorCubeUserData;
    id<MTLTexture> *_texColorCubeUserData;
    id<MTLTexture>" _texColorCubeStaticArray;
    id<MTLTexture> *_texSelectedColorCube;
    id<MTLTexture> *_srcTexture;
    id<MTLTexture> *_dstTexture;
    id<MTLTexture> *_dstUVTexture;
    NSInteger _frameIndex;
    NSInteger _frameIndexWhenFacekitAllowed;
    id<MTLTexture> *_alphaTexture;
    BOOL _trustAlpha;
    id<MTLTexture> *_vertCountTexture;
    id<MTLTexture> *_countTexture;
    id<MTLTexture> *_slideTexture;
    id<MTLTexture>" _rgbTransformMapContourNearTexture;
    id<MTLTexture>" _rgbTransformMapStudioNearTexture;
    id<MTLTexture>" _rgbTransformMapContourFarTexture;
    id<MTLTexture>" _rgbTransformMapStudioFarTexture;
    id<MTLTexture> *_rgbTransformMapCurrentNearTexturePtr;
    id<MTLTexture> *_rgbTransformMapCurrentFarTexturePtr;
    id<MTLTexture> *_rgbTransformMapCurrentTextureInterpolated;
    id<MTLTexture> *_rgbTransformMapTextureSelectedPtr;
    float _lightMapsNearFarLerp;
    SlideUniforms _uniformBuffer_slide;
    RelightUniforms _uniformBuffer_relight;
    float4x4 _modelViewProjectionMatrix;
    float4x4 _modelViewMatrix;
    float4x4 _projectionMatrix;
    ? _face3DCenter;
    ? _faceModelCenterProjected;
    CIColor *_backgroundColor;
    float _proxyToFaceEffectLerpTemporal;
    float _proxyToFaceEffectLerpFinal;
    float _portraitStyleStrength;
    float _focusDistance;
    NSObject<OS_dispatch_queue> *_synchronousRelightingCallbackQueue;
    NSObject<OS_dispatch_semaphore> *_inflightSemaphore;
    MTLRenderPassDescriptor *_faceRenderDesc1;
    MTLRenderPassDescriptor *_faceRenderDesc2;
    MTLRenderPassDescriptor *_faceRenderDesc3;
    id<MTLRenderPipelineState> *_kernel_Face;
    id<MTLTexture> *_facemaskRegionTexture;
    vector<FaceVertex, std::allocator<FaceVertex>> _modelVertices;
    CVAPhotoMTLRingBuffer *_vertexBuffer;
    FaceKitStreamedData _faceKitStreamedData;
    BOOL _faceDetected;
    BOOL _faceDetectedReal;
    circular_buffer<bool, std::allocator<bool>> _faceDetectedRealHistory;
    optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>> _faceConfidenceRollingVariance;
    optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>> _faceRelightingAngleFactorsRollingMean;
    vector<unsigned short, std::allocator<unsigned short>> _faceKitMeshTris;
    id<MTLBuffer> *_indexBufferImmutable;
    NSData *_faceKitMeshTexcoords;
    BOOL _debugFace;
    BOOL _debugFaceDraw;
    NSUInteger _indexOfCheekLandmark_topLeft;
    NSUInteger _indexOfCheekLandmark_bottomLeft;
    NSUInteger _indexOfCheekLandmark_topRight;
    NSUInteger _indexOfCheekLandmark_bottomRight;
    optional<unsigned long> _closestLeftCheekVertexID;
    optional<float> _cheekAngle;
    CVAFilterColorAlphaToFgBg *_colorAlphaToFgBg;
    CVAFilterMaskedVariableBlur *_blurPyramidForSkinFg;
    id<MTLTexture> *_texSkinRGBAPyramid;
    id<MTLTexture> *_texSkinSegmentationAlias;
    float _vignettingScale;
}


@property (readonly) CGFloat gpuEndTime; // ivar: _gpuEndTime
@property (readonly) CGFloat gpuStartTime; // ivar: _gpuStartTime
@property (readonly) float relightingStability; // ivar: _relightingStability


-(id)create3DTextureWithSize:(NSUInteger)arg0 ;
-(id)getInternalColorCube:(int)arg0 ;
-(id)initWithMetalContext:(*void)arg0 ;
-(id)loadCube:(id)arg0 ;
-(void)configureRenderPipeline;
-(void)createTexturesWith:(NSUInteger)arg0 imgHeight:(NSUInteger)arg1 ;
-(void)encodeAlphaBlendRGBATextureArrayToCommandBuffer:(id)arg0 inTexFirst:(id)arg1 inTexSecond:(id)arg2 outTex:(id)arg3 alpha:(*float)arg4 ;
-(void)encodeCountKernelToCommandBuffer:(id)arg0 ;
-(void)encodeLerpNearFarMapsToCommandBuffer:(id)arg0 ;
-(void)encodeRelightKernelToCommandBuffer:(id)arg0 ;
-(void)encodeSlideKernelToCommandBuffer:(id)arg0 ;
-(void)encodeTCKernelToCommandBuffer:(id)arg0 ;
-(void)encodeVertCountKernelToCommandBuffer:(id)arg0 ;
-(void)generateModelNormals;
-(void)initCommon;
-(void)initKernelFunctions;
-(void)loadRGBTransformMapsForEffectVersion:(BOOL)arg0 ;
-(void)loadRGBTransformMapsOnceTo:(*id)arg0 namePrefix:(*void)arg1 forIntermediateResults:(BOOL)arg2 ;
-(void)renderWithSrcImage:(struct __CVBuffer *)arg0 srcAlpha:(struct __CVBuffer *)arg1 trustAlpha:(BOOL)arg2 yuvSourceDownsampled:(id)arg3 skinSegmentation:(struct __CVBuffer *)arg4 dstImage:(struct __CVBuffer *)arg5 faceKitProcessOutput:(id)arg6 portraitStyleStrength:(float)arg7 colorSim:(id)arg8 disparity:(id)arg9 focusDistance:(float)arg10 singleCubeData:(id)arg11 properties:(id)arg12 callbackQueue:(id)arg13 callback:(id)arg14 ;
-(void)saveTexture:(id)arg0 toImage:(id)arg1 ;
-(void)setModelVertices;
-(void)updateFaceKitStreamedDataFromProcessOutput:(id)arg0 ;
-(void)updateMatrixWithWidth:(int)arg0 height:(int)arg1 camera:(*void)arg2 pose:(*void)arg3 ;
-(void)updateModelAndPose:(*void)arg0 camera:(*void)arg1 ;
-(void)updateUniforms:(BOOL)arg0 ;


@end


#endif