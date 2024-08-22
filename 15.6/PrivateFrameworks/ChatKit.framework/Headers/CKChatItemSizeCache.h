// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCHATITEMSIZECACHE_H
#define CKCHATITEMSIZECACHE_H

@class NSMutableDictionary, IMScheduledUpdater, IMDoubleLinkedList, NSString, NSData;
@protocol IMSystemMonitorListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKChatItemSizeCache : NSObject <IMSystemMonitorListener>



@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDiskQueue; // ivar: _cacheDiskQueue
@property (retain, nonatomic) NSMutableDictionary *chatItemGUIDToCacheKeyMap; // ivar: _chatItemGUIDToCacheKeyMap
@property (retain, nonatomic) IMScheduledUpdater *evictionUpdater; // ivar: _evictionUpdater
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys; // ivar: _orderedKeys
@property (retain, nonatomic) NSString *preferredLocalization; // ivar: _preferredLocalization
@property (retain, nonatomic) NSData *test_cacheData; // ivar: _test_cacheData
@property (nonatomic) BOOL test_throwExceptionDuringInflate; // ivar: _test_throwExceptionDuringInflate


+(id)sharedInstance;
-(BOOL)_boldTextEnabled;
-(BOOL)cachedSizeForChatItem:(id)arg0 size:(struct CGSize *)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2 fittingSize:(struct CGSize )arg3 ;
-(id)_fontSizeCategory;
-(id)_generateChatItemGuidToCacheKeyMapWithCache:(id)arg0 ;
-(id)_systemVersion;
-(id)cacheKeyForChatItem:(id)arg0 fittingSize:(struct CGSize )arg1 ;
-(id)init;
-(id)initForTestAndThrowException:(BOOL)arg0 cacheFileData:(id)arg1 ;
-(void)_commonInit;
-(void)_evictIfNeeded;
-(void)_inflateCache;
-(void)_invalidateCachedSizeForChatItemGUID:(id)arg0 ;
-(void)_invalidateSizeCacheMetricsForKey:(id)arg0 ;
-(void)_persistCache;
-(void)_updateKeyMap:(id)arg0 forKey:(id)arg1 sizeCacheKey:(id)arg2 ;
-(void)applicationWillResignActive;
-(void)dealloc;
-(void)invalidateCachedSizeForChatItem:(id)arg0 ;
-(void)invalidateCachedSizeForGUIDPrefix:(id)arg0 ;
-(void)systemApplicationDidSuspend;


@end


#endif