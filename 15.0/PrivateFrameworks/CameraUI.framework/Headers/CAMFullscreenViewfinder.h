// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMFULLSCREENVIEWFINDER_H
#define CAMFULLSCREENVIEWFINDER_H

@class UIView, NSMutableDictionary, AVSpatialOverCaptureVideoPreviewLayer, NSMutableArray, NSString, CEKLightingControl, CEKLightingNameBadge, UILongPressGestureRecognizer, VKTextLiftingView;
@protocol CAMAdditiveAnimatorDelegate, CAMControlDrawerPresentationDelegate, CEKBadgeViewDelegate, CAMInstructionLabelDelegate, VKTextLiftingViewDelegate, CAMSemanticStylePickerDelegate, CAMViewfinderTransitionable, CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider, CAMFullscreenViewfinderDelegate;


#import "CAMInterfaceModulationView.h"
#import "CAMFullscreenViewfinderLayout.h"
#import "CAMLowLightInstructionLabel.h"
#import "CAMViewfinderReticleView.h"
#import "CAMAdditiveAnimator.h"
#import "CAMBadgeTray.h"
#import "CAMControlDrawer.h"
#import "CAMControlStatusBar.h"
#import "CAMCreativeCameraButton.h"
#import "CAMElapsedTimeView.h"
#import "CAMFilterNameBadge.h"
#import "CAMFlashCompromisedInstructionLabel.h"
#import "CAMFlipButton.h"
#import "CAMImageAnalysisButton.h"
#import "CAMImageAnalysisInstructionLabel.h"
#import "CAMImageWell.h"
#import "CAMModeDial.h"
#import "CAMModeIndicatorView.h"
#import "CAMFullscreenModeSelector.h"
#import "CAMPanoramaView.h"
#import "CAMPortraitModeInstructionLabel.h"
#import "CAMPreviewAlignmentGuide.h"
#import "CAMPreviewView.h"
#import "CAMQRCodeInstructionLabel.h"
#import "CAMSemanticStylePicker.h"
#import "CAMDynamicShutterControl.h"
#import "CAMTimerIndicatorView.h"
#import "CAMZoomControl.h"
#import "CAMZoomSlider.h"

@interface CAMFullscreenViewfinder : UIView <CAMAdditiveAnimatorDelegate, CAMControlDrawerPresentationDelegate, CEKBadgeViewDelegate, CAMInstructionLabelDelegate, VKTextLiftingViewDelegate, CAMSemanticStylePickerDelegate, CAMViewfinderTransitionable, CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider>



