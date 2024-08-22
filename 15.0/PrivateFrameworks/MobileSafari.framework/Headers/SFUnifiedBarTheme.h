// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDBARTHEME_H
#define SFUNIFIEDBARTHEME_H

@class UIColor, NSString, UIBlurEffect;
@protocol SFUnifiedTabBarItemTitleThemeProviding;


#import "SFThemeColorBarTheme.h"
#import "SFUnifiedTabBarItemTitleContainerViewTheme.h"

@interface SFUnifiedBarTheme : SFThemeColorBarTheme <SFUnifiedTabBarItemTitleThemeProviding>



@property (readonly, nonatomic) UIColor *accessoryButtonTintColor; // ivar: _accessoryButtonTintColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (retain, nonatomic) UIBlurEffect *overrideBackdropEffect; // ivar: _overrideBackdropEffect
@property (readonly, nonatomic) UIColor *overridePlatterColor; // ivar: _overridePlatterColor
@property (readonly, nonatomic) UIColor *progressBarTintColor; // ivar: _progressBarTintColor
@property (readonly, nonatomic) UIColor *selectedMenuButtonTintColor; // ivar: _selectedMenuButtonTintColor
@property (readonly, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *tabControlsTintColor; // ivar: _tabControlsTintColor
@property (readonly, nonatomic) UIColor *tabProgressBarTintColor; // ivar: _tabProgressBarTintColor
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *tabTitleTheme; // ivar: _tabTitleTheme
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *titleTheme; // ivar: _titleTheme


-(id)backdropEffect;
-(id)initWithBarTintStyle:(NSInteger)arg0 preferredBarTintColor:(id)arg1 controlsTintColor:(id)arg2 ;


@end


#endif