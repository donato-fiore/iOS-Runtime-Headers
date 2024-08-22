// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXELEMENTTRANSACTIONLOGGING_H
#define AXELEMENTTRANSACTIONLOGGING_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXElementTransactionLogging : NSObject {
    NSMutableDictionary *_pendingTransactions;
    NSMutableDictionary *_pidsToBundleIDs;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedLogger;
+(id)transactionSummary;
-(NSUInteger)willFetchAttribute:(NSInteger)arg0 forElement:(struct __AXUIElement *)arg1 ;
-(id)_appNameForUIElement:(struct __AXUIElement *)arg0 pid:(int)arg1 ;
-(id)init;
-(void)failedTransaction:(NSUInteger)arg0 ;
-(void)finishedTransaction:(NSUInteger)arg0 withValue:(*void)arg1 ;
-(void)finishedTransaction:(NSUInteger)arg0 withValue:(*void)arg1 amortization:(CGFloat)arg2 ;


@end


#endif