// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDIALOGCONTENTVIEW_H
#define SFDIALOGCONTENTVIEW_H

@class UIView, NSArray, UIStackView, UIButton, NSLayoutConstraint, UITableView, NSString;
@protocol UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate;


#import "SFDialogTextField.h"
#import "SFDialogTextView.h"
#import "SFDialogView.h"

@interface SFDialogContentView : UIView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>

 {
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    UIButton *_closeButton;
    NSUInteger _actionIndexTriggeredByOptionReturnKey;
    NSUInteger _actionIndexTriggeredByEscapeKey;
    NSUInteger _actionIndexTriggeredByReturnKey;
    BOOL _hasAttemptedHardwareKeyboardFocus;
    SFDialogTextField *_inputTextField;
    NSArray *_layoutConstraintsWhenInputIsVisible;
    NSArray *_layoutConstraintsWhenPasswordIsVisible;
    NSArray *_layoutConstraintsWhenInputAndPasswordAreVisible;
    SFDialogTextView *_messageTextView;
    SFDialogTextField *_passwordTextField;
    NSLayoutConstraint *_actionButtonsLeadingConstraintForHorizontalStackAlignment;
    NSLayoutConstraint *_actionButtonsLeadingConstraintForVerticalStackAlignment;
    UITableView *_tableView;
    NSArray *_tableData;
    id *_tableDidSelectRowAction;
    NSInteger _selectedRow;
    NSArray *_layoutConstraintsWhenTableViewIsVisible;
    NSLayoutConstraint *_tableViewHeightConstraint;
}


@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) SFDialogView *dialogView; // ivar: _dialogView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_usesLoginFormAppearance;
-(BOOL)_wantsPriorityOverFocusUpdates;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_desiredButtonsWidth;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_actionTriggered:(id)arg0 ;
-(void)_escapeAction:(id)arg0 ;
-(void)_focusInputTextField:(id)arg0 ;
-(void)_invokeDelegateWithSelectedIndex:(NSUInteger)arg0 ;
-(void)_optionReturnAction:(id)arg0 ;
-(void)_returnAction:(id)arg0 ;
-(void)_setText:(id)arg0 placeholder:(id)arg1 forTextField:(id)arg2 ;
-(void)_updateActionButtons;
-(void)didAppear;
-(void)endEditing;
-(void)layoutSubviews;
-(void)setInputText:(id)arg0 placeholder:(id)arg1 ;
-(void)setMessageText:(id)arg0 ;
-(void)setPasswordText:(id)arg0 placeholder:(id)arg1 ;
-(void)setTableViewRows:(id)arg0 didSelectRowAction:(id)arg1 ;
-(void)setTitleText:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif