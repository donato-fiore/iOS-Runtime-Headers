// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIBREATHINGPETALRINGMETALRENDERER_H
#define FIUIBREATHINGPETALRINGMETALRENDERER_H

@class MTKView, NSString;
@protocol MTKViewDelegate, MTLDevice, MTLCommandQueue, MTLBuffer, MTLTexture, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface FIUIBreathingPetalRingMetalRenderer : NSObject <MTKViewDelegate>

 {
    MTKView *_mtkView;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    ? _uniforms;
    ? _vertexData;
    ? _projectionMatrix;
    id<MTLBuffer> *_indexBuffer;
    id<MTLTexture> *_circleGradient;
    id<MTLRenderPipelineState> *_renderPipeline;
    ? _ringCenterVector;
    NSInteger _petalColor;
    NSInteger _numberOfPetals;
    BOOL _showBlurTrails;
}


@property (nonatomic) ? circleProperties; // ivar: _circleProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfVisiblePetals; // ivar: _numberOfVisiblePetals
@property (nonatomic) CGPoint ringCenter; // ivar: _ringCenter
@property (nonatomic) float ringRadius; // ivar: _ringRadius
@property (copy, nonatomic) id *stateUpdateBlock; // ivar: _stateUpdateBlock
@property (readonly) Class superclass;


-(CGFloat)_maxPetalRingRadius;
-(id)initWithMetalKitView:(id)arg0 petalColor:(NSInteger)arg1 numberOfPetals:(NSInteger)arg2 showBlurTrails:(BOOL)arg3 ;
-(void)_clearCirclesInRange:(struct _NSRange )arg0 ;
-(void)_createBuffers;
-(void)_loadTextures;
-(void)_setCircleAtIndex:(NSInteger)arg0 center:(struct CGPoint )arg1 radius:(float)arg2 blurriness:(float)arg3 alpha:(float)arg4 ;
-(void)_setupIndexes;
-(void)_setupProjectionMatrixForSize:(struct CGSize )arg0 ;
-(void)_setupRenderPipeline;
-(void)_setupVertices;
-(void)_updateVertices;
-(void)drawInMTKView:(id)arg0 ;
-(void)importDataFromPetalRingMetalRenderer:(id)arg0 ;
-(void)mtkView:(id)arg0 drawableSizeWillChange:(struct CGSize )arg1 ;
-(void)setBlurTrailAtIndex:(NSInteger)arg0 center:(struct CGPoint )arg1 radius:(float)arg2 blurriness:(float)arg3 alpha:(float)arg4 ;
-(void)setGradientRotationAngle:(float)arg0 ;
-(void)setPetalAtIndex:(NSInteger)arg0 center:(struct CGPoint )arg1 radius:(float)arg2 alpha:(float)arg3 ;


@end


#endif