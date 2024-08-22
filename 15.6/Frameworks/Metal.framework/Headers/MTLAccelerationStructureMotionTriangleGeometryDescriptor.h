// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLACCELERATIONSTRUCTUREMOTIONTRIANGLEGEOMETRYDESCRIPTOR_H
#define MTLACCELERATIONSTRUCTUREMOTIONTRIANGLEGEOMETRYDESCRIPTOR_H

@class NSArray;
@protocol MTLBuffer;


#import "MTLAccelerationStructureGeometryDescriptor.h"

@interface MTLAccelerationStructureMotionTriangleGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (retain, nonatomic) NSObject<MTLBuffer> *indexBuffer; // ivar: _indexBuffer
@property (nonatomic) NSUInteger indexBufferOffset; // ivar: _indexBufferOffset
@property (nonatomic) NSUInteger indexType; // ivar: _indexType
@property (nonatomic) NSUInteger triangleCount; // ivar: _triangleCount
@property (copy, nonatomic) NSArray *vertexBuffers; // ivar: _vertexBuffers
@property (nonatomic) NSUInteger vertexStride; // ivar: _vertexStride


+(id)descriptor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif