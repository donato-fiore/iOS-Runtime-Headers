// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMTLRENDERPIPELINE_H
#define SCNMTLRENDERPIPELINE_H

@class NSArray, MTLVertexDescriptor;
@protocol MTLFunction, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface SCNMTLRenderPipeline : NSObject {
    ? _sceneBuffer;
    ? _program;
    ? _pass;
    ? _renderPassDesc;
    unsigned int _buffersUsageMask;
    unsigned int _texturesUsageMask;
    unsigned int _samplersUsageMask;
}


@property (retain, nonatomic) NSObject<MTLFunction> *fragmentFunction; // ivar: _fragmentFunction
@property (copy, nonatomic) NSArray *frameBufferBindings; // ivar: _frameBufferBindings
@property (copy, nonatomic) NSArray *lightBufferBindings; // ivar: _lightBufferBindings
@property (copy, nonatomic) NSArray *nodeBufferBindings; // ivar: _nodeBufferBindings
@property (copy, nonatomic) NSArray *passBufferBindings; // ivar: _passBufferBindings
@property (copy, nonatomic) NSArray *shadableBufferBindings; // ivar: _shadableBufferBindings
@property (retain, nonatomic) NSObject<MTLRenderPipelineState> *state; // ivar: _state
@property (readonly, nonatomic) unsigned int vertexBuffersUsageMask;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor; // ivar: _vertexDescriptor
@property (retain, nonatomic) NSObject<MTLFunction> *vertexFunction; // ivar: _vertexFunction


-(BOOL)matchesRenderPassDescriptor:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_computeUsageForArguments:(id)arg0 function:(id)arg1 ;
-(void)dealloc;


@end


#endif