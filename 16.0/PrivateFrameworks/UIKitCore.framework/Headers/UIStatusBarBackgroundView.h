// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARBACKGROUNDVIEW_H
#define UISTATUSBARBACKGROUNDVIEW_H



#import "UIView.h"
#import "UIStatusBarStyleAttributes.h"
#import "UIImageView.h"

@interface UIStatusBarBackgroundView : UIView {
    UIStatusBarStyleAttributes *_style;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}




-(BOOL)_styleCanGlow;
-(id)_backgroundImageName;
-(id)_baseImage;
-(id)_glowImage;
-(id)initWithFrame:(struct CGRect )arg0 style:(id)arg1 backgroundColor:(id)arg2 ;
-(id)style;
-(void)_setGlowAnimationEnabled:(BOOL)arg0 waitForNextCycle:(BOOL)arg1 ;
-(void)_startGlowAnimationWaitForNextCycle:(BOOL)arg0 ;
-(void)_stopGlowAnimation;
-(void)setGlowAnimationEnabled:(BOOL)arg0 ;
-(void)setSuppressesGlow:(BOOL)arg0 ;


@end


#endif