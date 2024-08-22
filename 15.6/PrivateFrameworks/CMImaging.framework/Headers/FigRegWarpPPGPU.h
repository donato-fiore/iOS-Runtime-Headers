// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGREGWARPPPGPU_H
#define FIGREGWARPPPGPU_H


#import <Foundation/Foundation.h>

#import "FigMetalContext.h"
#import "FigRegWarpPPGPUShaders.h"

@interface FigRegWarpPPGPU : NSObject {
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
    ? _cornerMatchingParams;
    unsigned int _numPyrLevels;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    BOOL _skipInitialDownsample;
}




-(id)initWithMetalContext:(id)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 skipInitialDownsample:(BOOL)arg3 ;
-(int)_constructPyramid:(*id)arg0 withTexture:(id)arg1 mapping:(struct ? *)arg2 level0Only:(BOOL)arg3 ;
-(int)_convertTransform:(struct ? )arg0 toGPUTransform:(struct ? *)arg1 ;
-(int)_detectCorners:(id)arg0 roi:(struct ? )arg1 corners:(id)arg2 ;
-(int)_setDefaultCornerMatchingParams;
-(int)_setNormCoefs:(struct ? *)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 ;
-(int)_updatePyramidRoi;
-(int)_verifyInputPixelFormat:(NSUInteger)arg0 ;
-(int)allocateResourcesWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 ;
-(int)processNonReference:(id)arg0 outputTransform:(struct ? *)arg1 mapping:(struct ? *)arg2 ;
-(int)processReference:(id)arg0 regionOfInterest:(struct CGRect *)arg1 numKeypoints:(*unsigned int)arg2 mapping:(struct ? *)arg3 ;
-(void)dealloc;


@end


#endif