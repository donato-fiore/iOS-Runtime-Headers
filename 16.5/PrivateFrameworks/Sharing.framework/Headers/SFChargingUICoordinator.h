// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCHARGINGUICOORDINATOR_H
#define SFCHARGINGUICOORDINATOR_H

@class NSDate;
@protocol OS_dispatch_source;


#import "SFXPCClient.h"

@interface SFChargingUICoordinator : SFXPCClient {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _animationSPIAdopted;
    BOOL _runningAsCarry;
    NSDate *_uiUpdateMaxDate;
    NSDate *_uiUpdateRequestDate;
    id *_uiUpdateHandler;
    BOOL _uiUpdateMinTimeElapsed;
    BOOL _uiUpdateShouldDismiss;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
}


@property (nonatomic) NSInteger defaultDuration; // ivar: _defaultDuration


-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(void)_activate;
-(void)_dismissUI;
-(void)_initialViewControllerDidAppear;
-(void)_initialViewControllerDidDisappear;
-(void)_invalidate;
-(void)_requestToDismissUIHandler:(id)arg0 ;
-(void)_requestToStartAnimationAtDate:(id)arg0 ;
-(void)_sendDismissUIWithReason:(NSInteger)arg0 ;
-(void)_timingInvalidateMinTimer;
-(void)_timingRestartMinTimer;
-(void)activate;
-(void)initialViewControllerDidAppear;
-(void)initialViewControllerDidDisappear;
-(void)invalidate;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInterrupted;
-(void)onqueue_connectionInvalidated;
-(void)requestAnimationDateWithCompletion:(id)arg0 ;
-(void)requestToDismissUIHandler:(id)arg0 ;
-(void)requestToShowUIWithHandler:(id)arg0 ;
-(void)requestToStartAnimationAtDate:(id)arg0 ;
-(void)sendDismissUIWithReason:(NSInteger)arg0 ;


@end


#endif