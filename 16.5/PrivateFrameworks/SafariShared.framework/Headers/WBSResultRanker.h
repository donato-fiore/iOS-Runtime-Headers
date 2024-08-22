// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSRESULTRANKER_H
#define WBSRESULTRANKER_H


#import <Foundation/Foundation.h>


@interface WBSResultRanker : NSObject



+(BOOL)_shouldDedupeResult:(id)arg0 withMobile:(BOOL)arg1 withBase:(id)arg2 withSimplified:(id)arg3 ;
+(BOOL)includeBookmarksAndHistory:(id)arg0 ;
+(BOOL)matchNavigationIsClientOrServerError:(id)arg0 ;
+(id)_dropQueryPart:(id)arg0 ;
+(id)_simplifyURLForHistoryDedupe:(id)arg0 withMobile:(BOOL)arg1 ;
+(id)_urlStringWithoutQueryForMatch:(id)arg0 ;
+(id)_visibleURLtoDisplayedURL:(id)arg0 ;
+(id)dedupeResults:(id)arg0 withSearchSuggestionStrings:(id)arg1 searchProvider:(id)arg2 ;
+(id)dedupeSameTitleHistoryResults:(id)arg0 withMobile:(BOOL)arg1 withTophits:(id)arg2 withTabs:(id)arg3 ;
+(id)dedupeSameTitleHistoryResults:(id)arg0 withMobile:(BOOL)arg1 withTophits:(id)arg2 withTabs:(id)arg3 cloudTabs:(id)arg4 ;
+(id)dedupeSameURLResults:(id)arg0 withUniversalSearchResults:(id)arg1 ;
+(id)deduplicateTopHits:(id)arg0 ;
+(id)filterOutUnlikelyMatchesBeforeTopHitPromotionFromMatches:(id)arg0 forQuery:(id)arg1 searchProvider:(id)arg2 ;
+(id)filterOutUnlikelyMatchesFromMatches:(id)arg0 forQuery:(id)arg1 rewrittenQuery:(id)arg2 ;
+(id)searchParameters;
+(id)urlStringsFromUniversalSearchResults:(id)arg0 ;
+(void)_trackTitleAndURLSingle:(id)arg0 withMobile:(BOOL)arg1 withBase:(id)arg2 withSimplified:(id)arg3 ;
+(void)_trackTitlesAndURLs:(id)arg0 withMobile:(BOOL)arg1 withBase:(id)arg2 withSimplified:(id)arg3 ;
+(void)setSearchParameters:(id)arg0 ;


@end


#endif