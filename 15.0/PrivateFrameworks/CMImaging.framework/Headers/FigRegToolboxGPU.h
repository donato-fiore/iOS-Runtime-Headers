// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGREGTOOLBOXGPU_H
#define FIGREGTOOLBOXGPU_H

@protocol MTLComputePipelineState, MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>

#import "FigMetalContext.h"

@interface FigRegToolboxGPU : NSObject {
    FigMetalContext *_metalContext;
    BOOL _resourcesAvailable;
    unsigned int _numPyrLevels;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    ? _nccParmsFixed;
    unsigned int _searchArea;
    unsigned int _gridWidth;
    unsigned int _gridHeight;
    unsigned int _gridNumCells;
    ? _pyramidLevelsDim;
    id<MTLComputePipelineState> *_pplnDownscale2to1;
    id<MTLComputePipelineState> *_pplnDownscale2to1WithMapping;
    ? _infoDownscale2to1;
    id<MTLComputePipelineState> *_pplnSimple3x3BoxFilter;
    ? _infoSimple3x3BoxFilter;
    id<MTLComputePipelineState> *_pplnCornerResponse;
    ? _infoCornerResponse;
    id<MTLComputePipelineState> *_pplnCornerDetectionFirstPass4x4;
    ? _infoCornerDetectionFirstPass4x4;
    id<MTLComputePipelineState> *_pplnCornerDetectionFinalPass;
    ? _infoCornerDetectionFinalPass;
    id<MTLComputePipelineState>" _pplnNccMatch;
    ? _infoNccMatch;
    id<MTLComputePipelineState> *_pplnRigidSolver;
    id<MTLComputePipelineState> *_pplnAffineSolver;
    id<MTLComputePipelineState> *_pplnHomographySolver;
    id<MTLComputePipelineState> *_pplnWarpImage;
    ? _infoWarpImage;
    id<MTLComputePipelineState> *_pplnSpecialImageConverterA;
    id<MTLTexture> *_referenceImage;
    BOOL _referenceImagePixelMappingFlag;
    float _referenceImagePixelHistCoef;
    unsigned char _referenceImagePixelMapping;
    id<MTLTexture>" _pyramid1Image;
    id<MTLTexture>" _pyramid2Image;
    id<MTLTexture> *_pyramid1Initial;
    id<MTLTexture> *_pyramid1CornerResponse;
    id<MTLBuffer> *_pyramid1Corners;
    id<MTLTexture> *_cornerDetectIntermediateTexture;
    id<MTLBuffer> *_pyramid2Corners;
    id<MTLBuffer> *_nccWorkStorage;
    id<MTLBuffer> *_internalTransformResults;
    id<MTLBuffer> *_internalSolverElemList;
}




-(id)init;
-(id)initWithCommandQueue:(id)arg0 ;
-(int)allocateResources:(unsigned int)arg0 imageWidth:(unsigned int)arg1 imageHeight:(unsigned int)arg2 gridWidth:(unsigned int)arg3 gridHeight:(unsigned int)arg4 templateRadius:(unsigned int)arg5 searchRadius:(unsigned int)arg6 minNCCThreshold:(float)arg7 ;
-(int)allocateResourcesSimple:(unsigned int)arg0 imageHeight:(unsigned int)arg1 numberOfCorners:(*unsigned int)arg2 ;
-(int)computeTransform:(id)arg0 transform:(struct ? *)arg1 outputCorners:(struct ? *)arg2 solverSelector:(int)arg3 histogram:(struct ? *)arg4 roi:(struct CGRect *)arg5 ;
-(int)computeTransformInternal:(id)arg0 solverKernel:(id)arg1 solverOutputResults:(id)arg2 histogram:(struct ? *)arg3 roi:(struct CGRect *)arg4 waitForCompletion:(BOOL)arg5 ;
-(int)processReferenceImage:(id)arg0 histogram:(struct ? *)arg1 doWaitForIdle:(BOOL)arg2 ;
-(int)releaseResources;
-(int)specialImageConverterA:(struct __CVBuffer *)arg0 outTexture1:(struct __CVBuffer *)arg1 outTexture2:(struct __CVBuffer *)arg2 outTexture3:(struct __CVBuffer *)arg3 doWaitForIdle:(BOOL)arg4 ;
-(int)warpTargetImage:(id)arg0 outTexChma:(id)arg1 inTexLuma:(id)arg2 inTexChma:(id)arg3 solverSelector:(int)arg4 histogram:(struct ? *)arg5 roi:(struct CGRect *)arg6 doWaitForIdle:(BOOL)arg7 ;
-(void)dealloc;


@end


#endif