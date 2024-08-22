// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTEXTHEURISTICCACHE_H
#define ATXCONTEXTHEURISTICCACHE_H

@class NSMutableDictionary, NSHashTable;

#import <Foundation/Foundation.h>


@interface ATXContextHeuristicCache : NSObject {
    NSMutableDictionary *_cache;
    NSHashTable *_criteriaTable;
    _opaque_pthread_mutex_t _lock;
}




-(id)allRelevantSuggestionsForDate:(id)arg0 ;
-(id)heuristicsCached;
-(id)init;
-(id)nextChangeAfterDate:(id)arg0 ;
-(id)suggestionsForKey:(id)arg0 ;
-(void)dealloc;
-(void)evict:(id)arg0 ;
-(void)evictAll;
-(void)evictBefore:(id)arg0 ;
-(void)setSuggestions:(id)arg0 forKey:(id)arg1 ;


@end


#endif