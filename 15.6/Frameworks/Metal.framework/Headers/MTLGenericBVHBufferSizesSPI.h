// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLGENERICBVHBUFFERSIZESSPI_H
#define MTLGENERICBVHBUFFERSIZESSPI_H


#import <Foundation/Foundation.h>


@interface MTLGenericBVHBufferSizesSPI : NSObject

@property (nonatomic) NSUInteger geometryBufferSize; // ivar: _geometryBufferSize
@property (nonatomic) NSUInteger headerBufferSize; // ivar: _headerBufferSize
@property (nonatomic) NSUInteger innerNodeBufferSize; // ivar: _innerNodeBufferSize
@property (nonatomic) NSUInteger instanceTransformBufferSize; // ivar: _instanceTransformBufferSize
@property (nonatomic) NSUInteger leafNodeBufferSize; // ivar: _leafNodeBufferSize
@property (nonatomic) NSUInteger primitiveBufferSize; // ivar: _primitiveBufferSize
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


-(id)initWithVersion:(NSUInteger)arg0 ;


@end


#endif