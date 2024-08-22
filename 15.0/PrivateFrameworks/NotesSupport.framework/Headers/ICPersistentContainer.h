// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICPERSISTENTCONTAINER_H
#define ICPERSISTENTCONTAINER_H

@class NSPersistentContainer, NSURL, NSMergePolicy, NSDictionary, NSString;



@interface ICPersistentContainer : NSPersistentContainer

@property (nonatomic) BOOL abortAfterReplacingDatabase; // ivar: _abortAfterReplacingDatabase
@property (readonly, nonatomic) NSURL *backupsDirectoryURL;
@property (nonatomic) NSUInteger fakeFreeDiskSpace; // ivar: _fakeFreeDiskSpace
@property (retain, nonatomic) NSMergePolicy *mergePolicy; // ivar: _mergePolicy
@property (retain, nonatomic) NSDictionary *storeOptions; // ivar: _storeOptions
@property (retain, nonatomic) NSString *storeType; // ivar: _storeType
@property (retain, nonatomic) NSURL *storeURL; // ivar: _storeURL


+(BOOL)isDataProtectionError:(id)arg0 ;
+(BOOL)isDatabaseMissingError:(id)arg0 ;
+(id)databaseOpenLock;
+(id)managedObjectModel;
+(id)oldManagedObjectModel;
+(id)standardStoreOptions;
-(BOOL)allowsCoreDataMigration;
-(BOOL)isReadOnly;
-(BOOL)isTooLowOnDiskSpace;
-(BOOL)loadPersistentStore:(*id)arg0 ;
-(BOOL)loadPersistentStore:(*id)arg0 storeCreatedHandler:(id)arg1 ;
-(BOOL)migrateFromOldDataModel;
-(id)initWithStoreURL:(id)arg0 storeType:(id)arg1 options:(id)arg2 mergePolicy:(id)arg3 ;
-(id)initWithStoreURL:(id)arg0 storeType:(id)arg1 options:(id)arg2 mergePolicy:(id)arg3 managedObjectModel:(id)arg4 ;
-(id)newBackgroundContext;
-(id)performBlockWithDatabaseOpenLock:(id)arg0 ;
-(void)backupPersistentStore;
-(void)setupPersistentStoreDescriptions;
-(void)setupViewContext;
-(void)vacuumStore;
-(void)vacuumStoreWithCompletionHandler:(id)arg0 ;


@end


#endif