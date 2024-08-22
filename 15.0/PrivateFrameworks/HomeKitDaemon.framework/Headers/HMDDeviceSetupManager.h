// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDEVICESETUPMANAGER_H
#define HMDDEVICESETUPMANAGER_H

@class HMFObject, NSNotificationCenter;
@protocol HMFLocking, HMDDeviceSetupManagerExternalObjectSource;



@interface HMDDeviceSetupManager : HMFObject {
    id<HMFLocking> *_lock;
    int _proxSetupNotificationToken;
}


@property (readonly) NSObject<HMDDeviceSetupManagerExternalObjectSource> *externalObjectSource; // ivar: _externalObjectSource
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, getter=isRunning) BOOL running; // ivar: _running


+(id)sharedManager;
-(id)initWithExternalObjectSource:(id)arg0 notificationCenter:(id)arg1 ;
-(void)dealloc;
-(void)startAdvertising;
-(void)stopAdvertising;


@end


#endif