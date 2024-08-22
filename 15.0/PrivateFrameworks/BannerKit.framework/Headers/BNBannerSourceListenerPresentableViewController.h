// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BNBANNERSOURCELISTENERPRESENTABLEVIEWCONTROLLER_H
#define BNBANNERSOURCELISTENERPRESENTABLEVIEWCONTROLLER_H

@class UIViewController, NSHashTable, BSAnimationSettings, UIView, NSString, FBScene, NSUUID;
@protocol BNBannerSourceListenerPresentableViewControllerViewDelegate, BNBannerSourceListenerPresentable, UIScenePresenter, BNPanGestureProxy, BNPresentableContext;



@interface BNBannerSourceListenerPresentableViewController : UIViewController <BNBannerSourceListenerPresentableViewControllerViewDelegate, BNBannerSourceListenerPresentable>

 {
    id<UIScenePresenter> *_scenePresenter;
    UIEdgeInsets _bannerContentOutsets;
    NSHashTable *_observers;
    BSAnimationSettings *_bannerSizeTransitionAnimationSettings;
    id *_readyCompletion;
    id<BNPanGestureProxy> *_panGestureProxy;
}


@property (readonly, nonatomic) int bannerAppearState; // ivar: _bannerAppearState
@property (readonly, nonatomic, getter=isContentHosted) BOOL contentHosted;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType; // ivar: _presentableType
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requesterIdentifier; // ivar: _requesterIdentifier
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)_canShowWhileLocked;
-(id)_tearDownSceneBlock:(SEL)arg0 ;
-(id)bannerSizeTransitionAnimationSettings;
-(id)initWithWithSpecification:(id)arg0 scene:(id)arg1 readyCompletion:(id)arg2 ;
-(id)presentableDescription;
-(struct UIEdgeInsets )bannerContentOutsets;
-(struct UIEdgeInsets )contentInsetsForBannerHostSceneViewControllerView:(id)arg0 ;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_makeReadyIfPossibleWithScene:(id)arg0 ;
-(void)_tearDownSceneIfNecessary;
-(void)_tearDownSceneInfrastructureIfNecessary;
-(void)_tearDownScenePresenterIfNecessary;
-(void)_updateBannerContentOutsetsWithScene:(id)arg0 ;
-(void)_updatePreferredContentSizeWithScene:(id)arg0 transitionContext:(id)arg1 ;
-(void)addPresentableObserver:(id)arg0 ;
-(void)bannerHostSceneViewControllerViewDidChangeSize:(id)arg0 ;
-(void)dealloc;
-(void)draggingDidBeginWithGestureProxy:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillNotAppearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)removePresentableObserver:(id)arg0 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg0 ;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif