// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRRENDERER_H
#define PRRENDERER_H

@class UIWindowScene, NSMutableDictionary, BSCompoundAssertion, RBSAssertion, FBScene, UIViewFloatAnimatableProperty, UIScene, UIView, CSProminentDisplayViewController, NSString;
@protocol FBSceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction, PRRenderingBackdropViewOwner, UISceneDelegate, PRRenderingDelegate, PRInvalidatable, PRPosterRenderingEnvironment, PRPosterRenderingPreferences;

#import <Foundation/Foundation.h>

#import "PRRenderingBackdropView.h"

@interface PRRenderer : NSObject <FBSceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction, PRRenderingBackdropViewOwner, UISceneDelegate>

 {
    UIWindowScene *_scene;
    id<PRRenderingDelegate> *_delegate;
    BOOL _disconnected;
    NSMutableDictionary *_viewsByLevel;
    BSCompoundAssertion *_sessionExtensions;
    RBSAssertion *_assertion;
    BOOL _assertionValid;
    id<PRInvalidatable> *_wakeToken;
    id<PRInvalidatable> *_unlockToken;
    PRRenderingBackdropView *_backdropView;
    FBScene *_graphicComplicationScene;
    BOOL _graphicComplicationsRendered;
    FBScene *_inlineComplicationScene;
    BOOL _inlineComplicationRendered;
    UIViewFloatAnimatableProperty *_unlockAnimator;
    BOOL _animatingUnlock;
    BOOL _interruptedUnlock;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CSProminentDisplayViewController *complicationsPreviewProminentDisplayViewController; // ivar: _complicationsPreviewProminentDisplayViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PRPosterRenderingEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic) UIView *floatingView;
@property (readonly, nonatomic) UIView *foregroundView;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PRPosterRenderingPreferences> *preferences; // ivar: _preferences
@property (readonly) Class superclass;
@property (retain, nonatomic) CSProminentDisplayViewController *timePreviewProminentDisplayViewController; // ivar: _timePreviewProminentDisplayViewController


-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)extendRenderSessionForReason:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)invalidateView:(id)arg0 ;
-(void)noteContentSignificantlyChanged;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;
-(void)updatePreferences:(id)arg0 ;
-(void)updatedValuesForView:(id)arg0 ;


@end


#endif