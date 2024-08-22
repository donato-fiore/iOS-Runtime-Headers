// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALLHISTORYDBCLIENTHANDLE_H
#define CALLHISTORYDBCLIENTHANDLE_H



#import "CHSynchronizedLoggable.h"
#import "CHNotifyObserver.h"
#import "CallHistoryDBHandle.h"

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {
    id *_observerCallTimersRef;
}


@property (readonly, nonatomic) CHNotifyObserver *callsDidChangeNotifyObserver; // ivar: _callsDidChangeNotifyObserver
@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle; // ivar: dbStoreHandle


+(id)createForClient;
+(id)createForServer;
-(BOOL)createCallRecord:(id)arg0 ;
-(BOOL)createCallRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)createCallRecord:(id)arg0 error:(*id)arg1 save:(BOOL)arg2 ;
-(BOOL)createCallRecords:(id)arg0 ;
-(BOOL)createCallRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteAll;
-(BOOL)deleteAll:(*id)arg0 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg0 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteObjectWithUniqueId:(id)arg0 error:(*id)arg1 save:(BOOL)arg2 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg0 ;
-(BOOL)deleteObjectsWithUniqueIds:(id)arg0 error:(*id)arg1 ;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg0 ;
-(BOOL)resetAllTimers;
-(BOOL)saveDatabase:(*id)arg0 ;
-(BOOL)updateCallRecord_sync:(id)arg0 withChangeDict:(id)arg1 ;
-(BOOL)willHandleNotification_sync:(id)arg0 ;
-(NSInteger)deleteCallsWithPredicate:(id)arg0 ;
-(NSUInteger)fetchCallCountWithPredicate:(id)arg0 sortDescriptors:(id)arg1 ;
-(NSUInteger)fetchCoalescedCallCountWithPredicate:(id)arg0 sortDescriptors:(id)arg1 ;
-(id)convertToCHRecentCalls_sync:(id)arg0 ;
-(id)convertToCHRecentCalls_sync:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)fetchAll;
-(id)fetchAllNoLimit;
-(id)fetchAllObjectsWithUniqueId:(id)arg0 ;
-(id)fetchCallIdentifiersWithPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)fetchCallsWithPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)fetchCoalescedCallsWithPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)fetchObjectWithUniqueId:(id)arg0 ;
-(id)fetchObjectsWithPredicate:(id)arg0 ;
-(id)fetchObjectsWithUniqueIds:(id)arg0 ;
-(id)fetchWithCallTypes:(unsigned int)arg0 ;
-(id)init:(BOOL)arg0 ;
-(id)manager;
-(id)timerIncoming;
-(id)timerLastReset;
-(id)timerLifetime;
-(id)timerOutgoing;
-(id)updateAllCallRecords:(id)arg0 ;
-(id)updateAllCallRecords:(id)arg0 error:(*id)arg1 ;
-(id)updateAllCallRecords_sync:(id)arg0 error:(*id)arg1 ;
-(id)updateCallRecords:(id)arg0 ;
-(id)updateCallRecords:(id)arg0 error:(*id)arg1 ;
-(id)updateCallRecords:(id)arg0 error:(*id)arg1 save:(BOOL)arg2 ;
-(id)updateCallRecords_sync:(id)arg0 error:(*id)arg1 save:(BOOL)arg2 ;
-(id)updateCallsWithPredicate:(id)arg0 propertiesToUpdate:(id)arg1 error:(*id)arg2 ;
-(unsigned int)getCallStatus_sync:(id)arg0 isOriginated:(id)arg1 isAnswered:(id)arg2 ;
-(void)dealloc;
-(void)handleCallRecordSave_sync;
-(void)handleCallTimersSave_sync:(id)arg0 ;
-(void)parseCallStatus_sync:(unsigned int)arg0 isAnswered:(*BOOL)arg1 isOriginated:(*BOOL)arg2 ;
-(void)registerForNotifications;
-(void)resetTimers;
-(void)setStoreObject_sync:(id)arg0 withClientObject:(id)arg1 ;
-(void)unRegisterForNotifications;


@end


#endif