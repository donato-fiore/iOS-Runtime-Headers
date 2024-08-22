// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSHAREDGPUDEVICE_H
#define ARSHAREDGPUDEVICE_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface ARSharedGPUDevice : NSObject

@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device


+(id)sharedInstance;


@end


#endif