// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENONBOARDINGMANAGER_H
#define ENONBOARDINGMANAGER_H

@class CXCallObserver;
@protocol ENOnboardingManagerDelegate;

#import <Foundation/Foundation.h>


@interface ENOnboardingManager : NSObject {
    int _screenLockNotifyToken;
    int _cameraIrisFrontNotifyToken;
    int _cameraIrisBackNotifyToken;
    int _cameraIrisBackTeleNotifyToken;
}


@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (weak, nonatomic) NSObject<ENOnboardingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;
@property (readonly, nonatomic, getter=isIdealTimeForBuddy) BOOL idealTimeForBuddy;
@property (nonatomic) BOOL isCaptureSessionRunning; // ivar: _isCaptureSessionRunning
@property (nonatomic) BOOL pendingBuddyOnboarding; // ivar: _pendingBuddyOnboarding


-(BOOL)_isInLostMode;
-(id)init;
-(void)_cameraIrisStateChangedWithToken:(int)arg0 ;
-(void)_deviceLockStateChangedWithToken:(int)arg0 ;
-(void)_observeCameraIrisNotifications;
-(void)dealloc;
-(void)setShouldObserveDeviceUnlocks:(BOOL)arg0 ;


@end


#endif