// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRECENTWEBSEARCHESCONTROLLER_H
#define WBSRECENTWEBSEARCHESCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WBSRecentWebSearchesController : NSObject {
    NSMutableArray *_recentSearchEntries;
}




+(BOOL)_shouldTrackSearches;
+(NSUInteger)_maximumNumberOfSearchesToTrack;
+(id)_defaultsKey;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg0 ;
-(id)_recentSearchesDictionaries;
-(id)recentSearches;
-(id)recentSearchesMatchingPrefix:(id)arg0 ;
-(void)_addLegacySearch:(id)arg0 ;
-(void)_addRecentSearchEntry:(id)arg0 ;
-(void)_loadRecentSearchesIfNeeded;
-(void)_migrateLegacyData;
-(void)_removeLegacyRecentSearchesData;
-(void)_saveRecentSearchDictionaries:(id)arg0 toUserDefaultsUsingKey:(id)arg1 ;
-(void)_saveRecentSearches;
-(void)addRecentSearch:(id)arg0 ;
-(void)clearRecentSearches;
-(void)clearRecentSearchesAddedAfterDate:(id)arg0 ;


@end


#endif