// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLACCELERATIONSTRUCTUREBOUNDINGBOXGEOMETRYDESCRIPTOR_H
#define MTLACCELERATIONSTRUCTUREBOUNDINGBOXGEOMETRYDESCRIPTOR_H

@protocol MTLBuffer;


#import "MTLAccelerationStructureGeometryDescriptor.h"

@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (retain, nonatomic) NSObject<MTLBuffer> *boundingBoxBuffer; // ivar: _boundingBoxBuffer
@property (nonatomic) NSUInteger boundingBoxBufferOffset; // ivar: _boundingBoxBufferOffset
@property (nonatomic) NSUInteger boundingBoxCount; // ivar: _boundingBoxCount
@property (nonatomic) NSUInteger boundingBoxStride; // ivar: _boundingBoxStride


+(id)descriptor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif