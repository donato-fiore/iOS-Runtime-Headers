// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTSYNTHETICLIGHT_H
#define PTSYNTHETICLIGHT_H

@class NSString, NSArray;
@protocol MTLComputePipelineState, MTLCommandQueue, MTLDevice, MTLTexture, OS_dispatch_queue, MTLBuffer;

#import <Foundation/Foundation.h>

#import "PTSegmentationNetwork.h"
#import "PTUtil.h"
#import "PTEffectUtil.h"
#import "PTMSRResize.h"
#import "PTSubjectRelighting.h"
#import "PTFaceAttributesNetwork.h"

@interface PTSyntheticLight : NSObject {
    id<MTLComputePipelineState> *_lightEstimation;
    id<MTLCommandQueue> *_mainCommandQueue;
    id<MTLCommandQueue> *_asyncCommandQueue;
    id<MTLDevice> *_device;
    PTSegmentationNetwork *_segmentationNetwork;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    PTMSRResize *_msrColorPyramid;
    id<MTLTexture> *_skinMaskRGBA;
    PTSyntheticLightConfig _config;
    NSString *_description;
    PTSubjectRelighting *_subjectRelighting;
    NSArray *_faceObservations;
    PTFaceAttributesNetwork *_faceAttributesNetwork;
    BOOL _subjectRelightingRunning;
    NSObject<OS_dispatch_queue> *srlAsyncQueue;
    *__CVBuffer _rgbaPixelBufferCopy;
    id<MTLTexture> *_rgbaTextureCopy;
    id<MTLTexture> *_quarterSizeLumaCopy;
    id<MTLTexture> *_quarterSizeChromaCopy;
    id<MTLBuffer> *_lightEstimationBuffer;
}




+(void)disableAsynchronousWork;
-(id)debugDescription;
-(id)debugTextures;
-(id)faceObservations;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 faceAttributesNetwork:(id)arg4 effectUtil:(id)arg5 util:(id)arg6 msrColorPyramid:(id)arg7 colorSize:(struct ? )arg8 prewarmOnly:(BOOL)arg9 sharedResources:(id)arg10 ;
-(id)lightEstimation;
-(id)srlV2CoeffsBuffer;
-(void)dealloc;
-(void)estimateLightIntensity:(id)arg0 ;
-(void)estimateLightIntensityWithFaceRects:(*id)arg0 inLuma:(id)arg1 inChroma:(id)arg2 focusFaceIndex:(int)arg3 numberOfFaceRects:(struct CGAffineTransform )arg4 transform:(id)arg5 humanDetections;
-(void)interpolateLightIntensity:(id)arg0 ;
-(void)reset;
-(void)updateSubjectRelighting:(struct __CVBuffer *)arg0 inLuma:(id)arg1 inChroma:(id)arg2 inFaceRects:(struct FaceRectsWrapper )arg3 runOnAsyncCommandQueue:(BOOL)arg4 focusFaceIndex:(id)arg5 transform:(struct CGAffineTransform )arg6 ;


@end


#endif