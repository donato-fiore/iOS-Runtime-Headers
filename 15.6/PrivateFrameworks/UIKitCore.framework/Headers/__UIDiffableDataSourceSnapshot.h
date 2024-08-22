// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __UIDIFFABLEDATASOURCESNAPSHOT_H
#define __UIDIFFABLEDATASOURCESNAPSHOT_H

@class UIDiffableDataSource, NSMutableArray;
@protocol NSCopying, _UIDiffableDataSourceState;



@interface __UIDiffableDataSourceSnapshot : UIDiffableDataSource <NSCopying>

 {
    id<_UIDiffableDataSourceState> *_state;
    NSMutableArray *_pendingSnapshotUpdates;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexForSectionIdentifier:(id)arg0 ;
-(NSInteger)indexOfItemIdentifier:(id)arg0 ;
-(NSInteger)indexOfSectionIdentifier:(id)arg0 ;
-(NSInteger)numberOfItems;
-(NSInteger)numberOfItemsInSection:(id)arg0 ;
-(NSInteger)numberOfSections;
-(id)_identifiersForSectionsOrItems:(BOOL)arg0 reconfiguredOrReloaded:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)indexPathForItemIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithState:(id)arg0 ;
-(id)itemIdentifierForIndexPath:(id)arg0 ;
-(id)itemIdentifiers;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)pendingSnapshotUpdates;
-(id)reconfiguredItemIdentifiers;
-(id)reloadedItemIdentifiers;
-(id)reloadedSectionIdentifiers;
-(id)sectionIdentifierForIndex:(NSInteger)arg0 ;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg0 ;
-(id)sectionIdentifiers;
-(id)state;
-(void)_commitUpdateAtomic:(id)arg0 ;
-(void)_prepareForApplyToDataSource;
-(void)_validateReloadUpdateThrowingIfNeeded:(id)arg0 ;
-(void)appendItemsWithIdentifiers:(id)arg0 ;
-(void)appendItemsWithIdentifiers:(id)arg0 intoSectionWithIdentifier:(id)arg1 ;
-(void)appendSectionWithIdentifier:(id)arg0 ;
-(void)appendSectionsWithIdentifiers:(id)arg0 ;
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
-(void)reconfigureItemsWithIdentifiers:(id)arg0 ;
-(void)reloadItemsWithIdentifiers:(id)arg0 ;
-(void)reloadSectionsWithIdentifiers:(id)arg0 ;


@end


#endif