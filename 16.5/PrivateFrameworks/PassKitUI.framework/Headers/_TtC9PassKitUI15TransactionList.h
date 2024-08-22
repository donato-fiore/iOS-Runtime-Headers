// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI15TRANSACTIONLIST_H
#define _TTC9PASSKITUI15TRANSACTIONLIST_H

@protocol PKDashboardTransactionFetcherDelegate, PKForegroundActiveArbiterObserver;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI15TransactionList : NSObject <PKDashboardTransactionFetcherDelegate, PKForegroundActiveArbiterObserver>

 {
    ? _rows;
    ? _yearlyGroups;
    ? activeState;
    ? timer;
    ? transactionFetcher;
    ? iconGenerator;
    ? source;
    ? account;
    ? _filter;
}




-(id)init;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)transactionsChanged:(id)arg0 ;


@end


#endif