// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPROXIMITYCLIENT_H
#define SFPROXIMITYCLIENT_H

@class NSXPCConnection;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFProximityClient : NSObject <NSSecureCoding>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}


@property (copy, nonatomic) id *deviceDidUntriggerHandler; // ivar: _deviceDidUntriggerHandler
@property (copy, nonatomic) id *deviceEnteredImmediateHandler; // ivar: _deviceEnteredImmediateHandler
@property (copy, nonatomic) id *deviceEnteredNearbyHandler; // ivar: _deviceEnteredNearbyHandler
@property (copy, nonatomic) id *deviceExitedImmediateHandler; // ivar: _deviceExitedImmediateHandler
@property (copy, nonatomic) id *deviceExitedNearbyHandler; // ivar: _deviceExitedNearbyHandler
@property (copy, nonatomic) id *deviceUpdateHandler; // ivar: _deviceUpdateHandler
@property (copy, nonatomic) id *deviceWasDismissedHandler; // ivar: _deviceWasDismissedHandler
@property (copy, nonatomic) id *deviceWasDismissedHandlerEx; // ivar: _deviceWasDismissedHandlerEx
@property (copy, nonatomic) id *deviceWasSelectedHandler; // ivar: _deviceWasSelectedHandler
@property (copy, nonatomic) id *deviceWillTriggerHandler; // ivar: _deviceWillTriggerHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) BOOL shouldAdvertise; // ivar: _shouldAdvertise
@property (nonatomic) BOOL wantsUpdates; // ivar: _wantsUpdates


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_dismissContentForDevice:(id)arg0 completion:(id)arg1 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_invokeBlockActivateSafe:(id)arg0 ;
-(void)_provideContent:(id)arg0 forDevice:(id)arg1 force:(BOOL)arg2 completion:(id)arg3 ;
-(void)_stopSuppressingDevice:(id)arg0 completion:(id)arg1 ;
-(void)_suppressDevice:(id)arg0 completion:(id)arg1 ;
-(void)_updateContent:(id)arg0 forDevice:(id)arg1 completion:(id)arg2 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)dismissContentForDevice:(id)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)provideContent:(id)arg0 forDevice:(id)arg1 force:(BOOL)arg2 completion:(id)arg3 ;
-(void)proximityClientDeviceDidUntriggerHandler:(id)arg0 ;
-(void)proximityClientDeviceEnteredImmediate:(id)arg0 ;
-(void)proximityClientDeviceEnteredNearby:(id)arg0 ;
-(void)proximityClientDeviceExitedImmediate:(id)arg0 ;
-(void)proximityClientDeviceExitedNearby:(id)arg0 ;
-(void)proximityClientDeviceUpdated:(id)arg0 rssi:(NSInteger)arg1 state:(NSInteger)arg2 ;
-(void)proximityClientDeviceWasDismissedHandler:(id)arg0 reason:(NSInteger)arg1 ;
-(void)proximityClientDeviceWasSelectedHandler:(id)arg0 ;
-(void)proximityClientDeviceWillTriggerHandler:(id)arg0 ;
-(void)requestScannerTimerReset;
-(void)stopSuppressingDevice:(id)arg0 completion:(id)arg1 ;
-(void)suppressDevice:(id)arg0 completion:(id)arg1 ;
-(void)updateContent:(id)arg0 forDevice:(id)arg1 completion:(id)arg2 ;


@end


#endif