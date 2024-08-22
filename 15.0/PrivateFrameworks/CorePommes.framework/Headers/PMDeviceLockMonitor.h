// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMDEVICELOCKMONITOR_H
#define PMDEVICELOCKMONITOR_H

@protocol OS_dispatch_queue, PMDeviceLockMonitorDelegate;

#import <Foundation/Foundation.h>


@interface PMDeviceLockMonitor : NSObject {
    int _lockStateNotifyToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (weak) NSObject<PMDeviceLockMonitorDelegate> *delegate; // ivar: _delegate
@property (weak) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property BOOL deviceUnlockedSinceBoot; // ivar: _deviceUnlockedSinceBoot
@property BOOL protectedDataAvailable; // ivar: _protectedDataAvailable


+(id)log;
+(id)sharedInstance;
-(id)init;
-(void)_deviceLockSetupNotification;
-(void)dealloc;


@end


#endif