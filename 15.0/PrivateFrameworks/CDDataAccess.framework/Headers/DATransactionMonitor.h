// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DATRANSACTIONMONITOR_H
#define DATRANSACTIONMONITOR_H

@class NSMutableArray;
@protocol DATransactionMonitorDelegate;

#import <Foundation/Foundation.h>


@interface DATransactionMonitor : NSObject

@property (nonatomic) int transactionCount; // ivar: _transactionCount
@property (weak, nonatomic) NSObject<DATransactionMonitorDelegate> *transactionMonitorDelegate; // ivar: _transactionMonitorDelegate
@property (retain, nonatomic) NSMutableArray *transactions; // ivar: _transactions


+(id)sharedTransactionMonitor;
-(id)init;
-(void)decrementTransactionCountForTransaction:(id)arg0 ;
-(void)incrementTransactionCountForTransaction:(id)arg0 ;


@end


#endif