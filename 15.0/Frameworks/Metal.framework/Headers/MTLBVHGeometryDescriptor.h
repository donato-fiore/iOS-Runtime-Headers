// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLBVHGEOMETRYDESCRIPTOR_H
#define MTLBVHGEOMETRYDESCRIPTOR_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface MTLBVHGeometryDescriptor : NSObject

@property (retain, nonatomic) NSObject<MTLBuffer> *maskBuffer; // ivar: _maskBuffer
@property (nonatomic) NSUInteger maskBufferOffset; // ivar: _maskBufferOffset
@property (nonatomic) NSUInteger primitiveCount; // ivar: _primitiveCount
@property (readonly, nonatomic) NSUInteger primitiveType;


-(void)dealloc;


@end


#endif