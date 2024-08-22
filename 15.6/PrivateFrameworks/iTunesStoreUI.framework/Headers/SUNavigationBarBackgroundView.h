// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUNAVIGATIONBARBACKGROUNDVIEW_H
#define SUNAVIGATIONBARBACKGROUNDVIEW_H

@class UIView, _UINavigationBarAppearanceStorage, _UIBackdropView, UIColor;



@interface SUNavigationBarBackgroundView : UIView {
    UIView *_borderView;
}


@property (retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // ivar: _shadowView
@property (retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage; // ivar: appearanceStorage
@property (nonatomic) NSInteger backdropStyle;
@property (readonly) _UIBackdropView *backdropView; // ivar: _backdropView
@property (nonatomic) NSInteger barStyle; // ivar: barStyle
@property (retain, nonatomic) UIColor *barTintColor; // ivar: barTintColor
@property (nonatomic) BOOL barWantsAdaptiveBackdrop; // ivar: barWantsAdaptiveBackdrop
@property (nonatomic) BOOL separatorOnTop; // ivar: _separatorOnTop
@property (nonatomic, getter=isTranslucent) BOOL translucent; // ivar: translucent


-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(*BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setFrame:(struct CGRect )arg0 forceUpdateBackgroundImage:(BOOL)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateBackgroundImage;


@end


#endif