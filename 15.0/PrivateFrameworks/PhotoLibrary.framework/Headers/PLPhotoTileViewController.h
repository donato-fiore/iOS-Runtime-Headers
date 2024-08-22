// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPHOTOTILEVIEWCONTROLLER_H
#define PLPHOTOTILEVIEWCONTROLLER_H

@class UIViewController, UIImage, PHAsset, UIImageView, UIView<PLTilePlaceholderView>, UIGestureRecognizer, PHCachingImageManager, NSArray, UIView, NSString, NSNumber;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegate, PLPhotoTileCloudPlaceholderViewDelegate, PLPhotoTileViewControllerDelegate, OS_dispatch_source;


#import "PLImageScrollView.h"
#import "PLExpandableImageView.h"
#import "PLVideoView.h"
#import "PLTileContainerView.h"

@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLPhotoTileCloudPlaceholderViewDelegate>

 {
    UIImage *_image;
    UIImage *_pendingImage;
    PHAsset *_modelPhoto;
    PLImageScrollView *_scrollView;
    PLExpandableImageView *_imageView;
    PLVideoView *_videoView;
    UIImageView *_gradientView;
    UIImageView *_reviewCheckmarkImageView;
    UIView<PLTilePlaceholderView> *_placeholderView;
    BOOL _currentTileDownloadFinished;
    UIGestureRecognizer *_singleTapGestureRecognizer;
    UIGestureRecognizer *_doubleTapGestureRecognizer;
    id<PLPhotoTileViewControllerDelegate> *_tileDelegate;
    CGSize _imageSize;
    CGRect _tileFrame;
    BOOL _zoomToFillInsteadOfToFit;
    BOOL _useLessThanMinZoomForZoomedOutTest;
    BOOL _allowZoomToFill;
    id *_orientationDelegate;
    float _cropRectZoomScale;
    CGRect _cropOverlayRect;
    CGRect _cropRect;
    CGFloat _doubleTapZoomScale;
    CGFloat _minZoomScale;
    CGFloat _zoomToFillScale;
    int _mode;
    BOOL _clientIsTemporarilyWallpaper;
    BOOL _userDidAdjustWallpaper;
    float _wallpaperPortraitZoomScale;
    float _wallpaperLandscapeZoomScale;
    float _zoomScaleBeforeZooming;
    CGRect _cropRectBeforeDragging;
    id *_didEndZoomingBlock;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    CGFloat _dispatchStartTime;
    CGFloat _dispatchTimeElapsed;
    BOOL _hasNotedZoom;
    BOOL _imageIsThumbnail;
    BOOL _isTVOut;
    BOOL _zooming;
    BOOL _autoZooming;
    BOOL _zoomGesturesEnabled;
    BOOL _userDidZoom;
    BOOL _ignoreZoomChange;
    BOOL _tileParentIsPageController;
    BOOL _lockedUnderCropOverlay;
    BOOL _viewDidAppear;
    BOOL _viewWillAppear;
    BOOL _didRequestFullSizeImage;
    BOOL _useZoomScaleForCropRect;
    BOOL _avalancheBadgeShouldBeHidden;
    BOOL _badgeShouldBeVisible;
    int _imageOrientation;
    PLTileContainerView *_containerView;
    PHCachingImageManager *__cachingImageManager;
    int _fullSizeImageRequestID;
    NSArray *_customCenterOverlayConstraints;
    BOOL _shouldUpdateBadgeViewOptimalLayout;
    CGFloat _badgeViewOptimalLayoutLowestTop;
    BOOL _isLoadingFullSizeImage;
}


@property (retain, nonatomic, setter=_setCustomCenterOverlay:) UIView *_customCenterOverlay; // ivar: __customCenterOverlay
@property (nonatomic) BOOL centerContentVertically; // ivar: _centerContentVertically
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL force1XCroppedImage; // ivar: _force1XCroppedImage
@property (nonatomic) BOOL forceNativeScreenScale; // ivar: _forceNativeScreenScale
@property (readonly) NSUInteger hash;
@property (nonatomic) int inflightFullSizeImageRequestID; // ivar: _inflightFullSizeImageRequestID
@property (retain, nonatomic) NSNumber *maxZoomScaleOverride; // ivar: _maxZoomScaleOverride
@property (nonatomic) UIEdgeInsets overlayInsets; // ivar: _overlayInsets
@property (readonly, nonatomic) PHAsset *photo;
@property (nonatomic) BOOL picked; // ivar: _picked
@property (nonatomic) BOOL reviewing; // ivar: _reviewing
@property (nonatomic) BOOL shouldHideProgressIndicator; // ivar: _shouldHideProgressIndicator
@property (nonatomic) BOOL shouldSupressViewWillTransitionToSize; // ivar: _shouldSupressViewWillTransitionToSize
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (nonatomic) CGRect tileFrame;
@property (retain, nonatomic) UIImage *unscaledImage; // ivar: _unscaledImage
@property (nonatomic) BOOL wantsCompactLayout; // ivar: _wantsCompactLayout


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)shouldShowPlaceholderForAsset:(id)arg0 ;
+(id)newPhotoTileViewControllerWithFrame:(struct CGRect )arg0 image:(id)arg1 allowZoomToFill:(BOOL)arg2 mode:(int)arg3 ;
+(id)newPhotoTileViewControllerWithFrame:(struct CGRect )arg0 imageRef:(struct CGImage *)arg1 imageOrientation:(NSInteger)arg2 allowZoomToFill:(BOOL)arg3 mode:(int)arg4 ;
+(id)newPhotoTileViewControllerWithFrame:(struct CGRect )arg0 modelPhoto:(id)arg1 mode:(int)arg2 ;
+(struct CGSize )tileSize;
+(struct CGSize )tvOutTileSize;
-(BOOL)_canShowWhileLocked;
-(BOOL)_clientIsWallpaper;
-(BOOL)allowsEditing;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gesturesEnabled;
-(BOOL)hasFullSizeImage;
-(BOOL)isTVOut;
-(BOOL)isZoomedOut;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)tileIsOnScreen;
-(BOOL)userDidAdjustWallpaper;
-(CGFloat)currentToDefaultZoomRatio;
-(CGFloat)currentToMinZoomRatio;
-(CGFloat)defaultZoomScale;
-(CGFloat)minRotatedScale;
-(CGFloat)minZoomScale;
-(CGFloat)zoomToFillScale;
-(CGFloat)zoomToFitScale;
-(NSInteger)_imageOrientation;
-(float)_calculateZoomScale:(BOOL)arg0 inView:(id)arg1 ;
-(id)_newCGImageBackedUIImageFromImage:(id)arg0 ;
-(id)_newImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 cropRect:(struct CGRect )arg2 fullSize:(struct CGSize )arg3 ;
-(id)_newOriginalImageForPickerFromCachedData;
-(id)cachingImageManager;
-(id)dictionaryWithCroppedImageForRect:(struct CGRect )arg0 minimalCropDimension:(CGFloat)arg1 withOptions:(int)arg2 ;
-(id)expandableImageView;
-(id)image;
-(id)imageView;
-(id)init;
-(id)initForPageController;
-(id)initWithModelPhoto:(id)arg0 image:(id)arg1 frame:(struct CGRect )arg2 isThumbnail:(BOOL)arg3 imageOrientation:(int)arg4 allowZoomToFill:(BOOL)arg5 mode:(int)arg6 ;
-(id)initWithModelPhoto:(id)arg0 thumbnailImage:(id)arg1 size:(struct CGSize )arg2 ;
-(id)newImageWithCropRect:(struct CGRect )arg0 minimalCropDimension:(CGFloat)arg1 croppedImageData:(*id)arg2 fullScreenImageData:(*id)arg3 imageCropRect:(struct CGRect *)arg4 intersectCropWithFullRect:(BOOL)arg5 ;
-(id)scrollView;
-(id)tileDelegate;
-(id)videoView;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(int)imageOrientation;
-(struct CGSize )scrollView:(id)arg0 contentSizeForZoomScale:(CGFloat)arg1 withProposedSize:(struct CGSize )arg2 ;
-(void)_adjustScrollViewContentOffsetForInsets;
-(void)_adjustZoomForEnteringMode:(BOOL)arg0 ;
-(void)_centerImageInScrollView;
-(void)_configureViews;
-(void)_getFullScreenImageData:(*id)arg0 forImage:(id)arg1 fullSize:(struct CGSize )arg2 imageView:(id)arg3 screenScaleTransform:(struct CGAffineTransform )arg4 ;
-(void)_handleDoubleTap:(id)arg0 ;
-(void)_handleFullSizeImageRequestResult:(id)arg0 dataUTI:(id)arg1 orientation:(NSInteger)arg2 ;
-(void)_handleSingleTap:(id)arg0 ;
-(void)_installSubview:(id)arg0 ;
-(void)_performDidEndZoomBlock;
-(void)_performRotationUpdatesWithDuration:(CGFloat)arg0 size:(struct CGSize )arg1 ;
-(void)_removePlaceholderView;
-(void)_repositionBadgeView;
-(void)_requestFullSizeImage;
-(void)_resetZoomCommon;
-(void)_setDefaultZoomScale;
-(void)_setDidEndZoomingBlock:(id)arg0 ;
-(void)_setImage:(id)arg0 isThumbnail:(BOOL)arg1 preserveFrame:(BOOL)arg2 ;
-(void)_setupBadgeView;
-(void)_setupReviewCheckmark;
-(void)_showBadgeViewIfAppropriate;
-(void)_teardownDispatchTimer;
-(void)_updateContentInset;
-(void)_updateModelPhotoWithImage:(id)arg0 ;
-(void)_updatePlaceholderImageRect;
-(void)_updatePlaceholderViewAnimated:(BOOL)arg0 ;
-(void)_updatePlaceholderVisibility;
-(void)_updateReviewCheckmark;
-(void)_updateSubviewOrdering;
-(void)_updateVideoViewForModelPhoto;
-(void)_viewWillMoveToSuperView:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)cancelFullSizeImageRequest;
-(void)dealloc;
-(void)didLoadImage;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)ensureFullSizeImageLoaded;
-(void)forceZoomingGesturesEnabled;
-(void)hideContentView;
-(void)installVideoOverlay:(id)arg0 ;
-(void)loadView;
-(void)noteParentViewControllerDidDisappear;
-(void)refreshTileWithFullScreenImage:(id)arg0 modelPhoto:(id)arg1 ;
-(void)reloadZoomScale;
-(void)resetZoom;
-(void)retryDownload;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)setAllowsZoomToFill:(BOOL)arg0 ;
-(void)setAvalancheBadgesHidden:(BOOL)arg0 ;
-(void)setBadgeVisible:(BOOL)arg0 ;
-(void)setBadgeVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setClientIsWallpaper:(BOOL)arg0 ;
-(void)setCropOverlayRect:(struct CGRect )arg0 forCropRect:(struct CGRect )arg1 ;
-(void)setFullSizeImage:(id)arg0 ;
-(void)setGesturesEnabled:(BOOL)arg0 ;
-(void)setLockedUnderCropOverlay:(BOOL)arg0 ;
-(void)setOrientationDelegate:(id)arg0 ;
-(void)setTVOut:(BOOL)arg0 ;
-(void)setTileDelegate:(id)arg0 ;
-(void)setVideoView:(id)arg0 ;
-(void)setZoomScale:(float)arg0 ;
-(void)setZoomingGesturesEnabled:(BOOL)arg0 ;
-(void)showContentView;
-(void)showErrorPlaceholderView;
-(void)updateAfterCollapse;
-(void)updateCenterOverlay;
-(void)updateCloudDownloadProgress:(CGFloat)arg0 ;
-(void)updateForVisibleOverlays:(BOOL)arg0 ;
-(void)updateViewConstraints;
-(void)updateZoomScales;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)zoomToScale:(CGFloat)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;


@end


#endif