// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTTRANSACTIONDETAILSFACTORY_H
#define PKPAYMENTTRANSACTIONDETAILSFACTORY_H

@class PKContactResolver, PKPeerPaymentWebService;
@protocol PKPaymentDataProvider;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionDetailsFactory : NSObject {
    PKContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    id<PKPaymentDataProvider> *_paymentServiceDataProvider;
    NSInteger _detailViewStyle;
}




-(BOOL)canShowTransactionHistoryForTransaction:(id)arg0 transactionSourceCollection:(id)arg1 ;
-(id)_transactionFetcherWithTransactionSourceCollection:(id)arg0 transaction:(id)arg1 ;
-(id)detailViewControllerForTransaction:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 ;
-(id)historyViewControllerForTransaction:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 ;
-(id)initWithContactResolver:(id)arg0 peerPaymentWebService:(id)arg1 paymentServiceDataProvider:(id)arg2 detailViewStyle:(NSInteger)arg3 ;
-(void)historyViewControllerForTransaction:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 account:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 completion:(id)arg6 ;


@end


#endif