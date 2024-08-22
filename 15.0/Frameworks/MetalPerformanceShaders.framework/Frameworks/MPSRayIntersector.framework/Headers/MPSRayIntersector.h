// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSRAYINTERSECTOR_H
#define MPSRAYINTERSECTOR_H

@class MPSKernel;
@protocol NSSecureCoding, NSCopying, MTLBuffer, MTLComputePipelineState;



@interface MPSRayIntersector : MPSKernel <NSSecureCoding, NSCopying>

 {
    NSUInteger _cullMode;
    NSUInteger _frontFacingWinding;
    NSUInteger _triangleIntersectionTestType;
    NSUInteger _boundingBoxIntersectionTestType;
    NSUInteger _rayMaskOptions;
    NSUInteger _rayDataType;
    NSUInteger _intersectionDataType;
    BOOL _proRender;
    NSUInteger _rayMaskOperator;
    id<MTLBuffer> *_dispatchIndirectBuffer;
    id<MTLComputePipelineState> *_dispatchIndirectPipeline;
    NSUInteger _proRenderOptions;
    id<MTLBuffer> *_shapeIndexBuffer;
    NSUInteger _shapeIndexBufferOffset;
    id<MTLBuffer> *_shapeDataBuffer;
    NSUInteger _shapeDataBufferOffset;
    id<MTLBuffer> *_rayIndexBuffer;
    NSUInteger _rayIndexBufferOffset;
    id<MTLBuffer> *_rayMaskBuffer;
    NSUInteger _rayMaskBufferOffset;
    NSUInteger _multiHitCount;
    NSUInteger _renderLayerMask;
    ? _clippingPlane;
    NSUInteger _globalRayMask;
    unsigned int _rayIndexDataType;
    NSUInteger _shapeDataStride;
    NSUInteger _shapeDataMaskOffset;
    NSUInteger _shapeDataRenderLayerOffset;
    id<MTLBuffer> *_rayStatisticsBuffer;
    NSUInteger _rayStatisticsBufferOffset;
    NSUInteger _rayStatistics;
    BOOL _useMultipleThreadsPerRay;
    NSUInteger _intersectionEvent;
}


@property (nonatomic) NSUInteger boundingBoxIntersectionTestType;
@property (nonatomic) NSUInteger cullMode;
@property (nonatomic) NSUInteger frontFacingWinding;
@property (nonatomic) NSUInteger intersectionDataType;
@property (nonatomic) NSUInteger intersectionStride; // ivar: _intersectionStride
@property (nonatomic) NSUInteger rayDataType;
@property (nonatomic) unsigned int rayIndexDataType;
@property (nonatomic) unsigned int rayMask; // ivar: _rayMask
@property (nonatomic) NSUInteger rayMaskOperator;
@property (nonatomic) NSUInteger rayMaskOptions;
@property (nonatomic) NSUInteger rayStride; // ivar: _rayStride
@property (nonatomic) NSUInteger triangleIntersectionTestType;


+(BOOL)supportsSecureCoding;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)useMultipleThreadsPerRay;
-(NSUInteger)globalRayMask;
-(NSUInteger)multiHitCount;
-(NSUInteger)proRenderOptions;
-(NSUInteger)rayIndexBufferOffset;
-(NSUInteger)rayStatistics;
-(NSUInteger)rayStatisticsBufferOffset;
-(NSUInteger)recommendedMinimumRayBatchSizeForRayCount:(NSUInteger)arg0 ;
-(NSUInteger)renderLayerMask;
-(NSUInteger)shapeDataBufferOffset;
-(NSUInteger)shapeDataMaskOffset;
-(NSUInteger)shapeDataRenderLayerOffset;
-(NSUInteger)shapeDataStride;
-(NSUInteger)shapeIndexBufferOffset;
-(NSUInteger)startIntersectionEventWithCommandBuffer:(id)arg0 accelerationStructure:(id)arg1 ;
-(id)clippingPlane;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)description;
-(id)getPipelineForIntersectionType:(NSUInteger)arg0 rayIndexing:(BOOL)arg1 useRayTexture:(BOOL)arg2 useResourceBuffer:(BOOL)arg3 accelerationStructure:(id)arg4 commandBuffer:(id)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)rayIndexBuffer;
-(id)rayStatisticsBuffer;
-(id)shapeDataBuffer;
-(id)shapeIndexBuffer;
-(struct MPSRayIntersectorFunctionHash )getHashForIntersectionType:(NSUInteger)arg0 indexing:(BOOL)arg1 indexType:(unsigned int)arg2 instancing:(BOOL)arg3 vertexStride:(NSUInteger)arg4 transformType:(NSUInteger)arg5 rootNodeType:(int)arg6 branchingFactor:(NSUInteger)arg7 nodeLayout:(int)arg8 polygonType:(NSUInteger)arg9 rayIndexing:(BOOL)arg10 useRayTexture:(BOOL)arg11 useResourceBuffer:(BOOL)arg12 ;
-(void)dealloc;
-(void)encodeIntersectionToCommandBuffer:(id)arg0 intersectionType:(NSUInteger)arg1 rayBuffer:(id)arg2 rayBufferOffset:(NSUInteger)arg3 intersectionBuffer:(id)arg4 intersectionBufferOffset:(NSUInteger)arg5 rayCount:(NSUInteger)arg6 accelerationStructure:(id)arg7 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg0 intersectionType:(NSUInteger)arg1 rayBuffer:(id)arg2 rayBufferOffset:(NSUInteger)arg3 intersectionBuffer:(id)arg4 intersectionBufferOffset:(NSUInteger)arg5 rayCountBuffer:(id)arg6 rayCountBufferOffset:(NSUInteger)arg7 accelerationStructure:(id)arg8 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg0 intersectionType:(NSUInteger)arg1 rayBuffer:(id)arg2 rayBufferOffset:(NSUInteger)arg3 rayIndexBuffer:(id)arg4 rayIndexBufferOffset:(NSUInteger)arg5 intersectionBuffer:(id)arg6 intersectionBufferOffset:(NSUInteger)arg7 rayIndexCount:(NSUInteger)arg8 accelerationStructure:(id)arg9 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg0 intersectionType:(NSUInteger)arg1 rayBuffer:(id)arg2 rayBufferOffset:(NSUInteger)arg3 rayIndexBuffer:(id)arg4 rayIndexBufferOffset:(NSUInteger)arg5 intersectionBuffer:(id)arg6 intersectionBufferOffset:(NSUInteger)arg7 rayIndexCountBuffer:(id)arg8 rayIndexCountBufferOffset:(NSUInteger)arg9 accelerationStructure:(id)arg10 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg0 intersectionType:(NSUInteger)arg1 rayTexture:(id)arg2 intersectionTexture:(id)arg3 accelerationStructure:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endIntersectionEvent:(NSUInteger)arg0 commandBuffer:(id)arg1 accelerationStructure:(id)arg2 ;
-(void)setClippingPlane;
-(void)setGlobalRayMask:(NSUInteger)arg0 ;
-(void)setMultiHitCount:(NSUInteger)arg0 ;
-(void)setProRenderOptions:(NSUInteger)arg0 ;
-(void)setRayIndexBuffer:(id)arg0 ;
-(void)setRayIndexBufferOffset:(NSUInteger)arg0 ;
-(void)setRayStatistics:(NSUInteger)arg0 ;
-(void)setRayStatisticsBuffer:(id)arg0 ;
-(void)setRayStatisticsBufferOffset:(NSUInteger)arg0 ;
-(void)setRenderLayerMask:(NSUInteger)arg0 ;
-(void)setShapeDataBuffer:(id)arg0 ;
-(void)setShapeDataBufferOffset:(NSUInteger)arg0 ;
-(void)setShapeDataMaskOffset:(NSUInteger)arg0 ;
-(void)setShapeDataRenderLayerOffset:(NSUInteger)arg0 ;
-(void)setShapeDataStride:(NSUInteger)arg0 ;
-(void)setShapeIndexBuffer:(id)arg0 ;
-(void)setShapeIndexBufferOffset:(NSUInteger)arg0 ;
-(void)setUseMultipleThreadsPerRay:(BOOL)arg0 ;
-(void)sharedInitRaytracer;


@end


#endif