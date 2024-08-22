// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDOWNLOADBUTTON_H
#define VUIDOWNLOADBUTTON_H

@class CAShapeLayer, UIView, UIImageView, UIImageSymbolConfiguration, UIImage, UIColor, UIViewController;


#import "VUIButton.h"
#import "VUIAlertController.h"
#import "VUICircularProgress.h"
#import "VUITextLayout.h"
#import "VUIDownloadButtonViewModel.h"

@interface VUIDownloadButton : VUIButton

@property (retain, nonatomic) CAShapeLayer *backdropMaskingLayer; // ivar: _backdropMaskingLayer
@property (retain, nonatomic) CAShapeLayer *backgroundMaskingLayer; // ivar: _backgroundMaskingLayer
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIImageView *badgeImageView; // ivar: _badgeImageView
@property (retain, nonatomic) UIImageSymbolConfiguration *badgeSymbolConfiguration; // ivar: _badgeSymbolConfiguration
@property (retain, nonatomic) UIImage *connectingImage; // ivar: _connectingImage
@property (retain, nonatomic) VUIAlertController *deleteConfirmationAlertController; // ivar: _deleteConfirmationAlertController
@property (copy, nonatomic) id *downloadStateChangeHandler; // ivar: _downloadStateChangeHandler
@property (retain, nonatomic) UIImage *downloadedImage; // ivar: _downloadedImage
@property (retain, nonatomic) UIImage *downloadingImage; // ivar: _downloadingImage
@property (retain, nonatomic) UIImage *expiredDownloadImage; // ivar: _expiredDownloadImage
@property (nonatomic) BOOL isForLibrary; // ivar: _isForLibrary
@property (retain, nonatomic) UIColor *keyBackgroundColor; // ivar: _keyBackgroundColor
@property (retain, nonatomic) UIImage *notDownloadedImage; // ivar: _notDownloadedImage
@property (nonatomic) BOOL observingDownloadProgress; // ivar: _observingDownloadProgress
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) UIImageSymbolConfiguration *primarySymbolConfiguration; // ivar: _primarySymbolConfiguration
@property (retain, nonatomic) VUICircularProgress *progressIndicator; // ivar: _progressIndicator
@property (retain, nonatomic) UIColor *saturatedTintColor; // ivar: _saturatedTintColor
@property (nonatomic) BOOL showsTextInDownloadedState; // ivar: _showsTextInDownloadedState
@property (retain, nonatomic) VUITextLayout *textLayout; // ivar: _textLayout
@property (nonatomic) BOOL usesDefaultConfiguration; // ivar: _usesDefaultConfiguration
@property (retain, nonatomic) VUIDownloadButtonViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) BOOL wasCanceled; // ivar: _wasCanceled
@property (nonatomic) BOOL wasDeleted; // ivar: _wasDeleted


-(BOOL)_shouldShowRenewalOption;
-(id)_badgeImageForDownloadState:(NSUInteger)arg0 downloadExpirationDate:(id)arg1 ;
-(id)_buttonPropertiesForState:(NSUInteger)arg0 downloadExpirationDate:(id)arg1 ;
-(id)_downloadedBadgeImage;
-(id)_expiredBadgeImage;
-(id)_imageForDownloadState:(NSUInteger)arg0 downloadExpirationDate:(id)arg1 ;
-(id)_localize:(id)arg0 token:(id)arg1 value:(id)arg2 ;
-(id)_pausedImage;
-(id)_renewalAlertAction;
-(id)initWithAssetController:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithMediaEntity:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithPlayable:(id)arg0 type:(NSUInteger)arg1 textLayout:(id)arg2 ;
-(struct CGSize )_imageSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )vui_sizeThatFits:(struct CGSize )arg0 ;
-(void)_askUserAndDeleteIfNeeded;
-(void)_checkForAccountSignInWithCompletionHandler:(id)arg0 ;
-(void)_clearMasks;
-(void)_configureProgressIndicatorWithProperties:(id)arg0 ;
-(void)_dismissConfirmationAlertController;
-(void)_downloadButtonTapped:(id)arg0 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg0 ;
-(void)_insertProgressIndicatorWithFrame:(struct CGRect )arg0 ;
-(void)_layoutProgressIndicator;
-(void)_setBadgeImage:(id)arg0 ;
-(void)_setImage:(id)arg0 ;
-(void)_setTitleWithProperties:(id)arg0 ;
-(void)_setupDownloadButton;
-(void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(BOOL)arg0 ;
-(void)_startObservingDownloadProgress:(id)arg0 ;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopObservingDownloadProgress:(id)arg0 ;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)_updateButtonToConnectingWithProperties:(id)arg0 ;
-(void)_updateButtonToDownloadedWithProperties:(id)arg0 ;
-(void)_updateButtonToDownloadingWithProperties:(id)arg0 ;
-(void)_updateButtonToNotDownloadedWithProperties:(id)arg0 ;
-(void)_updateButtonToState:(NSUInteger)arg0 downloadExpirationDate:(id)arg1 ;
-(void)_updateButtonToState:(NSUInteger)arg0 oldState:(NSUInteger)arg1 ;
-(void)_updateDownloadProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_updateImageViewTintColorWithDownloadState:(NSUInteger)arg0 ;
-(void)_updateLayoutForBadge;
-(void)_updateMaskForProgressLayer;
-(void)configureWithLayoutProperties;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)revertTintColor;
-(void)saturateTintColorAndBackgroundColor;
-(void)setScrolledNonUberPercentage:(CGFloat)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)updateWithAssetController:(id)arg0 ;
-(void)updateWithPlayable:(id)arg0 textLayout:(id)arg1 ;
-(void)vui_didMoveToWindow;


@end


#endif