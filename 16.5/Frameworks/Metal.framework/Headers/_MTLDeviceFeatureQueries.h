// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLDEVICEFEATUREQUERIES_H
#define _MTLDEVICEFEATUREQUERIES_H

@protocol MTLDeviceSPI;


#import "MTLDeviceFeatureQueries.h"

@interface _MTLDeviceFeatureQueries : MTLDeviceFeatureQueries {
    ? _featureInfo;
    BOOL isAGX;
    id<MTLDeviceSPI> *_device;
}




-(BOOL)familySupports2DLinearTexArraySPI;
-(BOOL)familySupports32BitFloatFiltering;
-(BOOL)familySupports32BitMSAA;
-(BOOL)familySupports32bpcMSAATextures;
-(BOOL)familySupports3DASTCTextures;
-(BOOL)familySupports3DBCTextures;
-(BOOL)familySupportsASTCHDRTextureCompression;
-(BOOL)familySupportsASTCTextureCompression;
-(BOOL)familySupportsAlphaYUVFormats;
-(BOOL)familySupportsAnisoSampleFix;
-(BOOL)familySupportsArgumentBuffersTier2;
-(BOOL)familySupportsArrayOfSamplers;
-(BOOL)familySupportsArrayOfTextures;
-(BOOL)familySupportsAtomicUlongVoidMinMax;
-(BOOL)familySupportsBCTextureCompression;
-(BOOL)familySupportsBGR10A2;
-(BOOL)familySupportsBaseVertexInstanceDrawing;
-(BOOL)familySupportsBfloat16Format;
-(BOOL)familySupportsBinaryArchives;
-(BOOL)familySupportsBinaryLibraries;
-(BOOL)familySupportsBlackOrWhiteSamplerBorderColors;
-(BOOL)familySupportsBufferBoundsChecking;
-(BOOL)familySupportsBufferPrefetchStatistics;
-(BOOL)familySupportsBufferWithIOSurface;
-(BOOL)familySupportsBufferlessClientStorageTexture;
-(BOOL)familySupportsCMPIndirectCommandBuffers;
-(BOOL)familySupportsCombinedMSAAStoreAndResolveAction;
-(BOOL)familySupportsCommandBufferJump;
-(BOOL)familySupportsCompressedTextureViewSPI;
-(BOOL)familySupportsComputeCompressedTextureWrite;
-(BOOL)familySupportsComputeMemoryBarrier;
-(BOOL)familySupportsConcurrentComputeDispatch;
-(BOOL)familySupportsCountingOcclusionQuery;
-(BOOL)familySupportsCustomBorderColor;
-(BOOL)familySupportsDeadlineProfile;
-(BOOL)familySupportsDepthClipMode;
-(BOOL)familySupportsDepthClipModeClampExtended;
-(BOOL)familySupportsDevicePartitioning;
-(BOOL)familySupportsDynamicControlPointCount;
-(BOOL)familySupportsDynamicLibraries;
-(BOOL)familySupportsExplicitVisibilityGroups;
-(BOOL)familySupportsExtendedVertexFormats;
-(BOOL)familySupportsExtendedXR10Formats;
-(BOOL)familySupportsExtendedYUVFormats;
-(BOOL)familySupportsFP32TessFactors;
-(BOOL)familySupportsFastMathInfNaNPropagation;
-(BOOL)familySupportsFillTexture;
-(BOOL)familySupportsFixedLinePointFillDepthGradient;
-(BOOL)familySupportsFloat16BCubicFiltering;
-(BOOL)familySupportsFloat16InfNanFiltering;
-(BOOL)familySupportsForceSeamsOnCubemaps;
-(BOOL)familySupportsForkJoin;
-(BOOL)familySupportsFragmentBufferWrites;
-(BOOL)familySupportsFragmentOnlyEncoders;
-(BOOL)familySupportsFunctionPointers;
-(BOOL)familySupportsFunctionPointersFromMesh;
-(BOOL)familySupportsFunctionPointersFromRender;
-(BOOL)familySupportsGFXIndirectCommandBuffers;
-(BOOL)familySupportsGPUStatistics;
-(BOOL)familySupportsGlobalVariableRelocation;
-(BOOL)familySupportsGlobalVariableRelocationCompute;
-(BOOL)familySupportsGlobalVariableRelocationRender;
-(BOOL)familySupportsHeapAccelerationStructureAllocation;
-(BOOL)familySupportsIABHashForTools;
-(BOOL)familySupportsImageBlockSampleCoverageControl;
-(BOOL)familySupportsImageBlocks;
-(BOOL)familySupportsIndirectDrawAndDispatch;
-(BOOL)familySupportsIndirectStageInRegion;
-(BOOL)familySupportsIndirectTessellation;
-(BOOL)familySupportsIndirectTextures;
-(BOOL)familySupportsIndirectWritableTextures;
-(BOOL)familySupportsInt64;
-(BOOL)familySupportsInterchangeTiled;
-(BOOL)familySupportsInvariantVertexPosition;
-(BOOL)familySupportsLargeFramebufferConfigs;
-(BOOL)familySupportsLateEvalEvent;
-(BOOL)familySupportsLayeredRendering;
-(BOOL)familySupportsLimitedYUVFormats;
-(BOOL)familySupportsLinearTexture2DArray;
-(BOOL)familySupportsLinearTextureFromSharedBuffer;
-(BOOL)familySupportsLossyCompression;
-(BOOL)familySupportsMSAADepthResolve;
-(BOOL)familySupportsMSAADepthResolveFilter;
-(BOOL)familySupportsMSAAStencilResolve;
-(BOOL)familySupportsMSAAStencilResolveFilter;
-(BOOL)familySupportsMemoryOrderAtomics;
-(BOOL)familySupportsMemorylessRenderTargets;
-(BOOL)familySupportsMeshShaders;
-(BOOL)familySupportsMeshShadersInICB;
-(BOOL)familySupportsMipLevelsSmallerThanBlockSize;
-(BOOL)familySupportsMirrorClampToEdgeSamplerMode;
-(BOOL)familySupportsMutableTier1ArgumentBuffers;
-(BOOL)familySupportsNativeHardwareFP16;
-(BOOL)familySupportsNonPrivateDepthStencilTextures;
-(BOOL)familySupportsNonPrivateMSAATextures;
-(BOOL)familySupportsNonSquareTileShaders;
-(BOOL)familySupportsNonUniformThreadgroupSize;
-(BOOL)familySupportsNonZeroTextureWriteLOD;
-(BOOL)familySupportsNorm16BCubicFiltering;
-(BOOL)familySupportsOpenCLTextureWriteSwizzles;
-(BOOL)familySupportsPacked32TextureBufferWrites;
-(BOOL)familySupportsPipelineLibraries;
-(BOOL)familySupportsPlacementHeaps;
-(BOOL)familySupportsPostDepthCoverage;
-(BOOL)familySupportsPrimitiveMotionBlur;
-(BOOL)familySupportsPrimitiveRestartOverride;
-(BOOL)familySupportsProgrammableBlending;
-(BOOL)familySupportsProgrammableSamplePositions;
-(BOOL)familySupportsPublicXR10Formats;
-(BOOL)familySupportsPullModelInterpolation;
-(BOOL)familySupportsQuadGroup;
-(BOOL)familySupportsQuadReduction;
-(BOOL)familySupportsQuadShufflesAndBroadcast;
-(BOOL)familySupportsQueryTextureLOD;
-(BOOL)familySupportsRGBA10A2Gamma;
-(BOOL)familySupportsRTZRounding;
-(BOOL)familySupportsRasterOrderGroups;
-(BOOL)familySupportsRasterOrderGroupsColorAttachment;
-(BOOL)familySupportsRayTracingAccelerationStructureCPUDeserialization;
-(BOOL)familySupportsRayTracingBuffersFromTables;
-(BOOL)familySupportsRayTracingExtendedVertexFormats;
-(BOOL)familySupportsRayTracingICBs;
-(BOOL)familySupportsRayTracingPerPrimitiveData;
-(BOOL)familySupportsRaytracingFromRender;
-(BOOL)familySupportsReadWriteBufferArguments;
-(BOOL)familySupportsReadWriteTextureArguments;
-(BOOL)familySupportsReadWriteTextureArgumentsTier2;
-(BOOL)familySupportsReadWriteTextureCubeArguments;
-(BOOL)familySupportsRelaxedTextureViewRequirements;
-(BOOL)familySupportsRenderDynamicLibraries;
-(BOOL)familySupportsRenderMemoryBarrier;
-(BOOL)familySupportsRenderPassWithoutRenderTarget;
-(BOOL)familySupportsRenderTargetTextureRotation;
-(BOOL)familySupportsRenderTextureWrites;
-(BOOL)familySupportsRenderToLinearTextures;
-(BOOL)familySupportsSIMDGroup;
-(BOOL)familySupportsSIMDGroupMatrix;
-(BOOL)familySupportsSIMDReduction;
-(BOOL)familySupportsSIMDShuffleAndFill;
-(BOOL)familySupportsSIMDShufflesAndBroadcast;
-(BOOL)familySupportsSRGBwrites;
-(BOOL)familySupportsSamplerAddressModeClampToHalfBorder;
-(BOOL)familySupportsSamplerCompareFunction;
-(BOOL)familySupportsSeparateDepthStencil;
-(BOOL)familySupportsSeparateVisibilityAndShadingRate;
-(BOOL)familySupportsSetThreadgroupPackingDisabled;
-(BOOL)familySupportsShaderBarycentricCoordinates;
-(BOOL)familySupportsShaderLODAverage;
-(BOOL)familySupportsShaderMinLODClamp;
-(BOOL)familySupportsSharedFunctionTables;
-(BOOL)familySupportsSharedStorageHeapResources;
-(BOOL)familySupportsSharedStorageTextures;
-(BOOL)familySupportsSharedTextureHandles;
-(BOOL)familySupportsSparseDepthAttachments;
-(BOOL)familySupportsSparseHeaps;
-(BOOL)familySupportsSparseTextures;
-(BOOL)familySupportsStackOverflowErrorCode;
-(BOOL)familySupportsStatefulDynamicLibraries;
-(BOOL)familySupportsStencilFeedback;
-(BOOL)familySupportsStreamingCodecSignaling;
-(BOOL)familySupportsTLS;
-(BOOL)familySupportsTessellation;
-(BOOL)familySupportsTexture2DMultisampleArray;
-(BOOL)familySupportsTextureCubeArray;
-(BOOL)familySupportsTextureOutOfBoundsReads;
-(BOOL)familySupportsTextureSwizzle;
-(BOOL)familySupportsTileShaders;
-(BOOL)familySupportsUnalignedVertexFetch;
-(BOOL)familySupportsVariableRateRasterization;
-(BOOL)familySupportsVertexAmplification;
-(BOOL)familySupportsViewportAndScissorArray;
-(BOOL)familySupportsWritableArrayOfTextures;
-(BOOL)familySupportsYCBCRFormats;
-(BOOL)familySupportsYCBCRFormats12;
-(BOOL)familySupportsYCBCRFormatsPQ;
-(BOOL)familySupportsYCBCRFormatsXR;
-(BOOL)familySupportsYCBCRPackedFormats12;
-(BOOL)familySupportsYCBCRPackedFormatsPQ;
-(BOOL)familySupportsYCBCRPackedFormatsXR;
-(BOOL)supportForFeature:(NSInteger)arg0 ;
-(NSInteger)requirementForFeature:(NSInteger)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)nameForFeature:(NSInteger)arg0 ;
-(void)validate;


@end


#endif