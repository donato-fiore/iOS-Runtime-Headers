// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFACCOUNTPICKERTABLEVIEWCONTROLLER_H
#define _SFACCOUNTPICKERTABLEVIEWCONTROLLER_H

@class SFAccountTableViewController, NSMutableArray, NSIndexPath, UIBarButtonItem, NSString, WBSSavedAccount;
@protocol SFAccountDetailViewControllerDelegate, SFAddSavedAccountViewControllerDelegate, _SFTableLinkableFooterViewDelegate, _SFAccountPickerTableViewControllerDelegate;


#import "SFAccountPickerConfiguration.h"

@interface _SFAccountPickerTableViewController : SFAccountTableViewController <SFAccountDetailViewControllerDelegate, SFAddSavedAccountViewControllerDelegate, _SFTableLinkableFooterViewDelegate>

 {
    NSMutableArray *_savedAccountsMatchingHintStrings;
    NSMutableArray *_savedAccounts;
    NSMutableArray *_matchingSavedAccounts;
    NSInteger _sectionForPasswordsMatchingHintStrings;
    NSInteger _sectionForAllPasswords;
    NSIndexPath *_indexPathOfRowShowingDetailView;
    UIBarButtonItem *_addNavigationBarItem;
}


@property (readonly, nonatomic) SFAccountPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFAccountPickerTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (readonly) Class superclass;


-(BOOL)_shouldShowPasswordsMatchingHintStringsSection;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_rowTypeForIndexPath:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_savedAccountForIndexPath:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_accountStoreDidChange;
-(void)_addNavigationBarItemTapped:(id)arg0 ;
-(void)_cancel;
-(void)_deletePasswordAtIndexPath:(id)arg0 ;
-(void)_didPickSavedAccount:(id)arg0 ;
-(void)_presentAddPasswordViewController;
-(void)_reloadSavedAccounts;
-(void)_updateMatchingPasswords;
-(void)_updateSections;
-(void)addSavedAccountViewControllerDidFinish:(id)arg0 withSavedAccount:(id)arg1 ;
-(void)dealloc;
-(void)handleContextMenuDeleteForIndexPath:(id)arg0 ;
-(void)linkableFooterViewDidInteractWithLink:(id)arg0 ;
-(void)searchPatternDidUpdate;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif