// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUAMSRESULTCACHE_H
#define MUAMSRESULTCACHE_H


#import <Foundation/Foundation.h>

#import "MUTimeExpirableLRUCache.h"

@interface MUAMSResultCache : NSObject {
    MUTimeExpirableLRUCache *_amsResultsByAdamIds;
    MUTimeExpirableLRUCache *_amsResultsByBundleIds;
}




-(id)amsResultForAdamId:(id)arg0 ;
-(id)amsResultForBundleId:(id)arg0 ;
-(id)initWithAppAdamIdCacheCount:(NSUInteger)arg0 appAdamIdTimeToLive:(NSUInteger)arg1 bundleIdCacheCount:(NSUInteger)arg2 bundleIdTimeToLive:(NSUInteger)arg3 ;
-(void)setAMSResult:(id)arg0 forAdamId:(id)arg1 ;
-(void)setAMSResult:(id)arg0 forBundleId:(id)arg1 ;


@end


#endif