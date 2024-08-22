// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICESETUPMANAGER_H
#define HMDDEVICESETUPMANAGER_H

@class HMFObject, NSNotificationCenter;
@protocol HMDarwinNotificationProvider;


#import "HMDCoreFollowUpManager.h"

@interface HMDDeviceSetupManager : HMFObject {
    os_unfair_lock_s _lock;
    int _proxSetupNotificationToken;
}


@property (readonly) NSObject<HMDarwinNotificationProvider> *darwinNotificationProvider; // ivar: _darwinNotificationProvider
@property (readonly) HMDCoreFollowUpManager *followUpManager; // ivar: _followUpManager
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, getter=isRunning) BOOL running; // ivar: _running


+(id)sharedManager;
-(id)initWithNotificationCenter:(id)arg0 followUpManager:(id)arg1 darwinNotificationProvider:(id)arg2 ;
-(void)dealloc;


@end


#endif