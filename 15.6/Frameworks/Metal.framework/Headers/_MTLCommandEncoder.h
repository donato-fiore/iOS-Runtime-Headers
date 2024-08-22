// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 ;
-(void)dealloc;
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
-(void)setTileAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;


@end


#endif