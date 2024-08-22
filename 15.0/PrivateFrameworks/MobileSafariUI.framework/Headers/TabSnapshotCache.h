// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABSNAPSHOTCACHE_H
#define TABSNAPSHOTCACHE_H

@class NSMapTable, NSHashTable, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue, TabSnapshotCacheObserving;

#import <Foundation/Foundation.h>


@interface TabSnapshotCache : NSObject {
    NSMapTable *_delegateToContextMap;
    NSHashTable *_snapshotCacheObservers;
    NSUInteger _currentlyRequestedSnapshotCount;
    NSMutableDictionary *_snapshots;
    BOOL _updating;
    NSURL *_thumbnailCacheDirectoryURL;
    NSMutableDictionary *_groupIdentifiers;
    NSObject<OS_dispatch_queue> *_fileSystemAccessQueue;
    BOOL _currentlyRequestingNextSnapshot;
    BOOL _needsRequestNextSnapshot;
    BOOL _deferRequestNextSnapshot;
}


@property (weak, nonatomic) NSObject<TabSnapshotCacheObserving> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isFinishedUpdating) BOOL finishedUpdating;


+(BOOL)supportsASTC;
+(id)defaultSnapshotCache;
+(void)initialize;
+(void)removeSavedSnapshotsKeepingSnapshotsWithIdentifiers:(id)arg0 ;
-(BOOL)hasValidSnapshotWithIdentifier:(id)arg0 ;
-(BOOL)isIdentifier:(id)arg0 memberOfSameGroupAsIdentifier:(id)arg1 ;
-(id)_URLForSnapshotWithIdentifier:(id)arg0 isKTX:(BOOL)arg1 effectsVersion:(NSInteger)arg2 ;
-(id)_allIdentifiersToCache;
-(id)_contextForDelegate:(id)arg0 ;
-(id)_entryForIdentifier:(id)arg0 ;
-(id)_entryForIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_existingURLForSnapshotWithIdentifier:(id)arg0 effectsVersion:(*NSInteger)arg1 ;
-(id)_preferredURLForSnapshotWithIdentifier:(id)arg0 ;
-(id)_readSnapshotImageForIdentifier:(id)arg0 ;
-(id)_writeSnapshotImage:(struct CGImage *)arg0 withIdentifier:(id)arg1 ;
-(id)debugDescription;
-(id)identifiersToCacheForDelegate:(id)arg0 ;
-(id)init;
-(id)initWithThumbnailCacheDirectoryURL:(id)arg0 ;
-(id)snapshotWithIdentifier:(id)arg0 ;
-(void)_beginUpdatingStateForIdentifier:(id)arg0 ;
-(void)_determineInitialStateForIdentifier:(id)arg0 ;
-(void)_enumerateDelegatesAndIdentifiersForEntry:(id)arg0 usingBlock:(id)arg1 ;
-(void)_enumeratePossibleURLsForSnapshotWithIdentifier:(id)arg0 withBlock:(id)arg1 ;
-(void)_finishUpdatingToState:(NSInteger)arg0 cachedSnapshot:(id)arg1 forEntry:(id)arg2 ;
-(void)_finishUpdatingToState:(NSInteger)arg0 forEntry:(id)arg1 ;
-(void)_requestNextSnapshotIfNecessaryForDelegate:(id)arg0 ;
-(void)_requestSavedSnapshotForIdentifier:(id)arg0 ;
-(void)_saveSnapshotForIdentifier:(id)arg0 ;
-(void)_sendDidFinishUpdatingToDelegateIfNeeded;
-(void)addIdentifier:(id)arg0 toGroupWithIdentifier:(id)arg1 ;
-(void)addSnapshotCacheObserver:(id)arg0 ;
-(void)invalidateSnapshotWithIdentifier:(id)arg0 ;
-(void)performBatchUpdatesWithBlock:(id)arg0 ;
-(void)removeIdentifier:(id)arg0 fromGroupWithIdentifier:(id)arg1 ;
-(void)removeSnapshotCacheObserver:(id)arg0 ;
-(void)removeSnapshotWithIdentifier:(id)arg0 ;
-(void)requestNextSnapshotIfNecessary;
-(void)setCapacity:(NSUInteger)arg0 forDelegate:(id)arg1 ;
-(void)setIdentifiersToCache:(id)arg0 forDelegate:(id)arg1 ;
-(void)setUpdating:(BOOL)arg0 forDelegate:(id)arg1 ;


@end


#endif