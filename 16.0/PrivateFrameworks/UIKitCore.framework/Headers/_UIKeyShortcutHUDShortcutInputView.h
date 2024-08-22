// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDSHORTCUTINPUTVIEW_H
#define _UIKEYSHORTCUTHUDSHORTCUTINPUTVIEW_H

@class NSLayoutConstraint;


#import "UIView.h"
#import "UILabel.h"
#import "UIStackView.h"
#import "_UIKeyShortcutHUDShortcut.h"
#import "UIColor.h"

@interface _UIKeyShortcutHUDShortcutInputView : UIView

@property (retain, nonatomic) UILabel *inputLabel; // ivar: _inputLabel
@property (retain, nonatomic) UIView *inputLabelContainer; // ivar: _inputLabelContainer
@property (readonly, nonatomic) CGFloat inputLabelWidth;
@property (retain, nonatomic) NSLayoutConstraint *inputLabelWidthConstraint; // ivar: _inputLabelWidthConstraint
@property (nonatomic, getter=isInputStyledAsSingleCharacterOrSymbol) BOOL inputStyledAsSingleCharacterOrSymbol; // ivar: _inputStyledAsSingleCharacterOrSymbol
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) UILabel *modifiersLabel; // ivar: _modifiersLabel
@property (readonly, nonatomic) CGFloat modifiersLabelWidth;
@property (retain, nonatomic) NSLayoutConstraint *modifiersLabelWidthConstraint; // ivar: _modifiersLabelWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *reservedInputWidthConstraint; // ivar: _reservedInputWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *reservedInputWidthSpacingConstraint; // ivar: _reservedInputWidthSpacingConstraint
@property (weak, nonatomic) _UIKeyShortcutHUDShortcut *shortcut; // ivar: _shortcut
@property (weak, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL wantsCompressedWidth; // ivar: _wantsCompressedWidth


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_updateInputLabelSpacing:(id)arg0 ;
-(void)_updateInputLabelStyle:(id)arg0 ;
-(void)dealloc;
-(void)setModifiersWidth:(CGFloat)arg0 inputWidth:(CGFloat)arg1 ;


@end


#endif