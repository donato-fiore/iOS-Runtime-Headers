// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPPEGASUSCONTAINERADAPTER_H
#define SBPIPPEGASUSCONTAINERADAPTER_H

@class SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding>, UIButton, NSString, PGPictureInPictureViewController;
@protocol PGPictureInPictureViewControllerContentContainer, SBPIPStashTabSuppressionPolicyProviderObserver, SBPIPContainerViewControllerAdapter, SBPIPInteractionControllerDataSource;

#import <Foundation/Foundation.h>

#import "SBPIPStashTabSuppressionPolicyProvider.h"
#import "SBPIPDefaultPositionHyperregionComposer.h"

@interface SBPIPPegasusContainerAdapter : NSObject <PGPictureInPictureViewControllerContentContainer, SBPIPStashTabSuppressionPolicyProviderObserver, SBPIPContainerViewControllerAdapter, SBPIPInteractionControllerDataSource>

 {
    SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding> *_containerViewController;
    UIButton *_menuButton;
    BOOL _isAnyInteractionGestureActive;
    CGSize _minimumStashTabSize;
    BOOL _invalidated;
    BOOL _isChangingSize;
    SBPIPStashTabSuppressionPolicyProvider *_stashTabVisibilityPolicyProvider;
    SBPIPDefaultPositionHyperregionComposer *_pipPositionHyperregionComposer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // ivar: _pictureInPictureViewController
@property (readonly) Class superclass;


-(BOOL)handleDoubleTapGesture;
-(BOOL)handleTapWhileStashedGesture;
-(BOOL)interactionControllerScalesDuringPanGesture:(id)arg0 ;
-(BOOL)interactionControllerUseSystemGesturesForResizing:(id)arg0 ;
-(BOOL)isStashTabHiddenForContainerViewController:(id)arg0 ;
-(BOOL)shouldDisableIdleTimerForContainerViewController:(id)arg0 ;
-(id)bundleIdentifierForContainerViewController:(id)arg0 ;
-(id)contentViewControllerForContainerViewController:(id)arg0 ;
-(id)debugName;
-(id)defaultPositionHyperregionComposers;
-(id)initWithPictureInPictureViewController:(id)arg0 ;
-(id)layoutSettings;
-(id)morphAnimatorTargetContainerViewForContainerViewController:(id)arg0 ;
-(id)morphAnimatorTargetViewForContainerViewController:(id)arg0 ;
-(id)scenePersistenceIdentifierForContainerViewController:(id)arg0 ;
-(int)processIdentifierForContainerViewController:(id)arg0 ;
-(void)_createOrInvalidateStashTabVisibilityPolicyProvider;
-(void)_layoutMenuButton;
-(void)_performStopAnimationWithFinalInterfaceOrientation:(NSInteger)arg0 finalLayerFrame:(struct CGRect )arg1 completionHandler:(id)arg2 ;
-(void)_reloadMenuButton;
-(void)acquireInterfaceOrientationLock;
-(void)containerViewController:(id)arg0 didUpdateContentViewFrame:(struct CGRect )arg1 reason:(id)arg2 ;
-(void)containerViewController:(id)arg0 didUpdateStashProgress:(CGFloat)arg1 ;
-(void)containerViewController:(id)arg0 didUpdateStashState:(BOOL)arg1 springSettings:(id)arg2 ;
-(void)containerViewController:(id)arg0 wantsStashTabHidden:(BOOL)arg1 left:(BOOL)arg2 springSettings:(id)arg3 completion:(id)arg4 ;
-(void)containerViewController:(id)arg0 willBeginInteractionWithGestureRecognizer:(id)arg1 ;
-(void)containerViewControllerDidEndInteraction:(id)arg0 ;
-(void)containerViewControllerDidEndSizeChange:(id)arg0 ;
-(void)containerViewControllerStartReducingResourcesUsage:(id)arg0 ;
-(void)containerViewControllerStopReducingResourcesUsage:(id)arg0 ;
-(void)containerViewControllerWillBeginSizeChange:(id)arg0 behavior:(int)arg1 ;
-(void)dealloc;
-(void)interactionController:(id)arg0 updateScaleInteractor:(id)arg1 pipSize:(struct CGSize )arg2 forPanGesture:(id)arg3 ;
-(void)invalidate;
-(void)layoutSubviewsForContainerViewController:(id)arg0 ;
-(void)loadSubviewsForContainerViewController:(id)arg0 ;
-(void)notePictureInPictureViewControllerPrefersHiddenFromClonedDisplayDidChange;
-(void)notePictureInPictureViewControllerTetheringDidUpdate;
-(void)performRotateAnimationWithRotation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)performStartAnimationWithCompletionHandler:(id)arg0 ;
-(void)performStartInIsolationWithCompletionHandler:(id)arg0 ;
-(void)performStopAnimationWithFinalInterfaceOrientation:(NSInteger)arg0 finalLayerFrame:(struct CGRect )arg1 completionHandler:(id)arg2 ;
-(void)performStopInIsolationWithCompletionHandler:(id)arg0 ;
-(void)preferredContentSizeDidChangeForPictureInPictureViewController;
-(void)prepareStartAnimationWithInitialInterfaceOrientation:(NSInteger)arg0 initialLayerFrame:(struct CGRect )arg1 completionHandler:(id)arg2 ;
-(void)relinquishInterfaceOrientationLock;
-(void)setContainerViewController:(id)arg0 ;
-(void)stashTabVisibilityPolicyProviderDidUpdatePolicy:(id)arg0 ;
-(void)transitionAnimationDidEndForContainerViewController:(id)arg0 ;
-(void)transitionAnimationWillBeginForContainerViewController:(id)arg0 ;
-(void)updateMenuItems;


@end


#endif