// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURECLIENTSESSIONMONITOR_H
#define FIGCAPTURECLIENTSESSIONMONITOR_H

@class NSString;
@protocol FigCaptureDisplayLayoutObserver, FigCaptureDeviceLockStateObserver;

#import <Foundation/Foundation.h>

#import "FigCaptureClientSessionMonitorClient.h"
#import "FigCaptureDisplayLayoutMonitor.h"
#import "FigCaptureDeviceLockStateMonitor.h"

@interface FigCaptureClientSessionMonitor : NSObject <FigCaptureDisplayLayoutObserver, FigCaptureDeviceLockStateObserver>

 {
    FigCaptureClientSessionMonitorClient *_client;
    *OpaqueFigSimpleMutex _stateChangeLock;
    BOOL _haveExternalCMSession;
    *OpaqueFigSimpleMutex _sessionLock;
    BOOL _isCMSessionInterruptionObservingRequiredForClient;
    id *_applicationStateChangeNotificationToken;
    id *_interruptionStateChangeNotificationToken;
    BOOL _isBKSApplicationStateMonitoringRequiredForClient;
    unsigned int _bksApplicationState;
    BOOL _bksApplicationStateInitialized;
    int _applicationState;
    BOOL _isLayoutMonitoringRequiredForClient;
    int _layoutState;
    BOOL _layoutStateInitialized;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
    BOOL _isDeviceLockStateMonitoringRequiredForClient;
    BOOL _deviceIsLocked;
    BOOL _deviceLockStateInitialized;
    FigCaptureDeviceLockStateMonitor *_deviceLockStateMonitor;
    BOOL _invalid;
}


@property (readonly) NSString *applicationID;
@property (readonly) int applicationState;
@property (readonly) int clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *opaqueCMSession session; // ivar: _session
@property (readonly) Class superclass;


+(BOOL)_isSupportedExtensionClientType:(int)arg0 ;
+(int)_applicationStateForBKSApplicationState:(unsigned int)arg0 clientType:(int)arg1 ;
+(int)_applicationStateForClientLayoutState:(int)arg0 clientType:(int)arg1 ;
+(void)initialize;
+(void)startPrewarmingMonitorWithHandler:(id)arg0 ;
+(void)stopPrewarmingMonitor;
-(id)_initWithClient:(id)arg0 ;
-(id)_resolveApplicationID;
// -(id)initWithAVConferenceClientApplicationIDs:(id)arg0 applicationAndLayoutStateHandler:(id)arg1 interruptionHandler:(unk)arg2  ;
// -(id)initWithClientAuditToken:(struct ? )arg0 forThirdPartyTorch:(BOOL)arg1 applicationAndLayoutStateHandler:(id)arg2 interruptionHandler:(unk)arg3  ;
-(id)loggingPrefix;
-(int)_createAndObserveCMSession;
-(int)_registerCMSessionForObservation;
-(int)_resolveApplicationState;
-(int)observeSession:(struct opaqueCMSession *)arg0 ;
-(void)_deregisterAndReleaseCMSession;
-(void)_handleAudioInterruptionChange:(int)arg0 ;
-(void)_handleBKSApplicationStateChange:(unsigned int)arg0 ;
-(void)_handleCMSessionManagerNofification:(id)arg0 ;
-(void)_updateApplicationState;
-(void)_updateClientStateCondition:(*void)arg0 newValue:(id)arg1 ;
-(void)dealloc;
-(void)deviceLockStateMonitor:(id)arg0 didUpdateDeviceLockState:(BOOL)arg1 ;
-(void)invalidate;
-(void)layoutMonitor:(id)arg0 didUpdateLayoutWithForegroundApps:(id)arg1 obscuredApps:(id)arg2 transitioningApps:(id)arg3 pipApps:(id)arg4 siriVisible:(BOOL)arg5 contactlessUIServiceVisible:(BOOL)arg6 ;


@end


#endif