// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPEERPAYMENTMESSAGESTRANSACTIONSMANAGER_H
#define NPKPEERPAYMENTMESSAGESTRANSACTIONSMANAGER_H

@class NSMutableSet, NSString, PKPaymentService, NSMutableDictionary;
@protocol PKPaymentServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKPeerPaymentMessagesTransactionsManager : NSObject <PKPaymentServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_transactionsQueue;
    NSObject<OS_dispatch_queue> *_peerPaymentPassQueue;
}


@property (readonly, nonatomic) NSMutableSet *currentLookupIdentifiers; // ivar: _currentLookupIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentService *paymentService; // ivar: _paymentService
@property (copy) NSString *peerPaymentPassUniqueID; // ivar: _peerPaymentPassUniqueID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *transactionDetails; // ivar: _transactionDetails


+(id)sharedInstance;
-(NSUInteger)_transactionQueue_statusOfPaymentTransactionWithServiceIdentifier:(id)arg0 ;
-(NSUInteger)statusOfPaymentTransactionWithServiceIdentifier:(id)arg0 ;
-(id)_sharedPeerPaymentWebService;
-(id)_transactionsQueue_transactionDetailsCreatedIfNecessaryForServiceIdentifier:(id)arg0 ;
-(id)availableActionsForPaymentTransactionWithServiceIdentifier:(id)arg0 ;
-(id)initWithPeerPaymentPassUniqueID:(id)arg0 ;
-(id)initWithPeerPaymentPassUniqueID:(id)arg0 paymentService:(id)arg1 ;
-(id)peerPaymentTransactionWithServiceIdentifier:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_fetchAllPeerPaymentTransactionsWithPeerPaymentPassID:(id)arg0 ;
-(void)_passLibraryChanged:(id)arg0 ;
-(void)_transactionsQueue_notifyStatusUpdateOfTransactionWithServiceIdentifier:(id)arg0 ;
-(void)_transactionsQueue_setStatus:(NSUInteger)arg0 forPaymentTransactionWithServiceIdentifier:(id)arg1 notifyUpdate:(BOOL)arg2 ;
-(void)dealloc;
-(void)lookupTransactionActionsIfNeededWithServiceIdentifier:(id)arg0 ;
-(void)setStatus:(NSUInteger)arg0 forPaymentTransactionWithServiceIdentifier:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg0 didRemoveTransactionWithIdentifier:(id)arg1 ;


@end


#endif