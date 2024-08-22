// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMUSICUSERTOKENCACHE_H
#define ICMUSICUSERTOKENCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICMusicUserTokenCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_cachedUserTokens;
}




+(id)_decodeDeveloperTokenPart:(id)arg0 ;
+(id)sharedCache;
+(void)_getCacheKeyForDeveloperToken:(id)arg0 requestContext:(id)arg1 completion:(id)arg2 ;
-(id)_init;
-(void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg0 ;
-(void)_loadPersistedCacheWithCompletion:(id)arg0 ;
-(void)_persistCache;
-(void)_postLocalChangeNotification;
-(void)dealloc;
-(void)getCachedUserTokenForDeveloperToken:(id)arg0 requestContext:(id)arg1 completion:(id)arg2 ;
-(void)setCachedUserToken:(id)arg0 forDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(id)arg3 ;


@end


#endif