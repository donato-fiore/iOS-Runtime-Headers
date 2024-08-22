// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXPREVIEWVIEWCONTROLLER_H
#define CFXPREVIEWVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, UIButton, UISlider, NSLayoutConstraint;
@protocol CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate, JFXCompositionPlayerViewControllerDelegate, JFXExportDelegate, CFXPlayButtonViewDelegate, UIViewWindowListener, CFXPreviewViewControllerDelegate;


#import "CFXEffectBrowserContentPresenterViewController.h"
#import "CFXEffectEditorView.h"
#import "JFXCompositionExporter.h"
#import "CFXMediaItem.h"
#import "JFXOrientationMonitor.h"
#import "CFXPlayButtonView.h"
#import "CFXClip.h"
#import "CFXControlsViewController.h"
#import "CFXClipPlayerViewController.h"
#import "JFXEffectsPreviewGenerator.h"

@interface CFXPreviewViewController : UIViewController <CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate, JFXCompositionPlayerViewControllerDelegate, JFXExportDelegate, CFXPlayButtonViewDelegate, UIViewWindowListener>



@property (weak, nonatomic) UIView *appStripAndPreviewControlsContainer; // ivar: _appStripAndPreviewControlsContainer
@property (nonatomic) NSUInteger appliedDirectOverlayEditingGestures; // ivar: _appliedDirectOverlayEditingGestures
@property (retain, nonatomic) UIView *bottomControlsDrawer; // ivar: _bottomControlsDrawer
@property (nonatomic) BOOL capturedWithBackCamera; // ivar: _capturedWithBackCamera
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXPreviewViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dockIsMagnified; // ivar: _dockIsMagnified
@property (nonatomic) CGFloat dockMagnifiedHeightDelta; // ivar: _dockMagnifiedHeightDelta
@property (retain, nonatomic) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController; // ivar: _effectBrowserContentPresenterViewController
@property (retain, nonatomic) CFXEffectEditorView *effectEditor; // ivar: _effectEditor
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (weak, nonatomic) UIButton *exportButton; // ivar: _exportButton
@property (retain, nonatomic) JFXCompositionExporter *exporter; // ivar: _exporter
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CFXMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly, nonatomic) ? normalizedMinimumHitTestArea;
@property (retain, nonatomic) JFXOrientationMonitor *orientationMonitor; // ivar: _orientationMonitor
@property (weak, nonatomic) CFXPlayButtonView *playButton; // ivar: _playButton
@property (retain, nonatomic) UISlider *playbackSlider; // ivar: _playbackSlider
@property (weak, nonatomic) UIView *playerContainerView; // ivar: _playerContainerView
@property (nonatomic, getter=isPresentingFilterPicker) BOOL presentingFilterPicker; // ivar: _presentingFilterPicker
@property (readonly, nonatomic) CFXClip *previewClip;
@property (weak, nonatomic) CFXControlsViewController *previewControls; // ivar: _previewControls
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerHeightConstraint; // ivar: _previewControlsContainerHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerLeadingConstraint; // ivar: _previewControlsContainerLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerTopConstraint; // ivar: _previewControlsContainerTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerTrailingConstraint; // ivar: _previewControlsContainerTrailingConstraint
@property (weak, nonatomic) UIView *previewControlsContainerView; // ivar: _previewControlsContainerView
@property (retain, nonatomic) NSLayoutConstraint *previewControlsContainerWidthConstraint; // ivar: _previewControlsContainerWidthConstraint
@property (retain, nonatomic) CFXClipPlayerViewController *previewPlayer; // ivar: _previewPlayer
@property (nonatomic) BOOL saveMediaItemToFunCamPhotosAlbumUponExport; // ivar: _saveMediaItemToFunCamPhotosAlbumUponExport
@property (retain, nonatomic) JFXEffectsPreviewGenerator *stillImagePreviewGenerator; // ivar: _stillImagePreviewGenerator
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic, getter=userInterfaceIsHidden) BOOL userInterfaceHidden; // ivar: _userInterfaceHidden


