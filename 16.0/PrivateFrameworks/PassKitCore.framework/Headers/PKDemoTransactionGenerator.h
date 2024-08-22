// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDEMOTRANSACTIONGENERATOR_H
#define PKDEMOTRANSACTIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface PKDemoTransactionGenerator : NSObject



+(NSInteger)randomDemoMerchant;
+(id)_recordSpecificKeysForConfiguration:(id)arg0 ;
+(id)allMerchants;
+(id)allPeople;
+(id)itemIdentifierForAccountUser:(id)arg0 ;
+(id)itemIdentifierForPass:(id)arg0 ;
+(void)demoTransactionsAndEventsForItemIdentifier:(id)arg0 configuration:(id)arg1 transactions:(*id)arg2 events:(*id)arg3 ;
+(void)demoTransactionsAndEventsWithConfiguration:(id)arg0 transactions:(*id)arg1 events:(*id)arg2 ;
+(void)generateDemoFilesForPasses:(id)arg0 accountUsers:(id)arg1 peerPaymentPassSerialNumber:(id)arg2 ;
+(void)generateDemoFilesWithCompletion:(id)arg0 ;
+(void)insertTransactionAndEventsWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif