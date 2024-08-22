// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPSWITCHERWALLPAPERGRADIENTVIEW_H
#define SBAPPSWITCHERWALLPAPERGRADIENTVIEW_H

@class UIBackdropView, CAGradientLayer;



@interface SBAppSwitcherWallpaperGradientView : UIBackdropView {
    CAGradientLayer *_gradientLayer;
}


@property (nonatomic) SBSwitcherGradientWallpaperAttributes attributes; // ivar: _attributes


-(id)initWithPrivateStyle:(NSInteger)arg0 ;
-(void)_updateGradientColors;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif