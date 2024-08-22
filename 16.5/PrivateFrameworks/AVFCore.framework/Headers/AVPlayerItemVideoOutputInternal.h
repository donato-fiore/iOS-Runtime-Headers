// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERITEMVIDEOOUTPUTINTERNAL_H
#define AVPLAYERITEMVIDEOOUTPUTINTERNAL_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVWeakReferencingDelegateStorage.h"
#import "AVVideoOutputSettings.h"

@interface AVPlayerItemVideoOutputInternal : NSObject {
    *OpaqueCMTimebase timebase;
    CGFloat currentRate;
    *OpaqueFigVisualContext vc;
    AVWeakReference *playerItemWeakReference;
    AVWeakReferencingDelegateStorage *delegateStorage;
    *OpaqueVTPixelBufferConformer pixelBufferConformer;
    NSObject<OS_dispatch_queue> *stateQueue;
    NSObject<OS_dispatch_source> *delegateWakeupSource;
    CGFloat advanceWakeUpInterval;
    BOOL advanceWakeUpIntervalIsValid;
    ? wakeUpImageTime;
    BOOL immediateWakeUp;
    NSInteger clientStateOnRequestedMediaDataChangeNotification;
    BOOL suppressesPlayerRendering;
    BOOL shouldTagBuffersWithInfo;
    AVVideoOutputSettings *videoSettings;
}






@end


#endif