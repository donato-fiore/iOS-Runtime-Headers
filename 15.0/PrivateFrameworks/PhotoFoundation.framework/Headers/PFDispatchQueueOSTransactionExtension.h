// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDISPATCHQUEUEOSTRANSACTIONEXTENSION_H
#define PFDISPATCHQUEUEOSTRANSACTIONEXTENSION_H

@protocol OS_os_transaction;


#import "PFDispatchQueueExtension.h"
#import "PFDispatchQueue.h"

@interface PFDispatchQueueOSTransactionExtension : PFDispatchQueueExtension {
    PFDispatchQueue *_queue;
    NSObject<OS_os_transaction> *_currentTransaction;
    NSUInteger _transactionUseCount;
    os_unfair_lock_s _lock;
}




-(id)description;
-(id)init;
-(id)newBlockInfo;
-(void)_blockCompleted;
-(void)dispatchTransactionName:(id)arg0 async:(id)arg1 ;
-(void)dispatchTransactionName:(id)arg0 asyncWithCurrentQOS:(id)arg1 ;
-(void)dispatchTransactionName:(id)arg0 qos:(unsigned int)arg1 async:(id)arg2 ;
-(void)installOnQueue:(id)arg0 ;
-(void)queue:(id)arg0 didExecute:(id)arg1 ;
-(void)queue:(id)arg0 skippedExecuting:(id)arg1 ;


@end


#endif