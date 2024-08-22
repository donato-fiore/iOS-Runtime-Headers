// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLECONFIGURATIONACCESSORYVIEW_H
#define WFVARIABLECONFIGURATIONACCESSORYVIEW_H

@class UIInputView, UIButton;
@protocol WFVariableConfigurationAccessoryViewDelegate;



@interface WFVariableConfigurationAccessoryView : UIInputView

@property (nonatomic) BOOL canRename;
@property (nonatomic) BOOL canRevealAction;
@property (weak, nonatomic) UIButton *clearButton; // ivar: _clearButton
@property (weak, nonatomic) NSObject<WFVariableConfigurationAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (nonatomic) NSUInteger exitAccessory; // ivar: _exitAccessory
@property (weak, nonatomic) UIButton *keyboardButton; // ivar: _keyboardButton
@property (weak, nonatomic) UIButton *renameButton; // ivar: _renameButton
@property (weak, nonatomic) UIButton *revealActionButton; // ivar: _revealActionButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clearPressed;
-(void)donePressed;
-(void)layoutSubviews;
-(void)renamePressed;
-(void)returnToKeyboardPressed;
-(void)revealActionPressed;


@end


#endif