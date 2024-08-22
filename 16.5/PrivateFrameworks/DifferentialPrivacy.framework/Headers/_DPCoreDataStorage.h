// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPCOREDATASTORAGE_H
#define _DPCOREDATASTORAGE_H

@class NSString, NSMutableDictionary, NSManagedObjectModel, NSURL, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DPDataProtectionStateMonitor.h"

@interface _DPCoreDataStorage : NSObject

@property (readonly, nonatomic) _DPDataProtectionStateMonitor *dataProtectionMonitor; // ivar: _dataProtectionMonitor
@property (readonly, copy, nonatomic) NSString *databaseDirectory; // ivar: _databaseDirectory
@property (readonly, copy, nonatomic) NSString *databaseName; // ivar: _databaseName
@property (readonly, nonatomic) NSMutableDictionary *managedObjectContexts; // ivar: _managedObjectContexts
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly, nonatomic) NSDictionary *paths; // ivar: _paths
@property (readonly, nonatomic) NSMutableDictionary *persistentStoreCoordinators; // ivar: _persistentStoreCoordinators
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueMOC; // ivar: _queueMOC
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queuePSC; // ivar: _queuePSC
@property (readonly, nonatomic) BOOL readOnly; // ivar: _readOnly


+(BOOL)createDatabaseDirectory:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)countObjectsInContext:(id)arg0 entityName:(id)arg1 predicate:(id)arg2 ;
+(NSUInteger)deleteObjectsInContext:(id)arg0 entityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 fetchOffset:(NSUInteger)arg4 fetchLimit:(NSUInteger)arg5 ;
+(id)persistentStoreOptionsFor:(id)arg0 readOnly:(BOOL)arg1 ;
+(id)storageWithDirectory:(id)arg0 databaseName:(id)arg1 modelURL:(id)arg2 readOnly:(BOOL)arg3 ;
-(BOOL)deleteDatabaseForPSC:(id)arg0 protectionClass:(id)arg1 obliterate:(BOOL)arg2 ;
-(BOOL)deleteStorageFor:(id)arg0 obliterate:(BOOL)arg1 ;
-(NSUInteger)countObjectsForEntities:(id)arg0 predicate:(id)arg1 ;
-(NSUInteger)deleteObjectsOlderThanDate:(id)arg0 entities:(id)arg1 limit:(NSUInteger)arg2 ;
-(NSUInteger)deleteOldObjectsToLimitTotalNumber:(NSUInteger)arg0 entities:(id)arg1 limit:(NSUInteger)arg2 ;
-(NSUInteger)deleteSubmittedRecords:(NSUInteger)arg0 entities:(id)arg1 limit:(NSUInteger)arg2 ;
-(NSUInteger)deleteVersionMismatchRecords:(NSUInteger)arg0 entities:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithDirectory:(id)arg0 databaseName:(id)arg1 modelURL:(id)arg2 readOnly:(BOOL)arg3 ;
-(id)mocForProtectionClass:(id)arg0 ;
-(id)persistentStoreCoordinatorFor:(id)arg0 ;
-(void)handleDataProtectionChangeFor:(id)arg0 willBeAvailable:(BOOL)arg1 ;
-(void)handleDatabaseErrors:(id)arg0 forPSC:(id)arg1 protectionClass:(id)arg2 ;
-(void)invalidateManagedObjectContextFor:(id)arg0 ;
-(void)invalidatePersistentStoreCoordinatorFor:(id)arg0 ;


@end


#endif