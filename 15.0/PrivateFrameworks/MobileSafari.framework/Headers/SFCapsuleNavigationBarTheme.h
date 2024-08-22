// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCAPSULENAVIGATIONBARTHEME_H
#define SFCAPSULENAVIGATIONBARTHEME_H

@class SFBarTheme, NSString;
@protocol SFUnifiedTabBarItemTitleThemeProviding;


#import "_SFBarTheme.h"
#import "SFUnifiedTabBarItemTitleContainerViewTheme.h"

@interface SFCapsuleNavigationBarTheme : SFBarTheme <SFUnifiedTabBarItemTitleThemeProviding>



@property (retain, nonatomic) _SFBarTheme *backgroundTheme; // ivar: _backgroundTheme
@property (readonly, nonatomic) _SFBarTheme *contentTheme;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesOverlayEffects; // ivar: _hidesOverlayEffects
@property (readonly) Class superclass;
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *tabTitleTheme;
@property (readonly, nonatomic) SFUnifiedTabBarItemTitleContainerViewTheme *titleTheme;


+(BOOL)backdropIsDarkForStyle:(NSInteger)arg0 ;
+(id)backdropEffectForStyle:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_titleThemeIsMinimized:(BOOL)arg0 ;
-(id)backgroundOverlayEffects;
-(void)applyBackdropEffectsToView:(id)arg0 ;


@end


#endif