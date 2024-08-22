// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCLIENT_H
#define SFCLIENT_H

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFClient : NSObject {
    NSMutableSet *_assertions;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSXPCConnection *_syncXPCCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(id)init;
-(id)syncRemoteProxyWithError:(*id)arg0 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateAssertionWithIdentifier:(id)arg0 ;
-(void)activityStateWithCompletion:(id)arg0 ;
-(void)appleIDInfoWithCompletion:(id)arg0 ;
-(void)broadwayPresentCardWithCode:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)clearXPCHelperImageCacheWithCompletion:(id)arg0 ;
-(void)contactIDForEmailHash:(id)arg0 phoneHash:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)displayNameForEmailHash:(id)arg0 phoneHash:(id)arg1 completion:(id)arg2 ;
-(void)displayStringForContactIdentifier:(id)arg0 deviceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)displayStringForContactIdentifierSync:(id)arg0 deviceIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)ensureSyncXPCStarted;
-(void)findContact:(id)arg0 completion:(id)arg1 ;
-(void)findContact:(id)arg0 skipIfContactBlocked:(BOOL)arg1 completion:(id)arg2 ;
-(void)getDeviceAssets:(id)arg0 completion:(id)arg1 ;
-(void)getPeopleSuggestions:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)openSetupURL:(id)arg0 completion:(id)arg1 ;
-(void)preventExitForLocaleReason:(id)arg0 ;
-(void)reenableProxCardType:(unsigned char)arg0 completion:(id)arg1 ;
-(void)repairDevice:(id)arg0 completion:(id)arg1 ;
-(void)repairDevice:(id)arg0 flags:(unsigned int)arg1 completion:(id)arg2 ;
-(void)retriggerProximityPairing:(id)arg0 ;
-(void)retriggerProximitySetup:(id)arg0 ;
-(void)setAudioRoutingScore:(int)arg0 completion:(id)arg1 ;
-(void)setupDevice:(id)arg0 home:(id)arg1 completion:(id)arg2 ;
-(void)showDevicePickerWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)startProxCardTransactionWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)subCredentialPresentCardWithParams:(id)arg0 completion:(id)arg1 ;
-(void)testContinuityKeyboardBegin:(BOOL)arg0 ;
-(void)triggerHomeKitDeviceDetectedWithURL:(id)arg0 completion:(id)arg1 ;
-(void)triggerProximityAutoFillDetectedWithURL:(id)arg0 completion:(id)arg1 ;
-(void)wifiPasswordSharingAvailabilityWithCompletion:(id)arg0 ;


@end


#endif