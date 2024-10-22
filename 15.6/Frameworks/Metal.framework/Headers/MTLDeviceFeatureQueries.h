// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLDEVICEFEATUREQUERIES_H
#define MTLDEVICEFEATUREQUERIES_H


#import <Foundation/Foundation.h>


@interface MTLDeviceFeatureQueries : NSObject

@property (readonly, nonatomic) BOOL supports2DLinearTexArraySPI;
@property (readonly, nonatomic) BOOL supports32BitFloatFiltering;
@property (readonly, nonatomic) BOOL supports32BitMSAA;
@property (readonly, nonatomic) BOOL supports32bpcMSAATextures;
@property (readonly, nonatomic) BOOL supports3DASTCTextures;
@property (readonly, nonatomic) BOOL supports3DBCTextures;
@property (readonly, nonatomic) BOOL supportsASTCHDRTextureCompression;
@property (readonly, nonatomic) BOOL supportsASTCTextureCompression;
@property (readonly, nonatomic) BOOL supportsAlphaYUVFormats;
@property (readonly, nonatomic) BOOL supportsAnisoSampleFix;
@property (readonly, nonatomic) BOOL supportsArgumentBuffersTier2;
@property (readonly, nonatomic) BOOL supportsArrayOfSamplers;
@property (readonly, nonatomic) BOOL supportsArrayOfTextures;
@property (readonly, nonatomic) BOOL supportsAtomicUlongVoidMinMax;
@property (readonly, nonatomic) BOOL supportsBCTextureCompression;
@property (readonly, nonatomic) BOOL supportsBaseVertexInstanceDrawing;
@property (readonly, nonatomic) BOOL supportsBfloat16Format;
@property (readonly, nonatomic) BOOL supportsBinaryArchives;
@property (readonly, nonatomic) BOOL supportsBinaryLibraries;
@property (readonly, nonatomic) BOOL supportsBlackOrWhiteSamplerBorderColors;
@property (readonly, nonatomic) BOOL supportsBufferBoundsChecking;
@property (readonly, nonatomic) BOOL supportsBufferPrefetchStatistics;
@property (readonly, nonatomic) BOOL supportsBufferWithIOSurface;
@property (readonly, nonatomic) BOOL supportsBufferlessClientStorageTexture;
@property (readonly, nonatomic) BOOL supportsCMPIndirectCommandBuffers;
@property (readonly, nonatomic) BOOL supportsCombinedMSAAStoreAndResolveAction;
@property (readonly, nonatomic) BOOL supportsCommandBufferJump;
@property (readonly, nonatomic) BOOL supportsCompressedTextureViewSPI;
@property (readonly, nonatomic) BOOL supportsComputeCompressedTextureWrite;
@property (readonly, nonatomic) BOOL supportsComputeMemoryBarrier;
@property (readonly, nonatomic) BOOL supportsConcurrentComputeDispatch;
@property (readonly, nonatomic) BOOL supportsCountingOcclusionQuery;
@property (readonly, nonatomic) BOOL supportsCustomBorderColor;
@property (readonly, nonatomic) BOOL supportsDepthClipMode;
@property (readonly, nonatomic) BOOL supportsDepthClipModeClampExtended;
@property (readonly, nonatomic) BOOL supportsDevicePartitioning;
@property (readonly, nonatomic) BOOL supportsDynamicControlPointCount;
@property (readonly, nonatomic) BOOL supportsDynamicLibraries;
@property (readonly, nonatomic) BOOL supportsExtendedXR10Formats;
@property (readonly, nonatomic) BOOL supportsExtendedYUVFormats;
@property (readonly, nonatomic) BOOL supportsFP32TessFactors;
@property (readonly, nonatomic) BOOL supportsFastMathInfNaNPropagation;
@property (readonly, nonatomic) BOOL supportsFixedLinePointFillDepthGradient;
@property (readonly, nonatomic) BOOL supportsFloat16BCubicFiltering;
@property (readonly, nonatomic) BOOL supportsFloat16InfNanFiltering;
@property (readonly, nonatomic) BOOL supportsForceSeamsOnCubemaps;
@property (readonly, nonatomic) BOOL supportsForkJoin;
@property (readonly, nonatomic) BOOL supportsFragmentBufferWrites;
@property (readonly, nonatomic) BOOL supportsFragmentOnlyEncoders;
@property (readonly, nonatomic) BOOL supportsFunctionPointers;
@property (readonly, nonatomic) BOOL supportsFunctionPointersFromRender;
@property (readonly, nonatomic) BOOL supportsGFXIndirectCommandBuffers;
@property (readonly, nonatomic) BOOL supportsGPUStatistics;
@property (readonly, nonatomic) BOOL supportsGlobalVariableRelocation;
@property (readonly, nonatomic) BOOL supportsGlobalVariableRelocationCompute;
@property (readonly, nonatomic) BOOL supportsGlobalVariableRelocationRender;
@property (readonly, nonatomic) BOOL supportsIABHashForTools;
@property (readonly, nonatomic) BOOL supportsImageBlockSampleCoverageControl;
@property (readonly, nonatomic) BOOL supportsImageBlocks;
@property (readonly, nonatomic) BOOL supportsIndirectDrawAndDispatch;
@property (readonly, nonatomic) BOOL supportsIndirectStageInRegion;
@property (readonly, nonatomic) BOOL supportsIndirectTessellation;
@property (readonly, nonatomic) BOOL supportsIndirectTextures;
@property (readonly, nonatomic) BOOL supportsIndirectWritableTextures;
@property (readonly, nonatomic) BOOL supportsInt64;
@property (readonly, nonatomic) BOOL supportsInterchangeTiled;
@property (readonly, nonatomic) BOOL supportsInvariantVertexPosition;
@property (readonly, nonatomic) BOOL supportsLargeFramebufferConfigs;
@property (readonly, nonatomic) BOOL supportsLateEvalEvent;
@property (readonly, nonatomic) BOOL supportsLayeredRendering;
@property (readonly, nonatomic) BOOL supportsLimitedYUVFormats;
@property (readonly, nonatomic) BOOL supportsLinearTexture2DArray;
@property (readonly, nonatomic) BOOL supportsLinearTextureFromSharedBuffer;
@property (readonly, nonatomic) BOOL supportsLossyCompression;
@property (readonly, nonatomic) BOOL supportsMSAADepthResolve;
@property (readonly, nonatomic) BOOL supportsMSAADepthResolveFilter;
@property (readonly, nonatomic) BOOL supportsMSAAStencilResolve;
@property (readonly, nonatomic) BOOL supportsMSAAStencilResolveFilter;
@property (readonly, nonatomic) BOOL supportsMemoryOrderAtomics;
@property (readonly, nonatomic) BOOL supportsMemorylessRenderTargets;
@property (readonly, nonatomic) BOOL supportsMipLevelsSmallerThanBlockSize;
@property (readonly, nonatomic) BOOL supportsMirrorClampToEdgeSamplerMode;
@property (readonly, nonatomic) BOOL supportsMutableTier1ArgumentBuffers;
@property (readonly, nonatomic) BOOL supportsNativeHardwareFP16;
@property (readonly, nonatomic) BOOL supportsNonPrivateDepthStencilTextures;
@property (readonly, nonatomic) BOOL supportsNonPrivateMSAATextures;
@property (readonly, nonatomic) BOOL supportsNonSquareTileShaders;
@property (readonly, nonatomic) BOOL supportsNonUniformThreadgroupSize;
@property (readonly, nonatomic) BOOL supportsNonZeroTextureWriteLOD;
@property (readonly, nonatomic) BOOL supportsNorm16BCubicFiltering;
@property (readonly, nonatomic) BOOL supportsOpenCLTextureWriteSwizzles;
@property (readonly, nonatomic) BOOL supportsPacked32TextureBufferWrites;
@property (readonly, nonatomic) BOOL supportsPipelineLibraries;
@property (readonly, nonatomic) BOOL supportsPlacementHeaps;
@property (readonly, nonatomic) BOOL supportsPostDepthCoverage;
@property (readonly, nonatomic) BOOL supportsPrimitiveMotionBlur;
@property (readonly, nonatomic) BOOL supportsPrimitiveRestartOverride;
@property (readonly, nonatomic) BOOL supportsProgrammableBlending;
@property (readonly, nonatomic) BOOL supportsProgrammableSamplePositions;
@property (readonly, nonatomic) BOOL supportsPublicXR10Formats;
@property (readonly, nonatomic) BOOL supportsPullModelInterpolation;
@property (readonly, nonatomic) BOOL supportsQuadGroup;
@property (readonly, nonatomic) BOOL supportsQuadReduction;
@property (readonly, nonatomic) BOOL supportsQuadShufflesAndBroadcast;
@property (readonly, nonatomic) BOOL supportsQueryTextureLOD;
@property (readonly, nonatomic) BOOL supportsRGBA10A2Gamma;
@property (readonly, nonatomic) BOOL supportsRTZRounding;
@property (readonly, nonatomic) BOOL supportsRasterOrderGroups;
@property (readonly, nonatomic) BOOL supportsRasterOrderGroupsColorAttachment;
@property (readonly, nonatomic) BOOL supportsRaytracingFromRender;
@property (readonly, nonatomic) BOOL supportsReadWriteBufferArguments;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureArguments;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureArgumentsTier2;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureCubeArguments;
@property (readonly, nonatomic) BOOL supportsRelaxedTextureViewRequirements;
@property (readonly, nonatomic) BOOL supportsRenderDynamicLibraries;
@property (readonly, nonatomic) BOOL supportsRenderMemoryBarrier;
@property (readonly, nonatomic) BOOL supportsRenderPassWithoutRenderTarget;
@property (readonly, nonatomic) BOOL supportsRenderTargetTextureRotation;
@property (readonly, nonatomic) BOOL supportsRenderTextureWrites;
@property (readonly, nonatomic) BOOL supportsRenderToLinearTextures;
@property (readonly, nonatomic) BOOL supportsSIMDGroup;
@property (readonly, nonatomic) BOOL supportsSIMDGroupMatrix;
@property (readonly, nonatomic) BOOL supportsSIMDReduction;
@property (readonly, nonatomic) BOOL supportsSIMDShuffleAndFill;
@property (readonly, nonatomic) BOOL supportsSIMDShufflesAndBroadcast;
@property (readonly, nonatomic) BOOL supportsSRGBwrites;
@property (readonly, nonatomic) BOOL supportsSamplerAddressModeClampToHalfBorder;
@property (readonly, nonatomic) BOOL supportsSamplerCompareFunction;
@property (readonly, nonatomic) BOOL supportsSeparateDepthStencil;
@property (readonly, nonatomic) BOOL supportsSeparateVisibilityAndShadingRate;
@property (readonly, nonatomic) BOOL supportsShaderBarycentricCoordinates;
@property (readonly, nonatomic) BOOL supportsShaderLODAverage;
@property (readonly, nonatomic) BOOL supportsShaderMinLODClamp;
@property (readonly, nonatomic) BOOL supportsSharedFunctionTables;
@property (readonly, nonatomic) BOOL supportsSharedStorageHeapResources;
@property (readonly, nonatomic) BOOL supportsSharedStorageTextures;
@property (readonly, nonatomic) BOOL supportsSharedTextureHandles;
@property (readonly, nonatomic) BOOL supportsSparseDepthAttachments;
@property (readonly, nonatomic) BOOL supportsSparseHeaps;
@property (readonly, nonatomic) BOOL supportsSparseTextures;
@property (readonly, nonatomic) BOOL supportsStackOverflowErrorCode;
@property (readonly, nonatomic) BOOL supportsStatefulDynamicLibraries;
@property (readonly, nonatomic) BOOL supportsStencilFeedback;
@property (readonly, nonatomic) BOOL supportsStreamingCodecSignaling;
@property (readonly, nonatomic) BOOL supportsTLS;
@property (readonly, nonatomic) BOOL supportsTessellation;
@property (readonly, nonatomic) BOOL supportsTexture2DMultisampleArray;
@property (readonly, nonatomic) BOOL supportsTextureCubeArray;
@property (readonly, nonatomic) BOOL supportsTextureOutOfBoundsReads;
@property (readonly, nonatomic) BOOL supportsTextureSwizzle;
@property (readonly, nonatomic) BOOL supportsTileShaders;
@property (readonly, nonatomic) BOOL supportsUnalignedVertexFetch;
@property (readonly, nonatomic) BOOL supportsVariableRateRasterization;
@property (readonly, nonatomic) BOOL supportsVertexAmplification;
@property (readonly, nonatomic) BOOL supportsViewportAndScissorArray;
@property (readonly, nonatomic) BOOL supportsWritableArrayOfTextures;
@property (readonly, nonatomic) BOOL supportsYCBCRFormats;
@property (readonly, nonatomic) BOOL supportsYCBCRFormats12;
@property (readonly, nonatomic) BOOL supportsYCBCRFormatsPQ;
@property (readonly, nonatomic) BOOL supportsYCBCRFormatsXR;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormats12;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormatsPQ;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormatsXR;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif