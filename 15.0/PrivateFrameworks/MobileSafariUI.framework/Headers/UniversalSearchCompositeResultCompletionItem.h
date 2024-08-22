// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNIVERSALSEARCHCOMPOSITERESULTCOMPLETIONITEM_H
#define UNIVERSALSEARCHCOMPOSITERESULTCOMPLETIONITEM_H

@class NSString, NSArray, SFSearchResult, WBSQuerySuggestion;
@protocol SearchUIFeedbackDelegate, CompletionItem, CompletionItemActionHandler;

#import <Foundation/Foundation.h>


@interface UniversalSearchCompositeResultCompletionItem : NSObject <SearchUIFeedbackDelegate, CompletionItem>



@property (readonly, nonatomic, getter=isAccessoryItem) BOOL accessoryItem; // ivar: _accessoryItem
@property (readonly, nonatomic) BOOL allowsAccessoryItem;
@property (readonly, nonatomic) NSString *bestSectionHeader;
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
@property (readonly, copy, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (nonatomic) BOOL shouldPrefetch; // ivar: _shouldPrefetch
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL usesDefaultHeaderView;


-(BOOL)isEquivalentTo:(id)arg0 ;
-(BOOL)shouldPrefetchWithMatchLength:(NSUInteger)arg0 ;
-(id)completionTableViewCellForCompletionList:(id)arg0 ;
-(id)completionTableViewCellReuseIdentifier;
-(id)initWithResults:(id)arg0 isAccessoryItem:(BOOL)arg1 forQueryId:(NSInteger)arg2 ;
-(id)reflectedStringForUserTypedString:(id)arg0 ;
-(id)userVisibleURLString;
-(int)_separatorStyle;
-(void)_applySeparatorStyleToCell:(id)arg0 forSeparatorStyle:(int)arg1 ;
-(void)_postFeedback:(id)arg0 ;
-(void)acceptCompletionWithActionHandler:(id)arg0 ;
-(void)auditAcceptedCompletionWithRank:(NSUInteger)arg0 ;
-(void)cardViewDidAppear:(id)arg0 ;
-(void)configureCompletionTableViewCell:(id)arg0 forCompletionList:(id)arg1 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didPerformCommand:(id)arg0 ;
-(void)resultsDidBecomeVisible:(id)arg0 ;


@end


#endif