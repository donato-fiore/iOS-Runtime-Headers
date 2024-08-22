// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPISYSTEMACTIONHELPER_H
#define AXPISYSTEMACTIONHELPER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXPIFingerController.h"

@interface AXPISystemActionHelper : NSObject {
    *__IOHIDUserDevice _homeButtonUserDevice;
    NSUInteger _sysdiagnoseCancelCount;
    NSObject<OS_dispatch_queue> *_sysdiagnoseCancelCountQueue;
    AXPIFingerController *_fingerController;
}




+(id)sharedInstance;
-(BOOL)_hasScreenSwitch;
-(BOOL)isRingerSwitchOn;
-(id)init;
-(void)_activateSpeakScreen;
-(void)_handleHomeButtonDispatch:(BOOL)arg0 ;
-(void)_openCamera;
-(void)_performScrollAction:(BOOL)arg0 ;
-(void)_sendButtonEvent:(unsigned int)arg0 ;
-(void)_sendDeviceOrientationChange:(NSInteger)arg0 ;
-(void)_sendShakeEvent;
-(void)_showAlertForReboot;
-(void)_toggleAssistiveTouch;
-(void)_toggleClassicInvertColors;
-(void)_toggleColorFilters;
-(void)_toggleFullKeyboardAccess;
-(void)_toggleSmartInvert;
-(void)_toggleSwitchControl;
-(void)_toggleVoiceOver;
-(void)_toggleZoom;
-(void)_toggleZoomController;
-(void)activateHomeButton;
-(void)activateLockButton;
-(void)activatePeopleDetection;
-(void)activateSOSMode;
-(void)activateSiri;
-(void)activateSiriFromClient:(id)arg0 ;
-(void)activateTripleClick;
-(void)activateVoiceControl;
-(void)adjustSystemZoom:(NSInteger)arg0 ;
-(void)armApplePay;
-(void)confirmApplePay;
-(void)decreaseVolume;
-(void)increaseVolume;
-(void)liftHomeButtonUp;
-(void)liftLockButtonUp;
-(void)liftVolumeDownButtonUp;
-(void)liftVolumeUpButtonUp;
-(void)performActionForSystemAction:(id)arg0 ;
-(void)performActionForSystemAction:(id)arg0 fromClient:(id)arg1 ;
-(void)performSysdiagnoseWithStatusUpdateHandler:(id)arg0 ;
-(void)pressHomeButtonDown;
-(void)pressLockButtonDown;
-(void)pressVolumeDownButtonDown;
-(void)pressVolumeUpButtonDown;
-(void)rebootDevice;
-(void)revealSpotlight;
-(void)rotateLeft;
-(void)rotatePortrait;
-(void)rotateRight;
-(void)rotateUpsideDown;
-(void)shake;
-(void)startMagnifier;
-(void)takeScreenshot;
-(void)toggleAppLibrary;
-(void)toggleAppSwitcher;
-(void)toggleBackgroundSounds;
-(void)toggleCommandAndControl;
-(void)toggleControlCenter;
-(void)toggleDock;
-(void)toggleMute;
-(void)toggleNotificationCenter;
-(void)toggleQuickNote;
-(void)toggleReachability;
-(void)toggleRingerSwitch:(BOOL)arg0 ;
-(void)toggleSpotlight;
-(void)toggleTorch;
-(void)warm;


@end


#endif