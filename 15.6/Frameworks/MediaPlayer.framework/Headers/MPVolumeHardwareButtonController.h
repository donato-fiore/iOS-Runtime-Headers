// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPVOLUMEHARDWAREBUTTONCONTROLLER_H
#define MPVOLUMEHARDWAREBUTTONCONTROLLER_H

@protocol MPVolumeControllerDataSource;

#import <Foundation/Foundation.h>


@interface MPVolumeHardwareButtonController : NSObject {
    CGFloat _pendingVolumeChange;
    BOOL _debounceVolumeRepeat;
    BOOL _didRegisterForButtonNotifications;
}


@property (retain, nonatomic) NSObject<MPVolumeControllerDataSource> *activeDataSource; // ivar: _activeDataSource


+(id)sharedController;
-(CGFloat)_calculateButtonRepeatDelay;
-(id)_init;
-(void)_applicationDidBecomeActiveNotification;
-(void)_applicationWillResignActiveNotification;
-(void)_changeVolumeBy:(CGFloat)arg0 ;
-(void)_commitVolumeChange;
-(void)_registerForButtonNotificationsIfNeeded;
-(void)_unregisterForButtonNotificationsIfNeeded;
-(void)_volumeDownButtonTouchDown:(id)arg0 ;
-(void)_volumeDownButtonTouchUp:(id)arg0 ;
-(void)_volumeUpButtonTouchDown:(id)arg0 ;
-(void)_volumeUpButtonTouchUp:(id)arg0 ;
-(void)cancelVolumeEvent;
-(void)decreaseVolume;
-(void)handleVolumeButtonWithType:(NSInteger)arg0 down:(BOOL)arg1 ;
-(void)handleVolumeDownButton;
-(void)handleVolumeUpButton;
-(void)increaseVolume;


@end


#endif