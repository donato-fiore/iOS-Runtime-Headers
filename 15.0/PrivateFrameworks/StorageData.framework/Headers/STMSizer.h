// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMSIZER_H
#define STMSIZER_H

@class NSMutableDictionary, NSString, NSArray;
@protocol STMSizeCacheDelegate;


#import "STMSizeCache.h"

@interface STMSizer : STMSizeCache <STMSizeCacheDelegate>

 {
    os_unfair_lock_s _pendingEventsLock;
    NSMutableDictionary *_pendingEventsByPath;
    *__FSEventStream _fsStream;
    BOOL _streamRunning;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *rootPaths; // ivar: _rootPaths
@property (readonly) Class superclass;


+(id)containersWithClass:(NSInteger)arg0 error:(*id)arg1 ;
+(id)sharedAppSizer;
-(id)addContainer:(id)arg0 ;
-(id)addContainers:(id)arg0 ;
-(id)addURL:(id)arg0 ;
-(id)addURLs:(id)arg0 ;
-(id)cachePathOfContainer:(id)arg0 ;
-(id)cacheSizeForContainer:(id)arg0 ;
-(id)containersForApp:(id)arg0 ;
-(id)initWithPrefsKey:(id)arg0 ;
-(id)pathOfContainer:(id)arg0 ;
-(id)sizeForContainer:(id)arg0 ;
-(id)sizeForURL:(id)arg0 ;
-(id)updatedCacheSizeForContainer:(id)arg0 ;
-(id)updatedSizeForContainer:(id)arg0 ;
-(id)updatedSizeForURL:(id)arg0 ;
-(void)_asyncProcessPendingEvents:(id)arg0 ;
-(void)addApp:(id)arg0 ;
-(void)addApps:(id)arg0 ;
-(void)dealloc;
-(void)processEvents:(id)arg0 ;
-(void)processPendingEvents;
-(void)reloadAppContainer:(id)arg0 ;
-(void)setEvent:(id)arg0 forItem:(id)arg1 ;
-(void)startSizer;
-(void)stopSizer;
-(void)synchronizeCache;


@end


#endif