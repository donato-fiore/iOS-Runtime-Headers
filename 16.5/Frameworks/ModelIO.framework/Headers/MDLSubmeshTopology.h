// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLSUBMESHTOPOLOGY_H
#define MDLSUBMESHTOPOLOGY_H

@protocol MDLMeshBuffer;

#import <Foundation/Foundation.h>


@interface MDLSubmeshTopology : NSObject

@property (nonatomic) NSUInteger edgeCreaseCount; // ivar: _edgeCreaseCount
@property (retain, nonatomic) NSObject<MDLMeshBuffer> *edgeCreaseIndices; // ivar: _edgeCreaseIndices
@property (retain, nonatomic) NSObject<MDLMeshBuffer> *edgeCreases; // ivar: _edgeCreases
@property (nonatomic) NSUInteger faceCount; // ivar: _faceCount
@property (retain, nonatomic) NSObject<MDLMeshBuffer> *faceTopology; // ivar: _faceTopology
@property (nonatomic) NSUInteger holeCount; // ivar: _holeCount
@property (retain, nonatomic) NSObject<MDLMeshBuffer> *holes; // ivar: _holes
@property (nonatomic) NSUInteger vertexCreaseCount; // ivar: _vertexCreaseCount
@property (retain, nonatomic) NSObject<MDLMeshBuffer> *vertexCreaseIndices; // ivar: _vertexCreaseIndices
@property (retain, nonatomic) NSObject<MDLMeshBuffer> *vertexCreases; // ivar: _vertexCreases


+(id)decodeTopologyWithCoder:(id)arg0 allocator:(id)arg1 ;
-(id)initWithSubmesh:(id)arg0 ;
-(void)encodeTopologyWithCoder:(id)arg0 allocator:(id)arg1 ;


@end


#endif