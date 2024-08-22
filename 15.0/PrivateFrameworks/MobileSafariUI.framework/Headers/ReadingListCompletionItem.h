// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef READINGLISTCOMPLETIONITEM_H
#define READINGLISTCOMPLETIONITEM_H

@class WBSCompletionQuery, WebBookmark, NSString, SFSearchResult, WBSQuerySuggestion;
@protocol CompletionItem, CompletionItemActionHandler;

#import <Foundation/Foundation.h>


@interface ReadingListCompletionItem : NSObject <CompletionItem>

 {
    WBSCompletionQuery *_userQuery;
}


@property (retain, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger engagementDestination;
@property (retain, nonatomic) NSObject<CompletionItemActionHandler> *handlerForActionItem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (nonatomic) NSUInteger minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) BOOL needsSectionHeader;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) NSInteger parsecQueryID; // ivar: _parsecQueryID
@property (readonly, nonatomic) BOOL restoresSearchState;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue; // ivar: _sfSearchResultValue
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesDefaultHeaderView;


-(BOOL)isEquivalentTo:(id)arg0 ;
-(id)completionTableViewCellForCompletionList:(id)arg0 ;
-(id)completionTableViewCellReuseIdentifier;
-(id)initWithReadingListBookmark:(id)arg0 userQuery:(id)arg1 ;
-(id)reflectedStringForUserTypedString:(id)arg0 ;
-(void)acceptCompletionWithActionHandler:(id)arg0 ;
-(void)auditAcceptedCompletionWithRank:(NSUInteger)arg0 ;
-(void)configureCompletionTableViewCell:(id)arg0 forCompletionList:(id)arg1 ;


@end


#endif