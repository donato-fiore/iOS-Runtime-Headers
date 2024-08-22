// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMAUDIOACCESSORYMANAGERINTERNAL_H
#define CMAUDIOACCESSORYMANAGERINTERNAL_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface CMAudioAccessoryManagerInternal : NSObject {
    os_unfair_lock_s fSampleLock;
    *Dispatcher fAudioAccessoryAccelerometerDispatcher;
    CGFloat fAudioAccessoryAccelerometerUpdateInterval;
    id *fAudioAccessoryAccelerometerHandler;
    NSOperationQueue *fAudioAccessoryAccelerometerQueue;
    Sample fLatestAudioAccessoryAccelerometerSample;
    *Dispatcher fAudioAccessoryGyroDispatcher;
    CGFloat fAudioAccessoryGyroUpdateInterval;
    id *fAudioAccessoryGyroHandler;
    NSOperationQueue *fAudioAccessoryGyroQueue;
    Sample fLatestAudioAccessoryGyroSample;
    *Dispatcher fAudioAccessoryDeviceMotionDispatcher;
    *Dispatcher fAudioAccessoryDeviceMotionConfigDispatcher;
    CGFloat fAudioAccessoryDeviceMotionUpdateInterval;
    id *fAudioAccessoryDeviceMotionHandler;
    NSOperationQueue *fAudioAccessoryDeviceMotionQueue;
    CMOQuaternion fFrameRotation;
    *Dispatcher fAudioAccessoryDeviceMotionStatusDispatcher;
    id *fAudioAccessoryDeviceMotionStatusHandler;
    NSOperationQueue *fAudioAccessoryDeviceMotionStatusQueue;
    BOOL fAudioAccessoryAccelerometerAvailable;
    BOOL fAudioAccessoryGyroAvailable;
    BOOL fAudioAccessoryDeviceMotionAvailable;
}




-(id)init;


@end


#endif