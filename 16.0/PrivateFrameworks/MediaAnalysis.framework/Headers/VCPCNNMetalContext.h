// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNMETALCONTEXT_H
#define VCPCNNMETALCONTEXT_H

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>


@interface VCPCNNMetalContext : NSObject

@property (retain) NSObject<MTLCommandBuffer> *commandBuffer; // ivar: _commandBuffer
@property (retain) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (retain) NSObject<MTLDevice> *device; // ivar: _device


+(BOOL)supportGPU;
+(BOOL)supportVectorForward;
+(id)sharedCommandQueue;
-(id)initNewContext:(BOOL)arg0 ;
-(int)execute;


@end


#endif