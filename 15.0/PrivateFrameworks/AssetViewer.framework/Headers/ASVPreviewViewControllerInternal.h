// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVPREVIEWVIEWCONTROLLERINTERNAL_H
#define ASVPREVIEWVIEWCONTROLLERINTERNAL_H

@class QLCustomItemViewController;
@protocol ARQLInlineService, ARQLInlineService2, ARSessionDelegate, ARCoachingOverlayViewDelegate;


#import "_TtC11AssetViewer28ARQuickLookOverlayController.h"

@interface ASVPreviewViewControllerInternal : QLCustomItemViewController <ARQLInlineService, ARQLInlineService2, ARSessionDelegate, ARCoachingOverlayViewDelegate>

 {
    ? uuid;
    ? configuration;
    ? videoWriter;
    ? videoInput;
    ? animationState;
    ? playbackViewController;
    ? animationComponents;
    ? previewType;
    ? allowsARMode;
    ? didReceiveFirstARFrame;
    ? modelController;
    ? interfaceState;
    ? $__lazy_storage_$_overlayController;
    ? coachingOverlayViewDidDeactivateCompletionBlock;
    ? $__lazy_storage_$_coachingOverlayView;
    ? onStartInteractionTriggered;
    ? entityToInteractionsMapping;
    ? interactionsShownState;
    ? $__lazy_storage_$_viewportScanner;
    ? allowShowTriggerAffordanceTime;
    ? delayBeforeShowingTriggerAffordance;
    ? lastTriggerAffordanceUpdateTime;
    ? lozengeLabel;
    ? lastScaledEntityController;
    ? lozengeSafezone;
    ? touchToEntityControllerMapping;
    ? entityControllerToTouchesMapping;
    ? worldRaycastStrategy;
    ? fallbackTapGestureEntityController;
    ? viewportDebugView;
    ? backlightController;
    ? defaultARConfiguration;
    ? faceTrackingConfiguration;
    ? isAutoFocusEnabled;
    ? singleTapScreenPoint;
    ? hasPlacedModelInWorldAlready;
    ? placeModelTimer;
    ? previewCompletionHandler;
    ? audioPlaybackStates;
    ? analyticsViewDidAppearDate;
    ? analyticsLastDisplayModeToggledDate;
    ? analyticsObjectModeDuration;
    ? analyticsARModeDuration;
    ? analyticsTimeInObjectModeBeforeFirstTapARMode;
    ? analyticsTimesWentIntoObjectMode;
    ? analyticsTimesWentIntoARMode;
    ? analyticsARObjectWasLevitated;
    ? analyticsTimesPlayPauseButtonPressed;
    ? analyticsTimesAnimationScrubbed;
    ? analyticsTimesAnchoredToImage;
    ? analyticsTimesAnchoredToObject;
    ? analyticsLongestDuration;
    ? analyticsLastDimensionsString;
    ? analyticsDidCloseByTappingOnCheckout;
    ? analyticsFileWantsRealWorldPhysics;
    ? $__lazy_storage_$_arAnchorTrackedStateUpdater;
    ? didPlaceFirstEntityInARWorld;
    ? lastPlacedAnchoringComponentTarget;
    ? currentDetectionImages;
    ? currentDetectionObjects;
    ? defaultGravity;
    ? gravity;
    ? customizationOptions;
    ? debugActionsState;
    ? isDismissing;
    ? previewDidAppearCalled;
    ? isWindowFullscreen;
    ? isWindowFullscreenCancellable;
    ? $__lazy_storage_$_replayObserver;
    ? hideLozengeTimer;
}


@property (nonatomic, retain) _TtC11AssetViewer28ARQuickLookOverlayController *overlayController;
@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)activateCoachingView;
-(void)activateCoachingViewWithDelay;
-(void)coachingOverlayViewDidDeactivate:(id)arg0 ;
-(void)createInlinePreviewWithUUID:(id)arg0 initialBounds:(struct CGRect )arg1 contextIdReply:(id)arg2 ;
-(void)dealloc;
-(void)didBecomeActive;
-(void)didDismissActivityViewController;
-(void)dismissPreviewController;
-(void)hideLozengeAnimated;
-(void)observeReturnedToInlineForUUID:(id)arg0 completion:(id)arg1 ;
-(void)observeReturnedToInlineForUUID:(id)arg0 fenceHandleCompletion:(id)arg1 ;
-(void)prepareFullscreenPreview:(id)arg0 initialFrame:(struct CGRect )arg1 previewOptions:(id)arg2 fenceHandleCompletion:(id)arg3 ;
-(void)prepareFullscreenPreview:(id)arg0 initialFrame:(struct CGRect )arg1 previewOptions:(id)arg2 fullscreenTransitionCompletion:(id)arg3 ;
-(void)prepareInlinePreviewWithData:(id)arg0 forUUID:(id)arg1 loadingCompletedReply:(id)arg2 ;
-(void)prepareInlinePreviewWithScopedURLWrapper:(id)arg0 forUUID:(id)arg1 completion:(id)arg2 ;
-(void)prepareInlinePreviewWithURL:(id)arg0 forUUID:(id)arg1 loadingCompletedReply:(id)arg2 ;
-(void)presentationModeDidChange:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)sendARQLEvent:(id)arg0 forUUID:(id)arg1 completion:(id)arg2 ;
-(void)session:(id)arg0 cameraDidChangeTrackingState:(id)arg1 ;
-(void)session:(id)arg0 didAddAnchors:(id)arg1 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didRemoveAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionWasInterrupted:(id)arg0 ;
-(void)teardownInlinePreviewWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)touchesBegan:(id)arg0 forUUID:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 forUUID:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 forUUID:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 forUUID:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)triggerTapToRadar;
-(void)tryPlaceModelOrRescheduleTimer;
-(void)updateBounds:(struct CGRect )arg0 forUUID:(id)arg1 completion:(id)arg2 ;
-(void)updateBounds:(struct CGRect )arg0 forUUID:(id)arg1 fenceHandleCompletion:(id)arg2 ;
-(void)updateInterfaceState;
-(void)updateIsWindowFullscreenWithFuncString:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif