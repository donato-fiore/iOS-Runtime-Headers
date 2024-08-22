// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCACHEMANAGER_H
#define SPCACHEMANAGER_H

@class PARSession;

#import <Foundation/Foundation.h>


@interface SPCacheManager : NSObject {
    PARSession *_session;
}




+(NSInteger)version;
+(id)defaultManager;
+(id)defaultProperties;
+(id)defaultValueWithKey:(id)arg0 ;
+(id)defaults;
+(id)identifier;
+(void)removeDefaults;
+(void)removeKey:(id)arg0 ;
+(void)setDefaultWithKey:(id)arg0 value:(id)arg1 ;
+(void)setVersionWithValue:(NSInteger)arg0 ;
-(id)init;
-(id)recentResultsWithOptions:(id)arg0 ;
-(void)cacheContact:(id)arg0 contactIdentifier:(id)arg1 score:(id)arg2 searchString:(id)arg3 ;
-(void)cacheLocalResult:(id)arg0 identifier:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 searchString:(id)arg4 ;
-(void)cachePerson:(id)arg0 personQueryIdentifier:(id)arg1 score:(id)arg2 searchString:(id)arg3 ;
-(void)cacheResult:(id)arg0 title:(id)arg1 searchString:(id)arg2 ;
-(void)cacheSuggestion:(id)arg0 type:(int)arg1 score:(id)arg2 searchString:(id)arg3 ;
-(void)deleteAllResults;
-(void)deleteContact:(id)arg0 contactIdentifier:(id)arg1 score:(id)arg2 ;
-(void)deleteLocalResult:(id)arg0 identifier:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 ;
-(void)deletePerson:(id)arg0 personQueryIdentifier:(id)arg1 score:(id)arg2 ;
-(void)deleteResult:(id)arg0 title:(id)arg1 ;
-(void)deleteSuggestion:(id)arg0 type:(int)arg1 score:(id)arg2 ;
-(void)enumerateRecentCompletionsWithSearchString:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateRecentResultsUsingBlock:(id)arg0 ;


@end


#endif