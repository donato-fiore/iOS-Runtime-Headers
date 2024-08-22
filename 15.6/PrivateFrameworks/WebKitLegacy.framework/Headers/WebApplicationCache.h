// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBAPPLICATIONCACHE_H
#define WEBAPPLICATIONCACHE_H


#import <Foundation/Foundation.h>


@interface WebApplicationCache : NSObject



+(NSInteger)defaultOriginQuota;
+(NSInteger)diskUsageForOrigin:(id)arg0 ;
+(NSInteger)maximumSize;
+(id)originsWithCache;
+(void)deleteAllApplicationCaches;
+(void)deleteCacheForOrigin:(id)arg0 ;
+(void)initializeWithBundleIdentifier:(id)arg0 ;
+(void)setDefaultOriginQuota:(NSInteger)arg0 ;
+(void)setMaximumSize:(NSInteger)arg0 ;


@end


#endif