// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONSEARCHCONTROLLER_H
#define CKCONVERSATIONSEARCHCONTROLLER_H

@class NSArray, NSSet, _PSSuggester;


#import "CKSearchController.h"

@interface CKConversationSearchController : CKSearchController

@property (retain, nonatomic) NSArray *currentZKWSuggestions; // ivar: _currentZKWSuggestions
@property (nonatomic) BOOL gotResults; // ivar: _gotResults
@property (retain, nonatomic) NSSet *intermediaryResults; // ivar: _intermediaryResults
@property (nonatomic) BOOL searchTerminated; // ivar: _searchTerminated
@property (retain, nonatomic) _PSSuggester *zkwSuggester; // ivar: _zkwSuggester


+(BOOL)supportsMenuInteraction;
+(BOOL)supportsQuicklookForResult:(id)arg0 ;
+(BOOL)useRecencyRankedSearchForMode:(NSUInteger)arg0 ;
+(Class)cellClass;
+(NSUInteger)recencyRankedTargetResultCount;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(BOOL)isTokenizationSearchController;
-(BOOL)wantsHeaderSection;
-(CGFloat)interGroupSpacing;
-(NSUInteger)maxResultsForMode:(NSUInteger)arg0 ;
-(id)_appendRecencyToRankingQuery:(id)arg0 hours:(NSUInteger)arg1 ;
-(id)_sortedAndRankedItemsWithItems:(id)arg0 ;
-(id)chatGUIDForSearchableItem:(id)arg0 ;
-(id)fetchAttributes;
-(id)filterQueries;
-(id)layoutGroupWithEnvironment:(id)arg0 ;
-(id)queryAttributesForText:(id)arg0 ;
-(id)queryResultsForItems:(id)arg0 ;
-(id)rankingQueriesWithText:(id)arg0 ;
-(id)tokenizedQueryResultsForItems:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )additionalGroupInsets;
-(void)_searchZKWWithText:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)didSelectResult:(id)arg0 ;
-(void)searchEnded;
-(void)searchSpotlightWithText:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)searchWithText:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif