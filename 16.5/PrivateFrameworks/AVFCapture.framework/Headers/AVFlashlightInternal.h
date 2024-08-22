// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFLASHLIGHTINTERNAL_H
#define AVFLASHLIGHTINTERNAL_H

@class AVWeakReference;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVFlashlightInternal : NSObject {
    AVWeakReference *weakReference;
    *OpaqueFigFlashlight flashlight;
    BOOL available;
    BOOL overheated;
    float flashlightLevel;
    *OpaqueFigSimpleMutex lock;
    NSObject<OS_dispatch_queue> *serverReconnectQueue;
}






@end


#endif