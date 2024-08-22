// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICURLBAGPROVIDER_H
#define ICURLBAGPROVIDER_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICURLBagProvider : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
    NSMutableSet *_cacheKeysScheduledForRefresh;
}




+(id)sharedBagProvider;
-(BOOL)_shouldUseLegacyProtocolForRequestContext:(id)arg0 ;
-(id)_amsProcessInfoFromRequestContext:(id)arg0 ;
-(id)_cacheFilePath;
-(id)_getCacheKeyForRequestContext:(id)arg0 ;
-(id)init;
-(void)_fetchBagForRequestContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg0 ;
-(void)_loadCache;
-(void)_saveCache;
-(void)dealloc;
-(void)getBagForRequestContext:(id)arg0 forceRefetch:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)getBagForRequestContext:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)invalidateCache;


@end


#endif