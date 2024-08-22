// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNACCOUNTSANDGROUPSDATASOURCE_H
#define CNACCOUNTSANDGROUPSDATASOURCE_H

@class NSArray, CNContactStore;

#import <Foundation/Foundation.h>

#import "CNContactStoreFilter.h"
#import "CNAccountsAndGroupsItem.h"

@interface CNAccountsAndGroupsDataSource : NSObject {
    CNContactStoreFilter *_filter;
    CNContactStoreFilter *_serverFilter;
}


@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (nonatomic) BOOL hidesSearchableSources; // ivar: _hidesSearchableSources
@property (retain, nonatomic) CNAccountsAndGroupsItem *rootItem; // ivar: _rootItem
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) CNContactStoreFilter *serverFilter;
@property (readonly, nonatomic) CNAccountsAndGroupsItem *showAllSectionItem;
@property (retain, nonatomic) CNContactStore *store; // ivar: _store
@property (readonly, nonatomic, getter=isTrivial) BOOL trivial;


-(id)initWithStore:(id)arg0 ;
-(void)_applyFilter;
-(void)_reloadSections;
-(void)reload;
-(void)removeServerFilter;
-(void)updateRootItemSelection;


@end


#endif