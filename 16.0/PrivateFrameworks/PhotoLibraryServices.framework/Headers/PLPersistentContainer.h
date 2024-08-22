// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPERSISTENTCONTAINER_H
#define PLPERSISTENTCONTAINER_H

@class PLLazyObject, NSPersistentStoreCoordinator, NSURL;
@protocol PLPersistentContainerStoreAccess, PLXPCPhotoLibraryStorePolicy;

#import <Foundation/Foundation.h>


@interface PLPersistentContainer : NSObject <PLPersistentContainerStoreAccess>

 {
    PLLazyObject *_lazyAssetdClient;
    os_unfair_lock_s _sharedPersistentStoreCoordinatorLock;
    NSPersistentStoreCoordinator *_sharedPersistentStoreCoordinator;
    BOOL _sharedPersistentStoreCoordinatorRemoved;
}


@property (readonly, nonatomic) BOOL didConfigureXPCStore; // ivar: _didConfigureXPCStore
@property (readonly) NSURL *libraryURL; // ivar: _libraryURL
@property (readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;
@property (retain) NSObject<PLXPCPhotoLibraryStorePolicy> *xpcStorePolicy; // ivar: _xpcStorePolicy


+(BOOL)_destroyPhotosDatabaseWithPath:(id)arg0 backupToPath:(id)arg1 ;
+(BOOL)currentModelVersionMatchesLibrarySchemaVersionWithPathManager:(id)arg0 error:(*id)arg1 ;
+(BOOL)hasConfiguredPhotoLibrary;
+(BOOL)shouldTrackIndexUse;
+(NSInteger)_migrateOrRebuildDatabaseWithSharedPersistentStoreCoordinator:(id)arg0 modelMigrator:(id)arg1 migrationPolicy:(unsigned int)arg2 error:(*id)arg3 ;
+(NSInteger)_openAndMigrateStoreWithURL:(id)arg0 options:(id)arg1 coordinator:(id)arg2 modelMigrator:(id)arg3 migrationPolicy:(unsigned int)arg4 error:(*id)arg5 ;
+(id)managedObjectModel;
+(id)managedObjectModelURL;
+(int)librarySchemaVersionWithPathManager:(id)arg0 error:(*id)arg1 ;
+(void)_getPersistentStoreURL:(*id)arg0 options:(*id)arg1 forDatabasePath:(id)arg2 enableOrderKeyNotifications:(BOOL)arg3 ;
+(void)getConfigurationForDatabasePath:(id)arg0 withBlock:(id)arg1 ;
+(void)getPersistentStoreURL:(*id)arg0 options:(*id)arg1 forDatabasePath:(id)arg2 ;
+(void)removePhotosDatabaseWithPathManager:(id)arg0 ;
-(BOOL)_configurePersistentStoreCoordinator:(id)arg0 overrideCurrentModelVersionInStore:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_configureXPCPersistentStoreCoordinator:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldUseXPCPhotoLibraryStore;
-(NSInteger)configureSharedPersistentStoreCoordinatorAndMigrateOrRebuildIfNecessaryWithModelMigrator:(id)arg0 migrationPolicy:(unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithLibraryURL:(id)arg0 lazyAssetsdClient:(id)arg1 ;
-(id)newPersistentStoreCoordinatorForMigration:(*id)arg0 ;
-(id)newSharedPersistentStoreCoordinator;
-(void)_setTestDidConfigureXPCStore:(BOOL)arg0 ;
-(void)dealloc;
-(void)removeSharedPersistentStoreCoordinator;


@end


#endif