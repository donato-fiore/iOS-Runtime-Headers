// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTACTLESSINTERFACESESSION_H
#define PKCONTACTLESSINTERFACESESSION_H

@class NSArray, NSString;
@protocol STSSessionDelegate, NFLoyaltyAndPaymentSessionDelegate, NFDigitalCarKeySessionDelegate, NFSessionDelegate, PKContactlessInterfaceSessionDelegate, OS_dispatch_queue;


#import "PKPaymentSession.h"
#import "PKPaymentApplication.h"
#import "PKPaymentPass.h"
#import "PKFieldProperties.h"
#import "PKTransactionReleasedData.h"
#import "PKTransitAppletHistory.h"

@interface PKContactlessInterfaceSession : PKPaymentSession <STSSessionDelegate, NFLoyaltyAndPaymentSessionDelegate, NFDigitalCarKeySessionDelegate, NFSessionDelegate>

 {
    PKPaymentApplication *_activatedPaymentApplication;
    PKPaymentPass *_activatedPaymentPass;
    NSArray *_activatedHostCards;
    NSArray *_valueAddedServiceTransactions;
    PKFieldProperties *_fieldPropertiesToLookup;
    BOOL _restoreActiveApplets;
    NSUInteger _transactionStartTime;
    uint8_t _fieldPresent;
    BOOL _handlingExpress;
    NSUInteger _expressActivity;
    BOOL _felicaStateChanged;
    NSUInteger _state;
    id<PKContactlessInterfaceSessionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _prioritySessionExists;
    uint8_t _persistentCardEmulation;
    unsigned char _cardEmulationMode;
    BOOL _requiresConfirmationForHandoff;
    BOOL _isWaitingOnConfirmationForHandoff;
    NSUInteger _sessionType;
    PKTransactionReleasedData *_dataToRelease;
}


@property (readonly, nonatomic) PKPaymentApplication *activatedPaymentApplication;
@property (readonly, nonatomic) PKPaymentPass *activatedPaymentPass;
@property (readonly, nonatomic) NSArray *activatedValueAddedServicePasses; // ivar: _activatedValueAddedServicePasses
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKContactlessInterfaceSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fieldPresent;
@property (readonly, nonatomic) PKFieldProperties *fieldProperties; // ivar: _fieldProperties
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isWaitingOnConfirmationForHandoff;
@property (readonly, nonatomic) BOOL persistentCardEmulationQueued;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKTransitAppletHistory *transitAppletState;


