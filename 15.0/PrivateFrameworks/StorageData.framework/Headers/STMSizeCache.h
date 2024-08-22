// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMSIZECACHE_H
#define STMSIZECACHE_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSLock;
@protocol STMSizeCacheDelegate;

#import <Foundation/Foundation.h>


@interface STMSizeCache : NSObject {
    *__CFString _prefsKey;
    NSMutableDictionary *_itemsByPath;
    NSMutableArray *_eventsToProcess;
}


@property NSUInteger cacheEventID; // ivar: _cacheEventID
@property (weak) NSObject<STMSizeCacheDelegate> *delegate; // ivar: _delegate
@property (readonly) NSArray *items;
@property (retain) NSLock *itemsLock; // ivar: _itemsLock


-(id)initWithPrefsKey:(id)arg0 ;
-(id)itemForPath:(id)arg0 ;
-(id)itemsContainedByPath:(id)arg0 ;
-(id)itemsContainingPath:(id)arg0 ;
-(id)sizeOfItemForPath:(id)arg0 ;
-(id)updatedSizeOfItemForPath:(id)arg0 ;
-(void)_flushCache:(id)arg0 ;
-(void)_writeCache;
-(void)addItem:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)dealloc;
-(void)flushCacheToPref;
-(void)loadCacheFromPref;
-(void)notifyItemsAdded:(id)arg0 ;
-(void)notifySizesChanged:(id)arg0 ;
-(void)processCacheEvent:(id)arg0 ;
-(void)processCacheEvents:(id)arg0 ;
-(void)pruneCache;
-(void)removeItem:(id)arg0 ;
-(void)removeItemForPath:(id)arg0 ;
-(void)resizeAllItems;
-(void)resizeItemForPath:(id)arg0 ;
-(void)resizeItemsForPaths:(id)arg0 ;
-(void)updateSizeOfItem:(id)arg0 synchronous:(BOOL)arg1 ;
-(void)writeCacheToPref;


@end


#endif