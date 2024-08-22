// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACCOUNTSANDGROUPSDATASOURCE_H
#define CNACCOUNTSANDGROUPSDATASOURCE_H

@class NSString, CNManagedConfiguration, NSArray, NSSet, CNContactStore;

#import <Foundation/Foundation.h>

#import "CNContactStoreFilter.h"
#import "CNAccountsAndGroupsItem.h"
#import "CNUIGroupsAndContainersSaveManager.h"

@interface CNAccountsAndGroupsDataSource : NSObject {
    CNContactStoreFilter *_serverFilter;
}


@property (retain, nonatomic) NSString *currentlyEditingGroupIdentifier; // ivar: _currentlyEditingGroupIdentifier
@property (retain, nonatomic) CNAccountsAndGroupsItem *currentlyEditingGroupItem; // ivar: _currentlyEditingGroupItem
@property (copy, nonatomic) CNContactStoreFilter *filter; // ivar: _filter
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // ivar: _groupsAndContainersSaveManager
@property (nonatomic) BOOL hidesSearchableSources; // ivar: _hidesSearchableSources
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (nonatomic) BOOL onlyShowsGroupsInSections; // ivar: _onlyShowsGroupsInSections
@property (retain, nonatomic) CNAccountsAndGroupsItem *rootItem; // ivar: _rootItem
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) CNContactStoreFilter *serverFilter;
@property (readonly, nonatomic) CNAccountsAndGroupsItem *showAllSectionItem;
@property (retain, nonatomic) NSSet *sourceAccountExternalIdentifiers; // ivar: _sourceAccountExternalIdentifiers
@property (retain, nonatomic) CNContactStore *store; // ivar: _store
@property (retain, nonatomic) NSSet *targetAccountExternalIdentifiers; // ivar: _targetAccountExternalIdentifiers
@property (readonly, nonatomic, getter=isTrivial) BOOL trivial;


-(BOOL)hasChanges;
-(BOOL)isFilterShowingItem:(id)arg0 ;
-(BOOL)shouldShowAccount:(id)arg0 ;
-(NSInteger)contactCountForItem:(id)arg0 ;
-(NSInteger)contactCountForMainItem:(id)arg0 ;
-(id)allContactsForItem:(id)arg0 keysToFetch:(id)arg1 ;
-(id)allContactsForMainItem:(id)arg0 keysToFetch:(id)arg1 ;
-(id)containerIdentifierForItem:(id)arg0 ;
-(id)groupIdentifierForGroupItem:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)multiSelectFilter;
-(id)sectionForIdentifier:(id)arg0 ;
-(id)sectionIdentifierForItem:(id)arg0 ;
-(void)_applyFilter;
-(void)_reloadSections;
-(void)reload;
-(void)removeServerFilter;
-(void)updateRootItemSelection;


@end


#endif