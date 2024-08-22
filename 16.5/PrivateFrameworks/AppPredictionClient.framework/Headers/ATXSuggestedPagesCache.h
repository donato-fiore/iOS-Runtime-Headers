// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTEDPAGESCACHE_H
#define ATXSUGGESTEDPAGESCACHE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesCache : NSObject {
    NSString *_basePath;
}




-(id)_cacheForPageType:(NSInteger)arg0 ;
-(id)cachedSuggestedPagesForPageType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)cacheSuggestedPages:(id)arg0 forPageType:(NSInteger)arg1 ;
-(void)evictCachedSuggestedPages;
-(void)printCachedSuggestedPagesStats;


@end


#endif