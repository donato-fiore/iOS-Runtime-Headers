// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLGPUBVHBUILDER_H
#define MTLGPUBVHBUILDER_H

@protocol MTLDevice, MTLLibrary;


#import "MTLBVHBuilder.h"

@interface MTLGPUBVHBuilder : MTLBVHBuilder {
    id<MTLDevice> *_device;
    NSUInteger _threadgroupSize;
    id<MTLLibrary> *_library;
    os_unfair_lock_s _pipelineCacheLock;
    PipelineCache<PipelineKey> _pipelineCache;
}




+(BOOL)supportsDevice:(id)arg0 ;
+(NSUInteger)breadthFirstLayoutScratchBufferSizeWithLeafNodeCapacity:(NSUInteger)arg0 ;
+(NSUInteger)getBatchCountForFragmentCapacity:(NSUInteger)arg0 ;
+(NSUInteger)prefixSumScratchBufferSizeWithCapacity:(NSUInteger)arg0 ;
-(BOOL)useResourceBufferForDescriptor:(id)arg0 ;
-(BOOL)useSpatialSplitsForDescriptor:(id)arg0 ;
-(BOOL)writeGenericBVHStructureSizesWithEncoder:(id)arg0 version:(NSUInteger)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(NSUInteger)arg3 toBuffer:(id)arg4 sizesBufferOffset:(NSUInteger)arg5 ;
-(BOOL)writeGenericBVHStructureWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 into:(id)arg3 ;
-(NSUInteger)getBuildScratchBufferSizeForDescriptor:(id)arg0 ;
-(NSUInteger)getEncodeMTLSWBVHScratchBufferSizeForDescriptor:(id)arg0 ;
-(NSUInteger)getGenericBVHSizeForDescriptor:(id)arg0 ;
-(NSUInteger)getGenericBVHSizeForDescriptor:(id)arg0 nodeOffset:(*NSUInteger)arg1 fragmentOffset:(*NSUInteger)arg2 fragmentIndexOffset:(*NSUInteger)arg3 childIndexOffset:(*NSUInteger)arg4 ;
-(NSUInteger)getMTLSWBVHSizeForDescriptor:(id)arg0 ;
-(NSUInteger)getMTLSWBVHSizeForDescriptor:(id)arg0 innerNodeOffset:(*NSUInteger)arg1 leafNodeOffset:(*NSUInteger)arg2 primitiveOffset:(*NSUInteger)arg3 geometryOffset:(*NSUInteger)arg4 primitiveBVHOffset:(*NSUInteger)arg5 transformOffset:(*NSUInteger)arg6 ;
-(NSUInteger)getRefitScratchBufferSizeForDescriptor:(id)arg0 ;
-(id)getPipeline:(NSUInteger)arg0 ;
-(id)getPipeline:(NSUInteger)arg0 descriptor:(id)arg1 ;
-(id)getPipeline:(NSUInteger)arg0 motion:(BOOL)arg1 ;
-(id)getPipelineWithKey:(struct PipelineKey )arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)newGeometryBufferWithGeometryDescriptors:(id)arg0 retainedResources:(id)arg1 ;
-(id)newIndirectBufferWithRetainedResources:(id)arg0 ;
-(id)newInstanceBufferWithBVHs:(id)arg0 retainedResources:(id)arg1 encoder:(id)arg2 ;
-(id)newPipelineWithKey:(struct PipelineKey )arg0 ;
-(id)newResourceBufferWithDescriptor:(id)arg0 retainedResources:(id)arg1 ;
-(id)retainedResourcesArrayWithEncoder:(id)arg0 ;
-(void)addPrefixSumsWithEncoder:(id)arg0 inputBuffer:(id)arg1 inputBufferOffset:(NSUInteger)arg2 reducedBuffer:(id)arg3 reducedBufferOffset:(NSUInteger)arg4 countBuffer:(id)arg5 countBufferOffset:(NSUInteger)arg6 capacity:(NSUInteger)arg7 ;
-(void)buildGenericBVHWithEncoder:(id)arg0 descriptor:(id)arg1 outputBuffer:(id)arg2 outputBufferOffset:(NSUInteger)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(NSUInteger)arg5 ;
-(void)buildWithEncoder:(id)arg0 descriptor:(id)arg1 scratchBuffer:(id)arg2 scratchBufferOffset:(NSUInteger)arg3 fragmentBuffer:(id)arg4 fragmentBufferOffset:(NSUInteger)arg5 sourceFragmentIndexBuffer:(id)arg6 sourceFragmentIndexBufferOffset:(NSUInteger)arg7 destinationFragmentIndexBuffer:(id)arg8 destinationFragmentIndexBufferOffset:(NSUInteger)arg9 nodeBuffer:(id)arg10 nodeBufferOffset:(NSUInteger)arg11 childIndexBuffer:(id)arg12 childIndexBufferOffset:(NSUInteger)arg13 counterBuffer:(id)arg14 counterBufferOffset:(NSUInteger)arg15 fragmentCountBuffer:(id)arg16 fragmentCountBufferOffset:(NSUInteger)arg17 boundsMinBuffer:(id)arg18 boundsMinBufferOffset:(NSUInteger)arg19 boundsMaxBuffer:(id)arg20 boundsMaxBufferOffset:(NSUInteger)arg21 boundsEndMinBuffer:(id)arg22 boundsEndMinBufferOffset:(NSUInteger)arg23 boundsEndMaxBuffer:(id)arg24 boundsEndMaxBufferOffset:(NSUInteger)arg25 boundsEndTimeBuffer:(id)arg26 boundsEndTimeBufferOffset:(NSUInteger)arg27 boundsStartTimeBuffer:(id)arg28 boundsStartTimeBufferOffset:(NSUInteger)arg29 resourceBuffer:(id)arg30 ;
-(void)copyAndCompactMTLSWBVHWithEncoder:(id)arg0 sourceBuffer:(id)arg1 sourceBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 destinationBufferOffset:(NSUInteger)arg4 destinationUniqueIdentifier:(NSUInteger)arg5 ;
-(void)copyFromBuffer:(id)arg0 sourceBufferOffset:(NSUInteger)arg1 toBuffer:(id)arg2 destinationBufferOffset:(NSUInteger)arg3 length:(NSUInteger)arg4 encoder:(id)arg5 ;
-(void)copyMTLSWBVHWithEncoder:(id)arg0 sourceBuffer:(id)arg1 sourceBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 destinationBufferOffset:(NSUInteger)arg4 destinationUniqueIdentifier:(NSUInteger)arg5 ;
-(void)copyMTLSWBVHWithEncoder:(id)arg0 sourceBuffer:(id)arg1 sourceBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 destinationBufferOffset:(NSUInteger)arg4 destinationUniqueIdentifier:(NSUInteger)arg5 compact:(BOOL)arg6 ;
-(void)dealloc;
-(void)dispatchIndirect64:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 threadCountBuffer:(id)arg3 threadCountBufferOffset:(NSUInteger)arg4 threadCountIndex:(NSUInteger)arg5 threadgroupDivisor:(NSUInteger)arg6 encoder:(id)arg7 ;
-(void)dispatchIndirect:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 counterBuffer:(id)arg3 counterBufferOffset:(NSUInteger)arg4 counterIndex:(NSUInteger)arg5 threadgroupDivisor:(NSUInteger)arg6 encoder:(id)arg7 ;
-(void)dispatchIndirect:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 threadCountBuffer:(id)arg3 threadCountBufferOffset:(NSUInteger)arg4 threadCountIndex:(NSUInteger)arg5 threadgroupDivisor:(NSUInteger)arg6 encoder:(id)arg7 ;
-(void)encodeMTLSWBVHWithEncoder:(id)arg0 descriptor:(id)arg1 outputBuffer:(id)arg2 outputBufferOffset:(NSUInteger)arg3 genericBVHBuffer:(id)arg4 genericBVHBufferOffset:(NSUInteger)arg5 scratchBuffer:(id)arg6 scratchBufferOffset:(NSUInteger)arg7 uniqueIdentifier:(NSUInteger)arg8 ;
-(void)fastIndirectGPUMemcpyWithEncoder:(id)arg0 srcBuffer:(id)arg1 srcBufferOffset:(NSUInteger)arg2 dstBuffer:(id)arg3 dstBufferOffset:(NSUInteger)arg4 lengthBuffer:(id)arg5 lengthOffset:(NSUInteger)arg6 retainedResources:(id)arg7 ;
-(void)getBoundingBoxFragmentsWithEncoder:(id)arg0 descriptor:(id)arg1 fragmentBuffer:(id)arg2 fragmentBufferOffset:(NSUInteger)arg3 fragmentCountBuffer:(id)arg4 fragmentCountBufferOffset:(NSUInteger)arg5 boundsMinBuffer:(id)arg6 boundsMinBufferOffset:(NSUInteger)arg7 boundsMaxBuffer:(id)arg8 boundsMaxBufferOffset:(NSUInteger)arg9 boundsEndMinBuffer:(id)arg10 boundsEndMinBufferOffset:(NSUInteger)arg11 boundsEndMaxBuffer:(id)arg12 boundsEndMaxBufferOffset:(NSUInteger)arg13 boundsEndTimeBuffer:(id)arg14 boundsEndTimeBufferOffset:(NSUInteger)arg15 boundsStartTimeBuffer:(id)arg16 boundsStartTimeBufferOffset:(NSUInteger)arg17 resourceBuffer:(id)arg18 ;
-(void)getMTLInstanceBoundingBoxesWithEncoder:(id)arg0 descriptor:(id)arg1 boundingBoxBuffer:(id)arg2 boundingBoxBufferOffset:(NSUInteger)arg3 ;
-(void)getPolygonFragmentsWithEncoder:(id)arg0 descriptor:(id)arg1 fragmentBuffer:(id)arg2 fragmentBufferOffset:(NSUInteger)arg3 fragmentCountBuffer:(id)arg4 fragmentCountBufferOffset:(NSUInteger)arg5 boundsMinBuffer:(id)arg6 boundsMinBufferOffset:(NSUInteger)arg7 boundsMaxBuffer:(id)arg8 boundsMaxBufferOffset:(NSUInteger)arg9 boundsEndMinBuffer:(id)arg10 boundsEndMinBufferOffset:(NSUInteger)arg11 boundsEndMaxBuffer:(id)arg12 boundsEndMaxBufferOffset:(NSUInteger)arg13 boundsEndTimeBuffer:(id)arg14 boundsEndTimeBufferOffset:(NSUInteger)arg15 boundsStartTimeBuffer:(id)arg16 boundsStartTimeBufferOffset:(NSUInteger)arg17 resourceBuffer:(id)arg18 ;
-(void)layoutNodesBreadthFirstWithEncoder:(id)arg0 descriptor:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(NSUInteger)arg3 counterBuffer:(id)arg4 counterBufferOffset:(NSUInteger)arg5 nodeMappingBuffer:(id)arg6 nodeMappingBufferOffset:(NSUInteger)arg7 scratchBuffer:(id)arg8 scratchBufferOffset:(NSUInteger)arg9 ;
-(void)prefixSumWithEncoder:(id)arg0 inputBuffer:(id)arg1 inputBufferOffset:(NSUInteger)arg2 reducedBuffer:(id)arg3 reducedBufferOffset:(NSUInteger)arg4 scratchBuffer:(id)arg5 scratchBufferOffset:(NSUInteger)arg6 countBuffer:(id)arg7 countBufferOffset:(NSUInteger)arg8 capacity:(NSUInteger)arg9 ;
-(void)refitMTLSWBVHWithEncoder:(id)arg0 descriptor:(id)arg1 sourceBuffer:(id)arg2 sourceBufferOffset:(NSUInteger)arg3 destinationBuffer:(id)arg4 destinationBufferOffset:(NSUInteger)arg5 destinationUniqueIdentifier:(NSUInteger)arg6 scratchBuffer:(id)arg7 scratchBufferOffset:(NSUInteger)arg8 ;
-(void)setCounterInBuffer:(id)arg0 offset:(NSUInteger)arg1 index:(NSUInteger)arg2 value:(NSUInteger)arg3 encoder:(id)arg4 ;
-(void)swapCountersInBuffer:(id)arg0 offset:(NSUInteger)arg1 counterIndex1:(NSUInteger)arg2 counterIndex2:(NSUInteger)arg3 encoder:(id)arg4 ;
-(void)threadgroupPrefixSumWithEncoder:(id)arg0 inputBuffer:(id)arg1 inputBufferOffset:(NSUInteger)arg2 reducedBuffer:(id)arg3 reducedBufferOffset:(NSUInteger)arg4 countBuffer:(id)arg5 countBufferOffset:(NSUInteger)arg6 capacity:(NSUInteger)arg7 ;
-(void)writeBVHHeaderWithEncoder:(id)arg0 descriptor:(id)arg1 tmpCounterBuffer:(id)arg2 tmpCounterBufferOffset:(NSUInteger)arg3 nodeBuffer:(id)arg4 nodeBufferOffset:(NSUInteger)arg5 headerBuffer:(id)arg6 headerBufferOffset:(NSUInteger)arg7 nodeOffset:(NSUInteger)arg8 fragmentOffset:(NSUInteger)arg9 fragmentIndexOffset:(NSUInteger)arg10 childIndexOffset:(NSUInteger)arg11 size:(NSUInteger)arg12 ;
-(void)writeCompactedMTLSWBVHSizeWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 sizeBufferOffset:(NSUInteger)arg4 sizeDataType:(NSUInteger)arg5 ;
-(void)writeDeserializedMTLSWBVHSizeWithEncoder:(id)arg0 serializedBuffer:(id)arg1 serializedBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 sizeBufferOffset:(NSUInteger)arg4 ;
-(void)writeDeserializedMTLSWBVHWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 primitiveAccelerationStructures:(id)arg3 fromBuffer:(id)arg4 serializedBufferOffset:(NSUInteger)arg5 uniqueIdentifier:(NSUInteger)arg6 ;
-(void)writeDeserializedMTLSWPrimitiveBVHSizesWithEncoder:(id)arg0 serializedBuffer:(id)arg1 serializedBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 sizesBufferOffset:(NSUInteger)arg4 ;
-(void)writeGenericBVHStructureSizesWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 sizesBufferOffset:(NSUInteger)arg4 ;
-(void)writeGenericBVHStructureWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 header:(id)arg3 headerBufferOffset:(NSUInteger)arg4 innerNodes:(id)arg5 innerNodeBufferOffset:(NSUInteger)arg6 leafNodes:(id)arg7 leafNodeBufferOffset:(NSUInteger)arg8 primitives:(id)arg9 primitiveBufferOffset:(NSUInteger)arg10 geometry:(id)arg11 geometryOffset:(NSUInteger)arg12 instanceTransform:(id)arg13 instanceTransformOffset:(NSUInteger)arg14 ;
-(void)writeMTLSWBVHSizeWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 sizeBufferOffset:(NSUInteger)arg4 ;
-(void)writeSerializationDataWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 destinationBufferOffset:(NSUInteger)arg4 ;
-(void)writeSerializedGeometryPrimitiveCountWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 countBufferOffset:(NSUInteger)arg4 ;
-(void)writeSerializedGeometrySizeWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 sizeBufferOffset:(NSUInteger)arg4 ;
-(void)writeSerializedGeometryWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 geometryBufferOffset:(NSUInteger)arg4 ;
-(void)writeSerializedMTLSWBVHRawSizeWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 sizeBufferOffset:(NSUInteger)arg4 ;
-(void)writeSerializedMTLSWBVHSizeWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 sizeBufferOffset:(NSUInteger)arg4 ;
-(void)writeSerializedMTLSWBVHWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 primitiveAccelerationStructures:(id)arg3 toBuffer:(id)arg4 serializedBufferOffset:(NSUInteger)arg5 ;


@end


#endif