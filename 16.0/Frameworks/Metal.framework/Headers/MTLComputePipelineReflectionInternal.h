// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOMPUTEPIPELINEREFLECTIONINTERNAL_H
#define MTLCOMPUTEPIPELINEREFLECTIONINTERNAL_H

@class NSArray, NSDictionary, NSData;


#import "MTLComputePipelineReflection.h"

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {
    NSArray *_arguments;
    NSArray *_builtInArguments;
    NSDictionary *_performanceStatistics;
    ? _flags;
    unsigned int _traceBufferIndex;
    NSData *_pluginReturnData;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
    NSArray *_bindings;
}




-(id)arguments;
-(id)bindings;
-(id)builtInArguments;
-(id)constantSamplerDescriptors;
-(id)constantSamplerUniqueIdentifiers;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithSerializedData:(id)arg0 device:(id)arg1 options:(NSUInteger)arg2 flags:(struct ? )arg3 ;
-(id)initWithSerializedData:(id)arg0 serializedStageInputDescriptor:(id)arg1 device:(id)arg2 options:(NSUInteger)arg3 flags:(struct ? )arg4 ;
-(id)performanceStatistics;
-(id)pluginReturnData;
-(struct ? )usageFlags;
-(unsigned int)traceBufferIndex;
-(void)dealloc;
-(void)setConstantSamplerDescriptorsFromBitmasks:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg0 ;
-(void)setPerformanceStatistics:(id)arg0 ;


@end


#endif