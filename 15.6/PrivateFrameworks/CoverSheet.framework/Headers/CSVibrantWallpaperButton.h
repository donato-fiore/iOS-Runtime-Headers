// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVIBRANTWALLPAPERBUTTON_H
#define CSVIBRANTWALLPAPERBUTTON_H

@class SBUIVibrantButton, UIView<CSWallpaperView>;
@protocol CSWallpaperColorProvider, CSWallpaperViewProviding;



@interface CSVibrantWallpaperButton : SBUIVibrantButton

@property (readonly, nonatomic) UIView<CSWallpaperView> *effectView; // ivar: _effectView
@property (weak, nonatomic) NSObject<CSWallpaperColorProvider> *wallpaperColorProvider; // ivar: _wallpaperColorProvider
@property (weak, nonatomic) NSObject<CSWallpaperViewProviding> *wallpaperViewProvider; // ivar: _wallpaperViewProvider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateVibrancy;
-(void)setLegibilitySettings:(id)arg0 ;


@end


#endif