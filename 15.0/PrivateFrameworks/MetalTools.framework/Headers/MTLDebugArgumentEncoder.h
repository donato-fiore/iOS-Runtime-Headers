// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGARGUMENTENCODER_H
#define MTLDEBUGARGUMENTENCODER_H

@protocol MTLBuffer;


#import "MTLToolsArgumentEncoder.h"

@interface MTLDebugArgumentEncoder : MTLToolsArgumentEncoder {
    id<MTLBuffer> *_currentBuffer;
    NSUInteger _currentOffset;
    *void _reflectionParser;
}




-(*void)constantDataAtIndex:(NSUInteger)arg0 ;
-(id)initWithBaseObject:(id)arg0 structType:(id)arg1 parent:(id)arg2 ;
-(id)newArgumentEncoderForBufferAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setAccelerationStructure:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setArgumentBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setArgumentBuffer:(id)arg0 startOffset:(NSUInteger)arg1 arrayElement:(NSUInteger)arg2 ;
-(void)setArgumentBuffer:(id)arg0 startOffset:(NSUInteger)arg1 elementIndex:(NSUInteger)arg2 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setComputePipelineState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setComputePipelineStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFunctionPointer:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFunctionPointers:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setIndirectCommandBuffer:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setIndirectCommandBuffers:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTable:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setRenderPipelineState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setRenderPipelineStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withRange:(struct _NSRange )arg1 ;


@end


#endif