// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLRENDERPIPELINEREFLECTIONINTERNAL_H
#define MTLRENDERPIPELINEREFLECTIONINTERNAL_H

@class NSArray, NSDictionary, NSData;
@protocol MTLBinding;


#import "MTLRenderPipelineReflection.h"

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
    id<MTLBinding> *_imageBlockDataReturn;
    NSDictionary *_performanceStatistics;
    unsigned int _traceBufferIndex;
    NSData *_vertexPluginReturnData;
    NSData *_fragmentPluginReturnData;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
    NSArray *_objectArguments;
    NSArray *_meshArguments;
    NSArray *_objectBuiltInArguments;
    NSArray *_meshBuiltInArguments;
    NSData *_objectPluginReturnData;
    NSData *_meshPluginReturnData;
    NSArray *_vertexBindings;
    NSArray *_fragmentBindings;
    NSArray *_tileBindings;
    NSArray *_objectBindings;
    NSArray *_meshBindings;
    NSUInteger _printStyle;
}




-(NSUInteger)postVertexDumpStride;
-(id)constantSamplerDescriptors;
-(id)constantSamplerUniqueIdentifiers;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)fragmentArguments;
-(id)fragmentBindings;
-(id)fragmentPluginReturnData;
-(id)imageBlockDataReturn;
-(id)inferredInputs;
-(id)initWithObjectData:(id)arg0 meshData:(id)arg1 fragmentData:(id)arg2 device:(id)arg3 options:(NSUInteger)arg4 flags:(struct ? )arg5 ;
-(id)initWithTileData:(id)arg0 functionType:(NSUInteger)arg1 device:(id)arg2 options:(NSUInteger)arg3 flags:(struct ? )arg4 ;
-(id)initWithVertexData:(id)arg0 fragmentData:(id)arg1 serializedVertexDescriptor:(id)arg2 device:(id)arg3 options:(NSUInteger)arg4 flags:(struct ? )arg5 ;
-(id)meshArguments;
-(id)meshBindings;
-(id)meshBuiltInArguments;
-(id)meshPluginReturnData;
-(id)objectArguments;
-(id)objectBindings;
-(id)objectBuiltInArguments;
-(id)objectPluginReturnData;
-(id)performanceStatistics;
-(id)postVertexDumpOutputs;
-(id)tileArguments;
-(id)tileBindings;
-(id)vertexArguments;
-(id)vertexBindings;
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