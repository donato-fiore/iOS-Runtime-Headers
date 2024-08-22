// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFADDSAVEDACCOUNTVIEWCONTROLLER_H
#define SFADDSAVEDACCOUNTVIEWCONTROLLER_H

@class UITableViewController, UIBarButtonItem, NSString;
@protocol UITextFieldDelegate, UIAdaptivePresentationControllerDelegate, SFAddSavedAccountViewControllerDelegate;


#import "SFEditableTableViewCell.h"

@interface SFAddSavedAccountViewController : UITableViewController <UITextFieldDelegate, UIAdaptivePresentationControllerDelegate>

 {
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    NSString *_suggestedDomain;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAddSavedAccountViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithSuggestedDomain:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_cancelBarButtonItemTapped:(id)arg0 ;
-(void)_doneBarButtonItemTapped:(id)arg0 ;
-(void)_handleCancel;
-(void)_savePasswordAndDismiss;
-(void)_textFieldChanged:(id)arg0 ;
-(void)_updateTextInputSuggestionsForPasswordField;
-(void)_updateTextInputSuggestionsForUserNameField;
-(void)_updateTextSuggestionsForTextField:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif