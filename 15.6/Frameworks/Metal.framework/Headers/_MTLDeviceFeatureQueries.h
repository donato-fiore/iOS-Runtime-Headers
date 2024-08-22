// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MTLDEVICEFEATUREQUERIES_H
#define _MTLDEVICEFEATUREQUERIES_H

@protocol MTLDeviceSPI;


#import "MTLDeviceFeatureQueries.h"

@interface _MTLDeviceFeatureQueries : MTLDeviceFeatureQueries {
    ? _featureInfo;
    BOOL isAGX;
    id<MTLDeviceSPI> *_device;
}




-(BOOL)supportForFeature:(NSInteger)arg0 ;
-(BOOL)supports2DLinearTexArraySPI;
-(BOOL)supports32BitFloatFiltering;
-(BOOL)supports32BitMSAA;
-(BOOL)supports32bpcMSAATextures;
-(BOOL)supports3DASTCTextures;
-(BOOL)supports3DBCTextures;
-(BOOL)supportsASTCHDRTextureCompression;
-(BOOL)supportsASTCTextureCompression;
-(BOOL)supportsAlphaYUVFormats;
-(BOOL)supportsAnisoSampleFix;
-(BOOL)supportsArgumentBuffersTier2;
-(BOOL)supportsArrayOfSamplers;
-(BOOL)supportsArrayOfTextures;
-(BOOL)supportsAtomicUlongVoidMinMax;
-(BOOL)supportsBCTextureCompression;
-(BOOL)supportsBaseVertexInstanceDrawing;
-(BOOL)supportsBfloat16Format;
-(BOOL)supportsBinaryArchives;
-(BOOL)supportsBinaryLibraries;
-(BOOL)supportsBlackOrWhiteSamplerBorderColors;
-(BOOL)supportsBufferBoundsChecking;
-(BOOL)supportsBufferPrefetchStatistics;
-(BOOL)supportsBufferWithIOSurface;
-(BOOL)supportsBufferlessClientStorageTexture;
-(BOOL)supportsCMPIndirectCommandBuffers;
-(BOOL)supportsCombinedMSAAStoreAndResolveAction;
-(BOOL)supportsCommandBufferJump;
-(BOOL)supportsCompressedTextureViewSPI;
-(BOOL)supportsComputeCompressedTextureWrite;
-(BOOL)supportsComputeMemoryBarrier;
-(BOOL)supportsConcurrentComputeDispatch;
-(BOOL)supportsCountingOcclusionQuery;
-(BOOL)supportsCustomBorderColor;
-(BOOL)supportsDepthClipMode;
-(BOOL)supportsDepthClipModeClampExtended;
-(BOOL)supportsDevicePartitioning;
-(BOOL)supportsDynamicControlPointCount;
-(BOOL)supportsDynamicLibraries;
-(BOOL)supportsExtendedXR10Formats;
-(BOOL)supportsExtendedYUVFormats;
-(BOOL)supportsFP32TessFactors;
-(BOOL)supportsFastMathInfNaNPropagation;
-(BOOL)supportsFixedLinePointFillDepthGradient;
-(BOOL)supportsFloat16BCubicFiltering;
-(BOOL)supportsFloat16InfNanFiltering;
-(BOOL)supportsForceSeamsOnCubemaps;
-(BOOL)supportsForkJoin;
-(BOOL)supportsFragmentBufferWrites;
-(BOOL)supportsFragmentOnlyEncoders;
-(BOOL)supportsFunctionPointers;
-(BOOL)supportsFunctionPointersFromRender;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(BOOL)supportsGPUStatistics;
-(BOOL)supportsGlobalVariableRelocation;
-(BOOL)supportsGlobalVariableRelocationCompute;
-(BOOL)supportsGlobalVariableRelocationRender;
-(BOOL)supportsIABHashForTools;
-(BOOL)supportsImageBlockSampleCoverageControl;
-(BOOL)supportsImageBlocks;
-(BOOL)supportsIndirectDrawAndDispatch;
-(BOOL)supportsIndirectStageInRegion;
-(BOOL)supportsIndirectTessellation;
-(BOOL)supportsIndirectTextures;
-(BOOL)supportsIndirectWritableTextures;
-(BOOL)supportsInt64;
-(BOOL)supportsInterchangeTiled;
-(BOOL)supportsInvariantVertexPosition;
-(BOOL)supportsLargeFramebufferConfigs;
-(BOOL)supportsLateEvalEvent;
-(BOOL)supportsLayeredRendering;
-(BOOL)supportsLimitedYUVFormats;
-(BOOL)supportsLinearTexture2DArray;
-(BOOL)supportsLinearTextureFromSharedBuffer;
-(BOOL)supportsLossyCompression;
-(BOOL)supportsMSAADepthResolve;
-(BOOL)supportsMSAADepthResolveFilter;
-(BOOL)supportsMSAAStencilResolve;
-(BOOL)supportsMSAAStencilResolveFilter;
-(BOOL)supportsMemoryOrderAtomics;
-(BOOL)supportsMemorylessRenderTargets;
-(BOOL)supportsMipLevelsSmallerThanBlockSize;
-(BOOL)supportsMirrorClampToEdgeSamplerMode;
-(BOOL)supportsMutableTier1ArgumentBuffers;
-(BOOL)supportsNativeHardwareFP16;
-(BOOL)supportsNonPrivateDepthStencilTextures;
-(BOOL)supportsNonPrivateMSAATextures;
-(BOOL)supportsNonSquareTileShaders;
-(BOOL)supportsNonUniformThreadgroupSize;
-(BOOL)supportsNonZeroTextureWriteLOD;
-(BOOL)supportsNorm16BCubicFiltering;
-(BOOL)supportsOpenCLTextureWriteSwizzles;
-(BOOL)supportsPacked32TextureBufferWrites;
-(BOOL)supportsPipelineLibraries;
-(BOOL)supportsPlacementHeaps;
-(BOOL)supportsPostDepthCoverage;
-(BOOL)supportsPrimitiveMotionBlur;
-(BOOL)supportsPrimitiveRestartOverride;
-(BOOL)supportsProgrammableBlending;
-(BOOL)supportsProgrammableSamplePositions;
-(BOOL)supportsPublicXR10Formats;
-(BOOL)supportsPullModelInterpolation;
-(BOOL)supportsQuadGroup;
-(BOOL)supportsQuadReduction;
-(BOOL)supportsQuadShufflesAndBroadcast;
-(BOOL)supportsQueryTextureLOD;
-(BOOL)supportsRGBA10A2Gamma;
-(BOOL)supportsRTZRounding;
-(BOOL)supportsRasterOrderGroups;
-(BOOL)supportsRasterOrderGroupsColorAttachment;
-(BOOL)supportsRaytracingFromRender;
-(BOOL)supportsReadWriteBufferArguments;
-(BOOL)supportsReadWriteTextureArguments;
-(BOOL)supportsReadWriteTextureArgumentsTier2;
-(BOOL)supportsReadWriteTextureCubeArguments;
-(BOOL)supportsRelaxedTextureViewRequirements;
-(BOOL)supportsRenderDynamicLibraries;
-(BOOL)supportsRenderMemoryBarrier;
-(BOOL)supportsRenderPassWithoutRenderTarget;
-(BOOL)supportsRenderTargetTextureRotation;
-(BOOL)supportsRenderTextureWrites;
-(BOOL)supportsRenderToLinearTextures;
-(BOOL)supportsSIMDGroup;
-(BOOL)supportsSIMDGroupMatrix;
-(BOOL)supportsSIMDReduction;
-(BOOL)supportsSIMDShuffleAndFill;
-(BOOL)supportsSIMDShufflesAndBroadcast;
-(BOOL)supportsSRGBwrites;
-(BOOL)supportsSamplerAddressModeClampToHalfBorder;
-(BOOL)supportsSamplerCompareFunction;
-(BOOL)supportsSeparateDepthStencil;
-(BOOL)supportsSeparateVisibilityAndShadingRate;
-(BOOL)supportsShaderBarycentricCoordinates;
-(BOOL)supportsShaderLODAverage;
-(BOOL)supportsShaderMinLODClamp;
-(BOOL)supportsSharedFunctionTables;
-(BOOL)supportsSharedStorageHeapResources;
-(BOOL)supportsSharedStorageTextures;
-(BOOL)supportsSharedTextureHandles;
-(BOOL)supportsSparseDepthAttachments;
-(BOOL)supportsSparseHeaps;
-(BOOL)supportsSparseTextures;
-(BOOL)supportsStackOverflowErrorCode;
-(BOOL)supportsStatefulDynamicLibraries;
-(BOOL)supportsStencilFeedback;
-(BOOL)supportsStreamingCodecSignaling;
-(BOOL)supportsTLS;
-(BOOL)supportsTessellation;
-(BOOL)supportsTexture2DMultisampleArray;
-(BOOL)supportsTextureCubeArray;
-(BOOL)supportsTextureOutOfBoundsReads;
-(BOOL)supportsTextureSwizzle;
-(BOOL)supportsTileShaders;
-(BOOL)supportsUnalignedVertexFetch;
-(BOOL)supportsVariableRateRasterization;
-(BOOL)supportsVertexAmplification;
-(BOOL)supportsViewportAndScissorArray;
-(BOOL)supportsWritableArrayOfTextures;
-(BOOL)supportsYCBCRFormats;
-(BOOL)supportsYCBCRFormats12;
-(BOOL)supportsYCBCRFormatsPQ;
-(BOOL)supportsYCBCRFormatsXR;
-(BOOL)supportsYCBCRPackedFormats12;
-(BOOL)supportsYCBCRPackedFormatsPQ;
-(BOOL)supportsYCBCRPackedFormatsXR;
-(NSInteger)requirementForFeature:(NSInteger)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)nameForFeature:(NSInteger)arg0 ;
-(void)validate;


@end


#endif