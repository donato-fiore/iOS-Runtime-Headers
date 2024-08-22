// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMIMAGEPICKERCAMERAVIEWCONTROLLER_H
#define CAMIMAGEPICKERCAMERAVIEWCONTROLLER_H

@class PLCropOverlay, PLPhotoTileViewController, PLVideoView, UIView, NSString, NSDictionary;
@protocol CAMCameraConfigurationDelegate, CAMCameraCaptureDelegate, PLVideoViewDelegate, PLCropOverlayDelegate, UIImagePickerCameraViewController;


#import "CAMCameraViewController.h"

@interface CAMImagePickerCameraViewController : CAMCameraViewController <CAMCameraConfigurationDelegate, CAMCameraCaptureDelegate, PLVideoViewDelegate, PLCropOverlayDelegate, UIImagePickerCameraViewController>



@property (readonly, nonatomic) PLCropOverlay *_cropOverlay; // ivar: __cropOverlay
@property (readonly, nonatomic) PLPhotoTileViewController *_photoTileViewController; // ivar: __photoTileViewController
@property (readonly, nonatomic) PLVideoView *_videoView; // ivar: __videoView
@property (nonatomic, getter=_isCurrentlyReviewing, setter=_setCurrentlyReviewing:) BOOL currentlyReviewing; // ivar: _currentlyReviewing
@property (retain, nonatomic) UIView *customOverlayView; // ivar: _customOverlayView
@property (nonatomic) CGAffineTransform customPreviewViewTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_isEditingAllowed, setter=_setEditingAllowed:) BOOL editingAllowed; // ivar: _editingAllowed
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger imagePickerVideoQuality;
@property (nonatomic) CGFloat maximumVideoRecordingDuration;
@property (copy, nonatomic, getter=_mostRecentPhotoProperties, setter=_setMostRecentPhotoProperties:) NSDictionary *mostRecentPhotoProperties; // ivar: _mostRecentPhotoProperties
@property (copy, nonatomic, getter=_mostRecentVideoProperties, setter=_setMostRecentVideoProperties:) NSDictionary *mostRecentVideoProperties; // ivar: _mostRecentVideoProperties
@property (nonatomic, getter=_photoSavingOptions, setter=_setPhotoSavingOptions:) int photoSavingOptions; // ivar: _photoSavingOptions
@property (nonatomic, getter=isShowingStandardControls) BOOL showingStandardControls;
@property (nonatomic, getter=_statusBarWasHidden, setter=_setStatusBarWasHidden:) BOOL statusBarWasHidden; // ivar: _statusBarWasHidden
@property (readonly) Class superclass;
@property (nonatomic, getter=_isUsingTelephonyUI, setter=_setUsingTelephonyUI:) BOOL usingTelephonyUI; // ivar: _usingTelephonyUI
@property (nonatomic, getter=_isVideoEditingAllowed, setter=_setVideoEditingAllowed:) BOOL videoEditingAllowed; // ivar: _videoEditingAllowed


+(BOOL)isEmulatingImagePicker;
-(BOOL)_canShowWhileLocked;
-(BOOL)_showsCameraControls;
-(BOOL)_startVideoCapture;
-(BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg0 ;
-(BOOL)videoViewCanBeginPlayback:(id)arg0 ;
-(CGFloat)videoViewScrubberYOrigin:(id)arg0 forOrientation:(NSInteger)arg1 ;
-(NSInteger)_cameraCaptureMode;
-(NSInteger)_cameraDevice;
-(NSInteger)_cameraFlashMode;
-(NSInteger)_captureDeviceForImagePickerCameraDevice:(NSInteger)arg0 ;
-(NSInteger)_captureModeForImagePickerCameraCaptureMode:(NSInteger)arg0 ;
-(NSInteger)_flashModeForImagePickerCameraFlashMode:(NSInteger)arg0 ;
-(NSInteger)_imagePickerCameraCaptureModeForCaptureMode:(NSInteger)arg0 ;
-(NSInteger)_imagePickerCameraDeviceForCaptureDevice:(NSInteger)arg0 ;
-(NSInteger)_imagePickerCameraFlashModeForFlashMode:(NSInteger)arg0 ;
-(NSInteger)_imagePickerQualityTypeForVideoConfiguration:(NSInteger)arg0 ;
-(NSInteger)_videoConfigurationForImagePickerQualityType:(NSInteger)arg0 ;
-(id)_cameraOverlayView;
-(id)_containingImagePickerController;
-(id)_currentCancelButtonTitle;
-(id)initWithInitialImagePickerProperties:(id)arg0 ;
-(struct CGAffineTransform )_cameraViewTransform;
-(void)_applyPropertiesFromImagePicker:(id)arg0 ;
-(void)_createCropOverlayIfNecessary;
-(void)_handleCapturedImagePickerPhotoWithCropOverlayOutput:(id)arg0 ;
-(void)_handleCapturedImagePickerVideoAtPath:(id)arg0 withEditingMetadata:(id)arg1 ;
-(void)_handleEditabilityChanged:(id)arg0 ;
-(void)_removeFileAtPath:(id)arg0 ;
-(void)_resetTileViewControllerAndVideoView;
-(void)_setCameraCaptureMode:(NSInteger)arg0 ;
-(void)_setCameraDevice:(NSInteger)arg0 ;
-(void)_setCameraFlashMode:(NSInteger)arg0 ;
-(void)_setCameraOverlayView:(id)arg0 ;
-(void)_setCameraViewTransform:(struct CGAffineTransform )arg0 ;
-(void)_setImagePickerMediaTypes:(id)arg0 ;
-(void)_setShowsCameraControls:(BOOL)arg0 ;
-(void)_setStatusBarHidden:(BOOL)arg0 ;
-(void)_stopVideoCapture;
-(void)_takePicture;
-(void)_updateFromEditabilityChange;
-(void)cameraViewController:(id)arg0 didCaptureAVAsset:(id)arg1 andAudioMix:(id)arg2 withProperties:(id)arg3 error:(id)arg4 ;
-(void)cameraViewController:(id)arg0 didCapturePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(void)cropOverlay:(id)arg0 didFinishSaving:(id)arg1 ;
-(void)cropOverlayPause:(id)arg0 ;
-(void)cropOverlayPlay:(id)arg0 ;
-(void)cropOverlayWasCancelled:(id)arg0 ;
-(void)cropOverlayWasOKed:(id)arg0 ;
-(void)cropOverlayWasToggled:(id)arg0 ;
-(void)handleReviewButtonReleased:(id)arg0 ;
-(void)loadView;
-(void)videoViewDidBeginPlayback:(id)arg0 ;
-(void)videoViewDidEndPlayback:(id)arg0 didFinish:(BOOL)arg1 ;
-(void)videoViewDidPausePlayback:(id)arg0 ;
-(void)videoViewIsReadyToBeginPlayback:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif