// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCENEPRESENTATIONVIEW_H
#define _UISCENEPRESENTATIONVIEW_H

@class UIVisibilityPropagationView, FBScene, FBSSceneSettings, FBSSceneSettingsDiffInspector, NSHashTable, NSString;
@protocol FBSceneObserver, _UISceneLayerHostContainerViewDataSource, BSDescriptionProviding, UIScenePresentation, BSInvalidatable, UIScenePresenter;


#import "_UIScenePresenter.h"
#import "UIView.h"
#import "UIScenePresentationContext.h"
#import "_UISceneLayerHostContainerView.h"

@interface _UIScenePresentationView : UIVisibilityPropagationView <FBSceneObserver, _UISceneLayerHostContainerViewDataSource, BSDescriptionProviding, UIScenePresentation, BSInvalidatable>

 {
    _UIScenePresenter *_presenter;
    FBScene *_scene;
    FBSSceneSettings *_effectiveSettings;
    UIView *_backgroundView;
    FBSSceneSettingsDiffInspector *_geometrySettingsDiffInspector;
    NSHashTable *_observers;
    BOOL _invalidated;
}


@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIScenePresentationContext *currentPresentationContext; // ivar: _currentPresentationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UISceneLayerHostContainerView *hostContainerView; // ivar: _hostContainerView
@property (readonly, weak, nonatomic) NSObject<UIScenePresenter> *presenter;
@property (readonly) Class superclass;


-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)identifier;
-(id)initWithPresenter:(id)arg0 ;
-(id)presentationContextForSceneLayerHostContainerView;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_geometryDidUpdateWithTransitionContext:(id)arg0 ;
-(void)_updateBackgroundColor;
-(void)_updateFrameAndTransform;
-(void)_updatePresentationContextFrom:(id)arg0 toContext:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)scene:(id)arg0 clientDidConnect:(id)arg1 ;
-(void)scene:(id)arg0 didPrepareUpdateWithContext:(id)arg1 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 withError:(id)arg1 ;


@end


#endif