// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKCOREDATASTORAGE_H
#define _DKCOREDATASTORAGE_H

@class NSManagedObjectModel, NSMutableDictionary, NSMapTable, NSFileManager, NSString, NSCloudKitMirroringDelegate, NSURL;
@protocol _DKCoreDataStorageDelegate;

#import <Foundation/Foundation.h>

#import "_DKDataProtectionStateMonitor.h"

@interface _DKCoreDataStorage : NSObject {
    NSManagedObjectModel *_managedObjectModel;
    NSMutableDictionary *_paths;
    NSMapTable *_managedObjectContexts;
    NSMutableDictionary *_persistentStoreCoordinators;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    NSFileManager *_fm;
    BOOL _isManagedDatabase;
    BOOL _isDatabaseManager;
    BOOL _maintenanceRunning;
}


@property (readonly) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly) NSString *databaseName; // ivar: _databaseName
@property (weak) NSObject<_DKCoreDataStorageDelegate> *delegate; // ivar: _delegate
@property (readonly) NSString *directory; // ivar: _directory
@property (readonly) BOOL localOnly; // ivar: _localOnly
@property (readonly) NSCloudKitMirroringDelegate *mirroringDelegate; // ivar: _mirroringDelegate
@property (readonly) NSURL *modelURL; // ivar: _modelURL
@property (readonly) BOOL readOnly; // ivar: _readOnly
@property (nonatomic) BOOL requiresManualMigration; // ivar: _requiresManualMigration
@property (readonly) BOOL sync; // ivar: _sync


+(NSUInteger)anonymizeObjectStringsInContext:(id)arg0 entityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 batchFetchLimit:(NSUInteger)arg4 totalFetchLimit:(NSUInteger)arg5 includeSubentities:(BOOL)arg6 salt:(id)arg7 ;
+(NSUInteger)anonymizeStringAttributesOfManagedObject:(id)arg0 withSalt:(id)arg1 ;
+(NSUInteger)countObjectsInContext:(id)arg0 entityName:(id)arg1 predicate:(id)arg2 includeSubentities:(BOOL)arg3 includePendingChanges:(BOOL)arg4 ;
+(NSUInteger)deleteObjectsIfNeededToLimitTotal:(NSUInteger)arg0 context:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchLimit:(NSUInteger)arg5 includeSubentities:(BOOL)arg6 includePendingChanges:(BOOL)arg7 ;
+(NSUInteger)deleteObjectsInContext:(id)arg0 entityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(NSUInteger)arg4 includeSubentities:(BOOL)arg5 includePendingChanges:(BOOL)arg6 ;
+(NSUInteger)deleteObjectsInContext:(id)arg0 entityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 fetchOffset:(NSUInteger)arg4 fetchLimit:(NSUInteger)arg5 includeSubentities:(BOOL)arg6 includePendingChanges:(BOOL)arg7 ;
+(NSUInteger)deleteOrphanedEntitiesInContext:(id)arg0 ;
+(NSUInteger)updateObjectsInContext:(id)arg0 entityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 batchFetchLimit:(NSUInteger)arg4 totalFetchLimit:(NSUInteger)arg5 includeSubentities:(BOOL)arg6 updateBlock:(id)arg7 ;
-(BOOL)confirmDatabaseConnectionFor:(id)arg0 ;
-(BOOL)deleteStorageFor:(id)arg0 ;
-(BOOL)isManagedObjectContextFor:(id)arg0 equalToManagedObjectContext:(id)arg1 ;
-(BOOL)isManagedObjectModel:(id)arg0 compatibleWithPersistentStoreAtURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)migratePersistentStoreAtURL:(id)arg0 toManagedObjectModel:(id)arg1 protectionClass:(id)arg2 error:(*id)arg3 ;
-(NSInteger)modelVersionForStoreAtURL:(id)arg0 error:(*id)arg1 ;
-(id)copyStorageFor:(id)arg0 toDirectory:(id)arg1 ;
-(id)init;
-(id)initWithDirectory:(id)arg0 databaseName:(id)arg1 modelURL:(id)arg2 readOnly:(BOOL)arg3 localOnly:(BOOL)arg4 ;
-(id)initWithDirectory:(id)arg0 databaseName:(id)arg1 modelURL:(id)arg2 sync:(BOOL)arg3 ;
-(id)managedObjectContextFor:(id)arg0 ;
-(id)managedObjectContextFor:(id)arg0 identifier:(id)arg1 ;
-(id)managedObjectModel;
-(id)managedObjectModelForVersion:(NSUInteger)arg0 ;
-(id)managedObjectModelURLForVersion:(NSUInteger)arg0 ;
-(id)persistentStoreCoordinatorFor:(id)arg0 ;
-(id)privateManagedObjectContextFor:(id)arg0 ;
-(void)closeStorageForProtectionClass:(id)arg0 ;
-(void)dealloc;
-(void)setManagedObjectModel:(id)arg0 ;


@end


#endif