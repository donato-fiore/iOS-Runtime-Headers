// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHSUGGESTION_H
#define SEARCHSUGGESTION_H

@class SFSearchResult, WBSCompletionQuery, NSString, WBSQuerySuggestion;
@protocol CompletionItem, CompletionItemActionHandler;

#import <Foundation/Foundation.h>


@interface SearchSuggestion : NSObject <CompletionItem>

 {
    BOOL _recentSearch;
    BOOL _searchEngineSuggestion;
    SFSearchResult *_sfSearchResultValue;
    WBSCompletionQuery *_userQuery;
    id<CompletionItemActionHandler> *_handler;
    BOOL _handlingAccessoryButtonTap;
}


@property (readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger engagementDestination;
@property (readonly, nonatomic) BOOL goesToURL; // ivar: _goesToURL
@property (retain, nonatomic) NSObject<CompletionItemActionHandler> *handlerForActionItem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (nonatomic) NSUInteger minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) BOOL needsSectionHeader;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) NSInteger parsecQueryID; // ivar: _parsecQueryID
@property (readonly, nonatomic) BOOL restoresSearchState;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesDefaultHeaderView;


-(BOOL)isEquivalentTo:(id)arg0 ;
-(CGFloat)completionTableViewCellCustomHeightForCompletionList:(id)arg0 ;
-(id)_initWithString:(id)arg0 userQuery:(id)arg1 ;
-(id)completionTableViewCellForCompletionList:(id)arg0 ;
-(id)completionTableViewCellReuseIdentifier;
-(id)initWithRecentSearchString:(id)arg0 userQuery:(id)arg1 ;
-(id)initWithSearchEngineSuggestion:(id)arg0 userQuery:(id)arg1 ;
-(id)initWithUserTypedQuery:(id)arg0 ;
-(id)reflectedStringForUserTypedString:(id)arg0 ;
-(void)_accessoryButtonTapped;
-(void)acceptCompletionWithActionHandler:(id)arg0 ;
-(void)auditAcceptedCompletionWithRank:(NSUInteger)arg0 ;
-(void)configureCompletionTableViewCell:(id)arg0 forCompletionList:(id)arg1 ;


@end


#endif