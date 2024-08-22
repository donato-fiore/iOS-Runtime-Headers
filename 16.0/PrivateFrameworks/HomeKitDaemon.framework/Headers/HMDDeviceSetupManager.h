// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDEVICESETUPMANAGER_H
#define HMDDEVICESETUPMANAGER_H

@class HMFObject, NSNotificationCenter;
@protocol HMDDeviceSetupManagerDataSource;



@interface HMDDeviceSetupManager : HMFObject {
    os_unfair_lock_s _lock;
    int _proxSetupNotificationToken;
}


@property (readonly) NSObject<HMDDeviceSetupManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, getter=isRunning) BOOL running; // ivar: _running


+(id)sharedManager;
-(id)initWithDataSource:(id)arg0 notificationCenter:(id)arg1 ;
-(void)dealloc;
-(void)removeAllFollowUpItemsWithCompletion:(id)arg0 ;
-(void)startAdvertising:(NSInteger)arg0 ;
-(void)stopAdvertising:(NSInteger)arg0 ;


@end


#endif