// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONMERCHANTLOOKUPSOURCE_H
#define PKTRANSACTIONMERCHANTLOOKUPSOURCE_H

@class NSString;
@protocol PKMerchantLookupRequestSource;

#import <Foundation/Foundation.h>

#import "PKPaymentTransaction.h"
#import "PKPaymentApplication.h"

@interface PKTransactionMerchantLookupSource : NSObject <PKMerchantLookupRequestSource>

 {
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
}


@property (nonatomic, getter=isClearingAttempt) BOOL clearingAttempt; // ivar: _clearingAttempt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isRefund;
-(BOOL)isSettlement;
-(NSInteger)type;
-(id)identifier;
-(id)initWithTransaction:(id)arg0 paymentApplication:(id)arg1 ;
-(id)mapsMerchantLookupRequest;
-(id)mapsURL;


@end


#endif