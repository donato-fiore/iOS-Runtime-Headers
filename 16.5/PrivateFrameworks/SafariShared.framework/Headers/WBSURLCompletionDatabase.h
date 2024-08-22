// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSURLCOMPLETIONDATABASE_H
#define WBSURLCOMPLETIONDATABASE_H

@class NSString;
@protocol WBSURLCompletionDataSource;

#import <Foundation/Foundation.h>


@interface WBSURLCompletionDatabase : NSObject {
    Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _fullTextBookmarkMatchesCache;
    Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _fullTextHistoryMatchesCache;
    Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _prefixBookmarkMatchesCache;
    Vector<id<WBSURLCompletionMatchData>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _prefixHistoryMatchesCache;
    NSString *_fullTextBookmarkMatchesCacheString;
    NSString *_fullTextHistoryMatchesCacheString;
    NSString *_prefixBookmarkMatchesCacheString;
    NSString *_prefixHistoryMatchesCacheString;
}


@property (weak, nonatomic) NSObject<WBSURLCompletionDataSource> *dataSource; // ivar: _dataSource


+(BOOL)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(*void)arg0 ;
+(BOOL)_matchMistookErrorTitleForPageTitleForBookmarkAndHistoryCompletionMatch:(*void)arg0 ;
+(BOOL)_redirectionChainsOfCompletionMatchData:(id)arg0 containURLString:(id)arg1 ;
+(BOOL)_topHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> )arg0 isOneOfManyUnremarkableMatchesInLocalHistoryMatches:(*void)arg1 inDomain:(id)arg2 ;
+(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> )_synthesizeURLMatchWithURLString:(id)arg0 title:(id)arg1 topHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> )arg2 historyMatches:(*void)arg3 bookmarkMatches:(*void)arg4 typedString:(id)arg5 timeNow:(CGFloat)arg6 completionDataSource:(id)arg7 ;
+(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> )_topHitFromBaseURLMatchForTopHitFromMatches:(struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> )arg0 shouldReplaceTopHitFromMatches:(*BOOL)arg1 historyMatches:(*void)arg2 bookmarkMatches:(*void)arg3 typedString:(id)arg4 searchParameters:(id)arg5 timeNow:(CGFloat)arg6 completionDataSource:(id)arg7 ;
+(void)initializeURLCompletionOnMainThread;
-(id)init;
-(void)_getSortedFullTextMatchesForTypedString:(id)arg0 topHits:(*void)arg1 historyMatches:(*void)arg2 historyLimit:(NSUInteger)arg3 bookmarkMatches:(*void)arg4 bookmarkLimit:(NSUInteger)arg5 searchParameters:(id)arg6 ;
-(void)_getSortedMatchesForTypedString:(id)arg0 topHits:(*void)arg1 historyMatches:(*void)arg2 historyLimit:(NSUInteger)arg3 bookmarkMatches:(*void)arg4 bookmarkLimit:(NSUInteger)arg5 searchParameters:(id)arg6 prefixMatchesOnly:(BOOL)arg7 ;
-(void)_getSortedPrefixMatchesForTypedString:(id)arg0 topHits:(*void)arg1 historyMatches:(*void)arg2 historyLimit:(NSUInteger)arg3 bookmarkMatches:(*void)arg4 bookmarkLimit:(NSUInteger)arg5 searchParameters:(id)arg6 ;
-(void)_getUnsortedFullTextMatchesForTypedString:(id)arg0 historyMatches:(*void)arg1 bookmarkMatches:(*void)arg2 dataTypes:(unsigned int)arg3 ;
-(void)_getUnsortedPrefixMatchesForTypedString:(id)arg0 historyMatches:(*void)arg1 bookmarkMatches:(*void)arg2 ;
-(void)_removeMatchesThatMistookErrorTitleForPageTitleFromMatches:(*void)arg0 ;
-(void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(*void)arg0 ;
-(void)clearBookmarkMatchesCaches;
-(void)clearBookmarkMatchesCachesKeepingEmptyValues:(BOOL)arg0 ;
-(void)clearHistoryMatchesCache;
-(void)clearMatchesCaches;
-(void)getBestMatchesForTypedString:(id)arg0 topHits:(*id)arg1 matches:(*id)arg2 limit:(NSUInteger)arg3 forQueryID:(NSInteger)arg4 withSearchParameters:(id)arg5 ;


@end


#endif