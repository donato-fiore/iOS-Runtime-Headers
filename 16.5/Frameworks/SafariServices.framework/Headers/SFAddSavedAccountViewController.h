// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFADDSAVEDACCOUNTVIEWCONTROLLER_H
#define SFADDSAVEDACCOUNTVIEWCONTROLLER_H

@class UITableViewController, UIBarButtonItem, NSString;
@protocol UITextFieldDelegate, SFAccountNoteTableViewCellDelegate, SFAddSavedAccountViewControllerDelegate;


#import "SFEditableTableViewCell.h"
#import "SFAccountNoteTableViewCell.h"

@interface SFAddSavedAccountViewController : UITableViewController <UITextFieldDelegate, SFAccountNoteTableViewCellDelegate>

 {
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    SFAccountNoteTableViewCell *_notesCell;
    NSString *_notesForEditing;
    NSString *_suggestedDomain;
    BOOL _didPreFillAndFocusFields;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAddSavedAccountViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldPreFillStrongPassword; // ivar: _shouldPreFillStrongPassword
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithSuggestedDomain:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelBarButtonItemTapped:(id)arg0 ;
-(void)_doneBarButtonItemTapped:(id)arg0 ;
-(void)_preFillStrongPasswordIfRequested;
-(void)_savePasswordAndDismiss;
-(void)_textFieldChanged:(id)arg0 ;
-(void)_updateTextInputSuggestionsForPasswordField;
-(void)_updateTextInputSuggestionsForUserNameField;
-(void)_updateTextSuggestionsForTextField:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif