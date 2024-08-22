// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKNAVIGATIONBUTTONVIEW_H
#define CKNAVIGATIONBUTTONVIEW_H

@class UIButton, UIImage, UIVisualEffect, UIImageView, NSString, UILabel, UIVisualEffectView;



@interface CKNavigationButtonView : UIButton

@property (retain, nonatomic) UIImage *defaultImage; // ivar: _defaultImage
@property (retain, nonatomic) UIImage *disabledImage; // ivar: _disabledImage
@property (retain, nonatomic) UIVisualEffect *disabledVibrancyEffect; // ivar: _disabledVibrancyEffect
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIButton *imageButton; // ivar: _imageButton
@property (nonatomic) NSInteger joinButtonStyle; // ivar: _joinButtonStyle
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect; // ivar: _vibrancyEffect
@property (retain, nonatomic) UIVisualEffectView *vibrancyView; // ivar: _vibrancyView
@property (nonatomic) BOOL wantsLongPress; // ivar: _wantsLongPress
@property (nonatomic) BOOL wantsVibrancy; // ivar: _wantsVibrancy


-(id)initWithImage:(id)arg0 disabledImage:(id)arg1 text:(id)arg2 wantsLongPress:(BOOL)arg3 ;
-(id)initWithImage:(id)arg0 text:(id)arg1 wantsLongPress:(BOOL)arg2 ;
-(void)_setupIconImageView;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif