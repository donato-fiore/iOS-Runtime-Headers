// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDASHBOARDBUTTONSECTIONHEADERVIEW_H
#define GKDASHBOARDBUTTONSECTIONHEADERVIEW_H

@class NSAttributedString, UIView, UIButton, UIMenu, NSString, UIFocusGuide, NSLayoutConstraint, UIStackView;


#import "GKDashboardSectionHeaderView.h"

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView

@property (copy, nonatomic) NSAttributedString *attributedButtonTitle; // ivar: _attributedButtonTitle
@property (nonatomic) UIView *backgroundPlatterView; // ivar: _backgroundPlatterView
@property (nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) SEL buttonAction; // ivar: _buttonAction
@property (nonatomic, getter=isButtonHidden) BOOL buttonHidden; // ivar: _buttonHidden
@property (nonatomic) UIMenu *buttonMenu;
@property (nonatomic) id *buttonTarget; // ivar: _buttonTarget
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIFocusGuide *focusGuide; // ivar: _focusGuide
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint; // ivar: _rightMarginConstraint
@property (nonatomic) UIStackView *stackView; // ivar: _stackView


+(CGFloat)defaultHeight;
+(CGFloat)widthForTitle:(id)arg0 ;
+(CGFloat)widthForTitle:(id)arg0 buttonTitle:(id)arg1 ;
+(struct CGSize )platformSizeForTitle:(id)arg0 ;
+(struct CGSize )platformSizeForTitle:(id)arg0 buttonTitle:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)awakeFromNib;
-(void)buttonPressed:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif