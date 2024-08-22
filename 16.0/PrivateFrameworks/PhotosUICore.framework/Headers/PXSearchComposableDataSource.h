// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHCOMPOSABLEDATASOURCE_H
#define PXSEARCHCOMPOSABLEDATASOURCE_H

@class NSString, UICollectionViewDiffableDataSource, NSArray;
@protocol UICollectionViewDataSourcePrefetching, PXSearchDataSourceSectionProviderChangeObserver;

#import <Foundation/Foundation.h>


@interface PXSearchComposableDataSource : NSObject <UICollectionViewDataSourcePrefetching, PXSearchDataSourceSectionProviderChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property (copy, nonatomic) NSArray *sectionProviders; // ivar: _sectionProviders
@property (readonly) Class superclass;


-(NSInteger)numberOfItemsInSection:(id)arg0 ;
-(id)_configuredCellForCollectionView:(id)arg0 indexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)_configuredSupplementaryViewForCollectionView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(id)_convertIndexPath:(id)arg0 toPXSearchDataSourceSectionProvider:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 searchDataSourceSectionProviders:(id)arg1 ;
-(id)itemIdentifierForIndexPath:(id)arg0 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)searchDataSourceSectionProviderForIndexPath:(id)arg0 ;
-(id)searchDataSourceSectionProviderForItemIdentifier:(id)arg0 ;
-(id)searchDataSourceSectionProviderForSection:(NSInteger)arg0 ;
-(id)searchDataSourceSectionProviderForSectionIdentifier:(id)arg0 ;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg0 ;
-(void)_registerClassesForCollectionView:(id)arg0 withPXSearchDataSourceSectionProviders:(id)arg1 ;
-(void)_reloadDataAnimated:(BOOL)arg0 reloadItemIdentifiers:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)searchDataSourceSectionProviderDidChange:(id)arg0 animateChanges:(BOOL)arg1 ;
-(void)searchDataSourceSectionProviderDidChange:(id)arg0 reloadItemIdentifiers:(id)arg1 animateChanges:(BOOL)arg2 ;


@end


#endif