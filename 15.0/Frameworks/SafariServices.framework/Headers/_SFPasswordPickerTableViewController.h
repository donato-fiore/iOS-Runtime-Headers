// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPASSWORDPICKERTABLEVIEWCONTROLLER_H
#define _SFPASSWORDPICKERTABLEVIEWCONTROLLER_H

@class SFPasswordTableViewController, NSMutableArray, NSIndexPath, UIBarButtonItem, NSString;
@protocol SFAddPasswordViewControllerDelegate, _SFTableLinkableFooterViewDelegate, _SFPasswordPickerTableViewControllerDelegate;


#import "SFPasswordPickerConfiguration.h"

@interface _SFPasswordPickerTableViewController : SFPasswordTableViewController <SFAddPasswordViewControllerDelegate, _SFTableLinkableFooterViewDelegate>

 {
    NSMutableArray *_savedPasswordsMatchingHintStrings;
    NSMutableArray *_savedPasswords;
    NSMutableArray *_matchingPasswords;
    NSInteger _sectionForPasswordsMatchingHintStrings;
    NSInteger _sectionForAllPasswords;
    NSIndexPath *_indexPathOfRowShowingDetailView;
    UIBarButtonItem *_addNavigationBarItem;
}


@property (readonly, nonatomic) SFPasswordPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFPasswordPickerTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldShowPasswordsMatchingHintStringsSection;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_rowTypeForIndexPath:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_passwordForIndexPath:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_addNavigationBarItemTapped:(id)arg0 ;
-(void)_cancel;
-(void)_deletePasswordAtIndexPath:(id)arg0 ;
-(void)_didPickSavedPassword:(id)arg0 ;
-(void)_passwordStoreDidChange;
-(void)_presentAddPasswordViewController;
-(void)_reloadSavedPasswords;
-(void)_updateMatchingPasswords;
-(void)_updateSections;
-(void)addPasswordViewControllerDidFinish:(id)arg0 withSavedPassword:(id)arg1 ;
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