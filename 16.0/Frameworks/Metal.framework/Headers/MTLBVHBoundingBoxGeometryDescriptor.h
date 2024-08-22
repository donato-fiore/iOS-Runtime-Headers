// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLBVHBOUNDINGBOXGEOMETRYDESCRIPTOR_H
#define MTLBVHBOUNDINGBOXGEOMETRYDESCRIPTOR_H

@class NSArray;


#import "MTLBVHGeometryDescriptor.h"

@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor

@property (retain, nonatomic) NSArray *boundingBoxBuffers; // ivar: _boundingBoxBuffers
@property (nonatomic) NSUInteger boundingBoxStride; // ivar: _boundingBoxStride


-(NSUInteger)primitiveType;
-(void)dealloc;


@end


#endif