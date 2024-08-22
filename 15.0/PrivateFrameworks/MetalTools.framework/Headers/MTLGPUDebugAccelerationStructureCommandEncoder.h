// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGACCELERATIONSTRUCTURECOMMANDENCODER_H
#define MTLGPUDEBUGACCELERATIONSTRUCTURECOMMANDENCODER_H



#import "MTLToolsAccelerationStructureCommandEncoder.h"

@interface MTLGPUDebugAccelerationStructureCommandEncoder : MTLToolsAccelerationStructureCommandEncoder



-(void)deserializeAccelerationStructure:(id)arg0 primitiveAccelerationStructures:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(NSUInteger)arg3 ;
-(void)deserializeInstanceAccelerationStructure:(id)arg0 primitiveAccelerationStructures:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(NSUInteger)arg3 ;
-(void)deserializeInstanceAccelerationStructure:(id)arg0 primitiveAccelerationStructures:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(NSUInteger)arg3 withDescriptor:(id)arg4 ;
-(void)serializeInstanceAccelerationStructure:(id)arg0 primitiveAccelerationStructures:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(NSUInteger)arg3 ;


@end


#endif