// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLGENERICBVHBUFFERSSPI_H
#define MTLGENERICBVHBUFFERSSPI_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface MTLGenericBVHBuffersSPI : NSObject

@property (retain, nonatomic) NSObject<MTLBuffer> *geometryBuffer; // ivar: _geometryBuffer
@property (nonatomic) NSUInteger geometryBufferOffset; // ivar: _geometryBufferOffset
@property (retain, nonatomic) NSObject<MTLBuffer> *headerBuffer; // ivar: _headerBuffer
@property (nonatomic) NSUInteger headerBufferOffset; // ivar: _headerBufferOffset
@property (retain, nonatomic) NSObject<MTLBuffer> *innerNodeBuffer; // ivar: _innerNodeBuffer
@property (nonatomic) NSUInteger innerNodeBufferOffset; // ivar: _innerNodeBufferOffset
@property (retain, nonatomic) NSObject<MTLBuffer> *instanceTransformBuffer; // ivar: _instanceTransformBuffer
@property (nonatomic) NSUInteger instanceTransformBufferOffset; // ivar: _instanceTransformBufferOffset
@property (retain, nonatomic) NSObject<MTLBuffer> *leafNodeBuffer; // ivar: _leafNodeBuffer
@property (nonatomic) NSUInteger leafNodeBufferOffset; // ivar: _leafNodeBufferOffset
@property (retain, nonatomic) NSObject<MTLBuffer> *perPrimitiveDataBuffer; // ivar: _perPrimitiveDataBuffer
@property (nonatomic) NSUInteger perPrimitiveDataBufferOffset; // ivar: _perPrimitiveDataBufferOffset
@property (retain, nonatomic) NSObject<MTLBuffer> *primitiveBuffer; // ivar: _primitiveBuffer
@property (nonatomic) NSUInteger primitiveBufferOffset; // ivar: _primitiveBufferOffset
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


-(id)init;
-(id)initWithVersion:(NSUInteger)arg0 ;


@end


#endif