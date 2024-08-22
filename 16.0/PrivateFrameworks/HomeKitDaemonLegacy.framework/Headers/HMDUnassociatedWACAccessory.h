// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUNASSOCIATEDWACACCESSORY_H
#define HMDUNASSOCIATEDWACACCESSORY_H

@class HMFTimer, NSString;
@protocol HMFLogging, HMFTimerDelegate, OS_dispatch_queue, HMDWACDevice, HMDWACAccessoryConfigurationDelegate;


#import "HMDUnassociatedAccessory.h"

@interface HMDUnassociatedWACAccessory : HMDUnassociatedAccessory <HMFLogging, HMFTimerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<HMDWACDevice> *_wacDevice;
    id *_completionHandler;
    HMFTimer *_handoffExpirationTimer;
    NSInteger _state;
    HMDUnassociatedAccessory *_postWACAccessory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDWACAccessoryConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, setter=setWACDevice:) NSObject<HMDWACDevice> *wacDevice;
@property (readonly) NSString *wacDeviceID; // ivar: wacDeviceID


+(id)logCategory;
-(NSUInteger)transportTypes;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 messageDispatcher:(id)arg3 wacDevice:(id)arg4 ;
-(id)logIdentifier;
-(void)_abort:(id)arg0 ;
-(void)_configureDevice;
-(void)_configureDeviceCompleted:(id)arg0 ;
-(void)_postWACMatchTimeout;
-(void)_postWACMatchingAccessoryFound:(id)arg0 ;
-(void)_requestUserPermission;
-(void)_userPermissionResponse:(BOOL)arg0 ;
-(void)_waitForPostWACMatch;
-(void)cancelConfigurationWithCompletionHandler:(id)arg0 ;
-(void)startConfigurationWithCompletionHandler:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateWithMatchingUnassociatedAccessory:(id)arg0 ;


@end


#endif