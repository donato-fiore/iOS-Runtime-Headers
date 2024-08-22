// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSUIWALLPAPERBUTTON_H
#define SBSUIWALLPAPERBUTTON_H

@class UIButton, UIVisualEffectView;



@interface SBSUIWallpaperButton : UIButton {
    UIVisualEffectView *_effectView;
}




-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif