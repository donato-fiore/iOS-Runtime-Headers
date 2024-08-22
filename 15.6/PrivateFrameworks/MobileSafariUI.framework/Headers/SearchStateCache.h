// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHSTATECACHE_H
#define SEARCHSTATECACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SearchStateCache : NSObject {
    NSMapTable *_cache;
}




-(NSInteger)idOfParsecQueryOriginatingFromSearchSuggestionInTabDocument:(id)arg0 ;
-(id)_cacheQueryForTabDocument:(id)arg0 ;
-(id)cachedCompletionListForTabDocument:(id)arg0 ;
-(id)init;
-(void)cacheAcceptanceOfCompletionItem:(id)arg0 withCompletionList:(id)arg1 forTabDocument:(id)arg2 ;
-(void)cacheSearchQueryID:(NSInteger)arg0 forTab:(id)arg1 ;
-(void)clearParsecQueryOriginatingFromSearchSuggestionInTabDocument:(id)arg0 ;
-(void)removeCachedSearchStateForTabDocument:(id)arg0 ;


@end


#endif