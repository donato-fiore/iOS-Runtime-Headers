// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNMETALCONTEXT_H
#define VNMETALCONTEXT_H

@class NSDictionary;
@protocol MTLCommandQueue, MTLLibrary, MTLDevice;

#import <Foundation/Foundation.h>


@interface VNMetalContext : NSObject {
    os_unfair_lock_s _lock;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLLibrary> *_library;
    NSDictionary *_wisdomParams;
    id<MTLDevice> *_device;
}






@end


#endif