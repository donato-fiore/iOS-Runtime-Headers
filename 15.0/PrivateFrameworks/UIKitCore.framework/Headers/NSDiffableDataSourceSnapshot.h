// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSDIFFABLEDATASOURCESNAPSHOT_H
#define NSDIFFABLEDATASOURCESNAPSHOT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "__UIDiffableDataSourceSnapshot.h"

@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying>



@property (readonly, nonatomic) __UIDiffableDataSourceSnapshot *impl; // ivar: _impl
@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, nonatomic) NSArray *reconfiguredItemIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedItemIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedSectionIdentifiers;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)indexOfItemIdentifier:(id)arg0 ;
-(NSInteger)indexOfSectionIdentifier:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(id)arg0 ;
-(id)_identifierAfterIdentifier:(id)arg0 ;
-(id)_identifierBeforeIdentifier:(id)arg0 ;
-(id)_initWithImpl:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identifierForIndexPath:(id)arg0 ;
-(id)indexPathForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg0 ;
-(id)state;
-(struct _NSRange )sectionGlobalItemRangeForSection:(NSInteger)arg0 ;
-(void)appendItemsWithIdentifiers:(id)arg0 ;
-(void)appendItemsWithIdentifiers:(id)arg0 intoSectionWithIdentifier:(id)arg1 ;
-(void)appendSectionsWithIdentifiers:(id)arg0 ;
-(void)deleteAllItems;
-(void)deleteItemsWithIdentifiers:(id)arg0 ;
-(void)deleteSectionsWithIdentifiers:(id)arg0 ;
-(void)insertItemsWithIdentifiers:(id)arg0 afterItemWithIdentifier:(id)arg1 ;
-(void)insertItemsWithIdentifiers:(id)arg0 beforeItemWithIdentifier:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg0 afterSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg0 beforeSectionWithIdentifier:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg0 afterItemWithIdentifier:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg0 beforeItemWithIdentifier:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg0 afterSectionWithIdentifier:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg0 beforeSectionWithIdentifier:(id)arg1 ;
-(void)reconfigureItemsWithIdentifiers:(id)arg0 ;
-(void)reloadItemsWithIdentifiers:(id)arg0 ;
-(void)reloadSectionsWithIdentifiers:(id)arg0 ;
-(void)validateIdentifiers;


@end


#endif