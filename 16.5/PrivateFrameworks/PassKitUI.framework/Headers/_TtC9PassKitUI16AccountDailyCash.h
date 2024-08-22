// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI16ACCOUNTDAILYCASH_H
#define _TTC9PASSKITUI16ACCOUNTDAILYCASH_H

@protocol PKDashboardTransactionFetcherDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI16AccountDailyCash : NSObject <PKDashboardTransactionFetcherDelegate>

 {
    ? _amount;
    ? date;
    ? transactionFetcher;
    ? source;
    ? account;
}




-(id)init;
-(void)transactionsChanged:(id)arg0 ;


@end


#endif