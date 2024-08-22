// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCSFETCHAGGREGATOR_H
#define CKDPCSFETCHAGGREGATOR_H

@class CKCoalescer, NSOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CKDContainer.h"

@interface CKDPCSFetchAggregator : NSObject

@property (weak, nonatomic) CKDContainer *container; // ivar: _container
@property (retain, nonatomic) CKCoalescer *fetchCoalescer; // ivar: _fetchCoalescer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue; // ivar: _opQueue
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *queuedFetches; // ivar: _queuedFetches
@property (retain, nonatomic) NSMutableArray *runningFetches; // ivar: _runningFetches
@property (nonatomic) BOOL skipQueuedFetchCycleDetection; // ivar: _skipQueuedFetchCycleDetection
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource


-(BOOL)fetchRequestForExistingOperation:(id)arg0 isDependentOnOperation:(id)arg1 ;
-(id)_lockedGetQueuedFetchForOperation:(id)arg0 ofClass:(Class)arg1 ;
-(id)init;
-(id)initWithContainer:(id)arg0 ;
-(void)_lockedFetchesAreReady;
-(void)_lockedRescheduleFetchTimer;
-(void)_lockedTearDownFetchTimer;
-(void)cancelAllOperations;
-(void)dealloc;
-(void)requestFetchOfRecordWithID:(id)arg0 forOperation:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)requestFetchOfShareWithID:(id)arg0 forOperation:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)requestFetchOfZoneWithID:(id)arg0 forOperation:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif