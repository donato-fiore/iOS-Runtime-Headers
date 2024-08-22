// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXGUIDEDUPSCALER_H
#define JFXGUIDEDUPSCALER_H

@class MPSImageBilinearScale, MPSImageGaussianBlur;
@protocol MTLDevice, MTLCommandQueue, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "JFXMetalHelpers.h"
#import "JFXGuidedFilter.h"

@interface JFXGuidedUpscaler : NSObject {
    id<MTLDevice> *_device;
    MPSImageBilinearScale *_scaler;
    MPSImageGaussianBlur *_blur;
    *__CVMetalTextureCache _textureCache;
    id<MTLCommandQueue> *_commandQueue;
    JFXMetalHelpers *_helpers;
    JFXGuidedFilter *_guidedFilter;
}


@property (retain, nonatomic) NSObject<MTLTexture> *currentOutputTexture; // ivar: _currentOutputTexture
@property (retain, nonatomic) NSObject<MTLTexture> *oldScaledGuidance; // ivar: _oldScaledGuidance
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *pipelineStateSimilarity; // ivar: _pipelineStateSimilarity
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *pipelineStateSmoothing; // ivar: _pipelineStateSmoothing
@property (retain, nonatomic) NSObject<MTLTexture> *previousOutputTexture; // ivar: _previousOutputTexture
@property (retain, nonatomic) NSObject<MTLTexture> *scaledGuidance; // ivar: _scaledGuidance
@property (nonatomic) BOOL showSimilarity; // ivar: _showSimilarity
@property (retain, nonatomic) NSObject<MTLTexture> *similarity; // ivar: _similarity
@property (nonatomic) float similarityGaussianBlur; // ivar: _similarityGaussianBlur
@property (nonatomic) float temporalSmoothing; // ivar: _temporalSmoothing
@property (nonatomic) float updateRate; // ivar: _updateRate


-(BOOL)initialized;
-(BOOL)scaleImage:(struct __CVBuffer *)arg0 guidanceImage:(struct __CVBuffer *)arg1 destinationImage:(struct __CVBuffer *)arg2 ;
-(id)initWithDiameter:(int)arg0 ;
-(void)dealloc;


@end


#endif