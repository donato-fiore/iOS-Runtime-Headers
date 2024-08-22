// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSCENEVIEWCONTROLLER_H
#define PRSCENEVIEWCONTROLLER_H

@class UIViewController, UIScene, UIView, FBScene, PRSServerPosterIdentity, NSString;
@protocol FBSceneDelegate, _UISceneSettingsDiffAction, BSInvalidatable, UIScenePresenter;


#import "PRPosterComplicationLayout.h"
#import "PRPosterConfigurableOptions.h"
#import "PRPosterConfiguredProperties.h"
#import "PRPosterRenderingConfiguration.h"

@interface PRSceneViewController : UIViewController <FBSceneDelegate, _UISceneSettingsDiffAction, BSInvalidatable>

 {
    UIScene *_uiParentScene;
    UIView *_touchBlockingView;
    BOOL _invalidated;
    FBScene *_scene;
}


@property (readonly, copy, nonatomic) PRPosterComplicationLayout *complicationLayout; // ivar: _complicationLayout
@property (readonly, nonatomic) PRPosterConfigurableOptions *configurableOptions;
@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties; // ivar: _configuredProperties
@property (readonly, nonatomic) PRSServerPosterIdentity *contentsIdentity; // ivar: _contentsIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forcesSceneForeground; // ivar: _forcesSceneForeground
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration; // ivar: _renderingConfiguration
@property (readonly, nonatomic, getter=isSceneContentReady) BOOL sceneContentReady;
@property (readonly, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (nonatomic, getter=isSceneUserInteractionEnabled) BOOL sceneUserInteractionEnabled; // ivar: _sceneUserInteractionEnabled
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(id)role;
-(BOOL)_shouldSceneBeForeground;
-(id)_initWithProvider:(id)arg0 contents:(id)arg1 configurableOptions:(id)arg2 configuredProperties:(id)arg3 previewing:(BOOL)arg4 ;
-(id)_initWithProvider:(id)arg0 contents:(id)arg1 previewing:(BOOL)arg2 ;
-(id)_presentationBackgroundColor;
-(id)initWithProvider:(id)arg0 contents:(id)arg1 ;
-(id)initWithProvider:(id)arg0 contents:(id)arg1 configurableOptions:(id)arg2 ;
-(id)initWithProvider:(id)arg0 contents:(id)arg1 configurableOptions:(id)arg2 configuredProperties:(id)arg3 ;
-(id)initWithProvider:(id)arg0 contents:(id)arg1 configuredProperties:(id)arg2 ;
-(void)_addScenePresentationView:(id)arg0 ;
-(void)_adjustParentScene;
-(void)_configureInitialSceneClientSettings:(id)arg0 ;
-(void)_configureInitialSceneSettings:(id)arg0 ;
-(void)_configureUsingPath:(id)arg0 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_sceneContentReadinessDidChange;
-(void)_teardown;
-(void)_update;
-(void)_updatePresentationBackgroundColor;
-(void)_updateSceneSettings:(id)arg0 transitionContext:(id)arg1 ;
-(void)_updateSceneToSize:(struct CGSize )arg0 orientation:(NSInteger)arg1 withAnimationSettings:(id)arg2 fence:(id)arg3 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)invalidate;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif