// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIMODALREMOTEVIEWCONTROLLER_H
#define PRUIMODALREMOTEVIEWCONTROLLER_H

@class UIViewController, UIWindowScene, FBScene, UIView<UIScenePresentation>, NSString;
@protocol BSDescriptionProviding, BSInvalidatable, FBSceneDelegate, FBSceneLayerManagerObserver, PRUIModalEntryPoint, UIScenePresenter, PRUIModalRemoteViewControllerDelegate;



@interface PRUIModalRemoteViewController : UIViewController <BSDescriptionProviding, BSInvalidatable, FBSceneDelegate, FBSceneLayerManagerObserver>

 {
    id<PRUIModalEntryPoint> *_entryPoint;
    UIWindowScene *_uiParentScene;
    BOOL _didConfigureScene;
    FBScene *_scene;
    id<UIScenePresenter> *_scenePresenter;
    BOOL _invalidated;
    UIView<UIScenePresentation> *_scenePresentationView;
    BOOL _presentedPrefersStatusBarHidden;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRUIModalRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithEntryPoint:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_configureSceneIfNeededWithParentWindow:(id)arg0 ;
-(void)_invalidateAfterDismissal;
-(void)_invokeDidDismissDelegateWithResponse:(id)arg0 ;
-(void)_invokeWillDismissDelegateWithResponse:(id)arg0 ;
-(void)_teardown;
-(void)_update;
-(void)_updateCommonModalSceneSettings:(id)arg0 withFrame:(struct CGRect )arg1 interfaceOrientation:(NSInteger)arg2 ;
-(void)_updateSceneToSize:(struct CGSize )arg0 orientation:(NSInteger)arg1 withAnimationSettings:(id)arg2 fence:(id)arg3 ;
-(void)_updateStatusBarVisibilityWithTransitionContext:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)invalidate;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif