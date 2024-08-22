// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KGDATABASENAMECACHEMANAGER_H
#define KGDATABASENAMECACHEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface KGDatabaseNameCacheManager : NSObject {
    NSMutableDictionary *_cacheByPath;
    os_unfair_lock_s _lock;
}




+(id)nameCacheForURL:(id)arg0 ;
+(void)deregisterNameCacheForURL:(id)arg0 ;
+(void)unloadNameCacheForURL:(id)arg0 ;
-(id)cacheForURL:(id)arg0 ;
-(id)init;
-(void)deregisterCacheForURL:(id)arg0 ;
-(void)unloadCacheForURL:(id)arg0 ;


@end


#endif