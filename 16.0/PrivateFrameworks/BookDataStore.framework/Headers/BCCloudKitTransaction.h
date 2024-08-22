// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCCLOUDKITTRANSACTION_H
#define BCCLOUDKITTRANSACTION_H

@class BUCoalescingCallBlock, NSString;
@protocol BCCloudKitTransactionDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BDSOSTransaction.h"

@interface BCCloudKitTransaction : NSObject

@property (nonatomic) NSInteger clientCount; // ivar: _clientCount
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedNotification; // ivar: _coalescedNotification
@property (weak, nonatomic) NSObject<BCCloudKitTransactionDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *entityName; // ivar: _entityName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lifecycleAccessQueue; // ivar: _lifecycleAccessQueue
@property (retain, nonatomic) BDSOSTransaction *osTransaction; // ivar: _osTransaction
@property (retain, nonatomic) NSObject<OS_dispatch_source> *transactionLifetime; // ivar: _transactionLifetime


+(id)transactionNameForEntityName:(id)arg0 ;
-(CGFloat)coalescingDelay;
-(id)initWithEntityName:(id)arg0 delegate:(id)arg1 ;
-(id)transactionName;
-(void)clientConnected;
-(void)laq_scheduleTransactionLifetime;
-(void)performWorkWithCompletion:(id)arg0 ;
-(void)signal;


@end


#endif