// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFLOYALTYANDPAYMENTSESSION_H
#define NFLOYALTYANDPAYMENTSESSION_H

@class NSDictionary, NSSet;
@protocol NFLoyaltyAndPaymentSessionDelegate;


#import "NFSession.h"
#import "NFApplet.h"

@interface NFLoyaltyAndPaymentSession : NFSession {
    BOOL _pendingServerRequest;
    BOOL _vasTransactionInProgress;
    id<NFLoyaltyAndPaymentSessionDelegate> *_delegate;
    BOOL _emulationActive;
    NSDictionary *_appletsById;
    NSUInteger _numActiveSEs;
    BOOL _fieldNotificationSent;
}


@property (readonly, retain) NFApplet *activeApplet; // ivar: _activeApplet
@property (readonly, retain) NSSet *activeKeys; // ivar: _activeKeys
@property (readonly, retain) NFApplet *defaultApplet; // ivar: _defaultApplet
@property NSObject<NFLoyaltyAndPaymentSessionDelegate> *delegate;
@property (readonly) NSUInteger numberOfActiveSecureElements;


-(BOOL)_startCardEmulationWithAuthorization:(id)arg0 error:(*id)arg1 ;
-(BOOL)_startDeferredCardEmulationWithAuthorization:(id)arg0 error:(*id)arg1 ;
-(BOOL)_startHostCardEmulation:(*id)arg0 ;
-(BOOL)enablePlasticCardMode:(BOOL)arg0 ;
-(BOOL)enablePlasticCardMode:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setActivePaymentApplet:(id)arg0 ;
-(BOOL)setActivePaymentApplet:(id)arg0 error:(*id)arg1 ;
-(BOOL)setActivePaymentApplet:(id)arg0 keys:(id)arg1 error:(*id)arg2 ;
-(BOOL)setActivePaymentApplet:(id)arg0 makeDefault:(BOOL)arg1 ;
-(BOOL)setHostCards:(id)arg0 ;
-(BOOL)startCardEmulation:(unsigned char)arg0 authorization:(id)arg1 ;
-(BOOL)startCardEmulation:(unsigned char)arg0 authorization:(id)arg1 error:(*id)arg2 ;
-(BOOL)startDeferredCardEmulation:(unsigned char)arg0 authorization:(id)arg1 ;
-(BOOL)startDeferredCardEmulation:(unsigned char)arg0 authorization:(id)arg1 error:(*id)arg2 ;
-(BOOL)startExpressMode:(*id)arg0 ;
-(BOOL)stopCardEmulation;
-(BOOL)stopCardEmulation:(*id)arg0 ;
-(id)allApplets;
-(id)appletWithIdentifier:(id)arg0 ;
-(id)felicaAppletState:(id)arg0 ;
-(id)felicaAppletState:(id)arg0 error:(*id)arg1 ;
-(id)transitAppletState:(id)arg0 error:(*id)arg1 ;
-(void)didDetectField:(BOOL)arg0 ;
-(void)didDetectFieldNotification:(id)arg0 ;
-(void)didEndTransaction:(id)arg0 ;
-(void)didEndUnexpectedly;
-(void)didExpireTransactionForApplet:(id)arg0 ;
-(void)didExpressModeStateChange:(unsigned int)arg0 withObject:(id)arg1 ;
-(void)didFailDeferredAuthorization;
-(void)didFelicaStateChange:(id)arg0 ;
-(void)didPerformValueAddedServiceTransactions:(id)arg0 ;
-(void)didReceiveActivityTimeout:(id)arg0 ;
-(void)didReceivePendingServerRequest;
-(void)didSelectApplet:(id)arg0 ;
-(void)didSelectValueAddedService:(BOOL)arg0 ;
-(void)didStartSession:(id)arg0 ;
-(void)didStartTransaction:(id)arg0 ;
-(void)endSession;
-(void)endSessionWithCompletion:(id)arg0 ;


@end


#endif