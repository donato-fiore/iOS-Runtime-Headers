// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTHEMECOLOREFFECTVIEW_H
#define SFTHEMECOLOREFFECTVIEW_H

@class UIView, UIVisualEffectView, NSString, UIVisualEffect;


#import "SFThemeColorBarTheme.h"

@interface SFThemeColorEffectView : UIView {
    UIView *_darkeningView;
    UIVisualEffectView *_effectView;
}


@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect;
@property (retain, nonatomic) SFThemeColorBarTheme *theme; // ivar: _theme
@property (nonatomic) CGFloat themeColorVisibility; // ivar: _themeColorVisibility


-(BOOL)_needsBlur;
-(id)initWithEffect:(id)arg0 ;
-(void)_applyTheme;
-(void)_updateFillColor;


@end


#endif