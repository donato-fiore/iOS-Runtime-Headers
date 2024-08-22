// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKCONTACTLESSPAYMENTSESSIONMANAGER_H
#define NPKCONTACTLESSPAYMENTSESSIONMANAGER_H

@class NSData, NSString, PKPass;
@protocol NPKBarcodePaymentSessionDelegate, NPKQuickPaymentSessionDelegate, NPKPassesDataSourceObserver, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NPKBarcodePaymentSession.h"
#import "NPKQuickPaymentSessionCleanupDelegate.h"
#import "NPKContactlessPaymentSessionState.h"
#import "NPKObserverManager.h"
#import "NPKQuickPaymentSession.h"

@interface NPKContactlessPaymentSessionManager : NSObject <NPKBarcodePaymentSessionDelegate, NPKQuickPaymentSessionDelegate, NPKPassesDataSourceObserver>



@property (retain, nonatomic) NPKBarcodePaymentSession *barcodePaymentSession; // ivar: _barcodePaymentSession
@property (retain, nonatomic) NPKQuickPaymentSessionCleanupDelegate *cleanupDelegate; // ivar: _cleanupDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_source> *contactlessInterfaceVisibilityTimeoutTimer; // ivar: _contactlessInterfaceVisibilityTimeoutTimer
@property (nonatomic) BOOL contactlessPaymentInterfaceVisible; // ivar: _contactlessPaymentInterfaceVisible
@property (retain, nonatomic) NSData *credential; // ivar: _credential
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NPKContactlessPaymentSessionState *lastSessionState; // ivar: _lastSessionState
@property (retain, nonatomic) NPKObserverManager *observersManager; // ivar: _observersManager
@property (retain, nonatomic) NPKQuickPaymentSession *quickPaymentSession; // ivar: _quickPaymentSession
@property (nonatomic) int serviceModeRequestNotifyToken; // ivar: _serviceModeRequestNotifyToken
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPass *userSelectedPass; // ivar: _userSelectedPass


