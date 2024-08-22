// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PENCILINPUTCOMPLETIONITEM_H
#define PENCILINPUTCOMPLETIONITEM_H

@class WBSCompletionQuery, NSURL, NSString, SFSearchResult, WBSQuerySuggestion;
@protocol CompletionItem, CompletionItemActionHandler;

#import <Foundation/Foundation.h>


@interface PencilInputCompletionItem : NSObject <CompletionItem>

 {
    WBSCompletionQuery *_userQuery;
    NSURL *_navigationURL;
    NSString *_searchQuery;
}


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
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL usesDefaultHeaderView;


-(BOOL)isEquivalentTo:(id)arg0 ;
-(id)completionTableViewCellForCompletionList:(id)arg0 ;
-(id)completionTableViewCellReuseIdentifier;
-(id)initWithUserQuery:(id)arg0 navigationURL:(id)arg1 searchQuery:(id)arg2 ;
-(id)reflectedStringForUserTypedString:(id)arg0 ;
-(void)acceptCompletionWithActionHandler:(id)arg0 ;
-(void)auditAcceptedCompletionWithRank:(NSUInteger)arg0 ;
-(void)configureCompletionTableViewCell:(id)arg0 forCompletionList:(id)arg1 ;


@end


#endif