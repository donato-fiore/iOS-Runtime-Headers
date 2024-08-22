// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARMATTEGENERATOR_H
#define ARMATTEGENERATOR_H

@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>

#import "ARDualGuidedFilter.h"

@interface ARMatteGenerator : NSObject {
    id<MTLDevice> *_device;
    ARDualGuidedFilter *_dualGuidedFilter;
    float _depthScale;
    id<MTLLibrary> *_mattingLibrary;
    id<MTLComputePipelineState> *_mattingDual;
    id<MTLComputePipelineState> *_resampleAlpha;
    id<MTLComputePipelineState> *_depthDilation;
    id<MTLTexture> *_overlayCoefficientsFG;
    id<MTLTexture> *_overlayCoefficientsBG;
    id<MTLTexture> *_cameraImageTexture;
    id<MTLTexture> *_alphaTexture;
    id<MTLTexture> *_occluderDepthDilatedTexture;
    id<MTLTexture> *_stencilTexture;
    NSInteger _matteResolution;
    BOOL _enableDoubleMLResolutionMatting;
}


@property (nonatomic) NSUInteger dilationRadius; // ivar: _dilationRadius
@property (nonatomic) NSUInteger erosionRadius; // ivar: _erodeRadius
@property (nonatomic) NSUInteger uncertaintyRadius; // ivar: _uncertaintyRadius


-(id)generateDilatedDepthFromFrame:(id)arg0 commandBuffer:(id)arg1 ;
-(id)generateMatteFromFrame:(id)arg0 commandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg0 matteResolution:(NSInteger)arg1 ;
-(id)initWithDevice:(id)arg0 matteResolution:(NSInteger)arg1 useSmoothing:(BOOL)arg2 ;
-(void)_commonInitWithDevice:(id)arg0 matteResolution:(NSInteger)arg1 useSmoothing:(BOOL)arg2 ;
-(void)encodeCoefficients:(id)arg0 frame:(id)arg1 coefficientsForeground:(id)arg2 coefficientsBackground:(id)arg3 ;
-(void)setupAlphaBufferForFrame:(id)arg0 ;
-(void)setupBuffersForFrame:(id)arg0 ;
-(void)setupDepthBufferForFrame:(id)arg0 ;


@end


#endif