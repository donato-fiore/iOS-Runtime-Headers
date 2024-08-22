// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCOMPUTEENCODER_H
#define MPSCOMPUTEENCODER_H

@class NSString;
@protocol MTLComputeCommandEncoder, MTLCommandEncoder, MTLComputePipelineState, MTLDevice;

#import <Foundation/Foundation.h>


@interface MPSComputeEncoder : NSObject <MTLComputeCommandEncoder, MTLCommandEncoder>

 {
    id<MTLComputeCommandEncoder> *_encoder;
    id<MTLComputePipelineState> *_state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger dispatchType;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)computeCommandEncoder;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 withDispatchType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)dispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setComputePipelineState:(id)arg0 ;


@end


#endif