// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSASSETQUERYRESULTCACHE_H
#define DDSASSETQUERYRESULTCACHE_H

@class NSString;
@protocol DDSCacheDelegate, DDSAssetQueryResultCaching;

#import <Foundation/Foundation.h>

#import "DDSCache.h"

@interface DDSAssetQueryResultCache : NSObject <DDSCacheDelegate, DDSAssetQueryResultCaching>



@property (readonly, nonatomic) DDSCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cachedAssetsForQuery:(id)arg0 ;
-(id)init;
-(void)cache:(id)arg0 willEvictObjects:(id)arg1 ;
-(void)cacheAssets:(id)arg0 forQuery:(id)arg1 ;
-(void)clearCache;


@end


#endif