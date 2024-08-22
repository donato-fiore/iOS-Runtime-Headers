// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLSWRAYTRACINGACCELERATIONSTRUCTURECOMMANDENCODER_H
#define _MTLSWRAYTRACINGACCELERATIONSTRUCTURECOMMANDENCODER_H

@class MTLObjectWithLabel, _MTLCommandBuffer<MTLCommandBuffer>, NSString;
@protocol MTLAccelerationStructureCommandEncoderSPI, MTLDevice, MTLComputeCommandEncoderSPI;



@interface _MTLSWRaytracingAccelerationStructureCommandEncoder : MTLObjectWithLabel <MTLAccelerationStructureCommandEncoderSPI>

 {
    id<MTLDevice> *_device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    id<MTLComputeCommandEncoderSPI> *_computeEncoder;
    *? _progressBins;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(BOOL)isSupportedVersion:(NSUInteger)arg0 ;
-(BOOL)writeGenericBVHStructureOfAccelerationStructure:(id)arg0 into:(id)arg1 ;
-(BOOL)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg0 into:(id)arg1 ;
-(NSUInteger)globalTraceObjectID;
-(id)commandBuffer;
-(id)endEncodingAndRetrieveProgramAddressTable;
-(id)initWithCommandBuffer:(id)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 descriptor:(id)arg1 ;
-(void)buildAccelerationStructure:(id)arg0 descriptor:(id)arg1 scratchBuffer:(id)arg2 scratchBufferOffset:(NSUInteger)arg3 ;
-(void)copyAccelerationStructure:(id)arg0 toAccelerationStructure:(id)arg1 ;
-(void)copyAndCompactAccelerationStructure:(id)arg0 toAccelerationStructure:(id)arg1 ;
-(void)dealloc;
-(void)deserializeAccelerationStructure:(id)arg0 fromBuffer:(id)arg1 serializedBufferOffset:(NSUInteger)arg2 ;
-(void)deserializeAccelerationStructure:(id)arg0 primitiveAccelerationStructures:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(NSUInteger)arg3 ;
-(void)deserializeInstanceAccelerationStructure:(id)arg0 primitiveAccelerationStructures:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(NSUInteger)arg3 ;
-(void)deserializeInstanceAccelerationStructure:(id)arg0 primitiveAccelerationStructures:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(NSUInteger)arg3 withDescriptor:(id)arg4 ;
-(void)deserializePrimitiveAccelerationStructure:(id)arg0 fromBuffer:(id)arg1 serializedBufferOffset:(NSUInteger)arg2 ;
-(void)deserializePrimitiveAccelerationStructure:(id)arg0 fromBuffer:(id)arg1 serializedBufferOffset:(NSUInteger)arg2 withDescriptor:(id)arg3 ;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)refitAccelerationStructure:(id)arg0 descriptor:(id)arg1 destination:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(NSUInteger)arg4 ;
-(void)refitAccelerationStructure:(id)arg0 descriptor:(id)arg1 destination:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(NSUInteger)arg4 options:(NSUInteger)arg5 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)serializeAccelerationStructure:(id)arg0 toBuffer:(id)arg1 serializedBufferOffset:(NSUInteger)arg2 ;
-(void)serializeInstanceAccelerationStructure:(id)arg0 primitiveAccelerationStructures:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(NSUInteger)arg3 ;
-(void)serializePrimitiveAccelerationStructure:(id)arg0 toBuffer:(id)arg1 serializedBufferOffset:(NSUInteger)arg2 ;
-(void)substreamSynchronizeAccelerationStructures:(id)arg0 ;
-(void)substreamSynchronizeDescriptor:(id)arg0 ;
-(void)updateFence:(id)arg0 ;
-(void)useHeap:(id)arg0 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;
-(void)waitForFence:(id)arg0 ;
-(void)writeAccelerationStructureSerializationData:(id)arg0 toBuffer:(id)arg1 offset:(NSUInteger)arg2 ;
-(void)writeCompactedAccelerationStructureSize:(id)arg0 toBuffer:(id)arg1 offset:(NSUInteger)arg2 ;
-(void)writeCompactedAccelerationStructureSize:(id)arg0 toBuffer:(id)arg1 offset:(NSUInteger)arg2 sizeDataType:(NSUInteger)arg3 ;
-(void)writeDeserializedAccelerationStructureSize:(id)arg0 serializedOffset:(NSUInteger)arg1 toBuffer:(id)arg2 sizeBufferOffset:(NSUInteger)arg3 ;
-(void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg0 serializedOffset:(NSUInteger)arg1 toBuffer:(id)arg2 sizesBufferOffset:(NSUInteger)arg3 ;
-(void)writeGenericBVHStructureOfAccelerationStructure:(id)arg0 headerBuffer:(id)arg1 headerBufferOffset:(NSUInteger)arg2 innerNodeBuffer:(id)arg3 innerNodeBufferOffset:(NSUInteger)arg4 leafNodeBuffer:(id)arg5 leafNodeBufferOffset:(NSUInteger)arg6 primitiveBuffer:(id)arg7 primitiveBufferOffset:(NSUInteger)arg8 geometryBuffer:(id)arg9 geometryOffset:(NSUInteger)arg10 instanceTransformBuffer:(id)arg11 instanceTransformOffset:(NSUInteger)arg12 ;
-(void)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg0 toBuffer:(id)arg1 sizesBufferOffset:(NSUInteger)arg2 ;
-(void)writeGeometryOfAccelerationStructure:(id)arg0 toBuffer:(id)arg1 geometryBufferOffset:(NSUInteger)arg2 ;
-(void)writeGeometrySizeOfAccelerationStructure:(id)arg0 toBuffer:(id)arg1 sizeBufferOffset:(NSUInteger)arg2 ;
-(void)writeSerializedAccelerationStructureSize:(id)arg0 toBuffer:(id)arg1 sizeBufferOffset:(NSUInteger)arg2 ;


@end


#endif