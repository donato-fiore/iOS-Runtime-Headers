// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRENDERPIPELINEDESCRIPTOR_H
#define MTLRENDERPIPELINEDESCRIPTOR_H

@class NSArray, NSString;
@protocol NSCopying, MTLFunction;

#import <Foundation/Foundation.h>

#import "MTLRenderPipelineColorAttachmentDescriptorArray.h"
#import "MTLPipelineBufferDescriptorArray.h"
#import "MTLLinkedFunctions.h"
#import "MTLVertexDescriptor.h"

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying>



@property (nonatomic, getter=isAlphaToCoverageEnabled) BOOL alphaToCoverageEnabled;
@property (nonatomic, getter=isAlphaToOneEnabled) BOOL alphaToOneEnabled;
@property (copy, nonatomic) NSArray *binaryArchives;
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) NSUInteger depthAttachmentPixelFormat;
@property (readonly) MTLPipelineBufferDescriptorArray *fragmentBuffers;
@property (retain, nonatomic) NSObject<MTLFunction> *fragmentFunction;
@property (copy, nonatomic) MTLLinkedFunctions *fragmentLinkedFunctions;
@property (copy, nonatomic) NSArray *fragmentPreloadedLibraries; // ivar: _fragmentPreloadedLibraries
@property (nonatomic) NSUInteger inputPrimitiveTopology;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) NSUInteger maxFragmentCallStackDepth; // ivar: _maxFragmentCallStackDepth
@property (nonatomic) NSUInteger maxTessellationFactor;
@property (nonatomic) NSUInteger maxVertexAmplificationCount;
@property (nonatomic) NSUInteger maxVertexCallStackDepth; // ivar: _maxVertexCallStackDepth
@property (nonatomic) NSUInteger rasterSampleCount;
@property (nonatomic, getter=isRasterizationEnabled) BOOL rasterizationEnabled;
@property (nonatomic) NSUInteger sampleCount;
@property (nonatomic) NSUInteger stencilAttachmentPixelFormat;
@property (nonatomic) BOOL supportAddingFragmentBinaryFunctions; // ivar: _supportAddingFragmentBinaryFunctions
@property (nonatomic) BOOL supportAddingVertexBinaryFunctions; // ivar: _supportAddingVertexBinaryFunctions
@property (nonatomic) BOOL supportIndirectCommandBuffers;
@property (nonatomic) NSUInteger tessellationControlPointIndexType;
@property (nonatomic) NSUInteger tessellationFactorFormat;
@property (nonatomic, getter=isTessellationFactorScaleEnabled) BOOL tessellationFactorScaleEnabled;
@property (nonatomic) NSUInteger tessellationFactorStepFunction;
@property (nonatomic) NSUInteger tessellationOutputWindingOrder;
@property (nonatomic) NSUInteger tessellationPartitionMode;
@property (readonly) MTLPipelineBufferDescriptorArray *vertexBuffers;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (retain, nonatomic) NSObject<MTLFunction> *vertexFunction;
@property (copy, nonatomic) MTLLinkedFunctions *vertexLinkedFunctions;
@property (copy, nonatomic) NSArray *vertexPreloadedLibraries; // ivar: _vertexPreloadedLibraries


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;


@end


#endif