// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHQUERYSTATUSSECTIONPROVIDER_H
#define PXSEARCHQUERYSTATUSSECTIONPROVIDER_H

@class NSString, NSArray;
@protocol PXSearchDataSourceSectionProvider, PXSearchDataSourceSectionProviderChangeObserver;

#import <Foundation/Foundation.h>

#import "PXSearchQuery.h"
#import "PXSearchQueryResult.h"

@interface PXSearchQueryStatusSectionProvider : NSObject <PXSearchDataSourceSectionProvider>



@property (weak, nonatomic) NSObject<PXSearchDataSourceSectionProviderChangeObserver> *changeObserver; // ivar: changeObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSearchQuery *searchQuery; // ivar: _searchQuery
@property (retain, nonatomic) PXSearchQueryResult *searchQueryResult; // ivar: _searchQueryResult
@property (readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(BOOL)_showsQueryStatusFooter;
-(id)cellReuseIdentifierForItemIdentifier:(id)arg0 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)layoutForSectionIdentifier:(id)arg0 environment:(id)arg1 collectionViewLayoutMargins:(struct UIEdgeInsets )arg2 ;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg0 indexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItemIdentifier:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(void)registerClassesForCellReuseIdentifiers:(id)arg0 ;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(id)arg0 ;


@end


#endif