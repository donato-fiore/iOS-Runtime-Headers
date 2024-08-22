// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPAYMENTQUEUE_H
#define SKPAYMENTQUEUE_H

@class NSArray;
@protocol SKPaymentQueueDelegate;

#import <Foundation/Foundation.h>

#import "SKPaymentQueueClient.h"
#import "SKStorefront.h"

@interface SKPaymentQueue : NSObject {
    id *_internal;
}


@property (weak, nonatomic) NSObject<SKPaymentQueueDelegate> *delegate;
@property (readonly, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (readonly, nonatomic) SKStorefront *storefront;
@property (readonly, nonatomic) NSArray *transactionObservers;
@property (readonly, nonatomic) NSArray *transactions;


+(BOOL)canMakePayments;
+(id)defaultQueue;
-(BOOL)_shouldContinueTransactionForMessage:(id)arg0 ;
-(id)_applyDownloadChangeset:(id)arg0 ;
-(id)_copyDownloadIDsForDownloads:(id)arg0 ;
-(id)_copyRemovalsFromUnmergedIndexSet:(id)arg0 ;
-(id)_copyTransactionsFromXPCArray:(id)arg0 ;
-(id)_initSKPaymentQueue;
-(id)init;
-(id)initWithPaymentQueueClient:(id)arg0 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_checkForMessages;
-(void)_checkServerQueue;
-(void)_completeRestoreWithMessage:(id)arg0 ;
-(void)_daemonLaunchedNotification;
-(void)_establishConnection;
-(void)_establishConnectionIfNeeded;
-(void)_finishRefreshPayments;
-(void)_handleConnectionDisconnect;
-(void)_handleMessage:(id)arg0 connection:(id)arg1 ;
-(void)_notifyObserversAboutChanges:(id)arg0 sendUpdatedDownloads:(BOOL)arg1 ;
-(void)_notifyObserversAboutDownloadChanges:(id)arg0 ;
-(void)_notifyObserversAboutPurchaseIntentsForProducts:(id)arg0 ;
-(void)_notifyObserversAboutRemovals:(id)arg0 ;
-(void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg0 ;
-(void)_notifyObserversRestoreTransactionsFinished;
-(void)_presentCodeRedemptionSheet;
-(void)_processTransaction:(id)arg0 ;
-(void)_processTransactionDict:(id)arg0 forTransaction:(id)arg1 error:(id)arg2 ;
-(void)_processUpdates:(id)arg0 trimUnmatched:(BOOL)arg1 sendUpdatedDownloads:(BOOL)arg2 ;
-(void)_refreshPaymentsWithPolicy:(NSInteger)arg0 ;
-(void)_removeLocalTransaction:(id)arg0 ;
-(void)_removeNilTransactionObservers;
-(void)_removePaymentsForMessage:(id)arg0 ;
-(void)_sendAppEnteredForegroundMessage;
-(void)_sendAppStorePendingPaymentsRequestForMessage:(id)arg0 ;
-(void)_sendCommand:(NSInteger)arg0 forDownloads:(id)arg1 ;
-(void)_updateDownloadsForMessage:(id)arg0 ;
-(void)_updatePaymentsForMessage:(id)arg0 ;
-(void)_updatedTransactions:(id)arg0 restored:(BOOL)arg1 ;
-(void)addPayment:(id)arg0 ;
-(void)addTransactionObserver:(id)arg0 ;
-(void)askToShowMessageWithReplyBlock:(id)arg0 ;
-(void)cancelDownloads:(id)arg0 ;
-(void)dealloc;
-(void)downloadAdded:(id)arg0 ;
-(void)downloadRemoved:(id)arg0 ;
-(void)downloadStatusChanged:(id)arg0 ;
-(void)finishTransaction:(id)arg0 ;
-(void)forceSandboxForBundleIdentifier:(id)arg0 untilDate:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)pauseDownloads:(id)arg0 ;
-(void)presentCodeRedemptionSheet;
-(void)removeTransactionObserver:(id)arg0 ;
-(void)removedEntitlementsForProductIdentifiers:(id)arg0 ;
-(void)removedTransactions:(id)arg0 ;
-(void)restoreCompletedTransactions;
-(void)restoreCompletedTransactionsWithApplicationUsername:(id)arg0 ;
-(void)resumeDownloads:(id)arg0 ;
-(void)shouldContinueTransaction:(id)arg0 withNewStorefront:(id)arg1 replyBlock:(id)arg2 ;
-(void)showPriceConsentIfNeeded;
-(void)startDownloads:(id)arg0 ;
-(void)storefrontChanged:(id)arg0 ;
-(void)updatedTransactions:(id)arg0 ;


@end


#endif