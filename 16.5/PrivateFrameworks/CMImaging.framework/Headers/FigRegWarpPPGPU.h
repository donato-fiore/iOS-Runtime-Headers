// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGREGWARPPPGPU_H
#define FIGREGWARPPPGPU_H

@class MPSImageHistogram, MPSImageHistogramEqualization, NSString;
@protocol CMIRegWarp;

#import <Foundation/Foundation.h>

#import "FigMetalContext.h"
#import "FigRegWarpPPGPUShaders.h"
#import "FigMetalAllocator.h"

@interface FigRegWarpPPGPU : NSObject <CMIRegWarp>

 {
    FigMetalContext *_metal;
    FigRegWarpPPGPUShaders *_shaders;
    ? _pyramidLevelsDim;
    id<MTLTexture>" _referencePyramidImage;
    id<MTLTexture>" _nonReferencePyramidImage;
    id<MTLBuffer>" _referencePyramidCorners;
    id<MTLBuffer>" _nonReferencePyramidCorners;
    ? _roi;
    ? _pyramidLevelsRoi;
    ? _normCoefs;
    float _inlierThreshold;
    ? _referenceGDCParams;
    ? _nonReferenceGDCParams;
    ? _mpsHistCfg;
    MPSImageHistogram *_mpsHist;
    MPSImageHistogramEqualization *_mpsHistEq;
    ? _cornerMatchingParams;
    unsigned int _numPyrLevels;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    BOOL _skipInitialDownsample;
    BOOL _performHistEq;
    BOOL _allocateBuffersWithAllocator;
    BOOL _isShaderHarvesting;
}


@property (retain, nonatomic) FigMetalAllocator *allocator;
@property (nonatomic) BOOL applyGDC; // ivar: _applyGDC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(int)prewarmShaders:(id)arg0 ;
-(id)_newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 label:(id)arg2 ;
-(id)initWithOptionalCommandQueue:(id)arg0 config:(struct ? *)arg1 ;
-(int)_constructPyramid:(*id)arg0 withTexture:(id)arg1 mapping:(struct ? *)arg2 level0Only:(BOOL)arg3 ;
-(int)_convertTransform:(struct ? )arg0 toGPUTransform:(struct ? *)arg1 ;
-(int)_detectCorners:(id)arg0 roi:(struct ? )arg1 corners:(id)arg2 pyrLevel:(unsigned int)arg3 ;
-(int)_setDefaultCornerMatchingParams;
-(int)_setNormCoefs:(struct ? *)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 ;
-(int)_updatePyramidRoi;
-(int)_verifyInputPixelFormat:(NSUInteger)arg0 ;
-(int)allocateResources:(unsigned int)arg0 imageHeight:(unsigned int)arg1 imageFormat:(unsigned int)arg2 externalMemory:(*void)arg3 externalMemorySize:(unsigned int)arg4 ;
-(int)allocateResourcesWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 ;
-(int)processNonReference:(struct __CVBuffer *)arg0 gdcParams:(struct ? *)arg1 outputTransform:(struct ? *)arg2 ;
-(int)processNonReference:(struct __CVBuffer *)arg0 outputTransform:(struct ? *)arg1 ;
-(int)processNonReferenceTexture:(id)arg0 gdcParams:(struct ? *)arg1 outputTransform:(struct ? *)arg2 ;
-(int)processNonReferenceTexture:(id)arg0 gdcParams:(struct ? *)arg1 outputTransform:(struct ? *)arg2 mapping:(struct ? *)arg3 ;
-(int)processNonReferenceTexture:(id)arg0 outputTransform:(struct ? *)arg1 ;
-(int)processReference:(struct __CVBuffer *)arg0 gdcParams:(struct ? *)arg1 regionOfInterest:(struct CGRect *)arg2 numKeypoints:(*unsigned int)arg3 ;
-(int)processReference:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGRect *)arg1 numKeypoints:(*unsigned int)arg2 ;
-(int)processReferenceTexture:(id)arg0 gdcParams:(struct ? *)arg1 regionOfInterest:(struct CGRect *)arg2 numKeypoints:(*unsigned int)arg3 ;
-(int)processReferenceTexture:(id)arg0 gdcParams:(struct ? *)arg1 regionOfInterest:(struct CGRect *)arg2 numKeypoints:(*unsigned int)arg3 mapping:(struct ? *)arg4 ;
-(int)processReferenceTexture:(id)arg0 regionOfInterest:(struct CGRect *)arg1 numKeypoints:(*unsigned int)arg2 ;
-(void)_releaseBuffer:(*id)arg0 ;
-(void)dealloc;
-(void)releaseResources;


@end


#endif