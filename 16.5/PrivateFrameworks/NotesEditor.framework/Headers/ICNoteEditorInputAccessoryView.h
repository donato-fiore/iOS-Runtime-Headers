// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEEDITORINPUTACCESSORYVIEW_H
#define ICNOTEEDITORINPUTACCESSORYVIEW_H

@class UIView, NSLayoutConstraint, UIToolbar;
@protocol ICNoteEditorInputAccessoryViewDelegate;


#import "ICNoteEditorToolbarDisclosureView.h"

@interface ICNoteEditorInputAccessoryView : UIView

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) UIView *bottomMarginView; // ivar: _bottomMarginView
@property (retain, nonatomic) NSLayoutConstraint *bottomMarginViewTopConstraint; // ivar: _bottomMarginViewTopConstraint
@property (nonatomic) BOOL buttonsVisible;
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (weak, nonatomic) NSObject<ICNoteEditorInputAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) ICNoteEditorToolbarDisclosureView *disclosureView; // ivar: _disclosureView
@property (retain, nonatomic) NSLayoutConstraint *disclosureViewBottomConstraint; // ivar: _disclosureViewBottomConstraint
@property (nonatomic) float disclosureViewCloseTrailingOffset; // ivar: _disclosureViewCloseTrailingOffset
@property (retain, nonatomic) NSLayoutConstraint *disclosureViewTrailingConstraint; // ivar: _disclosureViewTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (retain, nonatomic) NSLayoutConstraint *toolbarTopConstraint; // ivar: _toolbarTopConstraint


-(id)accessibilityElements;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)disclosureTapRecognizer:(id)arg0 ;
-(void)hide;
-(void)hideDisclosureViewForTransition:(BOOL)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)showWithDelay:(CGFloat)arg0 ;
-(void)toggleDisclosureViewCloseStateWithTap:(BOOL)arg0 ;
-(void)updateDisclosureViewTrailingConstraint;
-(void)updateLayoutWithSize:(struct CGSize )arg0 ;
-(void)updateToolbarColorsWithForceUpdate:(BOOL)arg0 ;


@end


#endif