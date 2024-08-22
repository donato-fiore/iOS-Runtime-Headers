// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFADDPASSWORDVIEWCONTROLLER_H
#define SFADDPASSWORDVIEWCONTROLLER_H

@class UITableViewController, UIBarButtonItem, NSString;
@protocol UITextFieldDelegate, SFAddPasswordViewControllerDelegate;


#import "SFEditableTableViewCell.h"

@interface SFAddPasswordViewController : UITableViewController <UITextFieldDelegate>

 {
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    NSString *_suggestedDomain;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAddPasswordViewControllerDelegate> *delegate; // ivar: _delegate
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