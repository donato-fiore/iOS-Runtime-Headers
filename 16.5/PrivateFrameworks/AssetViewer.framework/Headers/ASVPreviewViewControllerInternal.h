// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVPREVIEWVIEWCONTROLLERINTERNAL_H
#define ASVPREVIEWVIEWCONTROLLERINTERNAL_H

@class QLCustomItemViewController;
@protocol ARQLInlineService3, ARInternalSessionObserver, ARCoachingOverlayViewDelegate;


#import "_TtC11AssetViewer28ARQuickLookOverlayController.h"

@interface ASVPreviewViewControllerInternal : QLCustomItemViewController <ARQLInlineService3, ARInternalSessionObserver, ARCoachingOverlayViewDelegate>

 {
    ? uuid;
    ? configuration;
    ? videoWriter;
    ? videoInput;
    ? playbackViewController;
    ? animationComponents;
    ? previewType;
    ? allowsARMode;
    ? didReceiveFirstARFrame;
    ? modelController;
    ? interfaceState;
    ? $__lazy_storage_$_overlayController;
    ? shareSheetReplyBlock;
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
-(void)inlinePreview:(id)arg0 setCameraYaw:(float)arg1 pitch:(float)arg2 scale:(float)arg3 options:(id)arg4 ;
-(void)inlinePreview:(id)arg0 setCurrentTime:(CGFloat)arg1 ;
-(void)inlinePreview:(id)arg0 setEnableGradientBackground:(BOOL)arg1 ;
-(void)inlinePreview:(id)arg0 setEnableShadows:(BOOL)arg1 ;
-(void)inlinePreview:(id)arg0 setIsLooping:(BOOL)arg1 ;
-(void)inlinePreview:(id)arg0 setIsMuted:(BOOL)arg1 ;
-(void)inlinePreview:(id)arg0 setIsPlaying:(BOOL)arg1 ;
-(void)inlinePreview:(id)arg0 setRuntimeStateObserver:(id)arg1 ;
-(void)observeReturnedToInlineForUUID:(id)arg0 fenceHandleCompletion:(id)arg1 ;
-(void)prepareFullscreenPreview:(id)arg0 initialFrame:(struct CGRect )arg1 previewOptions:(id)arg2 fenceHandleCompletion:(id)arg3 ;
-(void)prepareInlinePreviewWithData:(id)arg0 forUUID:(id)arg1 completion:(id)arg2 ;
-(void)prepareInlinePreviewWithScopedURLWrapperAttributes:(id)arg0 forUUID:(id)arg1 completion:(id)arg2 ;
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
-(void)updateBounds:(struct CGRect )arg0 forUUID:(id)arg1 fenceHandleCompletion:(id)arg2 ;
-(void)updateInterfaceState;
-(void)updateIsWindowFullscreenWithFuncString:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif