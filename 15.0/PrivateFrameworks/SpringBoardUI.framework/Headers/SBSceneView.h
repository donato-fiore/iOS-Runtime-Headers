// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENEVIEW_H
#define SBSCENEVIEW_H

@class UIView, NSString, UIView<SBScenePlaceholderContentView>, UIView<UISceneSnapshotPresentation>, UIView<UIScenePresentation>, NSCountedSet;
@protocol SBSceneHandleObserver, SBScenePlaceholderContentViewProviderDelegate, BSInvalidatable, SBSceneViewDelegate, SBScenePlaceholderContentContext, SBScenePlaceholderContentViewProvider, UIScenePresenter;


#import "SBSceneHandle.h"

@interface SBSceneView : UIView <SBSceneHandleObserver, SBScenePlaceholderContentViewProviderDelegate, BSInvalidatable>

 {
    BOOL _invalidated;
    NSInteger _hostingPriority;
    NSString *_hostingIdentifier;
    UIView *_sceneContentContainerView;
    UIView<SBScenePlaceholderContentView> *_placeholderContentView;
    UIView<UISceneSnapshotPresentation> *_liveSnapshotView;
    UIView<UIScenePresentation> *_hostView;
    UIView *_crossfadeView;
    NSCountedSet *_liveContentDisableReasons;
}


@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *customContentView; // ivar: _customContentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSceneViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode; // ivar: _requestedDisplayMode
@property (readonly, nonatomic) NSInteger effectiveDisplayMode; // ivar: _effectiveDisplayMode
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *minificationFilter; // ivar: _minificationFilter
@property (readonly, nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext; // ivar: _placeholderContentContext
@property (nonatomic) BOOL placeholderContentEnabled; // ivar: _placeholderContentEnabled
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentViewProvider> *placeholderContentProvider; // ivar: _placeholderContentProvider
@property (readonly, nonatomic) NSInteger preferredStatusBarStyle;
@property (readonly, nonatomic) NSObject<UIScenePresenter> *presenter; // ivar: _presenter
@property (readonly, nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (nonatomic) BOOL rendersAsynchronously; // ivar: _rendersAsynchronously
@property (readonly, nonatomic) SBSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly) Class superclass;


+(id)defaultDisplayModeAnimationFactory;
-(BOOL)_addContentLikeViewToHierarchyForTransitionIfPossible:(id)arg0 ;
-(BOOL)_representsTranslucentContent;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)_shouldObserveSceneHostContentState;
-(BOOL)_shouldViewBeInHierarchyForTransition:(id)arg0 ;
-(BOOL)_wantsBlackBackground;
-(CGFloat)_contentContainerCornerRadius;
-(NSInteger)_bestDisplayModeLessThanMode:(NSInteger)arg0 ;
-(id)_sceneContentContainerView;
-(id)_transitionViewForHostView;
-(id)_viewForDisplayMode:(NSInteger)arg0 ;
-(id)acquireLiveContentDisableAssertionForReason:(id)arg0 ;
-(id)initWithSceneHandle:(id)arg0 referenceSize:(struct CGSize )arg1 orientation:(NSInteger)arg2 ;
-(id)initWithSceneHandle:(id)arg0 referenceSize:(struct CGSize )arg1 orientation:(NSInteger)arg2 hostRequester:(id)arg3 ;
-(id)newSnapshot;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_contentContainerEdgeInsets;
-(void)_clearSnapshotViews;
-(void)_configureBackgroundColorForLiveSnapshot:(BOOL)arg0 ;
-(void)_configureHostView;
-(void)_configureLiveSnapshotView;
-(void)_configurePlaceholderContentView;
-(void)_configureSceneLiveHostView:(id)arg0 ;
-(void)_configureSceneSnapshotContext:(id)arg0 ;
-(void)_configureViewForEffectiveDisplayMode:(NSInteger)arg0 ;
-(void)_containerContentWrapperInterfaceOrientationChangedTo:(NSInteger)arg0 ;
-(void)_enableHostingIfPossible;
-(void)_evaluateEffectiveDisplayModeWithAnimationFactory:(id)arg0 completion:(id)arg1 ;
-(void)_hotSwapLiveSnapshotView;
-(void)_hotSwapPlaceholderContentView;
-(void)_invalidateHostPresenter;
-(void)_invalidateSceneLiveHostView:(id)arg0 ;
-(void)_layoutLiveHostView:(id)arg0 ;
-(void)_placeholderVisibilityChanged;
-(void)_recheckLiveContentDependencies;
-(void)_refresh;
-(void)_reloadPlaceholderContentIfNecessary;
-(void)_transitionFromDisplayMode:(NSInteger)arg0 showingView:(id)arg1 toDisplayMode:(NSInteger)arg2 showingView:(id)arg3 withAnimationFactory:(id)arg4 completion:(id)arg5 ;
-(void)_updateBackgroundColor;
-(void)_updateBackgroundViewContainment;
-(void)_updateLiveContentRendering;
-(void)_updateReferenceSize:(struct CGSize )arg0 andOrientation:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;
-(void)placeholderContentViewProviderContentDidUpdate:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateContentState:(NSInteger)arg1 ;


@end


#endif