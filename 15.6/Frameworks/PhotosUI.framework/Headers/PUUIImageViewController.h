// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUUIIMAGEVIEWCONTROLLER_H
#define PUUIIMAGEVIEWCONTROLLER_H

@class PLUIImageViewController, PHAsset, ISAnimatedImageView, NSURL, NSString;
@protocol UIGestureRecognizerDelegate, PUVideoPlayerViewDelegate, PXChangeObserver, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler, PUUIImageViewControllerFileResizingDelegate, PUPhotoPicker;


#import "PUVideoPlayerView.h"
#import "PUBrowsingIrisPlayer.h"
#import "PHLivePhotoView.h"
#import "PUPhotoPickerResizeTaskDescriptorViewModel.h"

@interface PUUIImageViewController : PLUIImageViewController <UIGestureRecognizerDelegate, PUVideoPlayerViewDelegate, PXChangeObserver, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler>

 {
    BOOL _isIris;
    BOOL _isAutoloop;
    BOOL _isAnimatedImage;
    BOOL _wantsLivePhotoResult;
    BOOL _wantsVideoURLResult;
    BOOL _showFileResizingOption;
    PHAsset *_asset;
}


@property (setter=_setAnimatedImageRequestID:) int _animatedImageRequestID; // ivar: __animatedImageRequestID
@property (retain, nonatomic, setter=_setAnimatedImageView:) ISAnimatedImageView *_animatedImageView; // ivar: __animatedImageView
@property (retain, nonatomic, setter=_setAssetURL:) NSURL *_assetURL; // ivar: __assetURL
@property (retain, nonatomic, setter=_setAutoloopView:) PUVideoPlayerView *_autoloopView; // ivar: __autoloopView
@property (setter=_setImageManagerVideoRequestID:) int _imageManagerVideoRequestID; // ivar: __imageManagerVideoRequestID
@property (retain, nonatomic) PUBrowsingIrisPlayer *_irisPlayer; // ivar: __irisPlayer
@property (retain, nonatomic, setter=_setLivePhotoView:) PHLivePhotoView *_livePhotoView; // ivar: __livePhotoView
@property (retain, nonatomic, setter=_setVideoAssetURL:) NSURL *_videoAssetURL; // ivar: __videoAssetURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PUUIImageViewControllerFileResizingDelegate> *fileResizingDelegate; // ivar: _fileResizingDelegate
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PUPhotoPicker> *photoPicker; // ivar: _photoPicker
@property (weak, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // ivar: _resizeTaskDescriptorViewModel
@property (readonly) Class superclass;


-(BOOL)_isPhotosPickerExtensionAvailable;
-(BOOL)disableVideoTrimMessage;
-(BOOL)doNotTranscode;
-(BOOL)force1XCroppedImage;
-(BOOL)forceNativeScreenScale;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)imagePickerAllowsEditing;
-(BOOL)isDisplayedInPhotoPicker;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)uiipc_useTelephonyUI;
-(BOOL)viewImageBeforeSelecting;
-(BOOL)wantsAutoloopUI;
-(BOOL)wantsLegacyImageUI;
-(NSUInteger)imagePickerSavingOptions;
-(id)cancelButtonTitle;
-(id)chooseButtonTitle;
-(id)cropOverlayFileSizeMenuActions:(id)arg0 ;
-(id)customBackgroundColor;
-(id)exportPreset;
-(id)initWithPhoto:(id)arg0 imagePickerProperties:(id)arg1 expectsLivePhoto:(BOOL)arg2 ;
-(id)irisPlayerView:(id)arg0 delegateForGestureRecognizer:(id)arg1 ;
-(id)irisPlayerViewViewHostingGestureRecognizers:(id)arg0 ;
-(id)maxZoomScaleOverride;
-(id)videoMaximumDuration;
-(id)videoQuality;
-(int)cropOverlayMode;
-(void)_fetchAnimatedImageWithCompletion:(id)arg0 ;
-(void)_fetchLivePhotoWithCompletion:(id)arg0 ;
-(void)_fetchPreviewImageWithCompletion:(id)arg0 ;
-(void)_fetchVideoWithCompletion:(id)arg0 ;
-(void)_finishAutoloopDeliveryWithVideoURL:(id)arg0 gifURL:(id)arg1 ;
// -(void)_generateGIFFromVideoURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)_handleAnimatedImagePreviewResult:(id)arg0 ;
-(void)_handleAnimatedImageResult:(id)arg0 ;
-(void)_handleAutoloopPreviewImageResult:(id)arg0 ;
-(void)_handleAutoloopVideoResult:(id)arg0 ;
-(void)_handleLivePhotoRequestResult:(id)arg0 info:(id)arg1 ;
-(void)_loadAnimatedImage;
-(void)_loadAutoloopVideo;
-(void)_loadLivePhoto;
-(void)cropOverlayWasOKed:(id)arg0 ;
-(void)dealloc;
-(void)handleAutoloopSelected;
-(void)handleMediaSelectionUsingTile:(id)arg0 managedAsset:(id)arg1 args:(id)arg2 includeEditing:(BOOL)arg3 ;
-(void)handleVideoSelectionWithURL:(id)arg0 args:(id)arg1 ;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performPhotoPickerSelection;
-(void)setIrisPlayer:(id)arg0 ;
-(void)videoPlayerView:(id)arg0 isReadyForDisplayDidChange:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif