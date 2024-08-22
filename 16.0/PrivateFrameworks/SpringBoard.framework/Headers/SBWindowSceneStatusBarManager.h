// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWINDOWSCENESTATUSBARMANAGER_H
#define SBWINDOWSCENESTATUSBARMANAGER_H

@class UIStatusBarManager, NSMutableDictionary, NSMapTable, NSHashTable, NSString, UIStatusBar, UIStatusBarWindow;
@protocol BSDescriptionProviding;


#import "SBWindowSceneStatusBarAssertionManager.h"
#import "SBWindowSceneStatusBarLayoutManager.h"
#import "SBStatusBarReusePool.h"

@interface SBWindowSceneStatusBarManager : UIStatusBarManager <BSDescriptionProviding>

 {
    NSMutableDictionary *_globalAvoidanceFrames;
    NSMapTable *_instanceAvoidanceFrames;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) SBWindowSceneStatusBarAssertionManager *assertionManager; // ivar: _assertionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBWindowSceneStatusBarLayoutManager *layoutManager; // ivar: _layoutManager
@property (readonly, nonatomic) SBStatusBarReusePool *reusePool; // ivar: _reusePool
@property (readonly, nonatomic) UIStatusBar *statusBar; // ivar: _statusBar
@property (readonly, nonatomic, getter=isStatusBarEffectivelyHidden) BOOL statusBarEffectivelyHidden;
@property (nonatomic) NSInteger statusBarOrientation;
@property (readonly, nonatomic) UIStatusBarWindow *statusBarWindow; // ivar: _statusBarWindow
@property (readonly, nonatomic) CGRect statusBarWindowFrame;
@property (readonly) Class superclass;


+(id)windowSceneStatusBarManagerForEmbeddedDisplay;
-(BOOL)_isEmbeddedDisplay;
-(id)_transientOverlayPresentationManagerActiveStatusBarStyleRequest;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)frontmostStatusBarStyleRequest;
-(id)initWithScene:(id)arg0 ;
-(id)leadingStatusBarStyleRequest;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)trailingStatusBarStyleRequest;
-(struct CGRect )_combineAvoidanceFrame:(struct CGRect )arg0 withFrame:(struct CGRect )arg1 ;
-(struct CGRect )_globalAvoidanceFrame;
-(struct CGRect )avoidanceFrameForStatusBar:(id)arg0 ;
-(struct CGRect )sb_statusBarFrameForStatusBarHeight:(CGFloat)arg0 ;
-(void)_applyAvoidanceFrameToStatusBar:(id)arg0 withGlobalAvoidanceFrame:(struct CGRect )arg1 animationSettings:(id)arg2 reason:(id)arg3 ;
-(void)_applyAvoidanceFrameToStatusBar:(id)arg0 withGlobalAvoidanceFrame:(struct CGRect )arg1 animationSettings:(id)arg2 reason:(id)arg3 isInteractive:(BOOL)arg4 ;
-(void)sbf_addObserver:(id)arg0 ;
-(void)sbf_removeObserver:(id)arg0 ;
-(void)setAvoidanceFrame:(struct CGRect )arg0 reason:(id)arg1 statusBar:(id)arg2 animationSettings:(id)arg3 ;
-(void)setAvoidanceFrame:(struct CGRect )arg0 reason:(id)arg1 statusBar:(id)arg2 animationSettings:(id)arg3 isInteractive:(BOOL)arg4 ;


@end


#endif