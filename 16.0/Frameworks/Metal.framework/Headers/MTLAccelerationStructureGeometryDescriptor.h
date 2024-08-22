// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLACCELERATIONSTRUCTUREGEOMETRYDESCRIPTOR_H
#define MTLACCELERATIONSTRUCTUREGEOMETRYDESCRIPTOR_H

@class NSString;
@protocol NSCopying, MTLBuffer;

#import <Foundation/Foundation.h>


@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation; // ivar: _allowDuplicateIntersectionFunctionInvocation
@property (nonatomic) NSUInteger intersectionFunctionTableOffset; // ivar: _intersectionFunctionTableOffset
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL opaque; // ivar: _opaque
@property (retain, nonatomic) NSObject<MTLBuffer> *primitiveDataBuffer; // ivar: _primitiveDataBuffer
@property (nonatomic) NSUInteger primitiveDataBufferOffset; // ivar: _primitiveDataBufferOffset
@property (nonatomic) NSUInteger primitiveDataElementSize; // ivar: _primitiveDataElementSize
@property (nonatomic) NSUInteger primitiveDataStride; // ivar: _primitiveDataStride


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif