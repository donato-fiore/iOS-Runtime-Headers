// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLCOMMANDENCODER_H
#define _MTLCOMMANDENCODER_H

@class MTLObjectWithLabel, _MTLCommandBuffer<MTLCommandBuffer>, NSMutableArray, NSString;
@protocol MTLDevice, MTLFence;



@interface _MTLCommandEncoder : MTLObjectWithLabel {
    id<MTLDevice> *_device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    NSUInteger _labelTraceID;
    id<MTLFence> *_progressFence;
    BOOL _needsFrameworkAssistedErrorTracking;
    BOOL _isProgressTrackingEncoder;
    NSMutableArray *_debugSignposts;
}


@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger dispatchType;
@property (readonly, nonatomic) NSUInteger globalTraceObjectID; // ivar: _globalTraceObjectID
@property (copy) NSString *label;
@property (nonatomic) NSUInteger numThisEncoder; // ivar: _numThisEncoder
@property (readonly, nonatomic, getter=getType) NSUInteger type;


-(NSUInteger)getDriverUniqueID;
-(id)commandBuffer;
-(id)description;
-(id)endEncodingAndRetrieveProgramAddressTable;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 ;
-(void)dealloc;
-(void)drawMeshThreadgroups:(struct ? )arg0 threadsPerObjectThreadgroup:(struct ? )arg1 threadsPerMeshThreadgroup:(struct ? )arg2 ;
-(void)drawMeshThreadgroupsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 threadsPerObjectThreadgroup:(struct ? )arg2 threadsPerMeshThreadgroup:(struct ? )arg3 ;
-(void)drawMeshThreads:(struct ? )arg0 threadsPerObjectThreadgroup:(struct ? )arg1 threadsPerMeshThreadgroup:(struct ? )arg2 ;
-(void)endEncoding;
-(void)filterCounterRangeWithFirstBatch:(unsigned int)arg0 lastBatch:(unsigned int)arg1 filterIndex:(unsigned int)arg2 ;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)invalidateCompressedTexture:(id)arg0 ;
-(void)invalidateCompressedTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)memoryBarrierNotificationWithResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)memoryBarrierNotificationWithScope:(NSUInteger)arg0 ;
-(void)popDebugGroup;
-(void)preEndEncoding;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMeshBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setMeshBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setMeshBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMeshIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setMeshSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setMeshSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setMeshSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setMeshSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setMeshTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setMeshTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setMeshVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setObjectAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setObjectBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setObjectBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setObjectIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setObjectSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setObjectSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setObjectSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setObjectTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setObjectThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setThreadgroupDistributionMode:(NSInteger)arg0 ;
-(void)setThreadgroupDistributionModeWithClusterGroupIndex:(unsigned int)arg0 ;
-(void)setThreadgroupPackingDisabled:(BOOL)arg0 ;
-(void)setTileAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;


@end


#endif