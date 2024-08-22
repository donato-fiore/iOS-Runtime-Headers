// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSYSTEMMONITOR_H
#define IMSYSTEMMONITOR_H

@class NSHashTable, NSDate, NSTimer, NSString;

#import <Foundation/Foundation.h>


@interface IMSystemMonitor : NSObject

@property (nonatomic) int _dataProtectionState; // ivar: _dataProtectionState
@property (nonatomic) CGFloat _delayTime; // ivar: _delayTime
@property (retain, nonatomic) NSHashTable *_earlyListeners; // ivar: _earlyListeners
@property (nonatomic) BOOL _idleOverride; // ivar: _idleOverride
@property (retain, nonatomic) NSDate *_idleStart; // ivar: _idleStart
@property (retain, nonatomic) NSHashTable *_listeners; // ivar: _listeners
@property (retain, nonatomic) NSTimer *_timer; // ivar: _timer
@property (nonatomic) BOOL _underFirstLock; // ivar: _underFirstLock
@property (retain, nonatomic) NSString *_userID; // ivar: _userID
@property (readonly, retain, nonatomic) NSDate *dateScreenLightLastChanged; // ivar: _dateScreenLightLastChanged
@property (readonly, retain, nonatomic) NSDate *dateSystemLockLastChanged; // ivar: _dateSystemLockLastChanged
@property (nonatomic, setter=setActive:) BOOL isActive; // ivar: _active
@property (readonly, nonatomic) BOOL isBackingUp; // ivar: _backingUp
@property (nonatomic) BOOL isFastUserSwitched; // ivar: _switchedOut
@property (readonly, nonatomic) BOOL isInBackground; // ivar: _inBackground
@property (readonly, nonatomic) BOOL isScreenLit; // ivar: _screenLit
@property (readonly, nonatomic) BOOL isScreenLocked; // ivar: _screenLocked
@property (readonly, nonatomic) BOOL isScreenSaverActive; // ivar: _screensaverActive
@property (readonly, nonatomic) BOOL isSetup;
@property (readonly, nonatomic) BOOL isSystemIdle;
@property (readonly, nonatomic) BOOL isSystemLocked; // ivar: _systemLocked
@property (readonly, nonatomic) BOOL isUnderDataProtectionLock;
@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;
@property (nonatomic) os_unfair_lock_s ivarLock; // ivar: _ivarLock
@property (nonatomic) BOOL listeningForSetupAssistantNotifications; // ivar: _listeningForSetupAssistantNotifications
@property (nonatomic) BOOL receivesMemoryWarnings; // ivar: _receivesMemoryWarnings
@property (nonatomic) NSInteger resignActiveCount; // ivar: _resignActiveCount
@property (readonly, nonatomic) CGFloat systemIdleTime;
@property (readonly, nonatomic) BOOL systemIsShuttingDown;
@property (readonly, nonatomic) BOOL systemIsSleeping; // ivar: _willSleep
@property (nonatomic) int userIdleToken; // ivar: _userIdleToken
@property (nonatomic) BOOL usesPowerNotifications; // ivar: _usesPowerNotifications
@property (nonatomic) BOOL usesSystemIdleState; // ivar: _usesSystemIdleState
@property (nonatomic) BOOL watchesDataProtectionLockState; // ivar: _watchesDataProtectionLockState
@property (nonatomic) BOOL watchesScreenLightState; // ivar: _watchesScreenLightState
@property (nonatomic) BOOL watchesSystemLockState; // ivar: _watchesSystemLockState


+(id)sharedInstance;
-(BOOL)_deviceStillUnderFirstLock;
-(BOOL)_isUnderDataProtectionLockForState:(int)arg0 ;
-(id)init;
-(void)_addEarlyListener:(id)arg0 ;
-(void)_alreadyLocked_clearIdleTimer;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)_applicationWillAddDeactivationReason:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_armIdleTimer;
-(void)_checkIdleTime:(id)arg0 ;
-(void)_checkRestoredFromBackup;
-(void)_clearIdleTimer;
-(void)_deliverNotificationSelector:(SEL)arg0 ;
-(void)_forceResumed;
-(void)_forceSuspended;
-(void)_handleLoginWindowNotification:(id)arg0 ;
-(void)_notificationCenterDidDisappear:(id)arg0 ;
-(void)_notificationCenterWillAppear:(id)arg0 ;
-(void)_overrideAndDisableIdleTimer:(BOOL)arg0 ;
-(void)_postScreenLocked;
-(void)_postScreenSaverStarted;
-(void)_receivedMemoryNotification;
-(void)_registerForLoginWindowNotifications;
-(void)_registerForRestoreNotifications;
-(void)_registerForSetupNotifications;
-(void)_removeEarlyListener:(id)arg0 ;
-(void)_restoreDidStart;
-(void)_restoreDidStop;
-(void)_resume:(id)arg0 ;
-(void)_resumeEventsOnly:(id)arg0 ;
-(void)_screenLocked:(id)arg0 ;
-(void)_screenSaverStarted:(id)arg0 ;
-(void)_screenSaverStopped:(id)arg0 ;
-(void)_screenUnlocked:(id)arg0 ;
-(void)_setDataProtectionLockState:(int)arg0 ;
-(void)_setIdleState:(BOOL)arg0 ;
-(void)_setSystemLockState:(BOOL)arg0 ;
-(void)_setSystemScreenState:(BOOL)arg0 ;
-(void)_setupStateChanged;
-(void)_suspend:(id)arg0 ;
-(void)_suspendEventsOnly:(id)arg0 ;
-(void)_systemDidWake;
-(void)_systemWillShutdown;
-(void)_systemWillSleep;
-(void)_unregisterForLoginWindowNotifications;
-(void)_unregisterForRestoreNotifications;
-(void)_updateIdleState;
-(void)addListener:(id)arg0 ;
-(void)dealloc;
-(void)removeListener:(id)arg0 ;


@end


#endif