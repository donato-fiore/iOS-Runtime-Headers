// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUBVHBUILDER_H
#define MTLGPUBVHBUILDER_H

@protocol MTLDevice, MTLLibrary;


#import "MTLBVHBuilder.h"

@interface MTLGPUBVHBuilder : MTLBVHBuilder {
    id<MTLDevice> *_device;
    NSUInteger _threadgroupSize;
    unsigned int _batchSize;
    unsigned int _batchThreshold;
    id<MTLLibrary> *_library;
    os_unfair_lock_s _pipelineCacheLock;
    PipelineCache<PipelineKey> _pipelineCache;
    *MTLGPUBVHBuilderPipelineInfo _pipelineInfos;
    unsigned int KERNEL_INDEX_DISPATCH_BINS;
    unsigned int KERNEL_INDEX_BIN_FRAGMENTS;
    unsigned int KERNEL_INDEX_CLEAR_BATCHES;
    unsigned int KERNEL_INDEX_CREATE_BVH_NODES;
    unsigned int KERNEL_INDEX_FIND_BEST_SPLIT;
    unsigned int KERNEL_INDEX_SPLIT_FRAGMENTS;
    unsigned int KERNEL_INDEX_BIN_FRAGMENTS_SPATIAL;
    unsigned int KERNEL_INDEX_FIND_BEST_SPATIAL_SPLIT;
    unsigned int KERNEL_INDEX_INITIALIZE_QUEUE;
    unsigned int KERNEL_INDEX_INITIALIZE_FRAGMENT_INDICES;
    unsigned int KERNEL_INDEX_INITIALIZE_FRAGMENTS;
    unsigned int KERNEL_INDEX_GET_POLYGON_FRAGMENTS;
    unsigned int KERNEL_INDEX_GET_BOUNDING_BOX_FRAGMENTS;
    unsigned int KERNEL_INDEX_WRITE_BVH_METADATA;
    unsigned int KERNEL_INDEX_SET_COUNTER;
    unsigned int KERNEL_INDEX_SWAP_COUNTERS;
    unsigned int KERNEL_INDEX_DISPATCH_INDIRECT;
    unsigned int KERNEL_INDEX_ENCODE_MTL_BVH_NODE0;
    unsigned int KERNEL_INDEX_ENCODE_MTL_PRIMITIVE_BVH;
    unsigned int KERNEL_INDEX_ENCODE_MTL_INSTANCE_BVH;
    unsigned int KERNEL_INDEX_ENCODE_MTL_PRIMITIVE_BVH_INNER_NODE;
    unsigned int KERNEL_INDEX_ENCODE_MTL_INSTANCE_BVH_INNER_NODE;
    unsigned int KERNEL_INDEX_ENCODE_MTL_TRIANGLE_BVH_LEAF_NODE;
    unsigned int KERNEL_INDEX_ENCODE_MTL_BBOX_BVH_LEAF_NODE;
    unsigned int KERNEL_INDEX_ENCODE_MTL_INSTANCE_BVH_LEAF_NODE_DEFAULT;
    unsigned int KERNEL_INDEX_ENCODE_MTL_INSTANCE_BVH_LEAF_NODE_USER_ID;
    unsigned int KERNEL_INDEX_GET_COMPACTED_MTL_BVH_SIZE_32;
    unsigned int KERNEL_INDEX_GET_COMPACTED_MTL_BVH_SIZE_64;
    unsigned int KERNEL_INDEX_GET_MTL_BVH_SIZE;
    unsigned int KERNEL_INDEX_COPY_AND_COMPACT_MTL_BVH_HEADER;
    unsigned int KERNEL_INDEX_COPY_MTL_BVH_HEADER;
    unsigned int KERNEL_INDEX_COPY_MTL_BVH_INNER_NODES;
    unsigned int KERNEL_INDEX_COPY_MTL_BVH_LEAF_NODES;
    unsigned int KERNEL_INDEX_COPY_MTL_BVH_PRIMITIVES;
    unsigned int KERNEL_INDEX_COPY_MTL_BVH_GEOMETRIES;
    unsigned int KERNEL_INDEX_COPY_MTL_BVH_TRANSFORMS;
    unsigned int KERNEL_INDEX_COPY_MTL_PRIMITIVE_BVHS;
    unsigned int KERNEL_INDEX_GET_MTL_INSTANCE_BOUNDING_BOXES_DEFAULT;
    unsigned int KERNEL_INDEX_GET_MTL_INSTANCE_BOUNDING_BOXES_USER_ID;
    unsigned int KERNEL_INDEX_COPY;
    unsigned int KERNEL_INDEX_REFIT_TRIANGLE_LEAF_NODE;
    unsigned int KERNEL_INDEX_REFIT_TRIANGLE_LEAF_NODE_IN_PLACE;
    unsigned int KERNEL_INDEX_REFIT_BBOX_LEAF_NODE;
    unsigned int KERNEL_INDEX_REFIT_BBOX_LEAF_NODE_IN_PLACE;
    unsigned int KERNEL_INDEX_REFIT_INSTANCE_LEAF_NODE_DEFAULT;
    unsigned int KERNEL_INDEX_REFIT_INSTANCE_LEAF_NODE_USER_ID;
    unsigned int KERNEL_INDEX_REFIT_INSTANCE_LEAF_NODE_DEFAULT_IN_PLACE;
    unsigned int KERNEL_INDEX_REFIT_INSTANCE_LEAF_NODE_USER_ID_IN_PLACE;
    unsigned int KERNEL_INDEX_REFIT_INNER_NODE;
    unsigned int KERNEL_INDEX_REFIT_INNER_NODE_IN_PLACE;
    unsigned int KERNEL_INDEX_REFIT_GEOMETRIES;
    unsigned int KERNEL_INDEX_REFIT_GEOMETRIES_IN_PLACE;
    unsigned int KERNEL_INDEX_GET_SERIALIZED_MTL_BVH_SIZE;
    unsigned int KERNEL_INDEX_GET_SERIALIZED_MTL_BVH_RAW_SIZE;
    unsigned int KERNEL_INDEX_GET_DESERIALIZED_MTL_BVH_SIZE;
    unsigned int KERNEL_INDEX_GET_DESERIALIZED_MTL_PRIMITIVE_BVH_SIZES;
    unsigned int KERNEL_INDEX_WRITE_MTL_BVH_SERIALIZATION_DATA;
    unsigned int KERNEL_INDEX_WRITE_SERIALIZED_MTL_BVH;
    unsigned int KERNEL_INDEX_WRITE_DESERIALIZED_MTL_BVH;
    unsigned int KERNEL_INDEX_GET_GEOMETRY_SIZE;
    unsigned int KERNEL_INDEX_GET_GEOMETRY_PRIMITIVE_COUNT;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_PRIMITIVES;
    unsigned int KERNEL_INDEX_WRITE_MTL_BVH_SIZES_1_1;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_HEADER_1_1;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_INNER_NODES;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_LEAF_NODES_1_1;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_PRIMITIVE_NODES;
    unsigned int KERNEL_INDEX_PATCH_SERIALIZED_MTL_BVH;
    unsigned int KERNEL_INDEX_PATCH_DESERIALIZED_MTL_BVH;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_GEOMETRY;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_TRANSFORMS;
    unsigned int KERNEL_INDEX_DISPATCH_INDIRECT_64;
    unsigned int KERNEL_INDEX_DISPATCH_BINS_WIDE;
    unsigned int KERNEL_INDEX_MEMCPY_INDIRECT_64;
    unsigned int KERNEL_INDEX_BREADTH_FIRST_LAYOUT_INIT;
    unsigned int KERNEL_INDEX_BREADTH_FIRST_LAYOUT_FINISH_ITERATION;
    unsigned int KERNEL_INDEX_BREADTH_FIRST_LAYOUT_CLASSIFY;
    unsigned int KERNEL_INDEX_BREADTH_FIRST_LAYOUT;
    unsigned int KERNEL_INDEX_PREFIX_SUM;
    unsigned int KERNEL_INDEX_PREFIX_SUM_REDUCE;
    unsigned int KERNEL_INDEX_PREFIX_SUM_ADD;
    unsigned int KERNEL_INDEX_COPY_FRAGMENT_INDICES;
    unsigned int KERNEL_INDEX_WRITE_MTL_BVH_SIZES_1_0;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_HEADER_1_0;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_LEAF_NODES_1_0;
    unsigned int KERNEL_INDEX_WRITE_SERIALIZATION_DATA;
    unsigned int KERNEL_INDEX_ENCODE_PRIMITIVE_DATA;
    unsigned int KERNEL_INDEX_REFIT_PRIMITIVE_DATA;
    unsigned int KERNEL_INDEX_REFIT_PRIMITIVE_DATA_IN_PLACE;
    unsigned int KERNEL_INDEX_COPY_PRIMITIVE_DATA;
    unsigned int KERNEL_INDEX_EXTRACT_PRIMITIVE_DATA;
    unsigned int KERNEL_INDEX_WRITE_MTL_BVH_SIZES_1_2;
    unsigned int KERNEL_INDEX_EXTRACT_MTL_BVH_GEOMETRY_1_2;
    unsigned int KERNEL_INDEX_REFIT_HEADER;
    unsigned int KERNEL_INDEX_REFIT_HEADER_IN_PLACE;
    unsigned int KERNEL_INDEX_FINISH_BUILD_ITERATION;
}




