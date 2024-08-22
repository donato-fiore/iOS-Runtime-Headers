// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTDEVICEDISCOVERYSESSIONINTERNAL_H
#define AVOUTPUTDEVICEDISCOVERYSESSIONINTERNAL_H

@protocol OS_dispatch_queue, AVOutputDeviceDiscoverySessionImpl;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceDiscoverySessionInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVOutputDeviceDiscoverySessionImpl> *impl;
    NSInteger discoveryMode;
}






@end


#endif