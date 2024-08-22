// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACCOUNTSANDGROUPSACTIONSPROVIDER_H
#define CNACCOUNTSANDGROUPSACTIONSPROVIDER_H

@class NSMutableArray;
@protocol CNAccountsAndGroupsActionsProviderDelegate;

#import <Foundation/Foundation.h>

#import "CNAccountsAndGroupsDataSource.h"
#import "CNUIGroupsAndContainersSaveManager.h"

@interface CNAccountsAndGroupsActionsProvider : NSObject

@property (retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<CNAccountsAndGroupsActionsProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // ivar: _groupsAndContainersSaveManager
@property (retain, nonatomic) NSMutableArray *issuedSaveRequestIdentifiers; // ivar: _issuedSaveRequestIdentifiers


-(BOOL)addGroupToStoreForGroupItem:(id)arg0 withName:(id)arg1 ;
-(BOOL)authorizedDeleteGroupForItem:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)authorizedEditGroupNameForCell:(id)arg0 ;
-(BOOL)deleteGroupActionForItem:(id)arg0 sourceView:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)editGroupNameActionForItem:(id)arg0 cell:(id)arg1 ;
-(BOOL)emailGroupForItem:(id)arg0 ;
-(BOOL)exportGroupForItem:(id)arg0 sourceView:(id)arg1 ;
-(BOOL)isAuthorizedToEditItem:(id)arg0 ;
-(BOOL)messageGroupForItem:(id)arg0 ;
-(id)actionsForItem:(id)arg0 cell:(id)arg1 ;
-(id)contextMenuConfigurationForItem:(id)arg0 cell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithDataSource:(id)arg0 saveManager:(id)arg1 ;
-(id)leadingActionsForItem:(id)arg0 cell:(id)arg1 ;
-(id)trailingActionsForItem:(id)arg0 cell:(id)arg1 isCollectionViewEditing:(BOOL)arg2 ;
-(void)authorizedCreateGroupActionForContainerItem:(id)arg0 ;
-(void)createGroupActionForContainerItem:(id)arg0 isCollectionViewEditing:(BOOL)arg1 ;
-(void)deleteGroupForItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateItem:(id)arg0 withNewName:(id)arg1 ;


@end


#endif