@property (retain, nonatomic, setter=_setBottomLegibilityBackground:) UIView *_bottomLegibilityBackground; // ivar: __bottomLegibilityBackground
@property (readonly, nonatomic) UIView *_contentClippingContainer; // ivar: __contentClippingContainer
@property (readonly, nonatomic) CAMInterfaceModulationView *_contentView; // ivar: __contentView
@property (nonatomic, getter=_isControlDrawerPresentedModally, setter=_setControlDrawerPresentedModally:) BOOL _controlDrawerPresentedModally; // ivar: __controlDrawerPresentedModally
@property (readonly, nonatomic) NSMutableDictionary *_descriptionOverlayViewByKey; // ivar: __descriptionOverlayViewByKey
@property (readonly, nonatomic) CAMFullscreenViewfinderLayout *_layout; // ivar: __layout
@property (retain, nonatomic, setter=_setLowLightInstructionLabel:) CAMLowLightInstructionLabel *_lowLightInstructionLabel; // ivar: __lowLightInstructionLabel
@property (readonly, nonatomic) UIView *_modeClippingView; // ivar: __modeClippingView
@property (retain, nonatomic, setter=_setOverCapturePreviewLayer:) AVSpatialOverCaptureVideoPreviewLayer *_overCapturePreviewLayer; // ivar: __overCapturePreviewLayer
@property (readonly, nonatomic) UIView *_previewContainerView; // ivar: __previewContainerView
@property (readonly, nonatomic) CAMViewfinderReticleView *_reticleView; // ivar: __reticleView
@property (readonly, nonatomic) NSMutableArray *_semanticStyleBadges; // ivar: __semanticStyleBadges
@property (retain, nonatomic, setter=_setTextInteractionBackground:) UIView *_textInteractionBackground; // ivar: __textInteractionBackground
@property (readonly, nonatomic, getter=_isUsingCreativeCameraControls) BOOL _usingCreativeCameraControls; // ivar: __usingCreativeCameraControls
@property (readonly, nonatomic) CAMAdditiveAnimator *_viewportAnimator; // ivar: __viewportAnimator
@property (readonly, nonatomic) CAMBadgeTray *badgeTray; // ivar: _badgeTray
@property (retain, nonatomic, setter=_setControlDrawer:) CAMControlDrawer *controlDrawer; // ivar: _controlDrawer
@property (readonly, nonatomic, getter=isControlDrawerAllowed) BOOL controlDrawerAllowed; // ivar: _controlDrawerAllowed
@property (nonatomic, getter=isControlDrawerExpanded) BOOL controlDrawerExpanded; // ivar: _controlDrawerExpanded
@property (readonly, nonatomic) CAMControlStatusBar *controlStatusBar; // ivar: _controlStatusBar
@property (readonly, nonatomic) CAMCreativeCameraButton *creativeCameraButton; // ivar: _creativeCameraButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMFullscreenViewfinderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger desiredAspectRatio;
@property (readonly, nonatomic) CAMElapsedTimeView *elapsedTimeView; // ivar: _elapsedTimeView
@property (nonatomic, getter=isElapsedTimeViewVisible) BOOL elapsedTimeViewVisible; // ivar: _elapsedTimeViewVisible
@property (readonly, nonatomic) CAMFilterNameBadge *filterNameBadge; // ivar: _filterNameBadge
@property (retain, nonatomic, setter=_setFlashCompromisedInstructionLabel:) CAMFlashCompromisedInstructionLabel *flashCompromisedInstructionLabel; // ivar: _flashCompromisedInstructionLabel
@property (readonly, nonatomic) CAMFlipButton *flipButton; // ivar: _flipButton
@property (nonatomic, getter=isFlipButtonVisible) BOOL flipButtonVisible; // ivar: _flipButtonVisible
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAMImageAnalysisButton *imageAnalysisButton; // ivar: _imageAnalysisButton
@property (nonatomic, getter=isImageAnalysisButtonVisible) BOOL imageAnalysisButtonVisible; // ivar: _imageAnalysisButtonVisible
@property (retain, nonatomic, setter=_setImageAnalysisInstructionLabel:) CAMImageAnalysisInstructionLabel *imageAnalysisInstructionLabel; // ivar: _imageAnalysisInstructionLabel
@property (readonly, nonatomic) CAMImageWell *imageWell; // ivar: _imageWell
@property (nonatomic) NSUInteger interfaceModulation;
@property (nonatomic, getter=isLegibilityBackgroundsVisible) BOOL legibilityBackgroundsVisible; // ivar: _legibilityBackgroundsVisible
@property (readonly, nonatomic) CEKLightingControl *lightingControl; // ivar: _lightingControl
@property (readonly, nonatomic) CEKLightingNameBadge *lightingNameBadge; // ivar: _lightingNameBadge
@property (nonatomic) NSInteger material; // ivar: _material
@property (readonly, nonatomic) CAMModeDial *modeDial; // ivar: _modeDial
@property (readonly, nonatomic) CAMModeIndicatorView *modeIndicator; // ivar: _modeIndicator
@property (readonly, nonatomic) CAMFullscreenModeSelector *modeSelector; // ivar: _modeSelector
@property (readonly, nonatomic) UILongPressGestureRecognizer *modeSelectorGestureRecognizer; // ivar: _modeSelectorGestureRecognizer
@property (readonly, nonatomic, getter=isModeUIAllowed) BOOL modeUIAllowed; // ivar: _modeUIAllowed
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGSize panoramaCaptureSize;
@property (retain, nonatomic) CAMPanoramaView *panoramaView; // ivar: _panoramaView
@property (nonatomic, getter=isPortraitControlsAllowed) BOOL portraitControlsAllowed; // ivar: _portraitControlsAllowed
@property (retain, nonatomic, setter=_setPortraitInstructionLabel:) CAMPortraitModeInstructionLabel *portraitInstructionLabel; // ivar: _portraitInstructionLabel
@property (retain, nonatomic, setter=_setPreviewAlignmentGuide:) CAMPreviewAlignmentGuide *previewAlignmentGuide; // ivar: _previewAlignmentGuide
@property (nonatomic, getter=isPreviewAlignmentGuideVisible) BOOL previewAlignmentGuideVisible; // ivar: _previewAlignmentGuideVisible
@property (retain, nonatomic) CAMPreviewView *previewView; // ivar: _previewView
@property (nonatomic) NSInteger previewViewOrientation; // ivar: _previewViewOrientation
@property (retain, nonatomic, setter=_setQRCodeInstructionLabel:) CAMQRCodeInstructionLabel *qrCodeInstructionLabel; // ivar: _qrCodeInstructionLabel
@property (readonly, nonatomic, getter=isReticleAnimating) BOOL reticleAnimating;
@property (readonly, nonatomic) CAMSemanticStylePicker *semanticStylePicker; // ivar: _semanticStylePicker
@property (nonatomic) NSInteger shallowDepthOfFieldStatus; // ivar: _shallowDepthOfFieldStatus
@property (readonly, nonatomic) CAMDynamicShutterControl *shutterControl; // ivar: _shutterControl
@property (readonly) Class superclass;
@property (nonatomic) VKTextLiftingView *textInteractionInsert; // ivar: _textInteractionInsert
@property (retain, nonatomic, setter=_setTimerIndicator:) CAMTimerIndicatorView *timerIndicator; // ivar: _timerIndicator
@property (nonatomic, getter=isTimerIndicatorVisible) BOOL timerIndicatorVisible; // ivar: _timerIndicatorVisible
@property (nonatomic) NSInteger viewportAspectRatio; // ivar: _viewportAspectRatio
@property (nonatomic) NSInteger visibleInstructionLabel; // ivar: _visibleInstructionLabel
@property (nonatomic) NSInteger visibleSecondaryInstructionLabel; // ivar: _visibleSecondaryInstructionLabel
@property (retain, nonatomic, setter=_setZoomControl:) CAMZoomControl *zoomControl; // ivar: _zoomControl
@property (nonatomic, getter=isZoomControlVisible) BOOL zoomControlVisible; // ivar: _zoomControlVisible
@property (retain, nonatomic, setter=_setZoomSlider:) CAMZoomSlider *zoomSlider; // ivar: _zoomSlider
@property (nonatomic) NSUInteger zoomStyle; // ivar: _zoomStyle


