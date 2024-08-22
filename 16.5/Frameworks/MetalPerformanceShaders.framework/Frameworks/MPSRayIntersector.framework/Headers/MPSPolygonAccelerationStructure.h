// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSPOLYGONACCELERATIONSTRUCTURE_H
#define MPSPOLYGONACCELERATIONSTRUCTURE_H

@class NSArray;
@protocol MTLArgumentEncoder, MTLBuffer;


#import "MPSAccelerationStructure.h"

@interface MPSPolygonAccelerationStructure : MPSAccelerationStructure {
    unsigned int _indexType;
    NSUInteger _polygonType;
    *void _bvh;
    id<MTLArgumentEncoder> *_resourceEncoder;
    *void _resourceBufferRange;
}


@property (retain, nonatomic) NSObject<MTLBuffer> *indexBuffer;
@property (nonatomic) NSUInteger indexBufferOffset;
@property (nonatomic) unsigned int indexType;
@property (retain, nonatomic) NSObject<MTLBuffer> *maskBuffer;
@property (nonatomic) NSUInteger maskBufferOffset;
@property (retain, nonatomic) NSArray *polygonBuffers; // ivar: _polygonBuffers
@property (nonatomic) NSUInteger polygonCount;
@property (nonatomic) NSUInteger polygonType;
@property (retain, nonatomic) NSObject<MTLBuffer> *vertexBuffer;
@property (nonatomic) NSUInteger vertexBufferOffset;
@property (nonatomic) NSUInteger vertexStride; // ivar: _vertexStride


+(BOOL)supportsSecureCoding;
-(*void)bvh;
-(*void)innerNodeBufferRange;
-(*void)leafNodeBufferRange;
-(*void)pageBufferRange;
-(*void)pageTable0BufferRange;
-(*void)pageTable1BufferRange;
-(*void)primitiveIndexBufferRange;
-(BOOL)useResourceBuffer;
-(NSUInteger)branchingFactor;
-(NSUInteger)innerNodeCount;
-(NSUInteger)innerNodeStride;
-(NSUInteger)leafNodeCount;
-(id)boundingBoxBuffer;
-(id)copyPolygonAccelerationStructureWithZone:(struct _NSZone *)arg0 device:(id)arg1 group:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 group:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 group:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(id)newResourceEncoder;
-(id)statistics;
-(int)nodeLayout;
-(int)rootNodeType;
-(struct _MPSAxisAlignedBoundingBox )boundingBox;
-(void)bindResourcesWithEncoder:(id)arg0 commandBuffer:(id)arg1 retainedResources:(id)arg2 ;
-(void)dealloc;
-(void)decodePolygonAccelerationStructureWithCoder:(id)arg0 ;
-(void)encodeRefitToCommandBuffer:(id)arg0 ;
-(void)encodeResourcesToBuffer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)rebuild;
-(void)rebuildWithCompletionHandler:(id)arg0 ;
-(void)sharedInitPolygonAccelerationStructure;
-(void)validate;


@end


#endif