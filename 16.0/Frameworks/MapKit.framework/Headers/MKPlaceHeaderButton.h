// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEHEADERBUTTON_H
#define MKPLACEHEADERBUTTON_H

@class UIButton, NSLayoutConstraint, NSString;
@protocol _MKPlaceActionControlledButton;


#import "MKVibrantView.h"
#import "_MKPlaceActionButtonController.h"

@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionControlledButton>

 {
    NSUInteger _buttonType;
    BOOL _primary;
    NSLayoutConstraint *_heightConstraint;
    MKVibrantView *_vibrantView;
    BOOL _buttonHighlighted;
}


@property (weak, nonatomic) _MKPlaceActionButtonController *buttonController; // ivar: _buttonController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isTintColorWhite;
-(id)_primaryButtonColor;
-(id)_primaryButtonTextColor;
-(id)init;
-(id)initWithPrimaryType:(NSUInteger)arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_setVibrantView;
-(void)_updateStyleNonPrimaryButton;
-(void)_updateStylePrimaryButton;
-(void)applyButtonDefaultConfiguration;
-(void)buttonSelected:(id)arg0 ;
-(void)infoCardThemeChanged;
-(void)placeActionButtonControllerTextDidChange:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPrimaryTitle:(id)arg0 ;
-(void)setPrimaryTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)updateButtonWithHighlighted:(BOOL)arg0 ;


@end


#endif