// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALLHISTORYDBHANDLE_H
#define CALLHISTORYDBHANDLE_H

@class NSManagedObjectContext;


#import "CHLogger.h"
#import "CallDBManager.h"

@interface CallHistoryDBHandle : CHLogger {
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    id *_observerCallRecordRef;
    id *_observerCallDBPropRef;
    id *_moveCallRecordsFromTempStoreRef;
    id *_dataStoreAddedRef;
}


@property (readonly, nonatomic) CallDBManager *callDBManager; // ivar: callDBManager
@property (nonatomic) NSInteger callsDidChangeDarwinNotificationCount; // ivar: _callsDidChangeDarwinNotificationCount


+(id)createForClient;
+(id)createForServer;
+(id)createWithDBManager:(id)arg0 ;
+(id)objectId;
-(BOOL)handleSaveForCallRecordContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg0 ;
-(BOOL)performSaveWithBackgroundTaskAssertion:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetAllTimers;
-(BOOL)save:(*id)arg0 ;
-(BOOL)saveTimers:(id)arg0 ;
-(NSInteger)deleteManagedCalls:(id)arg0 ;
-(NSInteger)deleteManagedCallsWithPredicate:(id)arg0 ;
-(NSUInteger)fetchManagedCallCountWithPredicate:(id)arg0 sortDescriptors:(id)arg1 ;
-(id)callDBProperties;
-(id)callRecordContext;
-(id)createCallRecord;
-(id)fetchAll;
-(id)fetchAllNoLimit;
-(id)fetchAllObjectsWithUniqueId:(id)arg0 ;
-(id)fetchManagedCallIdentifiersWithPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)fetchManagedCallsWithPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)fetchObjectWithUniqueId:(id)arg0 ;
-(id)fetchObjectsWithPredicate:(id)arg0 ;
-(id)fetchObjectsWithUniqueIds:(id)arg0 ;
-(id)fetchWithCallTypes:(unsigned int)arg0 ;
-(id)fetchWithPredicate:(id)arg0 forEntity:(id)arg1 ;
-(id)fetchWithPredicate:(id)arg0 forEntity:(id)arg1 withLimit:(BOOL)arg2 ;
-(id)getArrayForCallTypeMask:(unsigned int)arg0 ;
-(id)initWithDBManager:(id)arg0 ;
-(id)timerIncoming;
-(id)timerLastReset;
-(id)timerLifetime;
-(id)timerOutgoing;
-(id)updateManagedCallsWithPredicate:(id)arg0 propertiesToUpdate:(id)arg1 ;
-(void)dealloc;
-(void)deleteAll;
-(void)deleteObjectWithUniqueId:(id)arg0 ;
-(void)deleteObjectsWithUniqueIds:(id)arg0 ;
-(void)handleCallDBPropContextDidSaveNotification:(id)arg0 ;
-(void)handleCallRecordContextDidSaveNotification:(id)arg0 ;
-(void)handlePersistentStoreChangedNotification:(id)arg0 ;
-(void)mergeCallDBPropChangesFromRemoteAppSave;
-(void)mergeCallRecordChangesFromRemoteAppSave;
-(void)postTimersChangedNotification;
-(void)registerForNotifications:(id)arg0 ;
-(void)resetTimers;
-(void)unRegisterForNotifications;
-(void)updateCallDBProperties;


@end


#endif