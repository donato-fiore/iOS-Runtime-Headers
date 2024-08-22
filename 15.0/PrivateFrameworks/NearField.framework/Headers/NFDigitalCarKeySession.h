// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFDIGITALCARKEYSESSION_H
#define NFDIGITALCARKEYSESSION_H

@class NSString, NSDictionary, SESDCKSession;
@protocol NFContactlessPaymentSessionCallbacks, SESDCKSessionDelegate, NFSessionDelegate, NFDigitalCarKeySessionDelegate;


#import "NFSession.h"
#import "NFApplet.h"

@interface NFDigitalCarKeySession : NFSession <NFContactlessPaymentSessionCallbacks, SESDCKSessionDelegate, NFSessionDelegate>



@property (readonly) NFApplet *activeApplet; // ivar: _activeApplet
@property (readonly) NSString *activeKey; // ivar: _activeKey
@property (retain, nonatomic) NSDictionary *appletsById; // ivar: _appletsById
@property BOOL cardEmulationStarted; // ivar: _cardEmulationStarted
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NFApplet *defaultApplet; // ivar: _defaultApplet
@property (weak) NSObject<NFDigitalCarKeySessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fieldNotificationSent; // ivar: _fieldNotificationSent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SESDCKSession *sesdSession; // ivar: _sesdSession
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSecureRanging;


+(id)getVehicleReports:(*id)arg0 ;
+(id)pauseRangingForReaderIdentifier:(id)arg0 durationInSec:(id)arg1 ;
+(id)resumeRangingForReaderIdentifier:(id)arg0 ;
+(id)vehicleReports:(*id)arg0 ;
-(BOOL)getSignedMessage:(id)arg0 authorization:(id)arg1 reply:(id)arg2 ;
-(BOOL)sendPassthroughMessage:(id)arg0 reply:(id)arg1 ;
-(BOOL)sendSignedPassthroughMessage:(id)arg0 authorization:(id)arg1 reply:(id)arg2 ;
-(BOOL)startCardEmulationAuthorization:(id)arg0 deferred:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)stopCardEmulation:(*id)arg0 ;
-(id)_getAppletsFromNFCD;
-(id)activateWithToken:(id)arg0 ;
-(id)allApplets;
-(id)appletWithIdentifier:(id)arg0 ;
-(id)cancelRKEFunction:(id)arg0 ;
-(id)createSessionHandoffToken:(*id)arg0 ;
-(id)init;
-(id)sendRKEFunction:(id)arg0 rkeAction:(id)arg1 authorization:(id)arg2 ;
-(id)setAuthorization:(id)arg0 ;
-(void)didDetectField:(BOOL)arg0 ;
-(void)didDetectFieldNotification:(id)arg0 ;
-(void)didEndTransaction:(id)arg0 ;
-(void)didEndUnexpectedly;
-(void)didExpireTransactionForApplet:(id)arg0 ;
-(void)didExpressModeStateChange:(unsigned int)arg0 withObject:(id)arg1 ;
-(void)didFailDeferredAuthorization;
-(void)didFelicaStateChange:(id)arg0 ;
-(void)didReceiveActivityTimeout:(id)arg0 ;
-(void)didReceivePendingServerRequest;
-(void)didSelectApplet:(id)arg0 ;
-(void)didStartSession:(id)arg0 ;
-(void)didStartTransaction:(id)arg0 ;
-(void)endSession;
-(void)endSessionWithCompletion:(id)arg0 ;
-(void)handleSessionResumed;
-(void)handleSessionSuspended:(id)arg0 ;
-(void)sesSession:(id)arg0 event:(id)arg1 ;


@end


#endif