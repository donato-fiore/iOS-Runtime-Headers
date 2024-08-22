// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMPLETIONGROUPLISTING_H
#define COMPLETIONGROUPLISTING_H

@class NSArray, NSMutableArray, NSString, WBSCompletionQuery, WBSBrowserTabCompletionMatch, NSSet;
@protocol CompletionItem;

#import <Foundation/Foundation.h>

#import "UniversalSearchCompositeResultCompletionItem.h"
#import "FindOnPageCompletionItem.h"
#import "PencilInputCompletionItem.h"
#import "QuickWebsiteSearchCompletionItem.h"

@interface CompletionGroupListing : NSObject {
    BOOL _needsRebuild;
    NSArray *_groupListing;
    NSUInteger _indexOfSearchSuggestionsGroup;
    NSUInteger _indexOfFindOnPageGroup;
    NSMutableArray *_displayedParsecResults;
    NSString *_titleForCompositeParsecResult;
    UniversalSearchCompositeResultCompletionItem *_compositeParsecResult;
    UniversalSearchCompositeResultCompletionItem *_compositeParsecAccessoryItem;
    BOOL _isForFirstDisplay;
}


@property (copy, nonatomic) NSArray *URLCompletionMatches; // ivar: _URLCompletionMatches
@property (readonly, nonatomic, getter=isAwaitingCompletionDatabase) BOOL awaitingCompletionDatabase; // ivar: _awaitingCompletionDatabase
@property (readonly, nonatomic, getter=isAwaitingParsec) BOOL awaitingParsec; // ivar: _awaitingParsec
@property (readonly, nonatomic, getter=isAwaitingSearchProvider) BOOL awaitingSearchProvider; // ivar: _awaitingSearchProvider
@property (readonly, nonatomic, getter=isAwaitingTabCompletion) BOOL awaitingTabCompletion; // ivar: _awaitingTabCompletion
@property (copy, nonatomic) NSArray *bottomParsecResults; // ivar: _bottomParsecResults
@property (readonly, nonatomic) FindOnPageCompletionItem *findOnPageCompletionItem; // ivar: _findOnPageCompletionItem
@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, nonatomic) BOOL hasParsecCompletions;
@property (readonly, nonatomic) BOOL isEmpty;
@property (copy, nonatomic) NSArray *localTopHits; // ivar: _localTopHits
@property (readonly, nonatomic) NSUInteger numberOfGroups;
@property (copy, nonatomic) NSArray *parsecTopHits; // ivar: _parsecTopHits
@property (retain, nonatomic) PencilInputCompletionItem *pencilCompletionItem; // ivar: _pencilCompletionItem
@property (retain, nonatomic) WBSCompletionQuery *query; // ivar: _query
@property (retain, nonatomic) QuickWebsiteSearchCompletionItem *quickWebsiteSearchItem; // ivar: _quickWebsiteSearchItem
@property (retain, nonatomic) WBSCompletionQuery *rewrittenQuery; // ivar: _rewrittenQuery
@property (copy, nonatomic) NSArray *searchSuggestions; // ivar: _searchSuggestions
@property (readonly, nonatomic, getter=isSufficientlyComputedForDisplay) BOOL sufficientlyComputedForDisplay;
@property (copy, nonatomic) NSArray *suggestedSites; // ivar: _suggestedSites
@property (copy, nonatomic) WBSBrowserTabCompletionMatch *tabCompletionMatch; // ivar: _tabCompletionMatch
@property (readonly, copy, nonatomic) NSString *titleForFindOnPage; // ivar: _titleForFindOnPage
@property (readonly, nonatomic) NSObject<CompletionItem> *topHit;
@property (readonly, copy, nonatomic) NSSet *topHitAddresses;
@property (readonly, copy, nonatomic) NSArray *topHits;
@property (copy, nonatomic) NSArray *topParsecResults; // ivar: _topParsecResults


-(id)groupAtIndex:(NSUInteger)arg0 ;
-(id)initWithQuery:(id)arg0 forFirstDisplay:(BOOL)arg1 ;
-(void)clearTopHits;
-(void)markDatabaseResultsReceived;
-(void)markParsecResultsReceived;
-(void)markSearchResultsReceived;
-(void)markTabCompletionReceived;
-(void)setCompositeParsecResult:(id)arg0 withAccessoryItem:(id)arg1 title:(id)arg2 ;
-(void)setFindOnPageCompletion:(id)arg0 withTitle:(id)arg1 ;
-(void)setNeedsParsecDatabaseQueryRewrite;


@end


#endif