+(id)liveCaptureSnapshotView;
+(void)setLiveCaptureSnapshotView:(id)arg0 ;
-(BOOL)CFX_canApplyFaceTracking;
-(BOOL)CFX_saveImageToURL:(id)arg0 image:(id)arg1 compressionQuality:(CGFloat)arg2 asHEIF:(BOOL)arg3 metadata:(struct CGImageMetadata *)arg4 ;
-(BOOL)effectEditorView:(id)arg0 isEffectAtPoint:(struct CGPoint )arg1 effect:(id)arg2 ;
-(BOOL)effectEditorView:(id)arg0 isFaceTrackingDataAvailableForEffect:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 isFaceTrackingEffect:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 presentCustomTextEditingUI:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 shouldEditTextForEffect:(id)arg1 ;
-(BOOL)effectEditorViewShouldShowFaceReticle:(id)arg0 ;
-(BOOL)isEditingEffect;
-(BOOL)presentFullScreenTextEditorForEffect:(id)arg0 insertingEffect:(BOOL)arg1 ;
-(BOOL)shouldExportOnly;
-(BOOL)shouldKeepPlayButtonHidden;
-(BOOL)shouldUseFaceTracking;
-(CGFloat)animationDurationForCompositionTransition:(id)arg0 shouldScale:(*BOOL)arg1 ;
-(NSInteger)faceTrackingInterfaceOrientationForfullScreenTextEditViewController:(id)arg0 ;
-(NSUInteger)effectEditorView:(id)arg0 maximumTextLengthForEffect:(id)arg1 ;
-(id)CFX_AVAssetExportPresetWithColorSpace:(id)arg0 ;
-(id)CFX_fetchAssetWithLocalIdentifier:(id)arg0 ;
-(id)bottomControlsSnapshot;
-(id)effectEditorView:(id)arg0 effectAtPoint:(struct CGPoint )arg1 ;
-(id)effectEditorView:(id)arg0 overlayEffectFrameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 textEditingPropertiesForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 textForEffect:(id)arg1 ;
-(struct CGPoint )bottomControlsCenter;
-(struct CGPoint )effectEditorView:(id)arg0 removeButtonPositionForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(struct CGPoint )effectEditorView:(id)arg0 spacingBetweenCenterPointOfEffect:(id)arg1 point:(struct CGPoint )arg2 relativeToBounds:(struct CGRect )arg3 ;
-(struct CGRect )bottomControlsBounds;
-(struct CGRect )effectEditorView:(id)arg0 frameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(struct CGRect )effectEditorView:(id)arg0 hitAreaBoundingFrameForEffect:(id)arg1 adjustForMinimumSize:(BOOL)arg2 relativeToBounds:(struct CGRect )arg3 ;
-(struct CGRect )playerContentFrame;
-(struct PVTransformAnimationInfo )scaleClip:(id)arg0 scale:(CGFloat)arg1 atNormalizedLocation:(struct CGPoint )arg2 ;
-(void)CFX_addAssetAtURL:(id)arg0 resourceType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)CFX_addAssetWithIdentifier:(id)arg0 intoAlbum:(id)arg1 completionHandler:(id)arg2 ;
-(void)CFX_addEffect:(id)arg0 ;
-(void)CFX_addURLToCameraRoll:(id)arg0 isStill:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)CFX_createAlbumWithCompletionHandler:(id)arg0 ;
-(void)CFX_exportPhotoWithEffects;
-(void)CFX_hidePreviewUI;
-(void)CFX_layoutPlayerContainerView;
-(void)CFX_notifyDelegateExportMediaItemFinishedWithError:(id)arg0 ;
-(void)CFX_prepareFaceTrackingDataForOverlayInsertionWithCompletion:(id)arg0 ;
-(void)CFX_setEffectAnimationsEnabledIfPossible:(BOOL)arg0 updatePlayer:(BOOL)arg1 ;
-(void)CFX_setFrameAndRenderSizes;
-(void)CFX_setIsExporting:(BOOL)arg0 ;
-(void)CFX_showPreviewUI;
-(void)CFX_togglePreviewUI;
-(void)JFX_orientationMonitorInterfaceOrientationNotification:(id)arg0 ;
-(void)addEffect:(id)arg0 completion:(id)arg1 ;
-(void)addOverlayEffect:(id)arg0 atScreenLocation:(struct CGPoint )arg1 atScreenSize:(struct CGSize )arg2 rotationAngle:(CGFloat)arg3 completion:(id)arg4 ;
-(void)configureBottomControlsForOrientation;
-(void)configureUIForOrientation;
-(void)didFinishExport:(NSInteger)arg0 ;
-(void)dispatchWhenPlayerReadyForDisplayEffectUpdate:(id)arg0 ;
-(void)displayEffectEditorForEffect:(id)arg0 forMode:(NSUInteger)arg1 ;
-(void)effectEditorView:(id)arg0 didBeginEditingTextForEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didEditTextForEffect:(id)arg1 newText:(id)arg2 ;
-(void)effectEditorView:(id)arg0 didEndEditingByTappingOutSideEffectAtScreenPoint:(struct CGPoint )arg1 ;
-(void)effectEditorView:(id)arg0 didEndEditingTextForEffect:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)effectEditorView:(id)arg0 didMoveEffect:(id)arg1 withTouchPoint:(struct CGPoint )arg2 ;
-(void)effectEditorView:(id)arg0 didRemoveEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didTransformEffect:(id)arg1 transform:(struct CGAffineTransform )arg2 relativeToBounds:(struct CGRect )arg3 ;
-(void)effectEditorViewDidBeginEditing:(id)arg0 ;
-(void)effectEditorViewDidEndEditing:(id)arg0 ;
-(void)exportButtonTapped:(id)arg0 ;
-(void)exportMediaItemToFileURL:(id)arg0 ;
-(void)exportProgressedTo:(float)arg0 ;
-(void)filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)fullScreenTextEditViewController:(id)arg0 didBeginAnimationBeforeEditingEffect:(id)arg1 completion:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg0 didBeginEditingEffect:(id)arg1 ;
-(void)fullScreenTextEditViewController:(id)arg0 didFinishAnimationAfterEditingEffect:(id)arg1 completion:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg0 didFinishEditingByRemovingEffect:(id)arg1 ;
-(void)fullScreenTextEditViewController:(id)arg0 didFinishEditingEffect:(id)arg1 withUpdatedText:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg0 willBeginAnimationAfterEditingEffect:(id)arg1 updatedText:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg0 willBeginAnimationBeforeEditingEffect:(id)arg1 ;
-(void)hideBottomControls;
-(void)playButtonViewDidTapPause:(id)arg0 ;
-(void)playButtonViewDidTapPlay:(id)arg0 ;
-(void)playbackAreaDoubleTapped:(id)arg0 ;
-(void)playbackAreaPanned:(id)arg0 gesture:(id)arg1 normalizedClipPoint:(struct CGPoint )arg2 normalizedMinimumSize:(struct ? )arg3 translationDelta:(struct CGPoint )arg4 atTime:(int)arg5 timeScale:(int)arg6 ;
-(void)playbackAreaPinched:(id)arg0 gesture:(id)arg1 normalizedClipPoints:(id)arg2 normalizedCenterPoint:(struct CGPoint )arg3 normalizedMinimumSize:(struct ? )arg4 scaleDelta:(CGFloat)arg5 atTime:(int)arg6 timeScale:(int)arg7 ;
-(void)playbackAreaRotated:(id)arg0 gesture:(id)arg1 normalizedClipPoints:(id)arg2 normalizedCenterPoint:(struct CGPoint )arg3 normalizedMinimumSize:(struct ? )arg4 rotateDelta:(CGFloat)arg5 atTime:(int)arg6 ;
-(void)playbackAreaTapped:(id)arg0 normalizedClipPoint:(struct CGPoint )arg1 normalizedMinimumSize:(struct ? )arg2 atTime:(int)arg3 ;
-(void)playbackDidStart:(id)arg0 ;
-(void)playbackDidStop:(id)arg0 currentTime:(int)arg1 ;
-(void)playbackSliderValueChanged:(id)arg0 ;
-(void)playbackTimeDidChange:(id)arg0 currentTime:(int)arg1 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)removeEffectEditor;
-(void)setEffectAnimationsEnabledIfPossible:(BOOL)arg0 ;
-(void)showBottomControls;
-(void)updateEffectEditorLayout;
-(void)updateFullScreenTextEditorLayout;
-(void)updateUIForDockMagnify:(BOOL)arg0 dockHeightDelta:(CGFloat)arg1 ;
-(void)view:(id)arg0 willMoveToWindow:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif