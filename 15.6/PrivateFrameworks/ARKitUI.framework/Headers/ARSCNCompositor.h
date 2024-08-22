// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARSCNCOMPOSITOR_H
#define ARSCNCOMPOSITOR_H

@class SCNTechnique, ARMatteGenerator, ARFrame;
@protocol MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLTexture;

#import <Foundation/Foundation.h>

#import "ARSCNView.h"

@interface ARSCNCompositor : NSObject {
    id<MTLDevice> *_device;
    ARSCNView *_view;
    SCNTechnique *_technique;
    ARMatteGenerator *_matteGenerator;
    id<MTLLibrary> *_mattingLibrary;
    id<MTLRenderPipelineState> *_resampleML;
    id<MTLRenderPipelineState> *_resampleDepthML;
    CGSize _workingResolution;
    float _workingScaleFactor;
    float _mattingScaleFactor;
    BOOL _disableReverseZ;
}


@property (readonly, nonatomic) NSObject<MTLTexture> *alphaTexture; // ivar: _alphaTexture
@property (nonatomic) NSInteger compositorAlgorithm; // ivar: _compositorAlgorithm
@property (retain, nonatomic) ARFrame *currentFrame; // ivar: _currentFrame
@property (nonatomic) NSInteger currentOrientation; // ivar: _currentOrientation
@property (nonatomic) CGSize currentSize; // ivar: _currentSize
@property (nonatomic) CGFloat depthScale; // ivar: _depthScale
@property (nonatomic) NSUInteger dilationRadius; // ivar: _dilationRadius
@property (nonatomic) NSUInteger erosionRadius; // ivar: _erodeRadius
@property (nonatomic) CGFloat filterEpsilon; // ivar: _filterEpsilon
@property (nonatomic) CGFloat filterOffset; // ivar: _filterOffset
@property (nonatomic) CGFloat filterScale; // ivar: _filterScale
@property (nonatomic) NSUInteger foregroundBitMask; // ivar: _foregroundBitMask
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) BOOL showOcclusionGeometry; // ivar: _showOcclusionGeometry
@property (nonatomic) NSUInteger uncertaintyRadius; // ivar: _uncertaintyRadius


+(id)mattingTechniqueDual;
+(id)mattingWithDepthAndDualTechnique;
+(id)techniqueDictionaryWithName:(id)arg0 ;
-(id)initWithView:(id)arg0 mode:(NSInteger)arg1 algorithm:(NSInteger)arg2 ;
-(struct ? )orientedVerticesWithResolution:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)encodeAlphaResampleToCommandBuffer:(id)arg0 resolution:(struct CGSize )arg1 input:(id)arg2 output:(id)arg3 ;
-(void)encodeDepthResampleToCommandBuffer:(id)arg0 resolution:(struct CGSize )arg1 input:(id)arg2 output:(id)arg3 ;
-(void)executeOcclusionDepthStencilCallback:(id)arg0 ;
-(void)executeOverlayMatteCallbackDual:(id)arg0 ;


@end


#endif