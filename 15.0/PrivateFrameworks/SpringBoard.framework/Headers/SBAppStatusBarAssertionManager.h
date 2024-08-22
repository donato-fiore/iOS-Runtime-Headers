// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSTATUSBARASSERTIONMANAGER_H
#define SBAPPSTATUSBARASSERTIONMANAGER_H

@class NSHashTable, NSMutableOrderedSet, NSMutableDictionary, NSMutableSet, NSString;
@protocol BSDescriptionProviding, UIStatusBarManager, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBAppStatusBarSettings.h"

@interface SBAppStatusBarAssertionManager : NSObject <BSDescriptionProviding, UIStatusBarManager>

 {
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    NSPointerArray" _statusBarSettingsAssertionsByLevel;
    SBAppStatusBarSettings *_currentStatusBarSettings;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSMutableSet *_activeLayoutLayers;
    NSMutableDictionary *_orientationWindowDictionary;
    CGFloat _defaultWindowLevel;
    id<BSInvalidatable> *_stateCaptureAssertion;
    NSHashTable *_observers;
    BOOL _changingStatusBarStyle;
    BOOL _changingStatusBarAlpha;
    NSUInteger _statusBarAlphaAnimationCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIEdgeInsets statusBarEdgeInsets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger topmostActiveLayoutLayer;


+(id)sharedInstance;
-(BOOL)isStatusBarHidden;
-(BOOL)isStatusBarUserInteractionEnabled;
-(BOOL)statusBar:(id)arg0 shouldRequestStyle:(NSInteger)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(BOOL)statusBar:(id)arg0 shouldRequestStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(BOOL)statusBar:(id)arg0 shouldSetAlpha:(CGFloat)arg1 ;
-(BOOL)statusBarOrientationShouldFollowWindow:(id)arg0 ;
-(NSUInteger)statusBar:(id)arg0 effectiveStyleOverridesForRequestedStyle:(NSInteger)arg1 overrides:(NSUInteger)arg2 ;
-(id)_descriptionForPropertyWithAssertions:(id)arg0 ;
-(id)_styleRequestForSettings:(id)arg0 ;
-(id)currentEffectiveStatusBarStyleRequest;
-(id)currentStatusBarSettings;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)effectiveStatusBarStyleRequestForLevel:(NSUInteger)arg0 ;
-(id)effectiveStatusBarStyleRequestWithSettings:(id)arg0 ;
-(id)init;
-(id)orientationWindowForLayoutLayer:(NSUInteger)arg0 ;
-(id)statusBarSettingsForLevel:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg0 ;
-(void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg0 ;
-(void)_addStatusBarSettingsAssertion:(id)arg0 ;
-(void)_addStatusBarSettingsAssertion:(id)arg0 withAnimationParameters:(id)arg1 ;
-(void)_applyEdgeInsetsToStatusBar;
-(void)_cleanUpAllStatusBarSettingsAssertions;
-(void)_enumerateAssertionsToLevel:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)_evaluateSettingsWithStyleAnimations:(id)arg0 ;
-(void)_modifiedStatusBarSettingsAssertion:(id)arg0 ;
-(void)_modifiedStatusBarSettingsAssertion:(id)arg0 withAnimationParameters:(id)arg1 ;
-(void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg0 ;
-(void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg0 ;
-(void)_removeStatusBarSettingsAssertion:(id)arg0 ;
-(void)_removeStatusBarSettingsAssertion:(id)arg0 withAnimationParameters:(id)arg1 ;
-(void)_resolveEffectiveStatusBarStyleForSettings:(id)arg0 ;
-(void)_setStatusBarValueForPropertyWithAssertions:(id)arg0 setter:(id)arg1 ;
-(void)_statusBarUpdatedFromSettings:(id)arg0 toSettings:(id)arg1 withAnimations:(id)arg2 ;
-(void)_updateStatusBarOrientationForTopMostActiveLayer;
-(void)_updateWindowLevel;
-(void)addActiveLayoutLayer:(NSUInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeActiveLayoutLayer:(NSUInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeWindowLevelOverrideReason:(id)arg0 ;
-(void)setDefaultWindowLevel:(CGFloat)arg0 ;
-(void)setOrientationWindow:(id)arg0 forStatusBarLayoutLayer:(NSUInteger)arg1 ;
-(void)setStatusBarUserInteractionEnabled:(BOOL)arg0 ;
-(void)setWindowLevel:(CGFloat)arg0 forOverrideReason:(id)arg1 ;


@end


#endif