// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRENDERPIPELINEREFLECTIONINTERNAL_H
#define MTLRENDERPIPELINEREFLECTIONINTERNAL_H

@class NSArray, NSDictionary, NSData;


#import "MTLRenderPipelineReflection.h"
#import "MTLArgument.h"

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {
    ? _flags;
    NSArray *_vertexBuiltInArguments;
    NSUInteger _postVertexDumpStride;
    NSArray *_postVertexDumpOutputs;
    NSArray *_inferredInputs;
    NSArray *_vertexArguments;
    NSArray *_fragmentArguments;
    NSArray *_tileArguments;
    NSArray *_tileBuiltInArguments;
    MTLArgument *_imageBlockDataReturn;
    NSDictionary *_performanceStatistics;
    unsigned int _traceBufferIndex;
    NSData *_vertexPluginReturnData;
    NSData *_fragmentPluginReturnData;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
}




-(NSUInteger)postVertexDumpStride;
-(id)constantSamplerDescriptors;
-(id)constantSamplerUniqueIdentifiers;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)fragmentArguments;
-(id)fragmentPluginReturnData;
-(id)imageBlockDataReturn;
-(id)inferredInputs;
-(id)initWithTileData:(id)arg0 functionType:(NSUInteger)arg1 device:(id)arg2 options:(NSUInteger)arg3 flags:(struct ? )arg4 ;
-(id)initWithVertexData:(id)arg0 fragmentData:(id)arg1 serializedVertexDescriptor:(id)arg2 device:(id)arg3 options:(NSUInteger)arg4 flags:(struct ? )arg5 ;
-(id)performanceStatistics;
-(id)postVertexDumpOutputs;
-(id)tileArguments;
-(id)vertexArguments;
-(id)vertexBuiltInArguments;
-(id)vertexPluginReturnData;
-(struct ? )usageFlags;
-(unsigned int)traceBufferIndex;
-(void)dealloc;
-(void)setConstantSamplerDescriptorsFromBitmasks:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg0 ;
-(void)setPerformanceStatistics:(id)arg0 ;


@end


#endif