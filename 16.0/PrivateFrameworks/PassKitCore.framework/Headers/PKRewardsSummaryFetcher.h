// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREWARDSSUMMARYFETCHER_H
#define PKREWARDSSUMMARYFETCHER_H


#import <Foundation/Foundation.h>

#import "PKAccount.h"
#import "PKTransactionSourceCollection.h"

@interface PKRewardsSummaryFetcher : NSObject {
    PKAccount *_account;
    PKTransactionSourceCollection *_transactionSourceCollection;
}




-(id)initWithTransactionSourceCollection:(id)arg0 account:(id)arg1 ;
-(void)rewardsTierSummariesWithCompletion:(id)arg0 ;


@end


#endif