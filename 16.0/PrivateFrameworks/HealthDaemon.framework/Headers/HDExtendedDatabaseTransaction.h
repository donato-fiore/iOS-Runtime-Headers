// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDEXTENDEDDATABASETRANSACTION_H
#define HDEXTENDEDDATABASETRANSACTION_H

@class NSError, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HDDatabase.h"

@interface HDExtendedDatabaseTransaction : NSObject {
    BOOL _pendingWorkDidSucceed;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_pendingWorkSemaphore;
    NSObject<OS_dispatch_source> *_automaticRollbackTimer;
    id *_pendingWork;
    NSUInteger _status;
    NSError *_lastError;
}


@property (readonly, nonatomic) CGFloat continuationTimeout; // ivar: _continuationTimeout
@property (readonly, weak, nonatomic) HDDatabase *database; // ivar: _database
@property (readonly, copy, nonatomic) NSUUID *transactionIdentifier; // ivar: _transactionIdentifier
@property (readonly, nonatomic) CGFloat transactionTimeout; // ivar: _transactionTimeout


-(BOOL)commitWithErrorOut:(*id)arg0 ;
-(BOOL)performInTransactionWithErrorOut:(*id)arg0 block:(id)arg1 ;
-(BOOL)rollbackDueToError:(id)arg0 errorOut:(*id)arg1 ;
-(id)initWithDatabase:(id)arg0 context:(id)arg1 transactionTimeout:(CGFloat)arg2 continuationTimeout:(CGFloat)arg3 error:(*id)arg4 ;
-(void)dealloc;


@end


#endif