// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARMESHCHUNK_H
#define ARMESHCHUNK_H

@protocol MTLDevice, MTLBuffer;

#import <Foundation/Foundation.h>


@interface ARMeshChunk : NSObject {
    id<MTLDevice> *_device;
    ? _chunkID;
    vector<unsigned char, std::allocator<unsigned char>> _semanticsVector;
    ChunkMesh _chunkMesh;
}


@property ? chunkID;
@property ? chunkMesh;
@property (retain, nonatomic) NSObject<MTLBuffer> *edges; // ivar: _edges
@property (retain, nonatomic) NSObject<MTLBuffer> *faces; // ivar: _faces
@property (retain, nonatomic) NSObject<MTLBuffer> *normals; // ivar: _normals
@property (nonatomic) unsigned int numEdges; // ivar: _numEdges
@property (nonatomic) unsigned int numFaces; // ivar: _numFaces
@property (nonatomic) unsigned int numNormals; // ivar: _numNormals
@property (nonatomic) unsigned int numSemantics; // ivar: _numSemantics
@property (nonatomic) unsigned int numVertices; // ivar: _numVertices
@property (retain, nonatomic) NSObject<MTLBuffer> *semantics; // ivar: _semantics
@property ? semanticsVector;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSObject<MTLBuffer> *vertices; // ivar: _vertices
@property (nonatomic) CGFloat voxelSize; // ivar: _voxelSize


-(id)anchorForReferenceOriginTransform:(struct ? )arg0 ;
-(id)initWithChunk:(struct ChunkMesh )arg0 device:(id)arg1 timestamp:(CGFloat)arg2 voxelSize:(CGFloat)arg3 ;
-(void)addSemantics:(char *)arg0 count:(unsigned int)arg1 size:(unsigned int)arg2 ;
-(void)convertToWorldSourceFromVisionSource:(id)arg0 relativeTransform:(struct ? )arg1 rotationOnly:(BOOL)arg2 ;


@end


#endif