// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSBARBUTTON_H
#define CPSBARBUTTON_H

@class NSLayoutConstraint, UIImage, UIImageView, UIView, CPBarButton;


#import "CPSButton.h"

@interface CPSBarButton : CPSButton

@property (retain, nonatomic) NSLayoutConstraint *backIndicatorHeightConstraint; // ivar: _backIndicatorHeightConstraint
@property (retain, nonatomic) UIImage *backIndicatorImage; // ivar: _backIndicatorImage
@property (retain, nonatomic) UIImageView *backIndicatorImageView; // ivar: _backIndicatorImageView
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) CPBarButton *cyBarButton; // ivar: _cyBarButton
@property (nonatomic) BOOL showBackIndicator; // ivar: _showBackIndicator
@property (nonatomic) BOOL usesSystemComposeGlyph; // ivar: _usesSystemComposeGlyph


+(id)buttonWithCPBarButton:(id)arg0 showBackIndicator:(BOOL)arg1 ;
-(BOOL)_showsRoundedBackground;
-(id)_externalUnfocusedBorderColor;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetAlpha;
-(void)_setupBackButtonImagesIfNeccessary;
-(void)_updateBackIndicatorImageView;
-(void)_updateButtonImage:(id)arg0 ;
-(void)didAddSubview:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif