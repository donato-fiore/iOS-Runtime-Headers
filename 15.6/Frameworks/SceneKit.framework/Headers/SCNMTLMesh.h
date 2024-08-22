// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMTLMESH_H
#define SCNMTLMESH_H

@class MTLVertexDescriptor, NSArray, MTLStageInputOutputDescriptor;
@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface SCNMTLMesh : NSObject {
    MTLVertexDescriptor *_vertexDescriptor;
    NSUInteger _vertexDescriptorHash;
    NSUInteger _tessellationVertexDescriptorHash;
}


@property (copy, nonatomic) NSArray *buffers; // ivar: _buffers
@property (copy, nonatomic) NSArray *elements; // ivar: _elements
@property (nonatomic) NSInteger mutabilityTimestamp; // ivar: _mutabilityTimestamp
@property (retain, nonatomic) MTLStageInputOutputDescriptor *stageDescriptor; // ivar: _stageDescriptor
@property (readonly, nonatomic) MTLVertexDescriptor *tessellationVertexDescriptor; // ivar: _tessellationVertexDescriptor
@property (readonly, nonatomic) NSUInteger tessellationVertexDescriptorHash;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (readonly, nonatomic) NSUInteger vertexDescriptorHash;
@property (nonatomic) NSInteger verticesCount; // ivar: verticesCount
@property (retain, nonatomic) NSObject<MTLBuffer> *volatileBuffer; // ivar: _volatileBuffer
@property (nonatomic) NSUInteger volatileOffset; // ivar: volatileOffset
@property (nonatomic) NSUInteger volatileSize; // ivar: volatileSize
@property (nonatomic) NSUInteger volatileStride; // ivar: volatileStride


-(id)bufferForAttribute:(NSInteger)arg0 ;
-(id)description;
-(void)buildTessellationVertexDescriptorIfNeeded;
-(void)dealloc;


@end


#endif