// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSEARCHCONTROLLER_H
#define CKSEARCHCONTROLLER_H

@class NSString, CSSearchQuery, NSArray;
@protocol CKSearchControllerDelegate;

#import <Foundation/Foundation.h>

#import "CKQLPreviewControllerDataSource.h"

@interface CKSearchController : NSObject

@property (retain, nonatomic) NSString *currentQueryIdentifier; // ivar: _currentQueryIdentifier
@property (retain, nonatomic) NSString *currentSearchText; // ivar: _currentSearchText
@property (weak, nonatomic) NSObject<CKSearchControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasMoreResults;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) CKQLPreviewControllerDataSource *qlPreviewDataSource; // ivar: _qlPreviewDataSource
@property (nonatomic) NSUInteger queriedResultsCount; // ivar: _queriedResultsCount
@property (retain, nonatomic) CSSearchQuery *query; // ivar: _query
@property (copy, nonatomic) id *queryCompletionHandler; // ivar: _queryCompletionHandler
@property (copy, nonatomic) id *queryFoundItemHandler; // ivar: _queryFoundItemHandler
@property (nonatomic) BOOL queryRunning; // ivar: _queryRunning
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) NSUInteger sectionIndex; // ivar: _sectionIndex
@property (nonatomic) BOOL suppressAvatars; // ivar: _suppressAvatars


+(BOOL)previewControllerPresentsModally;
+(BOOL)supportsMacSelection;
+(BOOL)supportsMenuInteraction;
+(BOOL)supportsQuicklookForResult:(id)arg0 ;
+(BOOL)useRecencyRankedSearchForMode:(NSUInteger)arg0 ;
+(Class)cellClass;
+(NSInteger)orthogonalScrollingBehavior;
+(NSUInteger)recencyRankedTargetResultCount;
+(id)indexingString;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(id)sectionTitle;
+(id)supportedCellClasses;
-(BOOL)_currentModeIsDetails;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(BOOL)handleSelectionForResult:(id)arg0 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg0 ;
-(BOOL)wantsFooterSection;
-(BOOL)wantsHeaderSection;
-(CGFloat)interGroupSpacing;
-(Class)footerClass;
-(Class)headerOverrideClass;
-(NSUInteger)layoutWidth;
-(NSUInteger)maxResultsForMode:(NSUInteger)arg0 ;
-(NSUInteger)queryTypeForSearchText:(id)arg0 ;
-(id)_activityItemProviderForResult:(id)arg0 ;
-(id)_additionalMenuElementsForResult:(id)arg0 ;
-(id)_overridingMenuElementsForResult:(id)arg0 ;
-(id)_queryContextWithText:(id)arg0 ;
-(id)_queryStringWithText:(id)arg0 ;
-(id)cellForItemInCollectionView:(id)arg0 atIndex:(NSInteger)arg1 withIdentifier:(id)arg2 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 supplementryViewKind:(id)arg2 ;
-(id)chatGUIDForSearchableItem:(id)arg0 ;
-(id)customLayoutSectionForEnvironment:(id)arg0 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg0 ;
-(id)fetchAttributes;
-(id)filterQueries;
-(id)initWithSectionIndex:(NSUInteger)arg0 ;
-(id)itemProviderForSearchResult:(id)arg0 ;
-(id)layoutGroupWithEnvironment:(id)arg0 ;
-(id)menuElementsForResult:(id)arg0 atRect:(struct CGRect )arg1 ;
-(id)previewViewControllerForResult:(id)arg0 ;
-(id)queryAttributesForText:(id)arg0 ;
-(id)queryResultsForItems:(id)arg0 ;
-(id)rankingQueriesWithText:(id)arg0 ;
-(id)zkwFilterQueries;
-(struct NSDirectionalEdgeInsets )additionalGroupInsets;
-(void)cancelCurrentSearch;
-(void)deleteAttachmentForResult:(id)arg0 ;
-(void)didSelectResult:(id)arg0 ;
-(void)removeFromCache:(id)arg0 ;
-(void)removeResult:(id)arg0 ;
-(void)saveAttachmentForResult:(id)arg0 ;
-(void)searchEnded;
-(void)searchWithText:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)updateSupplementryViewIfNeeded:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif