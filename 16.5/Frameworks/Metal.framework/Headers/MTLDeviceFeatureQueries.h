// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEVICEFEATUREQUERIES_H
#define MTLDEVICEFEATUREQUERIES_H


#import <Foundation/Foundation.h>


@interface MTLDeviceFeatureQueries : NSObject

@property (readonly, nonatomic) BOOL familySupports2DLinearTexArraySPI; // ivar: _familySupports2DLinearTexArraySPI
@property (readonly, nonatomic) BOOL familySupports32BitFloatFiltering; // ivar: _familySupports32BitFloatFiltering
@property (readonly, nonatomic) BOOL familySupports32BitMSAA; // ivar: _familySupports32BitMSAA
@property (readonly, nonatomic) BOOL familySupports32bpcMSAATextures; // ivar: _familySupports32bpcMSAATextures
@property (readonly, nonatomic) BOOL familySupports3DASTCTextures; // ivar: _familySupports3DASTCTextures
@property (readonly, nonatomic) BOOL familySupports3DBCTextures; // ivar: _familySupports3DBCTextures
@property (readonly, nonatomic) BOOL familySupportsASTCHDRTextureCompression; // ivar: _familySupportsASTCHDRTextureCompression
@property (readonly, nonatomic) BOOL familySupportsASTCTextureCompression; // ivar: _familySupportsASTCTextureCompression
@property (readonly, nonatomic) BOOL familySupportsAlphaYUVFormats; // ivar: _familySupportsAlphaYUVFormats
@property (readonly, nonatomic) BOOL familySupportsAnisoSampleFix; // ivar: _familySupportsAnisoSampleFix
@property (readonly, nonatomic) BOOL familySupportsArgumentBuffersTier2; // ivar: _familySupportsArgumentBuffersTier2
@property (readonly, nonatomic) BOOL familySupportsArrayOfSamplers; // ivar: _familySupportsArrayOfSamplers
@property (readonly, nonatomic) BOOL familySupportsArrayOfTextures; // ivar: _familySupportsArrayOfTextures
@property (readonly, nonatomic) BOOL familySupportsAtomicUlongVoidMinMax; // ivar: _familySupportsAtomicUlongVoidMinMax
@property (readonly, nonatomic) BOOL familySupportsBCTextureCompression; // ivar: _familySupportsBCTextureCompression
@property (readonly, nonatomic) BOOL familySupportsBGR10A2; // ivar: _familySupportsBGR10A2
@property (readonly, nonatomic) BOOL familySupportsBaseVertexInstanceDrawing; // ivar: _familySupportsBaseVertexInstanceDrawing
@property (readonly, nonatomic) BOOL familySupportsBfloat16Format; // ivar: _familySupportsBfloat16Format
@property (readonly, nonatomic) BOOL familySupportsBinaryArchives; // ivar: _familySupportsBinaryArchives
@property (readonly, nonatomic) BOOL familySupportsBinaryLibraries; // ivar: _familySupportsBinaryLibraries
@property (readonly, nonatomic) BOOL familySupportsBlackOrWhiteSamplerBorderColors; // ivar: _familySupportsBlackOrWhiteSamplerBorderColors
@property (readonly, nonatomic) BOOL familySupportsBufferBoundsChecking; // ivar: _familySupportsBufferBoundsChecking
@property (readonly, nonatomic) BOOL familySupportsBufferPrefetchStatistics; // ivar: _familySupportsBufferPrefetchStatistics
@property (readonly, nonatomic) BOOL familySupportsBufferWithIOSurface; // ivar: _familySupportsBufferWithIOSurface
@property (readonly, nonatomic) BOOL familySupportsBufferlessClientStorageTexture; // ivar: _familySupportsBufferlessClientStorageTexture
@property (readonly, nonatomic) BOOL familySupportsCMPIndirectCommandBuffers; // ivar: _familySupportsCMPIndirectCommandBuffers
@property (readonly, nonatomic) BOOL familySupportsCombinedMSAAStoreAndResolveAction; // ivar: _familySupportsCombinedMSAAStoreAndResolveAction
@property (readonly, nonatomic) BOOL familySupportsCommandBufferJump; // ivar: _familySupportsCommandBufferJump
@property (readonly, nonatomic) BOOL familySupportsCompressedTextureViewSPI; // ivar: _familySupportsCompressedTextureViewSPI
@property (readonly, nonatomic) BOOL familySupportsComputeCompressedTextureWrite; // ivar: _familySupportsComputeCompressedTextureWrite
@property (readonly, nonatomic) BOOL familySupportsComputeMemoryBarrier; // ivar: _familySupportsComputeMemoryBarrier
@property (readonly, nonatomic) BOOL familySupportsConcurrentComputeDispatch; // ivar: _familySupportsConcurrentComputeDispatch
@property (readonly, nonatomic) BOOL familySupportsCountingOcclusionQuery; // ivar: _familySupportsCountingOcclusionQuery
@property (readonly, nonatomic) BOOL familySupportsCustomBorderColor; // ivar: _familySupportsCustomBorderColor
@property (readonly, nonatomic) BOOL familySupportsDeadlineProfile; // ivar: _familySupportsDeadlineProfile
@property (readonly, nonatomic) BOOL familySupportsDepthClipMode; // ivar: _familySupportsDepthClipMode
@property (readonly, nonatomic) BOOL familySupportsDepthClipModeClampExtended; // ivar: _familySupportsDepthClipModeClampExtended
@property (readonly, nonatomic) BOOL familySupportsDevicePartitioning; // ivar: _familySupportsDevicePartitioning
@property (readonly, nonatomic) BOOL familySupportsDynamicControlPointCount; // ivar: _familySupportsDynamicControlPointCount
@property (readonly, nonatomic) BOOL familySupportsDynamicLibraries; // ivar: _familySupportsDynamicLibraries
@property (readonly, nonatomic) BOOL familySupportsExplicitVisibilityGroups; // ivar: _familySupportsExplicitVisibilityGroups
@property (readonly, nonatomic) BOOL familySupportsExtendedVertexFormats; // ivar: _familySupportsExtendedVertexFormats
@property (readonly, nonatomic) BOOL familySupportsExtendedXR10Formats; // ivar: _familySupportsExtendedXR10Formats
@property (readonly, nonatomic) BOOL familySupportsExtendedYUVFormats; // ivar: _familySupportsExtendedYUVFormats
@property (readonly, nonatomic) BOOL familySupportsFP32TessFactors; // ivar: _familySupportsFP32TessFactors
@property (readonly, nonatomic) BOOL familySupportsFastMathInfNaNPropagation; // ivar: _familySupportsFastMathInfNaNPropagation
@property (readonly, nonatomic) BOOL familySupportsFillTexture; // ivar: _familySupportsFillTexture
@property (readonly, nonatomic) BOOL familySupportsFixedLinePointFillDepthGradient; // ivar: _familySupportsFixedLinePointFillDepthGradient
@property (readonly, nonatomic) BOOL familySupportsFloat16BCubicFiltering; // ivar: _familySupportsFloat16BCubicFiltering
@property (readonly, nonatomic) BOOL familySupportsFloat16InfNanFiltering; // ivar: _familySupportsFloat16InfNanFiltering
@property (readonly, nonatomic) BOOL familySupportsForceSeamsOnCubemaps; // ivar: _familySupportsForceSeamsOnCubemaps
@property (readonly, nonatomic) BOOL familySupportsForkJoin; // ivar: _familySupportsForkJoin
@property (readonly, nonatomic) BOOL familySupportsFragmentBufferWrites; // ivar: _familySupportsFragmentBufferWrites
@property (readonly, nonatomic) BOOL familySupportsFragmentOnlyEncoders; // ivar: _familySupportsFragmentOnlyEncoders
@property (readonly, nonatomic) BOOL familySupportsFunctionPointers; // ivar: _familySupportsFunctionPointers
@property (readonly, nonatomic) BOOL familySupportsFunctionPointersFromMesh; // ivar: _familySupportsFunctionPointersFromMesh
@property (readonly, nonatomic) BOOL familySupportsFunctionPointersFromRender; // ivar: _familySupportsFunctionPointersFromRender
@property (readonly, nonatomic) BOOL familySupportsGFXIndirectCommandBuffers; // ivar: _familySupportsGFXIndirectCommandBuffers
@property (readonly, nonatomic) BOOL familySupportsGPUStatistics; // ivar: _familySupportsGPUStatistics
@property (readonly, nonatomic) BOOL familySupportsGlobalVariableRelocation; // ivar: _familySupportsGlobalVariableRelocation
@property (readonly, nonatomic) BOOL familySupportsGlobalVariableRelocationCompute; // ivar: _familySupportsGlobalVariableRelocationCompute
@property (readonly, nonatomic) BOOL familySupportsGlobalVariableRelocationRender; // ivar: _familySupportsGlobalVariableRelocationRender
@property (readonly, nonatomic) BOOL familySupportsHeapAccelerationStructureAllocation; // ivar: _familySupportsHeapAccelerationStructureAllocation
@property (readonly, nonatomic) BOOL familySupportsIABHashForTools; // ivar: _familySupportsIABHashForTools
@property (readonly, nonatomic) BOOL familySupportsImageBlockSampleCoverageControl; // ivar: _familySupportsImageBlockSampleCoverageControl
@property (readonly, nonatomic) BOOL familySupportsImageBlocks; // ivar: _familySupportsImageBlocks
@property (readonly, nonatomic) BOOL familySupportsIndirectDrawAndDispatch; // ivar: _familySupportsIndirectDrawAndDispatch
@property (readonly, nonatomic) BOOL familySupportsIndirectStageInRegion; // ivar: _familySupportsIndirectStageInRegion
@property (readonly, nonatomic) BOOL familySupportsIndirectTessellation; // ivar: _familySupportsIndirectTessellation
@property (readonly, nonatomic) BOOL familySupportsIndirectTextures; // ivar: _familySupportsIndirectTextures
@property (readonly, nonatomic) BOOL familySupportsIndirectWritableTextures; // ivar: _familySupportsIndirectWritableTextures
@property (readonly, nonatomic) BOOL familySupportsInt64; // ivar: _familySupportsInt64
@property (readonly, nonatomic) BOOL familySupportsInterchangeTiled; // ivar: _familySupportsInterchangeTiled
@property (readonly, nonatomic) BOOL familySupportsInvariantVertexPosition; // ivar: _familySupportsInvariantVertexPosition
@property (readonly, nonatomic) BOOL familySupportsLargeFramebufferConfigs; // ivar: _familySupportsLargeFramebufferConfigs
@property (readonly, nonatomic) BOOL familySupportsLateEvalEvent; // ivar: _familySupportsLateEvalEvent
@property (readonly, nonatomic) BOOL familySupportsLayeredRendering; // ivar: _familySupportsLayeredRendering
@property (readonly, nonatomic) BOOL familySupportsLimitedYUVFormats; // ivar: _familySupportsLimitedYUVFormats
@property (readonly, nonatomic) BOOL familySupportsLinearTexture2DArray; // ivar: _familySupportsLinearTexture2DArray
@property (readonly, nonatomic) BOOL familySupportsLinearTextureFromSharedBuffer; // ivar: _familySupportsLinearTextureFromSharedBuffer
@property (readonly, nonatomic) BOOL familySupportsLossyCompression; // ivar: _familySupportsLossyCompression
@property (readonly, nonatomic) BOOL familySupportsMSAADepthResolve; // ivar: _familySupportsMSAADepthResolve
@property (readonly, nonatomic) BOOL familySupportsMSAADepthResolveFilter; // ivar: _familySupportsMSAADepthResolveFilter
@property (readonly, nonatomic) BOOL familySupportsMSAAStencilResolve; // ivar: _familySupportsMSAAStencilResolve
@property (readonly, nonatomic) BOOL familySupportsMSAAStencilResolveFilter; // ivar: _familySupportsMSAAStencilResolveFilter
@property (readonly, nonatomic) BOOL familySupportsMemoryOrderAtomics; // ivar: _familySupportsMemoryOrderAtomics
@property (readonly, nonatomic) BOOL familySupportsMemorylessRenderTargets; // ivar: _familySupportsMemorylessRenderTargets
@property (readonly, nonatomic) BOOL familySupportsMeshShaders; // ivar: _familySupportsMeshShaders
@property (readonly, nonatomic) BOOL familySupportsMeshShadersInICB; // ivar: _familySupportsMeshShadersInICB
@property (readonly, nonatomic) BOOL familySupportsMipLevelsSmallerThanBlockSize; // ivar: _familySupportsMipLevelsSmallerThanBlockSize
@property (readonly, nonatomic) BOOL familySupportsMirrorClampToEdgeSamplerMode; // ivar: _familySupportsMirrorClampToEdgeSamplerMode
@property (readonly, nonatomic) BOOL familySupportsMutableTier1ArgumentBuffers; // ivar: _familySupportsMutableTier1ArgumentBuffers
@property (readonly, nonatomic) BOOL familySupportsNativeHardwareFP16; // ivar: _familySupportsNativeHardwareFP16
@property (readonly, nonatomic) BOOL familySupportsNonPrivateDepthStencilTextures; // ivar: _familySupportsNonPrivateDepthStencilTextures
@property (readonly, nonatomic) BOOL familySupportsNonPrivateMSAATextures; // ivar: _familySupportsNonPrivateMSAATextures
@property (readonly, nonatomic) BOOL familySupportsNonSquareTileShaders; // ivar: _familySupportsNonSquareTileShaders
@property (readonly, nonatomic) BOOL familySupportsNonUniformThreadgroupSize; // ivar: _familySupportsNonUniformThreadgroupSize
@property (readonly, nonatomic) BOOL familySupportsNonZeroTextureWriteLOD; // ivar: _familySupportsNonZeroTextureWriteLOD
@property (readonly, nonatomic) BOOL familySupportsNorm16BCubicFiltering; // ivar: _familySupportsNorm16BCubicFiltering
@property (readonly, nonatomic) BOOL familySupportsOpenCLTextureWriteSwizzles; // ivar: _familySupportsOpenCLTextureWriteSwizzles
@property (readonly, nonatomic) BOOL familySupportsPacked32TextureBufferWrites; // ivar: _familySupportsPacked32TextureBufferWrites
@property (readonly, nonatomic) BOOL familySupportsPipelineLibraries; // ivar: _familySupportsPipelineLibraries
@property (readonly, nonatomic) BOOL familySupportsPlacementHeaps; // ivar: _familySupportsPlacementHeaps
@property (readonly, nonatomic) BOOL familySupportsPostDepthCoverage; // ivar: _familySupportsPostDepthCoverage
@property (readonly, nonatomic) BOOL familySupportsPrimitiveMotionBlur; // ivar: _familySupportsPrimitiveMotionBlur
@property (readonly, nonatomic) BOOL familySupportsPrimitiveRestartOverride; // ivar: _familySupportsPrimitiveRestartOverride
@property (readonly, nonatomic) BOOL familySupportsProgrammableBlending; // ivar: _familySupportsProgrammableBlending
@property (readonly, nonatomic) BOOL familySupportsProgrammableSamplePositions; // ivar: _familySupportsProgrammableSamplePositions
@property (readonly, nonatomic) BOOL familySupportsPublicXR10Formats; // ivar: _familySupportsPublicXR10Formats
@property (readonly, nonatomic) BOOL familySupportsPullModelInterpolation; // ivar: _familySupportsPullModelInterpolation
@property (readonly, nonatomic) BOOL familySupportsQuadGroup; // ivar: _familySupportsQuadGroup
@property (readonly, nonatomic) BOOL familySupportsQuadReduction; // ivar: _familySupportsQuadReduction
@property (readonly, nonatomic) BOOL familySupportsQuadShufflesAndBroadcast; // ivar: _familySupportsQuadShufflesAndBroadcast
@property (readonly, nonatomic) BOOL familySupportsQueryTextureLOD; // ivar: _familySupportsQueryTextureLOD
@property (readonly, nonatomic) BOOL familySupportsRGBA10A2Gamma; // ivar: _familySupportsRGBA10A2Gamma
@property (readonly, nonatomic) BOOL familySupportsRTZRounding; // ivar: _familySupportsRTZRounding
@property (readonly, nonatomic) BOOL familySupportsRasterOrderGroups; // ivar: _familySupportsRasterOrderGroups
@property (readonly, nonatomic) BOOL familySupportsRasterOrderGroupsColorAttachment; // ivar: _familySupportsRasterOrderGroupsColorAttachment
@property (readonly, nonatomic) BOOL familySupportsRayTracingAccelerationStructureCPUDeserialization; // ivar: _familySupportsRayTracingAccelerationStructureCPUDeserialization
@property (readonly, nonatomic) BOOL familySupportsRayTracingBuffersFromTables; // ivar: _familySupportsRayTracingBuffersFromTables
@property (readonly, nonatomic) BOOL familySupportsRayTracingExtendedVertexFormats; // ivar: _familySupportsRayTracingExtendedVertexFormats
@property (readonly, nonatomic) BOOL familySupportsRayTracingICBs; // ivar: _familySupportsRayTracingICBs
@property (readonly, nonatomic) BOOL familySupportsRayTracingPerPrimitiveData; // ivar: _familySupportsRayTracingPerPrimitiveData
@property (readonly, nonatomic) BOOL familySupportsRaytracingFromRender; // ivar: _familySupportsRaytracingFromRender
@property (readonly, nonatomic) BOOL familySupportsReadWriteBufferArguments; // ivar: _familySupportsReadWriteBufferArguments
@property (readonly, nonatomic) BOOL familySupportsReadWriteTextureArguments; // ivar: _familySupportsReadWriteTextureArguments
@property (readonly, nonatomic) BOOL familySupportsReadWriteTextureArgumentsTier2; // ivar: _familySupportsReadWriteTextureArgumentsTier2
@property (readonly, nonatomic) BOOL familySupportsReadWriteTextureCubeArguments; // ivar: _familySupportsReadWriteTextureCubeArguments
@property (readonly, nonatomic) BOOL familySupportsRelaxedTextureViewRequirements; // ivar: _familySupportsRelaxedTextureViewRequirements
@property (readonly, nonatomic) BOOL familySupportsRenderDynamicLibraries; // ivar: _familySupportsRenderDynamicLibraries
@property (readonly, nonatomic) BOOL familySupportsRenderMemoryBarrier; // ivar: _familySupportsRenderMemoryBarrier
@property (readonly, nonatomic) BOOL familySupportsRenderPassWithoutRenderTarget; // ivar: _familySupportsRenderPassWithoutRenderTarget
@property (readonly, nonatomic) BOOL familySupportsRenderTargetTextureRotation; // ivar: _familySupportsRenderTargetTextureRotation
@property (readonly, nonatomic) BOOL familySupportsRenderTextureWrites; // ivar: _familySupportsRenderTextureWrites
@property (readonly, nonatomic) BOOL familySupportsRenderToLinearTextures; // ivar: _familySupportsRenderToLinearTextures
@property (readonly, nonatomic) BOOL familySupportsSIMDGroup; // ivar: _familySupportsSIMDGroup
@property (readonly, nonatomic) BOOL familySupportsSIMDGroupMatrix; // ivar: _familySupportsSIMDGroupMatrix
@property (readonly, nonatomic) BOOL familySupportsSIMDReduction; // ivar: _familySupportsSIMDReduction
@property (readonly, nonatomic) BOOL familySupportsSIMDShuffleAndFill; // ivar: _familySupportsSIMDShuffleAndFill
@property (readonly, nonatomic) BOOL familySupportsSIMDShufflesAndBroadcast; // ivar: _familySupportsSIMDShufflesAndBroadcast
@property (readonly, nonatomic) BOOL familySupportsSRGBwrites; // ivar: _familySupportsSRGBwrites
@property (readonly, nonatomic) BOOL familySupportsSamplerAddressModeClampToHalfBorder; // ivar: _familySupportsSamplerAddressModeClampToHalfBorder
@property (readonly, nonatomic) BOOL familySupportsSamplerCompareFunction; // ivar: _familySupportsSamplerCompareFunction
@property (readonly, nonatomic) BOOL familySupportsSeparateDepthStencil; // ivar: _familySupportsSeparateDepthStencil
@property (readonly, nonatomic) BOOL familySupportsSeparateVisibilityAndShadingRate; // ivar: _familySupportsSeparateVisibilityAndShadingRate
@property (readonly, nonatomic) BOOL familySupportsSetThreadgroupPackingDisabled; // ivar: _familySupportsSetThreadgroupPackingDisabled
@property (readonly, nonatomic) BOOL familySupportsShaderBarycentricCoordinates; // ivar: _familySupportsShaderBarycentricCoordinates
@property (readonly, nonatomic) BOOL familySupportsShaderLODAverage; // ivar: _familySupportsShaderLODAverage
@property (readonly, nonatomic) BOOL familySupportsShaderMinLODClamp; // ivar: _familySupportsShaderMinLODClamp
@property (readonly, nonatomic) BOOL familySupportsSharedFunctionTables; // ivar: _familySupportsSharedFunctionTables
@property (readonly, nonatomic) BOOL familySupportsSharedStorageHeapResources; // ivar: _familySupportsSharedStorageHeapResources
@property (readonly, nonatomic) BOOL familySupportsSharedStorageTextures; // ivar: _familySupportsSharedStorageTextures
@property (readonly, nonatomic) BOOL familySupportsSharedTextureHandles; // ivar: _familySupportsSharedTextureHandles
@property (readonly, nonatomic) BOOL familySupportsSparseDepthAttachments; // ivar: _familySupportsSparseDepthAttachments
@property (readonly, nonatomic) BOOL familySupportsSparseHeaps; // ivar: _familySupportsSparseHeaps
@property (readonly, nonatomic) BOOL familySupportsSparseTextures; // ivar: _familySupportsSparseTextures
@property (readonly, nonatomic) BOOL familySupportsStackOverflowErrorCode; // ivar: _familySupportsStackOverflowErrorCode
@property (readonly, nonatomic) BOOL familySupportsStatefulDynamicLibraries; // ivar: _familySupportsStatefulDynamicLibraries
@property (readonly, nonatomic) BOOL familySupportsStencilFeedback; // ivar: _familySupportsStencilFeedback
@property (readonly, nonatomic) BOOL familySupportsStreamingCodecSignaling; // ivar: _familySupportsStreamingCodecSignaling
@property (readonly, nonatomic) BOOL familySupportsTLS; // ivar: _familySupportsTLS
@property (readonly, nonatomic) BOOL familySupportsTessellation; // ivar: _familySupportsTessellation
@property (readonly, nonatomic) BOOL familySupportsTexture2DMultisampleArray; // ivar: _familySupportsTexture2DMultisampleArray
@property (readonly, nonatomic) BOOL familySupportsTextureCubeArray; // ivar: _familySupportsTextureCubeArray
@property (readonly, nonatomic) BOOL familySupportsTextureOutOfBoundsReads; // ivar: _familySupportsTextureOutOfBoundsReads
@property (readonly, nonatomic) BOOL familySupportsTextureSwizzle; // ivar: _familySupportsTextureSwizzle
@property (readonly, nonatomic) BOOL familySupportsTileShaders; // ivar: _familySupportsTileShaders
@property (readonly, nonatomic) BOOL familySupportsUnalignedVertexFetch; // ivar: _familySupportsUnalignedVertexFetch
@property (readonly, nonatomic) BOOL familySupportsVariableRateRasterization; // ivar: _familySupportsVariableRateRasterization
@property (readonly, nonatomic) BOOL familySupportsVertexAmplification; // ivar: _familySupportsVertexAmplification
@property (readonly, nonatomic) BOOL familySupportsViewportAndScissorArray; // ivar: _familySupportsViewportAndScissorArray
@property (readonly, nonatomic) BOOL familySupportsWritableArrayOfTextures; // ivar: _familySupportsWritableArrayOfTextures
@property (readonly, nonatomic) BOOL familySupportsYCBCRFormats; // ivar: _familySupportsYCBCRFormats
@property (readonly, nonatomic) BOOL familySupportsYCBCRFormats12; // ivar: _familySupportsYCBCRFormats12
@property (readonly, nonatomic) BOOL familySupportsYCBCRFormatsPQ; // ivar: _familySupportsYCBCRFormatsPQ
@property (readonly, nonatomic) BOOL familySupportsYCBCRFormatsXR; // ivar: _familySupportsYCBCRFormatsXR
@property (readonly, nonatomic) BOOL familySupportsYCBCRPackedFormats12; // ivar: _familySupportsYCBCRPackedFormats12
@property (readonly, nonatomic) BOOL familySupportsYCBCRPackedFormatsPQ; // ivar: _familySupportsYCBCRPackedFormatsPQ
@property (readonly, nonatomic) BOOL familySupportsYCBCRPackedFormatsXR; // ivar: _familySupportsYCBCRPackedFormatsXR


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
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
-(BOOL)supportsBGR10A2;
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
-(BOOL)supportsDeadlineProfile;
-(BOOL)supportsDepthClipMode;
-(BOOL)supportsDepthClipModeClampExtended;
-(BOOL)supportsDevicePartitioning;
-(BOOL)supportsDynamicControlPointCount;
-(BOOL)supportsDynamicLibraries;
-(BOOL)supportsExplicitVisibilityGroups;
-(BOOL)supportsExtendedVertexFormats;
-(BOOL)supportsExtendedXR10Formats;
-(BOOL)supportsExtendedYUVFormats;
-(BOOL)supportsFP32TessFactors;
-(BOOL)supportsFastMathInfNaNPropagation;
-(BOOL)supportsFillTexture;
-(BOOL)supportsFixedLinePointFillDepthGradient;
-(BOOL)supportsFloat16BCubicFiltering;
-(BOOL)supportsFloat16InfNanFiltering;
-(BOOL)supportsForceSeamsOnCubemaps;
-(BOOL)supportsForkJoin;
-(BOOL)supportsFragmentBufferWrites;
-(BOOL)supportsFragmentOnlyEncoders;
-(BOOL)supportsFunctionPointers;
-(BOOL)supportsFunctionPointersFromMesh;
-(BOOL)supportsFunctionPointersFromRender;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(BOOL)supportsGPUStatistics;
-(BOOL)supportsGlobalVariableRelocation;
-(BOOL)supportsGlobalVariableRelocationCompute;
-(BOOL)supportsGlobalVariableRelocationRender;
-(BOOL)supportsHeapAccelerationStructureAllocation;
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
-(BOOL)supportsMeshShaders;
-(BOOL)supportsMeshShadersInICB;
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
-(BOOL)supportsRayTracingAccelerationStructureCPUDeserialization;
-(BOOL)supportsRayTracingBuffersFromTables;
-(BOOL)supportsRayTracingExtendedVertexFormats;
-(BOOL)supportsRayTracingICBs;
-(BOOL)supportsRayTracingPerPrimitiveData;
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
-(BOOL)supportsSetThreadgroupPackingDisabled;
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
-(id)initWithDevice:(id)arg0 ;


@end


#endif