// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBARBACKGROUND_H
#define _UIBARBACKGROUND_H

@class NSString;


#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIImageView.h"
#import "_UIBarBackgroundShadowView.h"
#import "_UIBarBackgroundLayout.h"

@interface _UIBarBackground : UIView {
    UIVisualEffectView *_effectView1;
    UIImageView *_colorAndImageView1;
    _UIBarBackgroundShadowView *_shadowView1;
    UIVisualEffectView *_effectView2;
    UIImageView *_colorAndImageView2;
    _UIBarBackgroundShadowView *_shadowView2;
    UIView *_topInsetView;
    CGFloat _bg1LastLayoutHeight;
    CGFloat _bg2LastLayoutHeight;
    ? _backgroundFlags;
}


@property (retain, nonatomic) UIView *customBackgroundView; // ivar: _customBackgroundView
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) _UIBarBackgroundLayout *layout; // ivar: _layout
@property (nonatomic) BOOL topAligned; // ivar: _topAligned


-(id)_backgroundEffectView;
-(id)_encodableSubviews;
-(id)_shadowView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameForYOrigin:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)_orderSubviews;
-(void)_setupBackgroundValues;
-(void)_setupShadowView:(id)arg0 effect:(id)arg1 image:(id)arg2 shadowColor:(id)arg3 shadowTint:(id)arg4 alpha:(CGFloat)arg5 ;
-(void)_updateBackgroundViewVisiblity;
-(void)cleanupBackgroundViews;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareBackgroundViews;
-(void)set_backgroundEffectView:(id)arg0 ;
-(void)set_shadowView:(id)arg0 ;
-(void)transition:(NSUInteger)arg0 toLayout:(id)arg1 ;
-(void)transitionBackgroundViews;
-(void)updateBackground;


@end


#endif