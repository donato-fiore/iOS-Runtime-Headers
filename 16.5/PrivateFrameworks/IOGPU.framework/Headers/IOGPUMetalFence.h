// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALFENCE_H
#define IOGPUMETALFENCE_H

@class MTLFence, IOGPUMetalDevice<MTLDevice>, NSString;
@protocol MTLFenceSPI, MTLDevice;


#import "IOGPUMTLFence.h"

@interface IOGPUMetalFence : MTLFence <MTLFenceSPI>

 {
    IOGPUMetalDevice<MTLDevice> *_device;
    IOGPUMTLFence *_fence;
    unsigned int _fenceIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;


@end


#endif