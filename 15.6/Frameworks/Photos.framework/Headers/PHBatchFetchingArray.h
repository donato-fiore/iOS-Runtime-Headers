// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHBATCHFETCHINGARRAY_H
#define PHBATCHFETCHINGARRAY_H

@class NSArray, NSSet, NSCache, NSMutableDictionary, NSString;
@protocol NSCacheDelegate, PHBatchFetchingArrayDataSource, OS_dispatch_queue;


#import "PHBatchFetchingArrayFetchedClass.h"
#import "PHPhotoLibrary.h"

@interface PHBatchFetchingArray : NSArray <NSCacheDelegate>

 {
    NSSet *_oidsSet;
    id<PHBatchFetchingArrayDataSource> *_dataSource;
    NSUInteger _count;
    os_unfair_lock_s _cacheLock;
    NSCache *_cache;
    os_unfair_lock_s _lastBatchLock;
    NSUInteger _lastBatchIndex;
    NSArray *_lastBatch;
    NSObject<OS_dispatch_queue> *_uuidsQueue;
    NSMutableDictionary *_uuidsByOIDs;
    NSUInteger _batchSize;
    PHBatchFetchingArrayFetchedClass *_overridenFetchResultClass;
    NSUInteger _propertyHint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *oids; // ivar: _oids
@property (readonly) NSSet *oidsSet;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;


+(BOOL)accessInstanceVariablesDirectly;
-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)_populateObjectBuffer:(*id)arg0 range:(struct _NSRange )arg1 ;
-(NSUInteger)batchSize;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)test_lastBatchIndex;
-(id)_batchForBatchNumber:(NSUInteger)arg0 shouldUpdateLastBatch:(BOOL)arg1 ;
-(id)_fetchObjectsInBatchNumber:(NSUInteger)arg0 ;
-(id)_phObjectAtIndex:(NSUInteger)arg0 ;
-(id)_phObjectsForOIDs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOIDs:(id)arg0 options:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithOIDs:(id)arg0 options:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithObjects:(id)arg0 options:(id)arg1 photoLibrary:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)subarrayWithRange:(struct _NSRange )arg0 ;
-(void)_rememberUUIDsForBatch:(id)arg0 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)prefetchObjectsAtIndexes:(id)arg0 ;
-(void)test_evictBatchNumber:(NSInteger)arg0 ;
-(void)test_invalidateUUIDCache;


@end


#endif