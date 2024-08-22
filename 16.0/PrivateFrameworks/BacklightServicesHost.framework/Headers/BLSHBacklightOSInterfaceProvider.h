// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHBACKLIGHTOSINTERFACEPROVIDER_H
#define BLSHBACKLIGHTOSINTERFACEPROVIDER_H

@class CBDisplayStateClient, CMSuppressionManager, BSContinuousMachTimer, NSString, NSDate;
@protocol CBDisplayStateClientDelegate, BLSHTransparentFlipbookProvider, BLSHBacklightOSInterfaceProviding, BLSHBacklightPlatformProvider, BLSCBDisplayStateDelegate, OS_dispatch_queue;


#import "BLSHBacklightOSTimerProvider.h"
#import "BLSHWatchdogProvider.h"
#import "BLSHSuppressionEvent.h"

@interface BLSHBacklightOSInterfaceProvider : BLSHBacklightOSTimerProvider <CBDisplayStateClientDelegate, BLSHTransparentFlipbookProvider, BLSHBacklightOSInterfaceProviding>

 {
    id<BLSHBacklightPlatformProvider> *_platformProvider;
    BLSHWatchdogProvider *_watchdogProvider;
    BLSHSuppressionEvent *_lock_lastSuppressionEvent;
    CBDisplayStateClient *_displayStateClient;
    CMSuppressionManager *_suppressionManager;
    BSContinuousMachTimer *_setCBDisplayModeTimer;
    os_unfair_lock_s _lock;
    NSInteger _lock_cbDisplayMode;
    NSInteger _lock_cbFlipbookState;
    BOOL _lock_suppressionServiceActive;
    BOOL _lock_caFlipbookEnabled;
    BOOL _lock_caFlipbookSuppressed;
    BOOL _lock_caBlanked;
    BOOL _lock_flipbookTransparent;
    BOOL _deviceSupportsAlwaysOn;
    BOOL _lock_kernelSpecialMode;
    BOOL _supportsFlipbookState;
    float _backlightDimmedFactor;
}


@property (nonatomic, getter=isCABlanked, setter=setCABlanked:) BOOL caBlanked;
@property (nonatomic, getter=isCAFlipbookEnabled, setter=setCAFlipbookEnabled:) BOOL caFlipbookEnabled;
@property (nonatomic, getter=isCAFlipbookSuppressed, setter=setCAFlipbookSuppressed:) BOOL caFlipbookSuppressed;
@property (readonly, nonatomic) NSInteger cbDisplayMode;
@property (retain, setter=setCBDisplayStateDelegate:) NSObject<BLSCBDisplayStateDelegate> *cbDisplayStateDelegate; // ivar: _cbDisplayStateDelegate
@property (readonly, nonatomic) NSInteger cbFlipbookState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL deviceSupportsAlwaysOn;
@property (nonatomic, getter=isFlipbookTransparent) BOOL flipbookTransparent;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isKernelAlwaysOnMode) BOOL kernelAlwaysOnMode;
@property (readonly, nonatomic) BLSHSuppressionEvent *lastSuppressionEvent;
@property (readonly, nonatomic) NSDate *now;
@property (readonly, nonatomic, getter=isShowingBlankingWindow) BOOL showingBlankingWindow;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFlipbookState;
@property (readonly, nonatomic, getter=isSuppressionServiceActive) BOOL suppressionServiceActive;


-(id)acquirePowerAssertionWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)acquireSystemActivityAssertionWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 handler:(id)arg2 ;
-(id)createFlipbook;
-(id)initWithPlatformProvider:(id)arg0 ;
-(id)observeSignificantTimeChangeWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(id)scheduleWatchdogWithDelegate:(id)arg0 explanation:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)systemSleepMonitor;
-(void)didCompleteSwitchToFlipbookState:(NSInteger)arg0 withError:(id)arg1 ;
-(void)didCompleteTransitionToDisplayMode:(NSInteger)arg0 withError:(id)arg1 ;
-(void)didDetectSignificantUserInteraction;
-(void)endSuppressionService;
-(void)registerHandlersForService:(id)arg0 ;
-(void)startSuppressionServiceWithHandler:(id)arg0 ;
-(void)switchToFlipbookState:(NSInteger)arg0 ;
-(void)transitionToDisplayMode:(NSInteger)arg0 withDuration:(CGFloat)arg1 ;
-(void)willUnblank;


@end


#endif