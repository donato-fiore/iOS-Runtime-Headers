// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    BOOL _isExternalDisplayLayoutMonitoringRequiredForClient;
    int _externalDisplayLayoutState;
    BOOL _isExternalDisplayLayoutStateInitialized;
    int _aggregateLayoutState;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
    FigCaptureDisplayLayoutMonitor *_externalDisplayLayoutMonitor;
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


+(void)initialize;
+(void)startContinuityCaptureTerminationMonitorWithHandler:(id)arg0 ;
+(void)startPrewarmingMonitorWithHandler:(id)arg0 ;
+(void)stopPrewarmingMonitor;
// -(id)initWithClientAuditToken:(struct ? )arg0 forThirdPartyTorch:(BOOL)arg1 applicationAndLayoutStateHandler:(id)arg2 interruptionHandler:(unk)arg3  ;
-(int)observeSession:(struct opaqueCMSession *)arg0 ;
-(void)dealloc;
-(void)deviceLockStateMonitor:(id)arg0 didUpdateDeviceLockState:(BOOL)arg1 ;
-(void)invalidate;
-(void)layoutMonitor:(id)arg0 didUpdateLayout:(id)arg1 ;
-(void)updateApplicationState;


@end


#endif