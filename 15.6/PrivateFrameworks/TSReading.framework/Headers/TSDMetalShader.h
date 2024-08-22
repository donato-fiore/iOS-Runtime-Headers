// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMETALSHADER_H
#define TSDMETALSHADER_H

@class NSString, MTLRenderPipelineReflection;
@protocol MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface TSDMetalShader : NSObject {
    NSInteger _vertexUniformsIndex;
    NSUInteger _vertexUniformsSize;
    NSInteger _fragmentUniformsIndex;
    NSUInteger _fragmentUniformsSize;
}


@property (readonly, nonatomic) NSUInteger bufferIndex; // ivar: _bufferIndex
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) MTLRenderPipelineReflection *pipelineReflectionObject; // ivar: _pipelineReflectionObject
@property (readonly, nonatomic) NSObject<MTLRenderPipelineState> *pipelineState; // ivar: _pipelineState


-(NSInteger)p_indexOfUniformsFromMetalArguments:(id)arg0 size:(*NSUInteger)arg1 bufferIndex:(*NSUInteger)arg2 ;
-(id)description;
-(id)initCustomShaderWithVertexShader:(id)arg0 fragmentShader:(id)arg1 device:(id)arg2 library:(id)arg3 colorAttachment:(id)arg4 ;
-(id)initCustomShaderWithVertexShader:(id)arg0 fragmentShader:(id)arg1 device:(id)arg2 library:(id)arg3 colorAttachment:(id)arg4 velocityAttachment:(id)arg5 ;
-(id)initDefaultBlendShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 velocityAttachment:(id)arg2 motionBlur:(BOOL)arg3 ;
-(id)initDefaultBloomShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 ;
-(id)initDefaultGaussianBlurShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 halfSizedRadius:(BOOL)arg2 ;
-(id)initDefaultNeighborMaxBlurShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 ;
-(id)initDefaultShaderWithVertexShader:(id)arg0 fragmentShader:(id)arg1 device:(id)arg2 colorAttachment:(id)arg3 ;
-(id)initDefaultSingleDirectionMotionBlurShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 ;
-(id)initDefaultTextureAndOpacityMotionBlurShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 velocityAttachment:(id)arg2 motionBlur:(BOOL)arg3 ;
-(id)initDefaultTextureAndOpacityShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 ;
-(id)initDefaultTextureMotionBlurShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 velocityAttachment:(id)arg2 ;
-(id)initDefaultTextureShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 ;
-(id)initDefaultTileMaxBlurShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 ;
-(id)initDefaultVelocityCollectionShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 ;
-(id)initDefaultVelocityVisualizerShaderWithDevice:(id)arg0 colorAttachment:(id)arg1 ;
-(id)initQuadMotionBlurTextureShaderWithFragmentShader:(id)arg0 device:(id)arg1 library:(id)arg2 colorAttachment:(id)arg3 velocityAttachment:(id)arg4 ;
-(id)initQuadTextureShaderWithFragmentShader:(id)arg0 device:(id)arg1 library:(id)arg2 colorAttachment:(id)arg3 ;
-(id)initQuadTextureShaderWithFragmentShader:(id)arg0 device:(id)arg1 library:(id)arg2 colorAttachment:(id)arg3 velocityAttachment:(id)arg4 ;
-(id)initWithDefaultVertexShader:(id)arg0 fragmentShader:(id)arg1 device:(id)arg2 colorAttachment:(id)arg3 velocityAttachment:(id)arg4 label:(id)arg5 setupUniforms:(BOOL)arg6 ;
-(id)p_createPipelineStateWithRenderPipelineDescriptor:(id)arg0 device:(id)arg1 setupUniforms:(BOOL)arg2 ;
-(void)p_setDefaultVertexUniforms;
-(void)p_setupPipelineStateWithVertexFunction:(id)arg0 fragmentShader:(id)arg1 device:(id)arg2 library:(id)arg3 colorAttachment:(id)arg4 velocityAttachment:(id)arg5 setupUniforms:(BOOL)arg6 ;
-(void)p_setupPipelineStateWithVertexShader:(id)arg0 fragmentShader:(id)arg1 device:(id)arg2 library:(id)arg3 colorAttachment:(id)arg4 velocityAttachment:(id)arg5 setupUniforms:(BOOL)arg6 ;


@end


#endif