+(BOOL)supportsDevice:(id)arg0 ;
+(NSUInteger)breadthFirstLayoutScratchBufferSizeWithLeafNodeCapacity:(NSUInteger)arg0 ;
+(NSUInteger)prefixSumScratchBufferSizeWithCapacity:(NSUInteger)arg0 ;
-(BOOL)isCompatibleWithAccelerationStructure:(struct ? )arg0 ;
-(BOOL)useBatchingForFragmentCapacity:(NSUInteger)arg0 ;
-(BOOL)useResourceBufferForDescriptor:(id)arg0 ;
-(BOOL)useSpatialSplitsForDescriptor:(id)arg0 ;
-(BOOL)writeGenericBVHStructureSizesWithEncoder:(id)arg0 version:(NSUInteger)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(NSUInteger)arg3 toBuffer:(id)arg4 sizesBufferOffset:(NSUInteger)arg5 ;
-(BOOL)writeGenericBVHStructureWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 into:(id)arg3 ;
-(NSUInteger)getBatchCountForFragmentCapacity:(NSUInteger)arg0 batchSize:(NSUInteger)arg1 ;
-(NSUInteger)getBuildScratchBufferSizeForDescriptor:(id)arg0 ;
-(NSUInteger)getEncodeMTLSWBVHScratchBufferSizeForDescriptor:(id)arg0 ;
-(NSUInteger)getGenericBVHSizeForDescriptor:(id)arg0 ;
-(NSUInteger)getGenericBVHSizeForDescriptor:(id)arg0 nodeOffset:(*NSUInteger)arg1 fragmentOffset:(*NSUInteger)arg2 fragmentIndexOffset:(*NSUInteger)arg3 childIndexOffset:(*NSUInteger)arg4 ;
-(NSUInteger)getMTLSWBVHSizeForDescriptor:(id)arg0 ;
-(NSUInteger)getMTLSWBVHSizeForDescriptor:(id)arg0 refitDataOffset:(*NSUInteger)arg1 innerNodeOffset:(*NSUInteger)arg2 leafNodeOffset:(*NSUInteger)arg3 primitiveOffset:(*NSUInteger)arg4 primitiveRefitDataOffset:(*NSUInteger)arg5 geometryOffset:(*NSUInteger)arg6 primitiveBVHOffset:(*NSUInteger)arg7 transformOffset:(*NSUInteger)arg8 ;
-(NSUInteger)getRefitScratchBufferSizeForDescriptor:(id)arg0 ;
-(id)getPipeline:(NSUInteger)arg0 ;
-(id)getPipeline:(NSUInteger)arg0 descriptor:(id)arg1 ;
-(id)getPipeline:(NSUInteger)arg0 descriptor:(id)arg1 threadgroupSize:(NSUInteger)arg2 ;
-(id)getPipeline:(NSUInteger)arg0 descriptor:(id)arg1 threadgroupSize:(NSUInteger)arg2 outExecutionWidth:(*NSUInteger)arg3 ;
-(id)getPipeline:(NSUInteger)arg0 motion:(BOOL)arg1 outExecutionWidth:(*NSUInteger)arg2 ;
-(id)getPipeline:(NSUInteger)arg0 outExecutionWidth:(*NSUInteger)arg1 ;
-(id)getPipeline:(NSUInteger)arg0 threadgroupSize:(NSUInteger)arg1 ;
-(id)getPipeline:(NSUInteger)arg0 threadgroupSize:(NSUInteger)arg1 motion:(BOOL)arg2 outExecutionWidth:(*NSUInteger)arg3 ;
-(id)getPipeline:(NSUInteger)arg0 threadgroupSize:(NSUInteger)arg1 outExecutionWidth:(*NSUInteger)arg2 ;
-(id)getPipelineWithKey:(struct PipelineKey )arg0 ;
-(id)getPipelineWithKey:(struct PipelineKey )arg0 outExecutionWidth:(*NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)newGeometryBufferWithGeometryDescriptors:(id)arg0 retainedResources:(id)arg1 ;
-(id)newIndirectBufferWithRetainedResources:(id)arg0 ;
-(id)newInstanceBufferWithBVHs:(id)arg0 retainedResources:(id)arg1 encoder:(id)arg2 ;
-(id)newInstanceBufferWithBVHs:(id)arg0 retainedResources:(id)arg1 encoder:(id)arg2 encodedStride:(*NSUInteger)arg3 ;
-(id)newPipelineWithKey:(struct PipelineKey )arg0 ;
-(id)newPrimitiveCountBufferWithEncoder:(id)arg0 descriptor:(id)arg1 retainedResources:(id)arg2 ;
-(id)newResourceBufferWithDescriptor:(id)arg0 retainedResources:(id)arg1 ;
-(id)retainedResourcesArrayWithEncoder:(id)arg0 ;
-(struct ? )getMTLSWBVHSizeAndOffsetsForDescriptor:(id)arg0 ;
-(void)addPrefixSumsWithEncoder:(id)arg0 inputBuffer:(id)arg1 inputBufferOffset:(NSUInteger)arg2 reducedBuffer:(id)arg3 reducedBufferOffset:(NSUInteger)arg4 countBuffer:(id)arg5 countBufferOffset:(NSUInteger)arg6 capacity:(NSUInteger)arg7 ;
-(void)buildGenericBVHWithEncoder:(id)arg0 descriptor:(id)arg1 outputBuffer:(id)arg2 outputBufferOffset:(NSUInteger)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(NSUInteger)arg5 ;
-(void)buildGenericBVHWithEncoder:(id)arg0 descriptor:(id)arg1 outputBuffer:(id)arg2 outputBufferOffset:(NSUInteger)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(NSUInteger)arg5 primitiveCountBuffer:(id)arg6 primitiveCountBufferOffset:(NSUInteger)arg7 ;
-(void)buildWithEncoder:(id)arg0 descriptor:(id)arg1 scratchBuffer:(id)arg2 scratchBufferOffset:(NSUInteger)arg3 fragmentBuffer:(id)arg4 fragmentBufferOffset:(NSUInteger)arg5 fragmentIndexBuffer0:(id)arg6 fragmentIndexBuffer0Offset:(NSUInteger)arg7 fragmentIndexBuffer1:(id)arg8 fragmentIndexBuffer1Offset:(NSUInteger)arg9 nodeBuffer:(id)arg10 nodeBufferOffset:(NSUInteger)arg11 childIndexBuffer:(id)arg12 childIndexBufferOffset:(NSUInteger)arg13 counterBuffer:(id)arg14 counterBufferOffset:(NSUInteger)arg15 fragmentCountBuffer:(id)arg16 fragmentCountBufferOffset:(NSUInteger)arg17 boundsMinBuffer:(id)arg18 boundsMinBufferOffset:(NSUInteger)arg19 boundsMaxBuffer:(id)arg20 boundsMaxBufferOffset:(NSUInteger)arg21 boundsEndMinBuffer:(id)arg22 boundsEndMinBufferOffset:(NSUInteger)arg23 boundsEndMaxBuffer:(id)arg24 boundsEndMaxBufferOffset:(NSUInteger)arg25 boundsEndTimeBuffer:(id)arg26 boundsEndTimeBufferOffset:(NSUInteger)arg27 boundsStartTimeBuffer:(id)arg28 boundsStartTimeBufferOffset:(NSUInteger)arg29 resourceBuffer:(id)arg30 ;
-(void)copyAndCompactMTLSWBVHWithEncoder:(id)arg0 sourceBuffer:(id)arg1 sourceBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 destinationBufferOffset:(NSUInteger)arg4 destinationUniqueIdentifier:(NSUInteger)arg5 ;
-(void)copyFromBuffer:(id)arg0 sourceBufferOffset:(NSUInteger)arg1 toBuffer:(id)arg2 destinationBufferOffset:(NSUInteger)arg3 length:(NSUInteger)arg4 encoder:(id)arg5 ;
-(void)copyMTLSWBVHWithEncoder:(id)arg0 sourceBuffer:(id)arg1 sourceBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 destinationBufferOffset:(NSUInteger)arg4 destinationUniqueIdentifier:(NSUInteger)arg5 ;
-(void)copyMTLSWBVHWithEncoder:(id)arg0 sourceBuffer:(id)arg1 sourceBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 destinationBufferOffset:(NSUInteger)arg4 destinationUniqueIdentifier:(NSUInteger)arg5 compact:(BOOL)arg6 copyVertexData:(BOOL)arg7 copyPerPrimitiveData:(BOOL)arg8 ;
-(void)dealloc;
-(void)dispatchIndirect64:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 threadCountBuffer:(id)arg3 threadCountBufferOffset:(NSUInteger)arg4 threadCountIndex:(NSUInteger)arg5 threadgroupDivisor:(NSUInteger)arg6 encoder:(id)arg7 ;
-(void)dispatchIndirect:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 counterBuffer:(id)arg3 counterBufferOffset:(NSUInteger)arg4 counterIndex:(NSUInteger)arg5 threadgroupDivisor:(NSUInteger)arg6 encoder:(id)arg7 ;
-(void)dispatchIndirect:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 counterBuffer:(id)arg3 counterBufferOffset:(NSUInteger)arg4 counterIndex:(NSUInteger)arg5 threadgroupDivisor:(NSUInteger)arg6 threadgroupSize:(NSUInteger)arg7 encoder:(id)arg8 ;
-(void)dispatchIndirect:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 threadCountBuffer:(id)arg3 threadCountBufferOffset:(NSUInteger)arg4 threadCountIndex:(NSUInteger)arg5 threadgroupDivisor:(NSUInteger)arg6 encoder:(id)arg7 ;
-(void)dispatchIndirect:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 threadCountBuffer:(id)arg3 threadCountBufferOffset:(NSUInteger)arg4 threadCountIndex:(NSUInteger)arg5 threadgroupDivisor:(NSUInteger)arg6 threadgroupSize:(NSUInteger)arg7 encoder:(id)arg8 ;
-(void)encodeMTLSWBVHWithEncoder:(id)arg0 descriptor:(id)arg1 outputBuffer:(id)arg2 outputBufferOffset:(NSUInteger)arg3 genericBVHBuffer:(id)arg4 genericBVHBufferOffset:(NSUInteger)arg5 scratchBuffer:(id)arg6 scratchBufferOffset:(NSUInteger)arg7 uniqueIdentifier:(NSUInteger)arg8 ;
-(void)fastIndirectGPUMemcpyWithEncoder:(id)arg0 srcBuffer:(id)arg1 srcBufferOffset:(NSUInteger)arg2 dstBuffer:(id)arg3 dstBufferOffset:(NSUInteger)arg4 lengthBuffer:(id)arg5 lengthOffset:(NSUInteger)arg6 retainedResources:(id)arg7 ;
-(void)getBoundingBoxFragmentsWithEncoder:(id)arg0 descriptor:(id)arg1 primitiveCountBuffer:(id)arg2 primitiveCountBufferOffset:(NSUInteger)arg3 fragmentBuffer:(id)arg4 fragmentBufferOffset:(NSUInteger)arg5 fragmentCountBuffer:(id)arg6 fragmentCountBufferOffset:(NSUInteger)arg7 boundsMinBuffer:(id)arg8 boundsMinBufferOffset:(NSUInteger)arg9 boundsMaxBuffer:(id)arg10 boundsMaxBufferOffset:(NSUInteger)arg11 boundsEndMinBuffer:(id)arg12 boundsEndMinBufferOffset:(NSUInteger)arg13 boundsEndMaxBuffer:(id)arg14 boundsEndMaxBufferOffset:(NSUInteger)arg15 boundsEndTimeBuffer:(id)arg16 boundsEndTimeBufferOffset:(NSUInteger)arg17 boundsStartTimeBuffer:(id)arg18 boundsStartTimeBufferOffset:(NSUInteger)arg19 resourceBuffer:(id)arg20 ;
-(void)getMTLInstanceBoundingBoxesWithEncoder:(id)arg0 descriptor:(id)arg1 boundingBoxBuffer:(id)arg2 boundingBoxBufferOffset:(NSUInteger)arg3 ;
-(void)getPolygonFragmentsWithEncoder:(id)arg0 descriptor:(id)arg1 primitiveCountBuffer:(id)arg2 primitiveCountBufferOffset:(NSUInteger)arg3 fragmentBuffer:(id)arg4 fragmentBufferOffset:(NSUInteger)arg5 fragmentCountBuffer:(id)arg6 fragmentCountBufferOffset:(NSUInteger)arg7 boundsMinBuffer:(id)arg8 boundsMinBufferOffset:(NSUInteger)arg9 boundsMaxBuffer:(id)arg10 boundsMaxBufferOffset:(NSUInteger)arg11 boundsEndMinBuffer:(id)arg12 boundsEndMinBufferOffset:(NSUInteger)arg13 boundsEndMaxBuffer:(id)arg14 boundsEndMaxBufferOffset:(NSUInteger)arg15 boundsEndTimeBuffer:(id)arg16 boundsEndTimeBufferOffset:(NSUInteger)arg17 boundsStartTimeBuffer:(id)arg18 boundsStartTimeBufferOffset:(NSUInteger)arg19 resourceBuffer:(id)arg20 ;
-(void)initPipelinesWithDevice:(id)arg0 ;
-(void)layoutNodesBreadthFirstWithEncoder:(id)arg0 descriptor:(id)arg1 BVHBuffer:(id)arg2 BVHBufferOffset:(NSUInteger)arg3 counterBuffer:(id)arg4 counterBufferOffset:(NSUInteger)arg5 nodeMappingBuffer:(id)arg6 nodeMappingBufferOffset:(NSUInteger)arg7 levelOffsetsBuffer:(id)arg8 levelOffsetsBufferOffset:(NSUInteger)arg9 levelCountsBuffer:(id)arg10 levelCountsBufferOffset:(NSUInteger)arg11 scratchBuffer:(id)arg12 scratchBufferOffset:(NSUInteger)arg13 ;
-(void)prefixSumWithEncoder:(id)arg0 inputBuffer:(id)arg1 inputBufferOffset:(NSUInteger)arg2 reducedBuffer:(id)arg3 reducedBufferOffset:(NSUInteger)arg4 scratchBuffer:(id)arg5 scratchBufferOffset:(NSUInteger)arg6 countBuffer:(id)arg7 countBufferOffset:(NSUInteger)arg8 capacity:(NSUInteger)arg9 ;
-(void)refitMTLSWBVHWithEncoder:(id)arg0 descriptor:(id)arg1 sourceBuffer:(id)arg2 sourceBufferOffset:(NSUInteger)arg3 destinationBuffer:(id)arg4 destinationBufferOffset:(NSUInteger)arg5 destinationUniqueIdentifier:(NSUInteger)arg6 scratchBuffer:(id)arg7 scratchBufferOffset:(NSUInteger)arg8 ;
-(void)refitMTLSWBVHWithEncoder:(id)arg0 descriptor:(id)arg1 sourceBuffer:(id)arg2 sourceBufferOffset:(NSUInteger)arg3 destinationBuffer:(id)arg4 destinationBufferOffset:(NSUInteger)arg5 destinationUniqueIdentifier:(NSUInteger)arg6 scratchBuffer:(id)arg7 scratchBufferOffset:(NSUInteger)arg8 options:(NSUInteger)arg9 ;
-(void)refitPrimitiveData:(id)arg0 inPlace:(BOOL)arg1 bvhDescriptor:(id)arg2 ;
-(void)refitVertexDataWithEncoder:(id)arg0 descriptor:(id)arg1 bvhDescriptor:(id)arg2 inPlace:(BOOL)arg3 sourceBuffer:(id)arg4 sourceBufferOffset:(NSUInteger)arg5 scratchBuffer:(id)arg6 scratchBufferOffset:(NSUInteger)arg7 retainedResources:(id)arg8 innerNodeCapacity:(NSUInteger)arg9 leafNodeCapacity:(NSUInteger)arg10 ;
-(void)setCounterInBuffer:(id)arg0 offset:(NSUInteger)arg1 index:(NSUInteger)arg2 value:(NSUInteger)arg3 encoder:(id)arg4 ;
-(void)swapCountersInBuffer:(id)arg0 offset:(NSUInteger)arg1 counterIndex1:(NSUInteger)arg2 counterIndex2:(NSUInteger)arg3 encoder:(id)arg4 ;
-(void)threadgroupPrefixSumWithEncoder:(id)arg0 inputBuffer:(id)arg1 inputBufferOffset:(NSUInteger)arg2 reducedBuffer:(id)arg3 reducedBufferOffset:(NSUInteger)arg4 countBuffer:(id)arg5 countBufferOffset:(NSUInteger)arg6 capacity:(NSUInteger)arg7 ;
-(void)writeAccelerationStructureSerializationDataWithEncoder:(id)arg0 BVHBuffer:(id)arg1 BVHBufferOffset:(NSUInteger)arg2 toBuffer:(id)arg3 offset:(NSUInteger)arg4 ;
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