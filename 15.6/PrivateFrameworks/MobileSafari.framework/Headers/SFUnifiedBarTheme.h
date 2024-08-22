// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUNIFIEDBARTHEME_H
#define SFUNIFIEDBARTHEME_H

@class UIColor, NSString;
@protocol SFUnifiedTabBarItemTitleThemeProviding;


#import "SFThemeColorBarTheme.h"
#import "SFUnifiedTabBarItemTitleContainerViewTheme.h"

@interface SFUnifiedBarTheme : SFThemeColorBarTheme <SFUnifiedTabBarItemTitleThemeProviding>



@property (readonly, nonatomic) UIColor *activeTabAccessoryButtonTintColor; // ivar: _activeTabAccessoryButtonTintColor
@property (readonly, nonatomic) UIColor *activeTabControlsTintColor; // ivar: _activeTabControlsTintColor
@property (readonly, nonatomic) UIColor *activeTabFieldTintColor; // ivar: _activeTabFieldTintColor
@property (readonly, nonatomic) UIColor *activeTabProgressBarTintColor; // ivar: _activeTabProgressBarTintColor
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *activeTabTitleTheme; // ivar: _activeTabTitleTheme
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *inputFieldAccessoryButtonTintColor; // ivar: _inputFieldAccessoryButtonTintColor
@property (readonly, nonatomic) UIColor *inputFieldSecondaryAccessoryButtonTintColor; // ivar: _inputFieldSecondaryAccessoryButtonTintColor
@property (readonly, nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (readonly, nonatomic) UIColor *overridePlatterColor; // ivar: _overridePlatterColor
@property (readonly, nonatomic) UIColor *progressBarTintColor; // ivar: _progressBarTintColor
@property (readonly, nonatomic) UIColor *selectedMenuButtonTintColor; // ivar: _selectedMenuButtonTintColor
@property (readonly, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *tabAccessoryButtonTintColor; // ivar: _tabAccessoryButtonTintColor
@property (readonly, nonatomic) UIColor *tabControlsTintColor; // ivar: _tabControlsTintColor
@property (readonly, nonatomic) UIColor *tabProgressBarTintColor; // ivar: _tabProgressBarTintColor
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *tabTitleTheme; // ivar: _tabTitleTheme
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *titleTheme; // ivar: _titleTheme


+(id)defaultTheme;
-(id)initWithBarTintStyle:(NSInteger)arg0 preferredBarTintColor:(id)arg1 controlsTintColor:(id)arg2 ;


@end


#endif