-(BOOL)_canHandleRKEActionForTileItem:(id)arg0 pass:(id)arg1 outAction:(*id)arg2 outFunction:(*id)arg3 outError:(*id)arg4 ;
-(BOOL)_handleIfPossibleIdentityUnavailablePassWithSession:(id)arg0 ;
-(id)_baseSessionStateForUpdate;
-(id)_managerContextForContactlessInterfaceTransactionContext:(id)arg0 ;
-(id)_paymentBalancesFromTransitAppletBalances:(id)arg0 ;
-(id)_sessionStateForBarcodeTransactionStatus:(NSUInteger)arg0 paymentBarcode:(id)arg1 transaction:(id)arg2 ;
-(id)_sessionStateForExpressTransactionStatus:(NSUInteger)arg0 pass:(id)arg1 paymentApplication:(id)arg2 concreteTransactions:(id)arg3 ephemeralTransaction:(id)arg4 mutatedBalances:(id)arg5 appletState:(id)arg6 ;
-(id)_sessionStateForPaymentBarcode:(id)arg0 ;
-(id)_sessionStateForTransactionContext:(id)arg0 ;
-(id)_sessionStateForUserCanceledBarcodeTransaction;
-(id)_updatedPassItemFieldWithPaymentPass:(id)arg0 transitAppletBalances:(id)arg1 appletState:(id)arg2 paymentApplication:(id)arg3 ;
-(id)init;
-(void)_cleanupBarcodePaymentSession;
-(void)_cleanupQuickPaymentSession;
-(void)_handleContactlessInterfaceVisibilityTimeoutTimer;
-(void)_handleRKEActionRequestedForPass:(id)arg0 action:(id)arg1 function:(id)arg2 withSession:(id)arg3 completion:(id)arg4 ;
-(void)_handleServiceModeRequestEnded;
-(void)_handleValueAddedServiceTransactions:(id)arg0 forValueAddedServicePasses:(id)arg1 paymentTransaction:(id)arg2 outUserInterventionRequiredPasses:(*id)arg3 ;
-(void)_prepareSessionStateForSendingToObservers:(id)arg0 ;
-(void)_registerForServiceModeRequestNotification;
-(void)_sendSessionStateToObservers:(id)arg0 ;
-(void)_startContactlessInterfaceVisibilityTimeoutTimer;
-(void)_stopContactlessInterfaceVisibilityTimeoutTimer;
-(void)barcodePaymentSession:(id)arg0 didReceivePaymentBarcode:(id)arg1 ;
-(void)barcodePaymentSession:(id)arg0 didUpdateTransactionStatus:(NSUInteger)arg1 withTransaction:(id)arg2 ;
-(void)handleAuthorize18013RequestWithDataToRelease:(id)arg0 credential:(id)arg1 ;
-(void)handleAutomaticSelectionValueAddedServicePasses:(id)arg0 ;
-(void)handleBarcodePaymentPinCodeEntry:(id)arg0 ;
-(void)handleBarcodePaymentUserIntentionConfirmation:(BOOL)arg0 ;
-(void)handleContactlessPaymentInterfaceDidAppear;
-(void)handleContactlessPaymentInterfaceDidDisappear;
-(void)handleContactlessPaymentSession:(id)arg0 authenticationExpected:(BOOL)arg1 ;
-(void)handleCredential:(id)arg0 ;
-(void)handleDidPresentPasscodeAuthentication;
-(void)handleDoublePressReceivedAtDate:(id)arg0 ;
-(void)handleEndBarcodePaymentSessionRequestedByUI;
-(void)handleEndQuickPaymentSessionRequestedByUI;
-(void)handleEndSessionRequested;
-(void)handleExpressTransactionStatus:(NSUInteger)arg0 forPass:(id)arg1 ;
-(void)handleExpressTransactionStatus:(NSUInteger)arg0 forPass:(id)arg1 paymentApplication:(id)arg2 concreteTransactions:(id)arg3 ephemeralTransaction:(id)arg4 mutatedBalances:(id)arg5 appletState:(id)arg6 ;
-(void)handleFailureToReleaseDataWithError:(id)arg0 ;
-(void)handleISO18013DataReleaseCanceled;
-(void)handleISO18013Request:(id)arg0 withReaderAuthInfo:(id)arg1 ;
-(void)handleISO18013TransactionStarted;
-(void)handleLocalAuthenticationError:(id)arg0 ;
-(void)handlePaymentBarcodeRequested;
-(void)handleRKEActionRequestedForTileItem:(id)arg0 pass:(id)arg1 completion:(id)arg2 ;
-(void)handleRKETransactionForPass:(id)arg0 fromTile:(id)arg1 ;
-(void)handleRetryLoadingPaymentBarcodeRequested;
-(void)handleServiceModeRequestedForPass:(id)arg0 ;
-(void)handleStandaloneTransactionWithAction:(NSUInteger)arg0 forPass:(id)arg1 ;
-(void)handleTransactionStarted;
-(void)handleUserSelectedPass:(id)arg0 ;
-(void)passesDataSource:(id)arg0 didAddPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didRemovePasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didUpdatePasses:(id)arg1 ;
-(void)passesDataSourceDidReloadPasses:(id)arg0 ;
-(void)passesDataSourceDidReorderPasses:(id)arg0 ;
-(void)paymentSession:(id)arg0 didActivatePass:(id)arg1 ;
-(void)paymentSession:(id)arg0 didCompleteForReason:(NSUInteger)arg1 withTransactionContext:(id)arg2 ;
-(void)paymentSession:(id)arg0 didCompleteTransactionWithContext:(id)arg1 ;
-(void)paymentSession:(id)arg0 didFailTransactionForPass:(id)arg1 withValueAddedServiceTransactions:(id)arg2 forValueAddedServicePasses:(id)arg3 ;
-(void)paymentSession:(id)arg0 didMakePassCurrent:(id)arg1 ;
-(void)paymentSession:(id)arg0 didReceive18013Request:(id)arg1 readerAuthInfo:(id)arg2 ;
-(void)paymentSession:(id)arg0 willActivatePass:(id)arg1 ;
-(void)paymentSessionDidEnterField:(id)arg0 ;
-(void)paymentSessionDidExitField:(id)arg0 ;
-(void)paymentSessionDidReceiveActivationError:(id)arg0 ;
-(void)paymentSessionDidReceiveActivityTimeout:(id)arg0 ;
-(void)paymentSessionDidReceiveAuthorizationTimeout:(id)arg0 ;
-(void)paymentSessionDidReceiveCredential:(id)arg0 ;
-(void)paymentSessionDidReceiveStartTransaction:(id)arg0 ;
-(void)paymentSessionDidReceiveTransactionError:(id)arg0 ;
-(void)paymentSessionDidSelectPayment:(id)arg0 ;
-(void)paymentSessionDidSelectValueAddedService:(id)arg0 ;
-(void)paymentSessionDidStart:(id)arg0 ;
-(void)paymentSessionIsWaitingToStart:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 withRelativePriority:(NSUInteger)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif