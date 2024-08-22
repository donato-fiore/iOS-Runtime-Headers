// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUIIMAGEVIEWCONTROLLER_H
#define PLUIIMAGEVIEWCONTROLLER_H

@class UIViewController, PLManagedAsset, UIImage, NSURL, NSString;
@protocol PLVideoViewDelegate, PLPhotoTileViewControllerDelegate, PLCropOverlayDelegate;


#import "PLCropOverlay.h"
#import "PLPhotoTileViewController.h"
#import "PLVideoView.h"
#import "PLVideoRemaker.h"
#import "PLProgressView.h"

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLPhotoTileViewControllerDelegate, PLCropOverlayDelegate>

 {
    PLManagedAsset *_photo;
    *CGImage _imageRef;
    UIImage *_image;
    CGRect _cropRect;
    PLCropOverlay *_cropOverlay;
    PLPhotoTileViewController *_imageTile;
    PLVideoView *_videoView;
    PLVideoRemaker *_remaker;
    PLProgressView *_progressView;
    NSURL *_videoURL;
    NSInteger _previousStatusBarStyle;
    NSInteger _newStatusBarStyle;
    BOOL _allowEditing;
    BOOL _statusBarWasHidden;
    BOOL _isVideo;
    BOOL _isDisappearing;
    BOOL _remaking;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedUseButtonTitle;
@property (readonly) Class superclass;


-(BOOL)_displaysFullScreen;
-(BOOL)clientIsWallpaper;
-(BOOL)disableVideoTrimMessage;
-(BOOL)doNotTranscode;
-(BOOL)force1XCroppedImage;
-(BOOL)forceNativeScreenScale;
-(BOOL)imagePickerAllowsEditing;
-(BOOL)isDisplayedInPhotoPicker;
-(BOOL)photoTileViewControllerAllowsEditing:(id)arg0 ;
-(BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)videoViewCanBeginPlayback:(id)arg0 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg0 ;
-(BOOL)viewImageBeforeSelecting;
-(BOOL)wantsAutoloopUI;
-(BOOL)wantsLegacyImageUI;
-(BOOL)wantsStatusBarVisible;
-(CGFloat)videoViewScrubberYOrigin:(id)arg0 forOrientation:(NSInteger)arg1 ;
-(Class)_viewClass;
-(NSInteger)_imagePickerStatusBarStyle;
-(NSInteger)_preferredWhitePointAdaptivityStyle;
-(NSInteger)desiredStatusBarAnimation;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSUInteger)_contentAutoresizingMask;
-(NSUInteger)_tileAutoresizingMask;
-(NSUInteger)imagePickerSavingOptions;
-(id)_trimMessage;
-(id)cancelButtonTitle;
-(id)chooseButtonTitle;
-(id)cropOverlay;
-(id)customBackgroundColor;
-(id)exportPreset;
-(id)initWithImage:(struct CGImage *)arg0 cropRect:(struct CGRect )arg1 ;
-(id)initWithImageData:(id)arg0 cropRect:(struct CGRect )arg1 ;
-(id)initWithPhoto:(id)arg0 ;
-(id)initWithUIImage:(id)arg0 cropRect:(struct CGRect )arg1 ;
-(id)initWithVideoURL:(id)arg0 ;
-(id)maxZoomScaleOverride;
-(id)videoMaximumDuration;
-(id)videoQuality;
-(int)cropOverlayMode;
-(struct CGRect )_viewFrame;
-(struct CGRect )previewFrame;
-(unsigned short)imageFormat;
-(void)_editabilityChanged:(id)arg0 ;
-(void)_enableCropOverlay;
-(void)_enableCropOverlayIfNecessary;
-(void)_handleVideoSelected;
-(void)_removedAsTopViewController;
-(void)_updateGestureSettings;
-(void)attachScrubberPalette;
-(void)beginDisplayingProgress;
-(void)cropOverlay:(id)arg0 didFinishSaving:(id)arg1 ;
-(void)cropOverlayPause:(id)arg0 ;
-(void)cropOverlayPlay:(id)arg0 ;
-(void)cropOverlayWasCancelled:(id)arg0 ;
-(void)cropOverlayWasOKed:(id)arg0 ;
-(void)dealloc;
-(void)didChooseVideoAtURL:(id)arg0 options:(id)arg1 ;
-(void)handleAutoloopSelected;
-(void)handleMediaSelectionUsingTile:(id)arg0 managedAsset:(id)arg1 args:(id)arg2 includeEditing:(BOOL)arg3 ;
-(void)handleVideoSelectionWithURL:(id)arg0 args:(id)arg1 ;
-(void)loadView;
-(void)photoTileViewController:(id)arg0 didAppear:(BOOL)arg1 ;
-(void)photoTileViewController:(id)arg0 didDisappear:(BOOL)arg1 ;
-(void)photoTileViewController:(id)arg0 willAppear:(BOOL)arg1 ;
-(void)photoTileViewControllerCancelImageRequests:(id)arg0 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg0 ;
-(void)photoTileViewControllerDoubleTap:(id)arg0 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg0 ;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg0 ;
-(void)photoTileViewControllerSingleTap:(id)arg0 ;
-(void)photoTileViewControllerWillBeginGesture:(id)arg0 ;
-(void)setAllowsEditing:(BOOL)arg0 ;
-(void)setCropOverlayDone;
-(void)setupNavigationItem;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)videoRemakerDidBeginRemaking:(id)arg0 ;
-(void)videoRemakerDidEndRemaking:(id)arg0 temporaryPath:(id)arg1 ;
-(void)videoView:(id)arg0 scrubberWasCreated:(id)arg1 slalomRegionEditor:(id)arg2 ;
-(void)videoViewDidBeginPlayback:(id)arg0 ;
-(void)videoViewDidEndPlayback:(id)arg0 didFinish:(BOOL)arg1 ;
-(void)videoViewDidPausePlayback:(id)arg0 didFinish:(BOOL)arg1 ;
-(void)videoViewIsReadyToBeginPlayback:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif