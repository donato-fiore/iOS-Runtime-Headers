// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMNOTESCONTENTVIEWCONTROLLER_H
#define SBSYSTEMNOTESCONTENTVIEWCONTROLLER_H

@class UIViewController, UITapGestureRecognizer, UIView, SBSSystemNotesPresentationConfiguration, BSAbsoluteMachTimer, NSString;
@protocol SBPIPWindowOrientationObserver, SBWorkspaceApplicationSceneTransitionContextDelegate, SBSystemPointerInteractionDelegate, SBTransientUITapToDismissParticipant, SBDeviceApplicationSceneHandleObserver, SBPIPSceneContentProviding, SBSystemNotesContentViewControllerDelegate;


#import "SBSystemNotesInteractionSettings.h"
#import "SBDeviceApplicationSceneViewController.h"
#import "SBNubView.h"
#import "SBApplicationBlurContentView.h"
#import "SBMainWorkspace.h"
#import "SBSystemNotesPlaceholderContentProvider.h"
#import "SBSceneViewStatusBarAssertion.h"
#import "SBTransientUIInteractionManager.h"
#import "SBSystemPointerInteractionManager.h"
#import "SBSystemNotesContentPresentationContext.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBSystemNotesContentViewController : UIViewController <SBPIPWindowOrientationObserver, SBWorkspaceApplicationSceneTransitionContextDelegate, SBSystemPointerInteractionDelegate, SBTransientUITapToDismissParticipant, SBDeviceApplicationSceneHandleObserver, SBPIPSceneContentProviding>

 {
    SBSystemNotesInteractionSettings *_notesInteractionSettings;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBNubView *_nubView;
    SBApplicationBlurContentView *_blurView;
    SBMainWorkspace *_workspace;
    UITapGestureRecognizer *_thumbnailTapGestureRecognizer;
    UIView *_thumbnailView;
    SBSystemNotesPlaceholderContentProvider *_placeholderProvider;
    SBSceneViewStatusBarAssertion *_statusBarAssertion;
    SBTransientUIInteractionManager *_transientUIInteractionManager;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
    CGSize _preferredSceneContentSize;
    SBSSystemNotesPresentationConfiguration *_currentConfiguration;
    SBSystemNotesContentPresentationContext *_presentationContext;
    BSAbsoluteMachTimer *_thumbnailCooldownTimer;
    BOOL _thumbnailCooldownTimerFired;
    BOOL _haveBeenForeground;
    NSString *_pendingAnalyticsString;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) SBSSystemNotesPresentationConfiguration *currentConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSystemNotesContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger presentationMode;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly) Class superclass;


-(BOOL)_hitTestTouch:(id)arg0 gestureRecognizer:(id)arg1 ;
-(BOOL)_updateForegroundStatus:(BOOL)arg0 ;
-(BOOL)containerViewController:(id)arg0 shouldHandleStashingForTransitionContext:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(BOOL)transientUIHandledTouch:(id)arg0 withSystemGestureRecognizer:(id)arg1 ;
-(NSInteger)_currentInterfaceOrientation;
-(NSUInteger)_sendActionForUpdatedConfiguration:(id)arg0 sendCreateIfNecessary:(BOOL)arg1 ;
-(NSUInteger)updateConfiguration:(id)arg0 sendCreateActionIfNecessary:(BOOL)arg1 ;
-(id)_containerViewController;
-(id)_imageFromUserActivity:(id)arg0 presentationMode:(NSInteger)arg1 ;
-(id)_thumbnailViewForUserActivity:(id)arg0 ;
-(id)contentView;
-(id)initWithSceneHandle:(id)arg0 workspace:(id)arg1 transientUIInteractionManager:(id)arg2 systemPointerInteractionManager:(id)arg3 notesInteractionSettings:(id)arg4 presentationContext:(id)arg5 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)styleForRegion:(id)arg0 forView:(id)arg1 ;
-(struct CGRect )_sceneFrameForOrientation:(NSInteger)arg0 ;
-(struct CGRect )applicationTransitionContext:(id)arg0 frameForApplicationSceneEntity:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(struct UIEdgeInsets )pointerInteractionHitTestInsetsForView:(id)arg0 ;
-(void)_handleThumbnailTapGesture:(id)arg0 ;
-(void)_setBlurred:(BOOL)arg0 ;
-(void)_setPreferredSceneContentSize:(struct CGSize )arg0 ;
-(void)_updateSceneFrameWithOrientation:(NSInteger)arg0 completion:(id)arg1 ;
-(void)containerViewController:(id)arg0 didSettleOnStashState:(BOOL)arg1 ;
-(void)containerViewControllerDidEndInteraction:(id)arg0 ;
-(void)containerViewControllerDidEndSizeChange:(id)arg0 ;
-(void)containerViewControllerWillBeginSizeChange:(id)arg0 behavior:(int)arg1 ;
-(void)dealloc;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)window:(id)arg0 activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg1 willAnimateWithDuration:(CGFloat)arg2 fromOrientation:(NSInteger)arg3 ;
-(void)window:(id)arg0 activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg1 ;


@end


#endif