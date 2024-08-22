// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKRESOURCELOADER_H
#define GKRESOURCELOADER_H

@class NSOperationQueue, NSMutableDictionary, NSMapTable;

#import <Foundation/Foundation.h>

#import "GKResourceCache.h"

@interface GKResourceLoader : NSObject {
    NSInteger _requestCountMap;
}


@property (readonly, nonatomic) NSOperationQueue *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) GKResourceCache *cachedResources; // ivar: _cachedResources
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL isInBackground; // ivar: _isInBackground
@property (readonly, nonatomic) NSOperationQueue *notificationQueue; // ivar: _notificationQueue
@property (readonly, nonatomic) NSMutableDictionary *pendingOperations; // ivar: _pendingOperations
@property (readonly, nonatomic) NSOperationQueue *requestQueue; // ivar: _requestQueue
@property (readonly, nonatomic) NSMapTable *requestsByCacheKey; // ivar: _requestsByCacheKey


-(BOOL)isIdleForReason:(NSInteger)arg0 ;
-(BOOL)loadResourceWithRequest:(id)arg0 reason:(NSInteger)arg1 ;
-(BOOL)setReason:(NSInteger)arg0 forRequestWithKey:(id)arg1 ;
-(NSInteger)currentQualityOfService;
-(id)cachedResourcesForCacheKey:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithParentResourceLoader:(id)arg0 ;
-(id)initWithRequestQueue:(id)arg0 accessQueue:(id)arg1 notificationQueue:(id)arg2 cacheLimit:(NSInteger)arg3 ;
-(id)requestKeyForCacheKey:(id)arg0 ;
-(void)_commonInit;
-(void)addResource:(id)arg0 forCacheKey:(id)arg1 ;
-(void)cancelAllRequests;
-(void)cancelRequestForCacheKey:(id)arg0 ;
-(void)dealloc;
-(void)enterBackground;
-(void)enterForeground;
-(void)finishLoadForRequest:(id)arg0 withResource:(id)arg1 error:(id)arg2 ;
-(void)postDidBeginLoadingIfIdle;
-(void)postDidIdleIfIdle;
-(void)postDidLoadAllForReason:(NSInteger)arg0 ;
-(void)removeAllCachedResources;
-(void)removeResourcesForCacheKey:(id)arg0 ;
-(void)reprioritizeOperations;
-(void)updateLoadReason:(NSInteger)arg0 forOperation:(id)arg1 ;


@end


#endif