// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKCATALYSTBUTTON_H
#define MKCATALYSTBUTTON_H

@class UIButton, NSString, CALayer, CAGradientLayer, NSAttributedString;
@protocol _MKPlaceActionControlledButton;


#import "_MKPlaceActionButtonController.h"

@interface MKCatalystButton : UIButton <_MKPlaceActionControlledButton>



@property (weak, nonatomic) _MKPlaceActionButtonController *buttonController; // ivar: _buttonController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CALayer *extraShadowLayer; // ivar: _extraShadowLayer
@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPrimaryButton; // ivar: _isPrimaryButton
@property (retain, nonatomic) NSAttributedString *subTitle; // ivar: _subTitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSAttributedString *title; // ivar: _title


+(id)catalystButton;
+(struct CGColor *)extraShadowLayerBackgroundColorWithDarkMode:(BOOL)arg0 isbuttonEnabled:(BOOL)arg1 ;
-(id)_attributedStringForSubTitle:(id)arg0 controlState:(NSUInteger)arg1 ;
-(id)_attributedStringForTitle:(id)arg0 controlState:(NSUInteger)arg1 ;
-(id)_attributedStringWithTitle:(id)arg0 subtitle:(id)arg1 controlState:(NSUInteger)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateColors;
-(void)applyBorder:(BOOL)arg0 ;
-(void)buttonSelected:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)placeActionButtonControllerTextDidChange:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPrimaryTitle:(id)arg0 ;
-(void)setPrimaryTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif