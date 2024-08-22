// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPSPOTLIGHTRECENTSCACHE_H
#define SPSPOTLIGHTRECENTSCACHE_H


#import <Foundation/Foundation.h>


@interface SPSpotlightRecentsCache : NSObject



+(BOOL)topic:(id)arg0 isSameAsTopic:(id)arg1 ;
+(id)filteredTopics:(id)arg0 ;
+(id)recentResults;
+(id)recentResultsWithOptions:(id)arg0 ;
+(id)resultFromTopic:(id)arg0 ;
+(void)cacheContact:(id)arg0 contactIdentifier:(id)arg1 score:(id)arg2 searchString:(id)arg3 ;
+(void)cacheLocalResult:(id)arg0 identifier:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 searchString:(id)arg4 ;
+(void)cachePerson:(id)arg0 personQueryIdentifier:(id)arg1 score:(id)arg2 searchString:(id)arg3 ;
+(void)cacheResult:(id)arg0 title:(id)arg1 searchString:(id)arg2 ;
+(void)cacheSuggestion:(id)arg0 type:(int)arg1 score:(id)arg2 searchString:(id)arg3 ;
+(void)deleteContact:(id)arg0 contactIdentifier:(id)arg1 score:(id)arg2 ;
+(void)deleteLocalResult:(id)arg0 identifier:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 ;
+(void)deletePerson:(id)arg0 personQueryIdentifier:(id)arg1 score:(id)arg2 ;
+(void)deleteResult:(id)arg0 title:(id)arg1 ;
+(void)deleteSuggestion:(id)arg0 type:(int)arg1 score:(id)arg2 ;
+(void)enumerateRecentCompletionsWithSearchString:(id)arg0 usingBlock:(id)arg1 ;
+(void)enumerateRecentResultsUsingBlock:(id)arg0 ;


@end


#endif