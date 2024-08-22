// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSPREDICATEDCOMMANDENCODER_H
#define MPSPREDICATEDCOMMANDENCODER_H

@class NSString;
@protocol MTLComputeCommandEncoder, MTLComputePipelineState, MTLDevice;

#import <Foundation/Foundation.h>

#import "MPSCommandBuffer.h"

@interface MPSPredicatedCommandEncoder : NSObject <MTLComputeCommandEncoder>

 {
    MPSCommandBuffer *_owningMPSCommandBuffer;
    *void _mpsDevice;
    id<MTLComputePipelineState> *_userBoundPipelineState;
    UserBufferBindingData_s _userBinding1;
    UserBufferBindingData_s _userBinding2;
    UserBufferBindingData_s _userBinding3;
}


@property (readonly, nonatomic) NSObject<MTLComputeCommandEncoder> *computeCommandEncoder; // ivar: _originalCommandEncoder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger dispatchType;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


+(id)predicatedEncoderWithMPSCommandBuffer:(id)arg0 commandEncoder:(id)arg1 mpsDevice:(*void)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithMPSCommandBuffer:(id)arg0 commandEncoder:(id)arg1 mpsDevice:(*void)arg2 ;
-(void)dealloc;
-(void)dispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setComputePipelineState:(id)arg0 ;


@end


#endif