+(id)transitAppletStateFromPaymentSession:(id)arg0 withPaymentApplication:(id)arg1 ;
-(BOOL)_activatePaymentApplication:(id)arg0 forPaymentPass:(id)arg1 forceReactivation:(BOOL)arg2 ;
-(BOOL)activatePaymentApplication:(id)arg0 forPaymentPass:(id)arg1 ;
-(BOOL)activatePaymentApplication:(id)arg0 forPaymentPass:(id)arg1 markAsDefault:(BOOL)arg2 ;
-(BOOL)activateValueAddedServicePassWhitelist:(id)arg0 greylist:(id)arg1 ;
-(BOOL)activateValueAddedServicePasses:(id)arg0 ;
-(BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg0 ;
-(BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg0 deferAuthorization:(BOOL)arg1 ;
-(BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg0 deferAuthorization:(BOOL)arg1 requiresConfirmationForHandoff:(BOOL)arg2 startHandoffIfPending:(BOOL)arg3 ;
-(BOOL)cancelRKEFunction:(id)arg0 ;
-(BOOL)paymentApplicationSupportsAutomaticAuthorization:(id)arg0 ;
-(BOOL)queuePersistentCardEmulation;
-(BOOL)resetPersistentCardEmulation;
-(BOOL)sendRKEFunction:(id)arg0 action:(id)arg1 authorization:(id)arg2 ;
-(BOOL)stopCardEmulation;
-(id)_appletForPaymentApplication:(id)arg0 ;
-(id)_appletWithIdentifier:(id)arg0 ;
-(id)_createExpressTransactionForSession:(id)arg0 pass:(id)arg1 paymentApplication:(id)arg2 date:(id)arg3 shouldGenerateTransaction:(*BOOL)arg4 ;
-(id)_filteredLoyaltyPassesFromVASTransactions:(id)arg0 activatedPasses:(id)arg1 ;
-(id)initWithInternalSession:(id)arg0 targetQueue:(id)arg1 ;
-(void)_endLookup;
-(void)_endLookupAndNotify;
-(void)_processEndEvent:(id)arg0 withPartialContext:(id)arg1 groupHeadIdentifier:(id)arg2 groupAppletIdentifiers:(id)arg3 ;
-(void)_sendPersistentCardEmulationForPaymentPass:(id)arg0 paymentApplication:(id)arg1 ;
-(void)_session:(id)arg0 didEnterFieldWithNotification:(id)arg1 ;
-(void)_session:(id)arg0 didExpireTransactionForApplet:(id)arg1 ;
-(void)_session:(id)arg0 didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2 ;
-(void)_session:(id)arg0 didFailDeferredAuthorization:(BOOL)arg1 ;
-(void)_session:(id)arg0 didSelectApplet:(id)arg1 ;
-(void)_sessionDidEndUnexpectedly:(id)arg0 ;
-(void)_sessionDidExitField:(id)arg0 ;
-(void)_sessionDidReceiveActivityTimeout:(id)arg0 result:(id)arg1 ;
-(void)_startLookup;
-(void)authorize18013RequestWithDataToRelease:(id)arg0 credential:(id)arg1 ;
-(void)handleSessionResumed:(id)arg0 ;
-(void)handleSessionSuspended:(id)arg0 withToken:(id)arg1 ;
-(void)invalidateSessionWithCompletion:(id)arg0 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didEndTransaction:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didEnterFieldWithNotification:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didExpireTransactionForApplet:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didFailDeferredAuthorization:(BOOL)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didFelicaStateChange:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didPerformValueAddedServiceTransactions:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didSelectApplet:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didSelectValueAddedService:(BOOL)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didStartTransaction:(id)arg1 ;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg0 ;
-(void)loyaltyAndPaymentSessionDidExitField:(id)arg0 ;
-(void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg0 result:(id)arg1 ;
-(void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg0 ;
-(void)resetExpressState;
-(void)sendRKEFunction:(id)arg0 action:(id)arg1 withAuthorization:(id)arg2 completion:(id)arg3 ;
-(void)session:(id)arg0 didEndTransaction:(id)arg1 ;
-(void)session:(id)arg0 didEnterFieldWithNotification:(id)arg1 ;
-(void)session:(id)arg0 didExpireTransactionForApplet:(id)arg1 ;
-(void)session:(id)arg0 didExpressModeStateChange:(unsigned int)arg1 withObject:(id)arg2 ;
-(void)session:(id)arg0 didSelectApplet:(id)arg1 ;
-(void)session:(id)arg0 didStartTransaction:(id)arg1 ;
-(void)session:(id)arg0 event:(id)arg1 ;
-(void)sessionDidEndUnexpectedly:(id)arg0 ;
-(void)sessionDidExitField:(id)arg0 ;
-(void)sessionDidFailDeferredAuthorization:(id)arg0 ;
-(void)sessionDidReceiveActivityTimeout:(id)arg0 result:(id)arg1 ;
-(void)stsSession:(id)arg0 didChangeExpressModeWithInfo:(id)arg1 ;
-(void)stsSession:(id)arg0 didEndTransaction:(id)arg1 ;
-(void)stsSession:(id)arg0 didExpireTransaction:(BOOL)arg1 ;
-(void)stsSession:(id)arg0 didReceive18013Requests:(id)arg1 readerAuthInfo:(id)arg2 ;
-(void)stsSession:(id)arg0 didReceiveActivityTimeout:(id)arg1 ;
-(void)stsSession:(id)arg0 didReceiveFieldNotification:(id)arg1 ;
-(void)stsSession:(id)arg0 didStartTransaction:(id)arg1 ;
-(void)stsSessionDidEndUnexpectedly:(id)arg0 errorCode:(NSUInteger)arg1 ;
-(void)stsSessionRequestHandoffConfirmation:(id)arg0 ;


@end


#endif