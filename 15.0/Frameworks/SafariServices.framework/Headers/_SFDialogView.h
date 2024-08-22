// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFDIALOGVIEW_H
#define _SFDIALOGVIEW_H

@class UIView, UISwipeGestureRecognizer, UITapGestureRecognizer, NSLayoutConstraint;
@protocol _SFDialogViewDelegate;


#import "SFDialogContentView.h"
#import "_SFKeyboardLayoutAlignmentView.h"

@interface _SFDialogView : UIView {
    SFDialogContentView *_contentViewConfiguredForMinimumHeight;
    _SFKeyboardLayoutAlignmentView *_keyboardAlignmentView;
    UISwipeGestureRecognizer *_keyboardDismissSwipeGesture;
    UITapGestureRecognizer *_keyboardDismissTapGesture;
    NSLayoutConstraint *_obscuredInsetTopConstraint;
    NSLayoutConstraint *_obscuredInsetLeftConstraint;
    NSLayoutConstraint *_obscuredInsetBottomConstraint;
    NSLayoutConstraint *_obscuredInsetRightConstraint;
}


@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<_SFDialogViewDelegate> *delegate; // ivar: _delegate


-(BOOL)becomeFirstResponder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_keyboardDismissGesture:(id)arg0 ;
-(void)didAppear;
-(void)setDialogActions:(id)arg0 ;
-(void)setInputText:(id)arg0 placeholder:(id)arg1 ;
-(void)setMessageText:(id)arg0 ;
-(void)setObscuredInsets:(struct UIEdgeInsets )arg0 ;
-(void)setPasswordText:(id)arg0 placeholder:(id)arg1 ;
-(void)setTableViewRows:(id)arg0 didSelectRowAction:(id)arg1 ;
-(void)setTitleText:(id)arg0 ;
-(void)setUsesOpaqueAppearance:(BOOL)arg0 ;
-(void)willDisappear;


@end


#endif