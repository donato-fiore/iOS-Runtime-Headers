// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FINDONPAGECOMPLETIONITEM_H
#define FINDONPAGECOMPLETIONITEM_H

@class SFSearchResult, NSString, WBSQuerySuggestion;
@protocol CompletionItem, CompletionItemActionHandler;



@interface FindOnPageCompletionItem : SFSearchResult <CompletionItem>



@property (readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger engagementDestination;
@property (retain, nonatomic) NSObject<CompletionItemActionHandler> *handlerForActionItem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (nonatomic) NSUInteger minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) BOOL needsSectionHeader;
@property (readonly, nonatomic) NSUInteger numberOfMatches; // ivar: _numberOfMatches
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) NSInteger parsecQueryID; // ivar: _parsecQueryID
@property (readonly, nonatomic) BOOL restoresSearchState;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesDefaultHeaderView;


-(BOOL)isEquivalentTo:(id)arg0 ;
-(id)completionTableViewCellForCompletionList:(id)arg0 ;
-(id)completionTableViewCellReuseIdentifier;
-(id)initWithString:(id)arg0 numberOfMatches:(NSUInteger)arg1 forQueryID:(NSInteger)arg2 ;
-(id)reflectedStringForUserTypedString:(id)arg0 ;
-(id)string;
-(void)acceptCompletionWithActionHandler:(id)arg0 ;
-(void)auditAcceptedCompletionWithRank:(NSUInteger)arg0 ;
-(void)configureCompletionTableViewCell:(id)arg0 forCompletionList:(id)arg1 ;


@end


#endif