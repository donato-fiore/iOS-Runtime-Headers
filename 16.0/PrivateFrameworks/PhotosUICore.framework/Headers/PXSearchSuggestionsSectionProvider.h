// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHSUGGESTIONSSECTIONPROVIDER_H
#define PXSEARCHSUGGESTIONSSECTIONPROVIDER_H

@class NSString, NSDictionary, NSArray;
@protocol PXSearchDataSourceSectionProvider, PXSearchDataSourceSectionProviderChangeObserver;

#import <Foundation/Foundation.h>


@interface PXSearchSuggestionsSectionProvider : NSObject <PXSearchDataSourceSectionProvider>



@property (weak, nonatomic) NSObject<PXSearchDataSourceSectionProviderChangeObserver> *changeObserver; // ivar: changeObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: identifier
@property (copy, nonatomic) NSDictionary *identifierToSuggestionMap; // ivar: _identifierToSuggestionMap
@property (readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property (nonatomic) BOOL showsSuggestedSearchesHeader; // ivar: _showsSuggestedSearchesHeader
@property (copy, nonatomic) NSArray *sortedItemIdentifiers; // ivar: _sortedItemIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)cellReuseIdentifierForItemIdentifier:(id)arg0 ;
-(id)init;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)layoutForSectionIdentifier:(id)arg0 environment:(id)arg1 collectionViewLayoutMargins:(struct UIEdgeInsets )arg2 ;
-(id)searchSuggestionForIdentifier:(id)arg0 ;
-(id)suggestions;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg0 indexPath:(id)arg1 ;
-(void)_setSearchSuggestions:(id)arg0 showsSuggestedSearchesHeader:(BOOL)arg1 ;
-(void)configureCell:(id)arg0 forItemIdentifier:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(void)registerClassesForCellReuseIdentifiers:(id)arg0 ;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(id)arg0 ;
-(void)setSearchQueryResult:(id)arg0 ;


@end


#endif