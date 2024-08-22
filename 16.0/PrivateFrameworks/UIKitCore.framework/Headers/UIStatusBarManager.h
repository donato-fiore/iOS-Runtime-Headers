// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARMANAGER_H
#define UISTATUSBARMANAGER_H

@class NSString, NSDictionary;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UIWindowScene.h"

@interface UIStatusBarManager : NSObject <_UISceneComponentProviding>



@property (nonatomic, getter=_isOverridingStatusBarHidden, setter=_setOverridingStatusBarHidden:) BOOL _overriddingStatusBarHidden; // ivar: _overriddingStatusBarHidden
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic) CGRect _statusBarFrameIgnoringVisibility;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *debugMenuHandler; // ivar: _debugMenuHandler
@property (readonly, nonatomic) CGFloat defaultStatusBarHeight;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInStatusBarFadeAnimation) BOOL inStatusBarFadeAnimation; // ivar: _inStatusBarFadeAnimation
@property (readonly, nonatomic) CGFloat statusBarAlpha; // ivar: _statusBarAlpha
@property (readonly, nonatomic) CGRect statusBarFrame;
@property (readonly, nonatomic) CGFloat statusBarHeight;
@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden; // ivar: _statusBarHidden
@property (readonly, nonatomic) NSDictionary *statusBarPartStyles; // ivar: _statusBarPartStyles
@property (readonly, nonatomic) NSInteger statusBarStyle; // ivar: _statusBarStyle
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


+(id)_implicitStatusBarAnimationParametersWithClass:(Class)arg0 ;
-(BOOL)_updateAlpha;
-(BOOL)_updateStyleForWindow:(id)arg0 animationParameters:(*id)arg1 ;
-(BOOL)_updateVisibilityForWindow:(id)arg0 targetOrientation:(NSInteger)arg1 animationParameters:(*id)arg2 ;
-(BOOL)statusBarHidden;
-(CGFloat)defaultStatusBarHeightInOrientation:(NSInteger)arg0 ;
-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)_updateStatusBarAppearanceWithClientSettings:(SEL)arg0 transitionContext:(id)arg1 animationParameters:(id)arg2 ;
-(id)createLocalStatusBar;
-(id)initWithScene:(id)arg0 ;
-(id)updateStatusBarAppearanceWithClientSettings:(SEL)arg0 transitionContext:(id)arg1 ;
-(struct CGPoint )_adjustedLocationForXPosition:(CGFloat)arg0 ;
-(struct CGRect )statusBarFrameForStatusBarHeight:(CGFloat)arg0 ;
-(struct CGRect )statusBarFrameForStatusBarHeight:(CGFloat)arg0 inOrientation:(NSInteger)arg1 ;
-(void)_handleScrollToTopAtXPosition:(CGFloat)arg0 ;
-(void)_visibilityChangedWithOriginalOrientation:(NSInteger)arg0 targetOrientation:(NSInteger)arg1 animationParameters:(id)arg2 ;
-(void)handleTapAction:(id)arg0 ;
-(void)updateStatusBarAppearance;
-(void)updateStatusBarAppearanceWithAnimationParameters:(id)arg0 ;


@end


#endif