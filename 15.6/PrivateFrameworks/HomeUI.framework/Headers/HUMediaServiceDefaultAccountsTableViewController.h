// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMEDIASERVICEDEFAULTACCOUNTSTABLEVIEWCONTROLLER_H
#define HUMEDIASERVICEDEFAULTACCOUNTSTABLEVIEWCONTROLLER_H

@class NSString, HFUserItem;
@protocol HUMediaServiceDefaultAccountsItemModuleControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUMediaServiceDefaultAccountsItemManager.h"
#import "HUMediaServiceDefaultAccountsItemModuleController.h"

@interface HUMediaServiceDefaultAccountsTableViewController : HUItemTableViewController <HUMediaServiceDefaultAccountsItemModuleControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HUMediaServiceDefaultAccountsItemManager *mediaServiceDefaultAccountsItemManager; // ivar: _mediaServiceDefaultAccountsItemManager
@property (retain, nonatomic) HUMediaServiceDefaultAccountsItemModuleController *mediaServiceDefaultAccountsItemModuleController; // ivar: _mediaServiceDefaultAccountsItemModuleController
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HFUserItem *userItem; // ivar: _userItem


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)initWithItem:(id)arg0 home:(id)arg1 ;
-(id)itemModuleControllers;
-(void)mediaServiceDefaultAccountsItemModuleController:(id)arg0 didUpdateDefaultAccount:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;


@end


#endif