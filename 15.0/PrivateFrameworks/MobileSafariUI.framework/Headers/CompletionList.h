// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMPLETIONLIST_H
#define COMPLETIONLIST_H

@class NSArray, NSString, NSMutableDictionary, NSDate, NSTimer, WBSCompletionQuery, WBSBrowserTabCompletionMatch;
@protocol CompletionProviderDelegate, FindOnPageCompletionProviderDataSource, TabCompletionProviderDataSource, CompletionItem, CompletionListDelegate, LoadProgressObserver;

#import <Foundation/Foundation.h>

#import "SearchQueryRestorationCompletionItem.h"
#import "CompletionListGroup.h"
#import "URLCompletionProvider.h"
#import "BrowserController.h"
#import "FindOnPageCompletionProvider.h"
#import "CompletionProvider.h"
#import "UniversalSearchSession.h"
#import "PencilInputCompletionProvider.h"
#import "QuickWebsiteSearchCompletionProvider.h"
#import "ReadingListCompletionProvider.h"
#import "SearchSuggestionProvider.h"
#import "TabCompletionProvider.h"
#import "UniversalSearchCompletionProvider.h"

@interface CompletionList : NSObject <CompletionProviderDelegate, FindOnPageCompletionProviderDataSource, TabCompletionProviderDataSource>

 {
    NSUInteger _inputTypeOfStringToComplete;
    NSArray *_cfGroups;
    NSArray *_groups;
    NSArray *_cachedParsecResults;
    NSInteger _cachedParsecQueryID;
    NSString *_treatmentId;
    NSUInteger _cfError;
    SearchQueryRestorationCompletionItem *_queryRestorationCompletionItem;
    NSMutableDictionary *_rankingFeedbackForHiddenOrDuplicateResults;
    NSDate *_nextAllowedUpdateTime;
    NSDate *_showPartialCompletionsTime;
    NSTimer *_updateTimer;
    CompletionListGroup *_findOnPageGroup;
    NSString *_stringMatchedByTopHit;
    NSString *_matchingStringInTopHit;
    id<CompletionItem> *_topHit;
    BOOL _tryParsecRewritesIfNoTopHit;
    WBSCompletionQuery *_rewrittenQuery;
    WBSBrowserTabCompletionMatch *_switchToTabMatch;
}


@property (retain, nonatomic) URLCompletionProvider *URLCompletionProvider; // ivar: _URLCompletionProvider
@property (readonly, weak, nonatomic) BrowserController *browserController; // ivar: _browserController
@property (readonly, nonatomic) NSUInteger cfFindOnPageGroupIndex;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CompletionListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger findOnPageGroupIndex;
@property (retain, nonatomic) FindOnPageCompletionProvider *findOnPageProvider; // ivar: _findOnPageProvider
@property (retain, nonatomic) CompletionProvider *firstRemoteCompletionProviderToRespondToQuery; // ivar: _firstRemoteCompletionProviderToRespondToQuery
@property (readonly, nonatomic) BOOL hasCompletions;
@property (readonly, nonatomic) BOOL hasParsecResults;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<LoadProgressObserver> *loadProgressObserver; // ivar: _loadProgressObserver
@property (nonatomic) NSUInteger maximumCompletionsPerGroup; // ivar: _maximumCompletionsPerGroup
@property (retain, nonatomic) NSDate *minRenderTimeoutStartTime; // ivar: _minRenderTimeoutStartTime
@property (nonatomic) BOOL networkIsReachable; // ivar: _networkIsReachable
@property (retain, nonatomic) NSDate *otherRenderTimeoutStartTime; // ivar: _otherRenderTimeoutStartTime
@property (retain, nonatomic) UniversalSearchSession *parsecSearchSession; // ivar: _parsecSearchSession
@property (retain, nonatomic) PencilInputCompletionProvider *pencilInputCompletionProvider; // ivar: _pencilInputCompletionProvider
@property (retain, nonatomic) WBSCompletionQuery *query; // ivar: _query
@property (retain, nonatomic) QuickWebsiteSearchCompletionProvider *quickWebsiteSearchProvider; // ivar: _quickWebsiteSearchProvider
@property (retain, nonatomic) ReadingListCompletionProvider *readingListProvider; // ivar: _readingListProvider
@property (retain, nonatomic) NSArray *searchParametersList; // ivar: _searchParametersList
@property (retain, nonatomic) NSDate *searchRenderTimeoutStartTime; // ivar: _searchRenderTimeoutStartTime
@property (nonatomic) BOOL shouldIncludeSearchSuggestions; // ivar: _shouldIncludeSearchSuggestions
@property (retain, nonatomic) SearchSuggestionProvider *suggestionProvider; // ivar: _suggestionProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) TabCompletionProvider *tabCompletionProvider; // ivar: _tabCompletionProvider
@property (retain, nonatomic) UniversalSearchCompletionProvider *universalSearchProvider; // ivar: _universalSearchProvider
@property (nonatomic, getter=isUsingPencilInput) BOOL usingPencilInput; // ivar: _usingPencilInput


