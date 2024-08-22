// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSPOLYGONBUFFER_H
#define MPSPOLYGONBUFFER_H

@protocol NSCopying, NSSecureCoding, MTLBuffer;

#import <Foundation/Foundation.h>


@interface MPSPolygonBuffer : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSObject<MTLBuffer> *indexBuffer; // ivar: _indexBuffer
@property (nonatomic) NSUInteger indexBufferOffset; // ivar: _indexBufferOffset
@property (retain, nonatomic) NSObject<MTLBuffer> *maskBuffer; // ivar: _maskBuffer
@property (nonatomic) NSUInteger maskBufferOffset; // ivar: _maskBufferOffset
@property (nonatomic) NSUInteger polygonCount; // ivar: _polygonCount
@property (retain, nonatomic) NSObject<MTLBuffer> *vertexBuffer; // ivar: _vertexBuffer
@property (nonatomic) NSUInteger vertexBufferOffset; // ivar: _vertexBufferOffset


+(BOOL)supportsSecureCoding;
+(id)polygonBuffer;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)validateWithVerticesPerPolygon:(NSUInteger)arg0 vertexStride:(NSUInteger)arg1 indexStride:(NSUInteger)arg2 ;


@end


#endif