// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLDISKCACHE_H
#define QLDISKCACHE_H

@class NSString, NSLock, NSMutableDictionary;
@protocol QLDiskCacheDelegate;

#import <Foundation/Foundation.h>

#import "QLCacheIndexDatabase.h"
#import "QLCacheMMAPBlobDatabase.h"

@interface QLDiskCache : NSObject {
    QLCacheIndexDatabase *_indexDatabase;
    QLCacheMMAPBlobDatabase *_blobDatabase;
    NSString *_dirtyFilePath;
    NSString *_exclusivePath;
    NSString *_resetFilePath;
    NSString *_resetReasonPath;
    BOOL _dirtyForDelegate;
    NSLock *_databaseLock;
    int _exclusiveFD;
}


@property (weak) NSObject<QLDiskCacheDelegate> *delegate; // ivar: _delegate
@property (readonly) NSUInteger fileEntryCount;
@property (readonly) float fragmentation;
@property (readonly, nonatomic) BOOL hasDirtyLock; // ivar: _hasDirtyLock
@property (readonly) BOOL isOpened; // ivar: _opened
@property (readonly) NSUInteger maxSize;
@property (readonly) NSUInteger maxThumbnailLifeTime;
@property (retain) NSMutableDictionary *metaData; // ivar: _metaData
@property BOOL metaDataDirty; // ivar: _metaDataDirty
@property (retain) NSString *metaDataFilePath; // ivar: _metaDataFilePath
@property (readonly) NSString *path; // ivar: _path
@property (readonly) NSUInteger reserveBufferCount;
@property (readonly) NSUInteger reserveBufferSize;
@property (readonly) NSUInteger size;
@property (readonly) NSUInteger thumbnailCount;
@property (readonly) NSInteger writingCount; // ivar: _writingCount


+(id)defaultLocation;
+(void)setCacheLocationForTesting:(id)arg0 ;
+(void)setupCacheAtLocationIfNecessary:(id)arg0 ;
-(BOOL)_open;
-(BOOL)_setThumbnailData:(id)arg0 ;
-(BOOL)discardReservedBuffer:(id)arg0 ;
-(BOOL)doReading:(id)arg0 ;
-(BOOL)doWriting:(id)arg0 ;
-(BOOL)open;
-(BOOL)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)arg0 ;
-(BOOL)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg0 ;
-(BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg0 ;
-(BOOL)validateReservedBuffer:(id)arg0 ;
-(NSUInteger)_deleteBlobArrayFromDatabase:(id)arg0 ;
-(NSUInteger)cleanup;
-(NSUInteger)cleanupDeletedFiles;
-(NSUInteger)freeDiskSpaceForNewThumbnails;
-(NSUInteger)removeThumbnailsOlderThanDate:(id)arg0 ;
-(NSUInteger)sizeSumOfThumbnailsOlderThanDate:(id)arg0 ;
-(id)_checkConsistency;
-(id)blobDatabase;
-(id)checkConsistency;
-(id)enumeratorForAllFilesUbiquitousFiles:(BOOL)arg0 withExtraInfo:(BOOL)arg1 ;
-(id)enumeratorForAllThumbnailsWithFileIdentifier:(id)arg0 ;
-(id)enumeratorForThumbnailRequests:(id)arg0 ;
-(id)indexDatabase;
-(id)initWithPathLocation:(id)arg0 cacheSize:(NSInteger)arg1 cacheThread:(id)arg2 ;
-(id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg0 ;
-(id)lastCrapWithDate:(*id)arg0 ;
-(id)lastResetWithDate:(*id)arg0 ;
-(id)metaDataForKey:(id)arg0 ;
-(id)reserveBufferForData:(id)arg0 ;
-(id)reserveBufferWithLength:(NSUInteger)arg0 ;
-(void)_cleanupDirtyLock;
-(void)_cleanupForceResetAtNextLaunch;
-(void)_close;
-(void)_closeWhatIsOpen;
-(void)_createDirtyLockInformDelegate:(BOOL)arg0 ;
-(void)_discardThumbnailDataForReset:(id)arg0 ;
-(void)_removeDirtyLock;
-(void)_resetWithReason:(id)arg0 ;
-(void)checkpoint;
-(void)close;
-(void)discardThumbnailDataBatchForReset:(id)arg0 ;
-(void)do:(id)arg0 ;
-(void)forceResetAtNextLaunch;
-(void)logCacheSizeBeforeCleanup;
-(void)noteRemoteThumbnailMissingForItems:(id)arg0 ;
-(void)noteRemoteThumbnailPresentForItems:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeFilesWithFileInfo:(id)arg0 ;
-(void)reset;
-(void)updateHitCount:(id)arg0 forFileIdentifier:(id)arg1 ;
-(void)writeThumbnailDataBatch:(id)arg0 ;


@end


#endif