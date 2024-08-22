// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAILADDITIONINDEX_H
#define QLTHUMBNAILADDITIONINDEX_H

@class NSURL, PQLConnection;
@protocol QLThumbnailAdditionIndexInterface, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface>

 {
    NSURL *_url;
    NSObject<OS_dispatch_source> *_dbWatcher;
}


@property (readonly, copy) NSURL *databaseURL;
@property (readonly) PQLConnection *db; // ivar: _db


+(id)sharedInstance;
+(void)registerCleanupXPCActivity;
+(void)setUpCleanupXPCActivitySynchronously:(BOOL)arg0 ;
-(BOOL)addThumbnailForURL:(id)arg0 lastHitDate:(id)arg1 size:(NSUInteger)arg2 ;
-(BOOL)addThumbnailForURL:(id)arg0 size:(NSUInteger)arg1 ;
-(BOOL)hasThumbnailForURL:(id)arg0 updateLastHitDate:(BOOL)arg1 andSize:(NSUInteger)arg2 ;
-(BOOL)open;
-(BOOL)removeThumbnailForURL:(id)arg0 ;
-(BOOL)updateFileSize:(NSUInteger)arg0 ofThumbnailForURL:(id)arg1 ;
-(BOOL)updateLastHitDate:(id)arg0 ofThumbnailForURL:(id)arg1 ;
-(NSInteger)purgeOnMountPoint:(id)arg0 withUrgency:(int)arg1 beforeDate:(id)arg2 ;
-(NSInteger)purgeableSpaceOnMountPoint:(id)arg0 withUrgency:(int)arg1 beforeDate:(id)arg2 ;
-(id)allEntries;
-(id)batchOfEntriesStartingAt:(NSUInteger)arg0 endingAt:(*NSUInteger)arg1 ;
-(id)databaseConnection;
-(id)entriesEnumerator;
-(id)init;
-(id)initForTesting;
-(id)initWithURL:(id)arg0 ;
-(id)makeDatabaseAtURL:(id)arg0 error:(*id)arg1 ;
-(id)openDatabaseAtURL:(id)arg0 error:(*id)arg1 ;
-(id)upgradeDatabaseIfNeeded:(id)arg0 error:(*id)arg1 ;
-(id)volumeRestrictionForMountPoint:(id)arg0 ;
-(id)whereClauseForURL:(id)arg0 ;
-(int)deviceForHomeDirectory;
-(void)_cleanUpAfterClose;
-(void)_closeDatabaseOnItsQueue:(id)arg0 ;
-(void)_resetDatabaseOnItsQueue:(id)arg0 ;
-(void)addThumbnailForURLWrapper:(id)arg0 size:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)cancelCacheDeletePurge;
-(void)cleanUpBatchOfEntries:(id)arg0 ;
-(void)close;
-(void)enumerateCacheEntriesWithHandler:(id)arg0 ;
-(void)hasThumbnailForURLWrapper:(id)arg0 updateLastHitDate:(BOOL)arg1 andSize:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)logError:(id)arg0 onDB:(id)arg1 statement:(id)arg2 ;
-(void)performDatabaseMaintenance;
-(void)removeAllAdditions;
-(void)removeEntriesFromDatabase:(id)arg0 ;
-(void)removeThumbnailForURL:(id)arg0 completion:(id)arg1 ;
-(void)retrieveAllAdditions:(id)arg0 ;
-(void)setUpDatabase:(id)arg0 ;
-(void)updateFileSize:(NSUInteger)arg0 ofThumbnailForURL:(id)arg1 completion:(id)arg2 ;
-(void)updateLastHitDate:(id)arg0 ofThumbnailForURL:(id)arg1 completion:(id)arg2 ;


@end


#endif