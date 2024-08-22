// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBUNDOSTATEHUD_H
#define UIKBUNDOSTATEHUD_H

@class NSLayoutConstraint;


#import "UIView.h"
#import "UILabel.h"
#import "UIVisualEffectView.h"
#import "UIKBUndoStyling.h"

@interface UIKBUndoStateHUD : UIView

@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) NSInteger controlType; // ivar: _controlType
@property (retain, nonatomic) UILabel *labelView; // ivar: _labelView
@property (retain, nonatomic) UIVisualEffectView *shadowView; // ivar: _shadowView
@property (retain, nonatomic) UIKBUndoStyling *style; // ivar: _style
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDHeightConstraint; // ivar: _undoStateHUDHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDWidthConstraint; // ivar: _undoStateHUDWidthConstraint


-(id)initWithKeyboardAppearance:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUndoStateHUDControlType:(NSInteger)arg0 available:(BOOL)arg1 ;


@end


#endif