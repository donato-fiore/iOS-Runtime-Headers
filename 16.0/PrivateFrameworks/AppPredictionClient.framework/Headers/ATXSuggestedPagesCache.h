// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESCACHE_H
#define ATXSUGGESTEDPAGESCACHE_H


#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesCache : NSObject



-(id)_cacheForPageType:(NSInteger)arg0 ;
-(id)cachedSuggestedPagesForPageType:(NSInteger)arg0 ;
-(void)cacheSuggestedPages:(id)arg0 forPageType:(NSInteger)arg1 ;
-(void)evictCachedSuggestedPages;
-(void)printCachedSuggestedPagesStats;


@end


#endif