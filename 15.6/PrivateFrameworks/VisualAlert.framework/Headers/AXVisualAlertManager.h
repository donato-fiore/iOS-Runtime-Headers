// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXVISUALALERTMANAGER_H
#define AXVISUALALERTMANAGER_H

@class AXDispatchTimer, NSDictionary, NSArray, NSMutableArray, NSString, DNDStateService;
@protocol DNDStateUpdateListener;

#import <Foundation/Foundation.h>

#import "VISAXNotificationHandler.h"
#import "AXCameraTorchManagerBackgroundAdapter.h"

@interface AXVisualAlertManager : NSObject <DNDStateUpdateListener>

 {
    NSUInteger _alertTypes;
    AXDispatchTimer *_timer;
    AXDispatchTimer *_torchForceShutdownTimer;
    NSDictionary *_patterns;
    NSUInteger _activePatternCursor;
    BOOL _shouldRepeatPattern;
    NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
    NSArray *_notificationHandlers;
    VISAXNotificationHandler *_deviceLockStateChangedNotificationHandler;
    VISAXNotificationHandler *_torchInControlCenterWasEnabledNotificationHandler;
    BOOL _isDeviceLocked;
    BOOL _isQuietModeEnabled;
    BOOL _isRingerSwitchSilent;
    BOOL _isTorchEnabledInControlCenter;
    BOOL _captureSessionRunning;
    BOOL _videoConferenceCallRinging;
    BOOL _skipAutomaticStopOnUserInteraction;
    NSMutableArray *_bulletins;
}


@property (retain, nonatomic, setter=_setActivePattern:) NSDictionary *_activePattern; // ivar: _activePattern
@property (readonly, nonatomic) AXCameraTorchManagerBackgroundAdapter *_asyncManagerAdapter; // ivar: _asyncManagerAdapter
@property (readonly, nonatomic) NSDictionary *_patterns;
@property (readonly, nonatomic, getter=_isTorchDeviceOn) BOOL _torchDeviceOn; // ivar: _torchDeviceOn
@property (readonly, nonatomic, getter=_isTorchDeviceOpen) BOOL _torchDeviceOpen; // ivar: _torchDeviceOpen
@property (nonatomic, setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:) NSUInteger _typeToUseForVisualAlertAfterCaptureSessionStopsRunning; // ivar: _typeToUseForVisualAlertAfterCaptureSessionStopsRunning
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DNDStateService *disturbanceService; // ivar: disturbanceService
@property (readonly) NSUInteger hash;
@property (nonatomic) int ringerStateNotifyToken; // ivar: _ringerStateNotifyToken
@property (readonly) Class superclass;


+(id)sharedVisualAlertManager;
+(void)initialize;
-(BOOL)_hasVideoConferenceCameraTorchManager;
-(BOOL)_isTorchEnabledInControlCenter;
-(BOOL)_shouldHandleVisualAlertsForVideoConferenceCallsInConferenceFramework;
-(BOOL)_supportsVisualAlertsForVideoConferenceCalls;
-(id)_normalizedStrobePatternForOriginalPattern:(id)arg0 ;
-(id)existingBulletinForBulletin:(id)arg0 ;
-(id)init;
-(void)_beginVisualAlertForType:(NSUInteger)arg0 repeat:(BOOL)arg1 ;
-(void)_beginVisualAlertForType:(NSUInteger)arg0 repeat:(BOOL)arg1 skipAutomaticStopOnUserInteraction:(BOOL)arg2 bundleId:(id)arg3 ;
-(void)_endVisualAlert;
-(void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)arg0 ;
-(void)_handleBeginVisualAlertForIncomingCall;
-(void)_handleBeginVisualAlertForIncomingVideoConferenceCall;
-(void)_handleCaptureSessionDidStartRunning;
-(void)_handleCaptureSessionDidStopRunning;
-(void)_handleDeviceWasLocked;
-(void)_handleDeviceWasUnlocked;
-(void)_handleEndVisualAlertForAlarm;
-(void)_handleEndVisualAlertForIncomingCall;
-(void)_handleEndVisualAlertForIncomingVideoConferenceCall;
-(void)_handleLockButtonPressed;
-(void)_handleQuietModeWasDisabled;
-(void)_handleQuietModeWasEnabled;
-(void)_handleRingerSwitchToggled;
-(void)_handleSecondaryVisualAlertManagerDidStart;
-(void)_handleTorchInControlCenterWasDisabled;
-(void)_handleTorchInControlCenterWasEnabled;
-(void)_handleVideoConferenceCallRinging;
-(void)_handleVisualAlertForExternalApplication;
-(void)_handleVisualAlertForIncomingMessage;
-(void)_handleVisualAlertForRegularNotification:(id)arg0 ;
-(void)_handleVolumeChanged;
-(void)_insertCustomLogicForSystemWideServer;
-(void)_processNextVisualAlertComponent;
-(void)_setTorchDeviceOn:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_setTorchDeviceOpen:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_springBoardLockButtonPress:(id)arg0 ;
-(void)_springBoardLockStateChange:(id)arg0 ;
-(void)_springBoardVolumeChange:(id)arg0 ;
-(void)_startForAlertTypes:(NSUInteger)arg0 cameraTorchManager:(id)arg1 ;
-(void)_stop;
-(void)addBulletin:(id)arg0 ;
-(void)dealloc;
-(void)removeBulletin:(id)arg0 ;
-(void)startForAlertTypes:(NSUInteger)arg0 cameraTorchManager:(id)arg1 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;
-(void)stop;


@end


#endif