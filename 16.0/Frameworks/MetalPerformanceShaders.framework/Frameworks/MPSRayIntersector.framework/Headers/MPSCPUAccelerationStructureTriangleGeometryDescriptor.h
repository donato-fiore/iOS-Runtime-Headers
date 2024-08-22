// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCPUACCELERATIONSTRUCTURETRIANGLEGEOMETRYDESCRIPTOR_H
#define MPSCPUACCELERATIONSTRUCTURETRIANGLEGEOMETRYDESCRIPTOR_H



#import "MPSCPUAccelerationStructureGeometryDescriptor.h"

@interface MPSCPUAccelerationStructureTriangleGeometryDescriptor : MPSCPUAccelerationStructureGeometryDescriptor

@property (nonatomic) *void indexData; // ivar: _indexData
@property (nonatomic) unsigned int indexDataType; // ivar: _indexDataType
@property (nonatomic) NSUInteger triangleCount; // ivar: _triangleCount
@property (nonatomic) *void vertexData; // ivar: _vertexData
@property (nonatomic) NSUInteger vertexStride; // ivar: _vertexStride


-(id)init;


@end


#endif