// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPURCHASEMANAGER_H
#define FCPURCHASEMANAGER_H

@class NSMutableDictionary, NSString, NFMutexLock;
@protocol FCAppActivityObserving, FCPaymentTransactionManagerDelegate, FCPurchaseManagerType, FCPaymentTransactionManager, FCPurchaseIntegrityChecker, FCPurchaseReceiptProvider, FCBundleSubscriptionManagerType, FCPurchaseManagerDelegate, FCPurchaseFlowOverrideProviderType;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"
#import "FCPurchaseController.h"
#import "FCReceiptRefresher.h"

@interface FCPurchaseManager : NSObject <FCAppActivityObserving, FCPaymentTransactionManagerDelegate, FCPurchaseManagerType>

 {
    FCKeyValueStore *_localStore;
    id<FCPaymentTransactionManager> *_paymentTransactionManager;
    id<FCPurchaseIntegrityChecker> *_purchaseIntegrityChecker;
    id<FCPurchaseReceiptProvider> *_purchaseReceiptProvider;
    id<FCBundleSubscriptionManagerType> *_bundleSubscriptionManager;
    FCPurchaseController *_purchaseController;
    FCReceiptRefresher *_receiptRefresher;
    NSMutableDictionary *_ongoingPurchaseEntriesByProductID;
    NSMutableDictionary *_cachedPurchaseModels;
    NSString *_lastSignedInItunesAccountDSID;
    NFMutexLock *_accessLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCPurchaseManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<FCPurchaseFlowOverrideProviderType> *purchaseFlowOverrideProvider; // ivar: purchaseFlowOverrideProvider
@property (readonly) Class superclass;


-(BOOL)anyOngoingPurchases;
-(BOOL)isPurchaseOngoingForTagID:(id)arg0 ;
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg0 restorePurchase:(BOOL)arg1 ;
-(id)init;
-(id)initWithCloudContext:(id)arg0 purchaseIntegrityChecker:(id)arg1 purchaseReceiptProvider:(id)arg2 paymentTransactionManager:(id)arg3 bundleSubscriptionManager:(id)arg4 keyValueStoreOption:(NSUInteger)arg5 ;
-(void)activityObservingApplicationDidEnterBackground;
-(void)activityObservingApplicationWillEnterForeground;
-(void)simulateFailurePurchaseWithProductID:(id)arg0 transactionState:(NSInteger)arg1 error:(id)arg2 ;
-(void)simulateSuccessfulPurchaseWithProductID:(id)arg0 tagID:(id)arg1 purchaseID:(id)arg2 ;
-(void)startBundlePurchaseWithPurchase:(id)arg0 error:(*id)arg1 ;
-(void)startPurchaseWithTagID:(id)arg0 purchase:(id)arg1 webAccessOptIn:(BOOL)arg2 error:(*id)arg3 ;
-(void)transactionFailedWithProductID:(id)arg0 transactionState:(NSInteger)arg1 transactionError:(id)arg2 ;
-(void)transactionPurchased:(id)arg0 ;


@end


#endif