+(id)_completionsByMergingRecentSearches:(id)arg0 withSuggestions:(id)arg1 andLiteralSearch:(id)arg2 queryID:(NSInteger)arg3 ;
+(id)completionBookmarkProvider;
-(BOOL)_searchRenderTimeoutHasElapsed;
-(BOOL)_shouldFetchSearchSuggestions;
-(BOOL)_shouldShowAccessoryContainingCompletionForResults:(id)arg0 ;
-(BOOL)_shouldShowGroupedCompletionForResults:(id)arg0 ;
-(BOOL)_shouldShowParsecExpandedComposite:(id)arg0 topHits:(id)arg1 isExpandedComposite:(BOOL)arg2 hideTopHits:(*BOOL)arg3 ;
-(BOOL)_topHitMatchesString:(id)arg0 ;
-(BOOL)_urlString:(id)arg0 isProbablyContainedIn:(id)arg1 ;
-(BOOL)isTopHitReadyForString:(id)arg0 ;
-(NSUInteger)numberOfGroups;
-(id)_addTopHits:(id)arg0 intoGroups:(id)arg1 ;
-(id)_addTopHitsWithSwitchToTabSectionIfNecessary:(id)arg0 intoGroups:(id)arg1 ;
-(id)_bestTabCompletionItemWithTopHits:(id)arg0 ;
-(id)_findOnPageGroupForQuery:(id)arg0 ;
-(id)_groupByAddingCompletion:(id)arg0 toGroup:(id)arg1 ;
-(id)_groupOrNilAtIndex:(NSUInteger)arg0 ;
-(id)_groupWithTitle:(id)arg0 completions:(id)arg1 ;
-(id)_groupWithTitle:(id)arg0 completions:(id)arg1 maximumCompletions:(NSUInteger)arg2 ;
-(id)_groupsForQuery:(id)arg0 allowPartialCompletions:(BOOL)arg1 findOnPageGroup:(*id)arg2 topHit:(*id)arg3 topHitReady:(*BOOL)arg4 ;
-(id)_groupsOnUnreachableNetworkForQuery:(id)arg0 ;
-(id)_recentSearchesForQuery:(id)arg0 ;
-(id)_resultsWithBottomPlacement:(*id)arg0 topHitAddresses:(id)arg1 currentTopHit:(id)arg2 ;
-(id)_titleForFindOnPageHeaderWithMatchCount:(NSUInteger)arg0 ;
-(id)_titleForTopHits:(NSUInteger)arg0 ;
-(id)completionsForGroupAtIndex:(NSUInteger)arg0 ;
-(id)currentWindowUUIDForTabCompletionProvider:(id)arg0 ;
-(id)defaultSectionTitleForGroupAtIndex:(NSUInteger)arg0 ;
-(id)headerViewForGroupAtIndex:(NSUInteger)arg0 ;
-(id)headerViewReuseIdentifierForGroupAtIndex:(NSUInteger)arg0 ;
-(id)initWithParsecSearchSession:(id)arg0 browserController:(id)arg1 ;
-(id)selectedTabDocumentForTabCompletionProvider:(id)arg0 ;
-(id)tabDocumentForFindOnPageCompletionProvider:(id)arg0 ;
-(id)tabGroupsForTabCompletionProvider:(id)arg0 ;
-(id)titleForGroupAtIndex:(NSUInteger)arg0 ;
-(id)topHitForString:(id)arg0 ;
-(id)windowHostingCompletionProvider:(id)arg0 ;
-(id)windowUUIDsToTabDocumentsForTabCompletionProvider:(id)arg0 ;
-(void)_addResult:(id)arg0 intoGroup:(id)arg1 unlessHiddenBy:(id)arg2 topHit:(id)arg3 ;
-(void)_addResults:(id)arg0 intoGroups:(id)arg1 ;
-(void)_addSwitchToTabSectionIfNecessary:(id)arg0 intoGroups:(id)arg1 ;
-(void)_addSwitchToTabSectionWithTabCompletionMatch:(id)arg0 intoGroups:(id)arg1 ;
-(void)_cacheResultsIfApplicable:(id)arg0 ;
-(void)_invalidateUpdateTimer;
-(void)_removeCompletionsWithAddressInSet:(id)arg0 fromArray:(id)arg1 andTruncateTo:(NSUInteger)arg2 ;
-(void)_removeSearchURLsFromCompletions:(id)arg0 ;
-(void)_removeTopHitsGroup:(id)arg0 ;
-(void)_scheduleUpdateOnOrBeforeDate:(id)arg0 withCurrentDate:(id)arg1 ;
-(void)_searchForURLTopHits:(id)arg0 intoTopHits:(id)arg1 andAddresses:(id)arg2 ;
-(void)_setNeedsUpdate;
-(void)_update;
-(void)_updateIconsForSearchUIRowsInGroups:(id)arg0 topHit:(id)arg1 ;
-(void)_updateParsecCacheForQuery:(id)arg0 withTopHit:(id)arg1 withParsecCompletions:(*id)arg2 ;
-(void)_updateProviders;
-(void)_updateQueryIDForGroups;
-(void)_updateTimerFired:(id)arg0 ;
-(void)cacheCurrentCompletionsAfterAcceptanceOfCompletionItem:(id)arg0 ;
-(void)clearCachedSearchQuery;
-(void)clearCachedSearches;
-(void)clearCachedTabCompletionData;
-(void)completionProvider:(id)arg0 didFinishCompletingString:(id)arg1 ;
-(void)completionProviderDidFail:(id)arg0 ;
-(void)configureHeaderView:(id)arg0 forGroupAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)didResumeSearchWithQuery:(id)arg0 ;
-(void)restoreCachedCompletions;
-(void)stopCompleting;


@end


#endif