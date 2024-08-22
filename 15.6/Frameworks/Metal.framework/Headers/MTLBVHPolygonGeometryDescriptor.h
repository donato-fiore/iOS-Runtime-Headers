// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLBVHPOLYGONGEOMETRYDESCRIPTOR_H
#define MTLBVHPOLYGONGEOMETRYDESCRIPTOR_H

@class NSArray;
@protocol MTLBuffer;


#import "MTLBVHGeometryDescriptor.h"

@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor

@property (retain, nonatomic) NSObject<MTLBuffer> *indexBuffer; // ivar: _indexBuffer
@property (nonatomic) NSUInteger indexBufferOffset; // ivar: _indexBufferOffset
@property (nonatomic) NSUInteger indexType; // ivar: _indexType
@property (nonatomic) NSUInteger polygonType; // ivar: _polygonType
@property (retain, nonatomic) NSArray *vertexBuffers; // ivar: _vertexBuffers
@property (nonatomic) NSUInteger vertexStride; // ivar: _vertexStride


-(NSUInteger)primitiveType;
-(void)dealloc;


@end


#endif