+(Class)layerClass;
+(id)darkControlBackgroundColor;
+(id)lightControlBackgroundColor;
-(BOOL)_canUpdatePreviewSemanticStyle;
-(BOOL)_showControlDrawer;
-(BOOL)_showFilterNameBadge;
-(BOOL)_showLandscapeLightingBadge;
-(BOOL)_showModeView;
-(BOOL)_showPortraitControls;
-(BOOL)_showSemanticStylePicker;
-(BOOL)isControlDrawerPresentedModallyWithControlType:(NSInteger)arg0 ;
-(BOOL)requestPreviewUpdateForSemanticStyleAnimated:(BOOL)arg0 ;
-(BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)arg0 ;
-(NSUInteger)_badgeFontStyle;
-(id)_createdInstructionLabels;
-(id)_createdSecondaryInstructionLabels;
-(id)_visibleInstructionLabelForInstructionLabelValue:(NSInteger)arg0 ;
-(id)descriptionOverlayViewForKey:(id)arg0 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)initWithMetalContext:(id)arg0 useCreativeCameraControls:(BOOL)arg1 ;
-(id)touchingRecognizersToCancel;
-(struct ? )_geometryForBadgeTray;
-(struct ? )_geometryForBottomCenteredView:(id)arg0 ;
-(struct ? )_geometryForBottomCenteredView:(id)arg0 margin:(CGFloat)arg1 ;
-(struct ? )_geometryForInstructionLabel:(id)arg0 belowInstructionLabelGeometry:(struct ? )arg1 elapsedTimeViewGeometry:(struct ? )arg2 ;
-(struct ? )_geometryForLandscapeLightingBadge;
-(struct ? )_geometryForTextInteractionInsertWithViewport:(struct CGRect )arg0 ;
-(struct CGRect )_currentFourThreeViewportFrame;
-(struct CGRect )_frameForBottomLegibilityBackground;
-(struct CGRect )_frameForContentClippingContainer;
-(struct CGRect )_frameForControlDrawer;
-(struct CGRect )_frameForFlipButton;
-(struct CGRect )_frameForImageWell;
-(struct CGRect )_frameForLightingControl;
-(struct CGRect )_frameForModeView;
-(struct CGRect )_frameForPreviewOverlaysInViewport:(struct CGRect )arg0 ;
-(struct CGRect )_frameForPreviewView;
-(struct CGRect )_frameForReticleViewport;
-(struct CGRect )_imageAnalysisButtonFrameForCenterY:(CGFloat)arg0 ;
-(struct CGRect )_imageAnalysisButtonFrameForZoomControl:(id)arg0 zoomSlider:(id)arg1 ;
-(void)_createViewIfNeededForInstructionLabel:(NSInteger)arg0 ;
-(void)_handleDirectionIndicatorTapped;
-(void)_handleDismissTextGestureRecognizer:(id)arg0 ;
-(void)_insertBackgroundSubview:(id)arg0 ;
-(void)_iterateViewsForHUDManager:(id)arg0 withItemFoundBlock:(id)arg1 ;
-(void)_loadFilterControlsIfNeeded;
-(void)_loadPortraitControlsIfNeeded;
-(void)_loadSemanticStyleControlsIfNeeded;
-(void)_setNeedsLayoutAnimated:(BOOL)arg0 ;
-(void)_setViewportAnimatorFrame:(struct CGRect )arg0 ;
-(void)_setViewportAnimatorFrame:(struct CGRect )arg0 withDuration:(CGFloat)arg1 timingCurve:(id)arg2 ;
-(void)_transitionView:(id)arg0 fromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2 ;
-(void)_updateGeometryForElapsedTimeAndInstructionLabels;
-(void)_updateModeDialClippingForViewportFrame:(struct CGRect )arg0 ;
-(void)_updatePortraitControlsHighlightAnimated:(BOOL)arg0 ;
-(void)_updatePreviewAlignmentGuideForViewportFrame:(struct CGRect )arg0 ;
-(void)_updatePreviewLayerForPreviewFrame:(struct CGRect )arg0 viewportFrame:(struct CGRect )arg1 ;
-(void)_updateReticleForViewportFrame:(struct CGRect )arg0 ;
-(void)_updateSemanticStylePickerForViewportFrame:(struct CGRect )arg0 ;
-(void)_updateSubviewsVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateSubviewsVisibilityAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateTintColors;
-(void)animateAlongsideFadeOutForTextLiftingView:(id)arg0 ;
-(void)animateAlongsideTextLiftingForView:(id)arg0 ;
-(void)animator:(id)arg0 didUpdateValuesForKeys:(id)arg1 ;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)controlDrawer:(id)arg0 didChangeExpanded:(BOOL)arg1 forControlType:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)dismissModalControlDrawerIfNeeded;
-(void)fadeOutAnimationDidEndForView:(id)arg0 ;
-(void)instructionLabelDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForResumingUsingCrossfade;
-(void)presentControlDrawerModally:(BOOL)arg0 withControlType:(NSInteger)arg1 ;
-(void)reloadSemanticStyleBadgesDelayIfNeeded:(BOOL)arg0 ;
-(void)removeInflightBlurAnimations;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;
-(void)semanticStylePickerDidChangeSelectedStyle:(id)arg0 ;
-(void)semanticStylePickerDidScroll:(id)arg0 ;
-(void)textLiftingAnimationDidEndForView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif