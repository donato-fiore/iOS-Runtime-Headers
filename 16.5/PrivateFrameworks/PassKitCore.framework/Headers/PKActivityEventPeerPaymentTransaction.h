// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACTIVITYEVENTPEERPAYMENTTRANSACTION_H
#define PKACTIVITYEVENTPEERPAYMENTTRANSACTION_H



#import "PKActivityEventTransaction.h"
#import "PKPaymentTransaction.h"

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction

@property (readonly, nonatomic) PKPaymentTransaction *relatedTopUpFundingSourceWithdrawlTransaction; // ivar: _relatedTopUpFundingSourceWithdrawlTransaction
@property (readonly, nonatomic) PKPaymentTransaction *relatedTopUpPeerPaymentAccountDepositTransaction; // ivar: _relatedTopUpPeerPaymentAccountDepositTransaction


-(BOOL)isEqualToActivityEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)eventType;
-(id)initWithTransaction:(id)arg0 relatedTopUpWithdrawlTransaction:(id)arg1 relatedTopUpDepositTransaction:(id)arg2 unread:(BOOL)arg3 ;


@end


#endif