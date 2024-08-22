// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPARSECSEARCHRESULTCACHE_H
#define WBSPARSECSEARCHRESULTCACHE_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface WBSParsecSearchResultCache : NSObject {
    NSMutableDictionary *_resultSetCache;
    NSMutableDictionary *_resultSetsByPrefix;
    NSUInteger _cachedQueriesLimit;
}


@property (readonly, nonatomic) NSArray *allCachedQueries;


-(BOOL)_resultSet:(id)arg0 isMatchForQuery:(id)arg1 ;
-(BOOL)_shouldCacheResultSetForQueryMatching:(id)arg0 ;
-(id)bestResultSetForQuery:(id)arg0 ;
-(id)initWithCachedQueriesLimit:(NSUInteger)arg0 ;
-(id)resultSetWithQuery:(id)arg0 ;
-(void)cacheResultSet:(id)arg0 ;
-(void)cacheResultSetsFromSearchResponse:(id)arg0 ;


@end


#endif