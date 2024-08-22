// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMVIEWFINDERVIEW_H
#define CAMVIEWFINDERVIEW_H

@class UIView, NSMutableDictionary, NSString, CEKLightingControl, CEKLightingNameBadge, VKTextLiftingView, NSArray;
@protocol CEKBadgeViewDelegate, CAMInstructionLabelDelegate, CAMControlStatusIndicatorDelegate, CAMViewfinderTransitionable, CAMControlVisibilityDelegate;


#import "CAMHDRBadge.h"
#import "CAMViewfinderFlipTransition.h"
#import "CAMFullscreenViewfinderLayout.h"
#import "CAMViewfinderOpenAndCloseTransition.h"
#import "CAMPreviewContainerMaskingView.h"
#import "CAMBottomBar.h"
#import "CAMBurstIndicatorView.h"
#import "CAMDisabledModeOverlayView.h"
#import "CAMElapsedTimeView.h"
#import "CAMFilterNameBadge.h"
#import "CAMFlashBadge.h"
#import "CAMFlipButton.h"
#import "CAMFocusLockBadge.h"
#import "CAMImageAnalysisInstructionLabel.h"
#import "CAMLivePhotoBadge.h"
#import "CAMPanoramaView.h"
#import "CAMPortraitModeInstructionLabel.h"
#import "CAMPreviewView.h"
#import "CAMQRCodeInstructionLabel.h"
#import "CAMShallowDepthOfFieldBadge.h"
#import "CAMSharedLibraryBadge.h"
#import "CUShutterButton.h"
#import "CAMShutterIndicatorView.h"
#import "CAMTimerIndicatorView.h"
#import "CAMTopBar.h"
#import "CAMVideoConfigurationStatusIndicator.h"
#import "CAMZoomControl.h"
#import "CAMZoomSlider.h"

@interface CAMViewfinderView : UIView <CEKBadgeViewDelegate, CAMInstructionLabelDelegate, CAMControlStatusIndicatorDelegate, CAMViewfinderTransitionable>



@property (retain, nonatomic) CAMHDRBadge *HDRBadge; // ivar: _HDRBadge
@property (retain, nonatomic, setter=_setBottomBarExtensionView:) UIView *_bottomBarExtensionView; // ivar: __bottomBarExtensionView
@property (readonly, nonatomic) NSMutableDictionary *_descriptionOverlayViewByKey; // ivar: __descriptionOverlayViewByKey
@property (retain, nonatomic, setter=_setFlipTransition:) CAMViewfinderFlipTransition *_flipTransition; // ivar: __flipTransition
@property (retain, nonatomic, setter=_setModernLayout:) CAMFullscreenViewfinderLayout *_modernLayout; // ivar: __modernLayout
@property (retain, nonatomic, setter=_setOpenAndCloseTransition:) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition; // ivar: __openAndCloseTransition
@property (readonly, nonatomic) CAMPreviewContainerMaskingView *_previewContainerMaskingView; // ivar: __previewContainerMaskingView
@property (readonly, nonatomic) UIView *_previewContainerView; // ivar: __previewContainerView
@property (retain, nonatomic, setter=_setTopBarExtensionView:) UIView *_topBarExtensionView; // ivar: __topBarExtensionView
@property (nonatomic) BOOL automaticallyAdjustsTopBarOrientation; // ivar: _automaticallyAdjustsTopBarOrientation
@property (retain, nonatomic) CAMBottomBar *bottomBar; // ivar: _bottomBar
@property (retain, nonatomic) CAMBurstIndicatorView *burstIndicatorView; // ivar: _burstIndicatorView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger desiredAspectRatio; // ivar: _desiredAspectRatio
@property (retain, nonatomic) CAMDisabledModeOverlayView *disabledModeOverlayView; // ivar: _disabledModeOverlayView
@property (retain, nonatomic) CAMElapsedTimeView *elapsedTimeView; // ivar: _elapsedTimeView
@property (nonatomic) NSInteger externalDisplayPreviewOrientation; // ivar: _externalDisplayPreviewOrientation
@property (retain, nonatomic) CAMFilterNameBadge *filterNameBadge; // ivar: _filterNameBadge
@property (retain, nonatomic) CAMFlashBadge *flashBadge; // ivar: _flashBadge
@property (retain, nonatomic) CAMFlipButton *flipButton; // ivar: _flipButton
@property (retain, nonatomic) CAMFocusLockBadge *focusAndExposureLockBadge; // ivar: _focusAndExposureLockBadge
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAMImageAnalysisInstructionLabel *imageAnalysisInstructionLabel; // ivar: _imageAnalysisInstructionLabel
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (retain, nonatomic) CEKLightingControl *lightingControl; // ivar: _lightingControl
@property (retain, nonatomic) CEKLightingNameBadge *lightingNameBadge; // ivar: _lightingNameBadge
@property (retain, nonatomic) CAMLivePhotoBadge *livePhotoBadge; // ivar: _livePhotoBadge
@property (nonatomic) NSInteger maskingAspectRatio; // ivar: _maskingAspectRatio
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) CAMPanoramaView *panoramaView; // ivar: _panoramaView
@property (retain, nonatomic) CAMPortraitModeInstructionLabel *portraitModeInstructionLabel; // ivar: _portraitModeInstructionLabel
@property (retain, nonatomic) CAMPreviewView *previewView; // ivar: _previewView
@property (nonatomic) NSInteger previewViewOrientation; // ivar: _previewViewOrientation
@property (retain, nonatomic) CAMQRCodeInstructionLabel *qrCodeInstructionLabel; // ivar: _qrCodeInstructionLabel
@property (retain, nonatomic) CAMShallowDepthOfFieldBadge *shallowDepthOfFieldBadge; // ivar: _shallowDepthOfFieldBadge
@property (retain, nonatomic) CAMSharedLibraryBadge *sharedLibraryBadge; // ivar: _sharedLibraryBadge
@property (retain, nonatomic) CUShutterButton *shutterButton; // ivar: _shutterButton
@property (retain, nonatomic) CAMShutterIndicatorView *shutterIndicatorView; // ivar: _shutterIndicatorView
@property (readonly) Class superclass;
@property (nonatomic) VKTextLiftingView *textInteractionInsert; // ivar: _textInteractionInsert
@property (retain, nonatomic) CAMTimerIndicatorView *timerIndicatorView; // ivar: _timerIndicatorView
@property (retain, nonatomic) CAMTopBar *topBar; // ivar: _topBar
@property (nonatomic) BOOL useCreativeControls; // ivar: _useCreativeControls
@property (retain, nonatomic) CAMVideoConfigurationStatusIndicator *videoConfigurationStatusIndicator; // ivar: _videoConfigurationStatusIndicator
@property (weak, nonatomic) NSObject<CAMControlVisibilityDelegate> *visibilityDelegate; // ivar: _visibilityDelegate
@property (retain, nonatomic) NSArray *visibleTopBadges; // ivar: _visibleTopBadges
@property (retain, nonatomic) CAMZoomControl *zoomControl; // ivar: _zoomControl
@property (retain, nonatomic) CAMZoomSlider *zoomSlider; // ivar: _zoomSlider


+(Class)layerClass;
-(BOOL)_isAdjustingTopBarOrientationForLayoutStyle:(NSInteger)arg0 ;
-(BOOL)_shouldLayoutPortraitInstructionsAtTop;
-(BOOL)_wantsFullScreenPreviewRegardlessOfLayoutForLayoutStyle:(NSInteger)arg0 ;
-(BOOL)_wantsInterfaceOrientedPreviewForLayoutStyle:(NSInteger)arg0 ;
-(BOOL)_wantsPreviewOnlyLayoutForTopBarFrame:(struct CGRect )arg0 bottomBarFrame:(struct CGRect )arg1 ;
-(CGFloat)_badgeTrayHeightForLayoutStyle:(NSInteger)arg0 ;
-(CGFloat)_interpolatedBottomBarHeightWithProposedHeight:(CGFloat)arg0 ;
-(CGFloat)_interpolatedBottomBarWidthWithProposedWidth:(CGFloat)arg0 ;
-(CGFloat)_interpolatedTopBarHeight;
-(CGFloat)_interpolatedVerticalOffsetForShutterIndicator;
-(CGFloat)_multiplierForAspectRatio:(NSInteger)arg0 ;
-(CGFloat)_utilityBarExtensionDistanceForLayoutStyle:(NSInteger)arg0 ;
-(id)_viewToLayoutBadgesBelowForLayoutStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
-(id)descriptionOverlayViewForKey:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGRect )_cameraPreviewFrameForAspectRatio:(NSInteger)arg0 topBarFrame:(struct CGRect )arg1 bottomBarFrame:(struct CGRect )arg2 shouldShiftPreviewForUtilityBar:(BOOL)arg3 ;
-(struct CGRect )_frameForBadgeTrayForLayoutStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
-(struct CGRect )_previewFrameForAspectRatio:(NSInteger)arg0 topBarFrame:(struct CGRect )arg1 bottomBarFrame:(struct CGRect )arg2 shouldShiftPreviewForUtilityBar:(BOOL)arg3 ;
-(struct CGSize )_bottomBarSizeForLayoutStyle:(NSInteger)arg0 withProposedSize:(struct CGSize )arg1 ;
-(struct CGSize )_previewSizeForAspectRatio:(NSInteger)arg0 ;
-(struct CGSize )_topBarSizeForLayoutStyle:(NSInteger)arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 forAspectRatio:(NSInteger)arg1 ;
-(struct UIEdgeInsets )_layoutMarginInsetsForLayoutStyle:(NSInteger)arg0 ;
-(struct UIOffset )_previewOffset;
-(void)_cameraAppPreviewLayoutForAspectRatio:(NSInteger)arg0 shouldShiftPreviewForUtilityBar:(BOOL)arg1 outPreviewBounds:(struct CGRect *)arg2 outPreviewCenter:(struct CGPoint *)arg3 outFourThreeTopBarFrame:(struct CGRect *)arg4 outBottomBarFrame:(struct CGRect *)arg5 ;
-(void)_cameraTopBarForLayoutForLayoutStyle:(NSInteger)arg0 shouldAdjustTopBarOrientation:(BOOL)arg1 bounds:(struct CGRect *)arg2 center:(struct CGPoint *)arg3 transform:(struct CGAffineTransform *)arg4 ;
-(void)_commonCAMViewfinderViewInitializationWithLayoutStyle:(NSInteger)arg0 ;
-(void)_createPlaceholderSnapshotAndPerformDoubleSidedFadeForView:(id)arg0 fadeOutDuration:(CGFloat)arg1 fadeOutDelay:(CGFloat)arg2 fadeInDuration:(CGFloat)arg3 fadeInDelay:(CGFloat)arg4 ;
-(void)_createPlaceholderSnapshotAndPerformSingleSidedFadeForView:(id)arg0 fadeOutDuration:(CGFloat)arg1 fadeOutDelay:(CGFloat)arg2 ;
-(void)_enforceBadgeSubviewOrderingWithAppearingBadges:(id)arg0 ;
-(void)_layoutBadgeForTinyLayoutStyle:(id)arg0 animated:(BOOL)arg1 ;
-(void)_layoutBadgeTrayForLayoutStyle:(NSInteger)arg0 appearingBadges:(id)arg1 disappearingBadges:(id)arg2 animated:(BOOL)arg3 ;
-(void)_layoutBadgeTrayWithBadges:(id)arg0 layoutStyle:(NSInteger)arg1 ;
-(void)_layoutBarExtensionViews;
-(void)_layoutBottomBadgesForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutBottomCenteredView:(id)arg0 aboveView:(id)arg1 aboveViewSpacing:(CGFloat)arg2 forLayoutStyle:(NSInteger)arg3 ;
-(void)_layoutBurstIndicatorForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutDescriptionOverlayView:(id)arg0 ;
-(void)_layoutElapsedTimeViewForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutFlipButtonForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutImageAnalysisInstructionLabelForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutInstructionLabelOnTop:(id)arg0 forLayoutStyle:(NSInteger)arg1 ;
-(void)_layoutLightingControlForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutPanoramaViewForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutPortraitModeInstructionLabelForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutQRCodeInstructionLabelForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutShutterButtonForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutShutterIndicatorForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutSnapshotsOfPreviewView;
-(void)_layoutTextInteractionInsertAndActionInfoView;
-(void)_layoutTimerIndicatorViewForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutTopBadgesForLayoutStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_layoutTopBadgesForLayoutStyle:(NSInteger)arg0 appearingBadges:(id)arg1 disappearingBadges:(id)arg2 animated:(BOOL)arg3 ;
-(void)_layoutTopBarForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutVideoConfigurationStatusIndicatorForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutZoomControlForLayoutStyle:(NSInteger)arg0 ;
-(void)_layoutZoomSliderForLayoutStyle:(NSInteger)arg0 ;
-(void)_previewLayoutForAspectRatio:(NSInteger)arg0 shouldShiftPreviewForUtilityBar:(BOOL)arg1 outPreviewBounds:(struct CGRect *)arg2 outPreviewCenter:(struct CGPoint *)arg3 outFourThreeTopBarFrame:(struct CGRect *)arg4 outBottomBarFrame:(struct CGRect *)arg5 ;
-(void)_topBarForLayoutForLayoutStyle:(NSInteger)arg0 shouldAdjustTopBarOrientation:(BOOL)arg1 bounds:(struct CGRect *)arg2 center:(struct CGPoint *)arg3 transform:(struct CGAffineTransform *)arg4 ;
-(void)_updateBarExtensionViewsIfNecessary;
-(void)_updateModernLayout;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)controlStatusIndicatorDidChangeIntrinsicContentSize:(id)arg0 animated:(BOOL)arg1 ;
-(void)instructionLabelDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForAutorotation;
-(void)prepareForResumingUsingCrossfade;
-(void)removeInflightBlurAnimations;


@end


#endif