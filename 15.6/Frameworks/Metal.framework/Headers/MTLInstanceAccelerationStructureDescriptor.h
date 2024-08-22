// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLINSTANCEACCELERATIONSTRUCTUREDESCRIPTOR_H
#define MTLINSTANCEACCELERATIONSTRUCTUREDESCRIPTOR_H

@class NSArray;
@protocol MTLBuffer;


#import "MTLAccelerationStructureDescriptor.h"

@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {
    BOOL _overriddenInstanceDescriptorStride;
    NSUInteger _instanceDescriptorStride;
}


@property (nonatomic) NSUInteger instanceCount; // ivar: _instanceCount
@property (retain, nonatomic) NSObject<MTLBuffer> *instanceDescriptorBuffer; // ivar: _instanceDescriptorBuffer
@property (nonatomic) NSUInteger instanceDescriptorBufferOffset; // ivar: _instanceDescriptorBufferOffset
@property (nonatomic) NSUInteger instanceDescriptorStride;
@property (nonatomic) NSUInteger instanceDescriptorType; // ivar: _instanceDescriptorType
@property (retain, nonatomic) NSArray *instancedAccelerationStructures; // ivar: _instancedAccelerationStructures
@property (retain, nonatomic) NSObject<MTLBuffer> *motionTransformBuffer; // ivar: _motionTransformBuffer
@property (nonatomic) NSUInteger motionTransformBufferOffset; // ivar: _motionTransformBufferOffset
@property (nonatomic) NSUInteger motionTransformCount; // ivar: _motionTransformCount


+(id)descriptor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif