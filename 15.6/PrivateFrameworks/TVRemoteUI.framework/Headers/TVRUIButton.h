// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIBUTTON_H
#define TVRUIBUTTON_H

@class UIControl, NSString, UIColor, UIViewPropertyAnimator, UIImageView, UILabel;
@protocol UIPointerInteractionDelegate, TVRUIStyleProvider;


#import "TVRButtonHaptic.h"

@interface TVRUIButton : UIControl <UIPointerInteractionDelegate>



@property (readonly, nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *defaultBackgroundColor; // ivar: _defaultBackgroundColor
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isHighlightEffectDisabled) BOOL disableHighlightEffect; // ivar: _disableHighlightEffect
@property (retain, nonatomic) TVRButtonHaptic *haptic; // ivar: _haptic
@property (nonatomic) BOOL hasButtonShape; // ivar: _hasButtonShape
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewPropertyAnimator *highlightAnimator; // ivar: _highlightAnimator
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=hasTapAction) BOOL tapAction; // ivar: _tapAction
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIViewPropertyAnimator *unhighlightAnimator; // ivar: _unhighlightAnimator


+(BOOL)buttonTypeHasTapAction:(NSInteger)arg0 ;
+(BOOL)isValidButtonType:(NSInteger)arg0 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_accessibilityHintForButtonType:(NSInteger)arg0 ;
-(id)_accessibilityLabelForButtonType:(NSInteger)arg0 ;
-(id)_hapticForButtonType:(NSInteger)arg0 ;
-(id)_pointerEffectForButtonType:(NSInteger)arg0 targetedPreview:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 hasTapAction:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_boldTextEnabledStatusChanged:(id)arg0 ;
-(void)_darkenSystemColorsChanged:(id)arg0 ;
-(void)_largeTextEnabledStatusChanged:(id)arg0 ;
-(void)_touchDown:(id)arg0 ;
-(void)_touchUp:(id)arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif