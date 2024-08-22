// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLWALLPAPERBUTTON_H
#define PLWALLPAPERBUTTON_H

@class UIButton, _UIBackdropView, UIImageView;
@protocol _UIBackdropViewObserver;



@interface PLWallpaperButton : UIButton <_UIBackdropViewObserver>



@property (retain, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIImageView *titleMaskImageView; // ivar: _titleMaskImageView


+(id)autoLayoutCommonWallpaperButton;
+(id)autoLayoutCommonWallpaperButtonWithStyle:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_setupBackdropView;
-(void)_updateContentEdgeInsets;
-(void)backdropViewDidChange:(id)arg0 ;
-(void)dealloc;
-(void)safeAreaInsetsDidChange;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif