// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSDBCACHE_H
#define CLSDBCACHE_H

@class NSString, NSURL, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

#import <Foundation/Foundation.h>


@interface CLSDBCache : NSObject

@property (readonly, copy, nonatomic) NSString *dataModelName; // ivar: _dataModelName
@property (readonly, copy, nonatomic) NSURL *diskCacheURL; // ivar: _diskCacheURL
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // ivar: _managedObjectModel
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator
@property (nonatomic) BOOL supportsVersioning; // ivar: _supportsVersioning


+(BOOL)locationIsValidForDatabaseAtURL:(id)arg0 ;
+(id)applicationDataUrlQueueWithURL:(id)arg0 ;
+(id)currentApplicationDataUrlQueue;
+(id)defaultCache;
+(id)defaultCacheName;
+(id)diskCacheWithName:(id)arg0 ;
+(id)urlForGraphApplicationData;
+(void)initialize;
-(BOOL)_save;
-(BOOL)save;
-(id)formatVersion;
-(id)initAtURL:(id)arg0 ;
-(id)initWithDiskCacheName:(id)arg0 ;
-(id)initWithDiskCacheName:(id)arg0 dataModelName:(id)arg1 ;
-(void)_resetCoreDataStack;
-(void)_saveAsync;
-(void)invalidateDiskCaches;
-(void)invalidateMemoryCaches;


@end


#endif