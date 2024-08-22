// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _QLCACHETHREAD_H
#define _QLCACHETHREAD_H

@class NSOperationQueue, NSURL, NSString, NSLock;
@protocol QLDiskCacheDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "QLCacheCleanUpDatabaseThread.h"
#import "QLDiskCacheQueryOperation.h"
#import "QLDiskCache.h"
#import "QLMemoryCache.h"
#import "QLServerThread.h"

@interface _QLCacheThread : NSObject <QLDiskCacheDelegate>

 {
    NSOperationQueue *_memoryCacheQueryOperationQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_queue> *_writeCoalesceQueue;
    id _writeBlocks;
    id _cleanupBlocks;
    NSObject<OS_dispatch_source> *_drainTimer;
    NSObject<OS_os_transaction> *_writeTransaction;
}


@property (retain) QLCacheCleanUpDatabaseThread *cleanUpDatabaseThread; // ivar: _cleanUpDatabaseThread
@property (retain) QLDiskCacheQueryOperation *currentDiskCacheQueryOperation; // ivar: _currentDiskCacheQueryOperation
@property (readonly) NSUInteger currentMode; // ivar: _currentMode
@property (readonly) QLDiskCache *diskCache; // ivar: _diskCache
@property (retain) NSOperationQueue *diskCacheQueryOperationQueue; // ivar: _diskCacheQueryOperationQueue
@property (retain) NSURL *diskCacheURL; // ivar: _diskCacheURL
@property NSUInteger hitCount; // ivar: _hitCount
@property (readonly) BOOL lowDiskSpace; // ivar: _lowDiskSpace
@property (retain) NSObject<OS_dispatch_source> *lowDiskSpaceSource; // ivar: _lowDiskSpaceSource
@property (retain) NSObject<OS_dispatch_queue> *lowDiskSpaceSourceQueue; // ivar: _lowDiskSpaceSourceQueue
@property (readonly) QLMemoryCache *memoryCache; // ivar: _memoryCache
@property NSUInteger missedCount; // ivar: _missedCount
@property (readonly) NSString *modeDescription;
@property (retain) NSLock *modeLock; // ivar: _modeLock
@property (weak) QLServerThread *serverThread; // ivar: _serverThread
@property BOOL serverThreadIsIdle; // ivar: _serverThreadIsIdle
@property (nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles;
@property BOOL waitingForCleanup; // ivar: _waitingForCleanup


+(NSInteger)defaultCacheSize;
-(BOOL)_shouldQuitCleanUpDatabaseModeForMode:(NSUInteger)arg0 ;
-(BOOL)_shouldQuitClosedModeForMode:(NSUInteger)arg0 ;
-(BOOL)_shouldQuitLowSpaceModeForMode:(NSUInteger)arg0 ;
-(BOOL)_shouldQuitPauseModeForMode:(NSUInteger)arg0 ;
-(BOOL)_shouldQuitResetingModeForMode:(NSUInteger)arg0 ;
-(BOOL)_shouldQuitWorkingModeForMode:(NSUInteger)arg0 ;
-(BOOL)addNoThumbnailIntoCache:(id)arg0 ;
-(BOOL)addThumbnailIntoCache:(id)arg0 bitmapFormat:(id)arg1 bitmapData:(id)arg2 metadata:(id)arg3 flavor:(int)arg4 contentRect:(struct CGRect )arg5 badgeType:(NSUInteger)arg6 externalGeneratorDataHash:(NSUInteger)arg7 ;
-(BOOL)addThumbnailRequest:(id)arg0 ;
-(BOOL)isCacheOpened;
-(BOOL)isIdle;
-(BOOL)locked_removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)arg0 ;
-(BOOL)locked_removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg0 ;
-(BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg0 ;
-(NSInteger)purgeOnMountPoint:(id)arg0 withUrgency:(int)arg1 beforeDate:(id)arg2 ;
-(NSInteger)purgeableSpaceOnMountPoint:(id)arg0 withUrgency:(int)arg1 beforeDate:(id)arg2 ;
-(NSUInteger)hitToSaveCount;
-(NSUInteger)thumbnailInMemoryToSaveCount;
-(id)_allThumbnailsEnumerateWithEnumerator:(id)arg0 ;
-(id)allThumbnailsForFPItemID:(id)arg0 ;
-(id)allThumbnailsForFileIdentifier:(id)arg0 ;
-(id)allThumbnailsForIno:(NSUInteger)arg0 fsid:(struct fsid )arg1 ;
-(id)allThumbnailsInfo;
-(id)cacheInfo;
-(id)contentDescriptionForURL:(struct __CFURL *)arg0 ;
-(id)initWithServerThread:(id)arg0 cacheSize:(NSInteger)arg1 location:(id)arg2 ;
-(id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg0 ;
-(void)_addThumbnailRequestIntoDiskCacheQueryQueue:(id)arg0 ;
-(void)_cleanUpDatabaseDone;
-(void)_destroyDrainTimer;
-(void)_dispatchThumbnailRequestInServerThread:(id)arg0 ;
-(void)_drainPendingBlocks;
-(void)_drainPendingBlocksNow;
-(void)_registerMachPortForLowDiskSpaceNotification;
-(void)_scheduleBlockDrain;
-(void)_scheduledDrainPendingBlocks;
-(void)_sendThumbnailData:(id)arg0 forThumbnailRequest:(id)arg1 ;
-(void)_setMode:(NSUInteger)arg0 ;
-(void)_thumbnailHasBeenCancelled:(id)arg0 ;
-(void)_unregisterMachPortForLowDiskSpaceNotification;
-(void)_unscheduleBlockDrain;
-(void)_updateLowDisk;
-(void)_updateMode;
-(void)_waitForEndOfDatabaseCleanup;
-(void)_willStartCleanUpDatabaseModeFromMode:(NSUInteger)arg0 ;
-(void)_willStartClosedModeFromMode:(NSUInteger)arg0 ;
-(void)_willStartLowSpaceModeFromMode:(NSUInteger)arg0 ;
-(void)_willStartPauseModeFromMode:(NSUInteger)arg0 ;
-(void)_willStartResetingModeFromMode:(NSUInteger)arg0 ;
-(void)_willStartWorkingModeFromMode:(NSUInteger)arg0 ;
-(void)closeCache;
-(void)databaseCorruptionDetected;
-(void)enqueueWriting:(id)arg0 ;
-(void)exitImmediately;
-(void)forceCommit;
-(void)forceCommitAndClose;
-(void)noteRemoteThumbnailMissingForItems:(id)arg0 ;
-(void)noteRemoteThumbnailPresentForItems:(id)arg0 ;
-(void)openCache;
-(void)prepareToExit;
-(void)reset;
-(void)serverIsIdle;
-(void)serverIsWorking;
-(void)startWriting;
-(void)stopWriting;
-(void)updateMode;


@end


#endif