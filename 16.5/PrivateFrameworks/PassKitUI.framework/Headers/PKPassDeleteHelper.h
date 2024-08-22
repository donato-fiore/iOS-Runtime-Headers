// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSDELETEHELPER_H
#define PKPASSDELETEHELPER_H


#import <Foundation/Foundation.h>


@interface PKPassDeleteHelper : NSObject



+(BOOL)_canDeletePaymentPass:(id)arg0 transitPassProperties:(id)arg1 ;
+(void)deletePaymentPass:(id)arg0 withDeleteHander:(id)arg1 passLibraryDataProvider:(id)arg2 presentingViewController:(id)arg3 ;
+(void)presentDeleteBarcodePassAlertForPass:(id)arg0 withHandler:(id)arg1 presentingViewController:(id)arg2 ;
+(void)presentDeletePaymentPassAlertForPass:(id)arg0 withAccount:(id)arg1 paymentServiceDataProvider:(id)arg2 transitBalanceModel:(id)arg3 transitPassProperties:(id)arg4 detailViewStyle:(NSInteger)arg5 deleteHander:(id)arg6 passLibraryDataProvider:(id)arg7 presentingViewController:(id)arg8 ;
+(void)presentMerchantTokenDeletePaymentPassAlertForPass:(id)arg0 withAccount:(id)arg1 merchantTokensResponse:(id)arg2 deleteHander:(id)arg3 passLibraryDataProvider:(id)arg4 navigationController:(id)arg5 presentingViewController:(id)arg6 isBridge:(BOOL)arg7 ;


@end


#endif