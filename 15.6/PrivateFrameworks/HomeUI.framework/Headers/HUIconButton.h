// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUICONBUTTON_H
#define HUICONBUTTON_H

@class UIControl, UIVisualEffectView;
@protocol HFIconDescriptor;


#import "HUIconView.h"

@interface HUIconButton : UIControl

@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView; // ivar: _backgroundEffectView
@property (readonly, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor;
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView


-(NSInteger)contentMode;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)vibrancyEffect;
-(struct CGSize )intrinsicContentSize;
-(void)setBackgroundVisualEffect:(id)arg0 animated:(BOOL)arg1 ;
-(void)setBackgroundVisualEffectViewCornerRaduis:(CGFloat)arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setIconSize:(NSUInteger)arg0 ;
-(void)setIconTintColor:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setVibrancyEffect:(id)arg0 animated:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)updateWithIconDescriptor:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif