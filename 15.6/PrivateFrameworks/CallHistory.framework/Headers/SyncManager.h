// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYNCMANAGER_H
#define SYNCMANAGER_H

@class NSString;
@protocol SyncManagerProtocol;


#import "CHLogger.h"
#import "TransactionManager.h"
#import "CallHistoryDBClientHandle.h"

@interface SyncManager : CHLogger <SyncManagerProtocol>

 {
    TransactionManager *_transactionManager;
}


@property (readonly, nonatomic) CallHistoryDBClientHandle *dbHandle; // ivar: _dbHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)timerIncoming;
-(CGFloat)timerLifetime;
-(CGFloat)timerOutgoing;
-(NSInteger)deleteCallsWithPredicate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)setRead:(BOOL)arg0 forCallsWithPredicate:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)fetchCallCountWithPredicate:(id)arg0 sortDescriptors:(id)arg1 ;
-(NSUInteger)fetchCoalescedCallCountWithPredicate:(id)arg0 sortDescriptors:(id)arg1 ;
-(id)archiveCallObject:(id)arg0 ;
-(id)fetchAllObjects;
-(id)fetchCallIdentifiersWithPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)fetchCallsWithPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)fetchCoalescedCallsWithPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)fetchObjectWithUniqueId:(id)arg0 ;
-(id)fetchObjectsWithLimits:(id)arg0 ;
-(id)init;
-(id)predicateForCallKind:(id)arg0 ;
-(id)predicateForCallKinds:(id)arg0 ;
-(id)predicateForLimits:(id)arg0 ;
-(void)addUpdateTransactions:(id)arg0 ;
-(void)deleteAllObjects;
-(void)deleteObjectWithUniqueId:(id)arg0 ;
-(void)deleteObjectsWithLimits:(id)arg0 ;
-(void)deleteObjectsWithUniqueIds:(id)arg0 ;
-(void)initDBHandle;
-(void)insert:(id)arg0 ;
-(void)insertRecordsWithoutTransactions:(id)arg0 ;
-(void)insertWithoutTransaction:(id)arg0 ;
-(void)resetTimers;
-(void)updateAllObjects:(id)arg0 ;
-(void)updateObjects:(id)arg0 ;


@end


#endif