// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMDEVICEORIENTATIONMANAGERINTERNAL_H
#define CMDEVICEORIENTATIONMANAGERINTERNAL_H

@class NSOperationQueue;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CMDeviceOrientationManagerInternal : NSObject {
    os_unfair_lock_s fSampleLock;
    *Dispatcher fDeviceOrientationDispatcher;
    id *fDeviceOrientationHandler;
    NSOperationQueue *fDeviceOrientationQueue;
    NSObject<OS_dispatch_semaphore> *fDeviceOrientationSemaphore;
    BOOL fDidSignalSemaphore;
    int fOrientationCallbackMode;
    BOOL fEnableOrientationNotification;
    Sample fLatestDeviceOrientationSample;
    Sample fLastSignificantOrientationSample;
}




-(id)init;
-(void)dealloc;


@end


#endif