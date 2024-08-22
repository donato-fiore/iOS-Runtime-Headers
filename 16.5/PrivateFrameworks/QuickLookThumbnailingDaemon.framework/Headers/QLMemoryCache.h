// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLMEMORYCACHE_H
#define QLMEMORYCACHE_H

@class NSMutableDictionary, NSMutableArray, NSLock;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>

#import "_QLCacheThread.h"

@interface QLMemoryCache : NSObject {
    BOOL _cacheEnabled;
    NSMutableDictionary *_thumbnailData;
    NSMutableArray *_thumbnailDataToSave;
    NSLock *_memoryLock;
    NSObject<OS_os_transaction> *_pendingSavesTransaction;
}


@property (weak) _QLCacheThread *cacheThread; // ivar: _cacheThread
@property NSUInteger memoryUsed; // ivar: _memoryUsed


-(BOOL)addThumbnailData:(id)arg0 ;
-(BOOL)hasThumbnailDataToSave;
-(BOOL)sendThumbnailDataForThumbnailRequest:(id)arg0 withCacheThread:(id)arg1 ;
-(NSUInteger)thumbnailToSaveCount;
-(id)initWithCacheThread:(id)arg0 ;
-(id)thumbnailDataToSaveWithBatch:(NSUInteger)arg0 ;
-(void)_getReadLock;
-(void)_getWriteLock;
-(void)_invalidateThumbnailData:(id)arg0 ;
-(void)_releaseReadLock;
-(void)_releaseWriteLock;
-(void)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)arg0 ;
-(void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg0 ;
-(void)reset;
-(void)thumbnailDataBatchSaved:(id)arg0 ;


@end


#endif