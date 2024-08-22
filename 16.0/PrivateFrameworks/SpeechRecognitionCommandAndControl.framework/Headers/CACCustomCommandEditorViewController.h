// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACCUSTOMCOMMANDEDITORVIEWCONTROLLER_H
#define CACCUSTOMCOMMANDEDITORVIEWCONTROLLER_H

@class UITableViewController, NSDictionary, UIBarButtonItem, NSString, AXSiriShortcutsManager;
@protocol UITextFieldDelegate, CACCustomCommandActionViewControllerDelegate, CACCustomCommandApplicationViewControllerDelegate, CACCustomCommandEditorViewControllerDelegate;


#import "CACSpokenCommandItem.h"

@interface CACCustomCommandEditorViewController : UITableViewController <UITextFieldDelegate, CACCustomCommandActionViewControllerDelegate, CACCustomCommandApplicationViewControllerDelegate>



@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames; // ivar: _applicationIdentifiersToNames
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) CACSpokenCommandItem *commandItem; // ivar: _commandItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CACCustomCommandEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (retain, nonatomic) UIBarButtonItem *editButton; // ivar: _editButton
@property (nonatomic) BOOL hasEmptySpokenString; // ivar: _hasEmptySpokenString
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEmptyCommandItem; // ivar: _isEmptyCommandItem
@property (nonatomic) BOOL isInEditingMode; // ivar: _isInEditingMode
@property (nonatomic) BOOL isValidCommandItem; // ivar: _isValidCommandItem
@property (retain, nonatomic) CACSpokenCommandItem *mutableCommandItem; // ivar: _mutableCommandItem
@property (retain, nonatomic) UIBarButtonItem *saveButton; // ivar: _saveButton
@property (retain, nonatomic) AXSiriShortcutsManager *shortcutsManager; // ivar: _shortcutsManager
@property (nonatomic) BOOL showsDeleteButton; // ivar: _showsDeleteButton
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_commandStringIsValid:(id)arg0 checkForLength:(BOOL)arg1 ;
-(BOOL)_hasValidActionWithErrorText:(*id)arg0 ;
-(BOOL)_hasValidSpokenStringWithErrorText:(*id)arg0 ;
-(BOOL)_shouldShowDeleteButton;
-(BOOL)_showAlertIfNeededForAction;
-(BOOL)isModalInPresentation;
-(BOOL)isNewCommand;
-(BOOL)showAlertIfNeededForAnyError;
-(BOOL)showAlertIfNeededForErrorInSpokenString;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_showErrorAlertWithText:(id)arg0 ;
-(void)_updateCommandItemWithText:(id)arg0 ;
-(void)cancelAction;
-(void)configureNavItems;
-(void)didDismissActionViewController:(id)arg0 ;
-(void)didUpdateCommandItemForActionViewController:(id)arg0 ;
-(void)didUpdateCommandItemForApplicationViewController:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)editButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif