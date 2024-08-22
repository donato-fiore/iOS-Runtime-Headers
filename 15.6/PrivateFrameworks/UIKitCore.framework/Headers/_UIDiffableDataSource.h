// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDIFFABLEDATASOURCE_H
#define _UIDIFFABLEDATASOURCE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "__UIDiffableDataSource.h"

@interface _UIDiffableDataSource : NSObject {
    __UIDiffableDataSource *_dsImpl;
}


@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;


-(NSInteger)defaultRowAnimation;
-(NSInteger)indexOfItemIdentifier:(id)arg0 ;
-(NSInteger)indexOfSectionIdentifier:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(id)arg0 ;
-(id)_impl;
-(id)dsImpl;
-(id)emptySnapshot;
-(id)indexPathForItemIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 ;
// -(id)initWithCollectionView:(id)arg0 reuseIdentifierProvider:(id)arg1 cellConfigurationHandler:(unk)arg2  ;
-(id)initWithDiffableDataSource:(id)arg0 ;
-(id)initWithTableView:(id)arg0 cellProvider:(id)arg1 ;
// -(id)initWithTableView:(id)arg0 reuseIdentifierProvider:(id)arg1 cellConfigurationHandler:(unk)arg2  ;
-(id)initWithViewUpdatesSink:(id)arg0 ;
-(id)itemIdentifierForIndexPath:(id)arg0 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg0 ;
-(id)snapshot;
-(void)appendItemsWithIdentifiers:(id)arg0 ;
-(void)appendItemsWithIdentifiers:(id)arg0 intoSectionWithIdentifier:(id)arg1 ;
-(void)appendSectionWithIdentifier:(id)arg0 ;
-(void)appendSectionsWithIdentifiers:(id)arg0 ;
-(void)applyDifferencesFromSnapshot:(id)arg0 ;
-(void)applyDifferencesFromSnapshot:(id)arg0 completion:(id)arg1 ;
-(void)applySnapshot:(id)arg0 ;
-(void)deleteAllItems;
-(void)deleteItemsWithIdentifiers:(id)arg0 ;
-(void)deleteSectionsWithIdentifiers:(id)arg0 ;
-(void)insertItemsWithIdentifiers:(id)arg0 afterItemWithIdentifier:(id)arg1 ;
-(void)insertItemsWithIdentifiers:(id)arg0 beforeItemWithIdentifier:(id)arg1 ;
-(void)insertSectionWithIdentifier:(id)arg0 afterSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionWithIdentifier:(id)arg0 beforeSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg0 afterSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg0 beforeSectionWithIdentifier:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg0 afterItemWithIdentifier:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg0 beforeItemWithIdentifier:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg0 afterSectionWithIdentifier:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg0 beforeSectionWithIdentifier:(id)arg1 ;
-(void)reloadFromSnapshot:(id)arg0 ;
-(void)reloadFromSnapshot:(id)arg0 completion:(id)arg1 ;
-(void)reloadItemsWithIdentifiers:(id)arg0 ;
-(void)reloadSectionsWithIdentifiers:(id)arg0 ;
-(void)setDefaultRowAnimation:(NSInteger)arg0 ;


@end


#endif