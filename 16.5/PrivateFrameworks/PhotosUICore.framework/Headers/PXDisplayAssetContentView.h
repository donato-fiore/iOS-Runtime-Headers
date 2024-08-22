// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDISPLAYASSETCONTENTVIEW_H
#define PXDISPLAYASSETCONTENTVIEW_H

@class UIView, UIImage, NSString, NSError, NSArray;
@protocol PXReusableObject, PXChangeObserver, PXDisplayAsset, OS_os_log;


#import "PXLoadingFailureBadgeView.h"
#import "PXImageRequester.h"
#import "PXUIMediaProvider.h"
#import "PXRoundProgressView.h"
#import "PXDisplayAssetViewModel.h"

@interface PXDisplayAssetContentView : UIView <PXReusableObject, PXChangeObserver>

 {
    ? _updateFlags;
}


@property (nonatomic, getter=isAnimatedContentEnabled) BOOL animatedContentEnabled; // ivar: _animatedContentEnabled
@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (nonatomic) BOOL canDisplayLoadingIndicator; // ivar: _canDisplayLoadingIndicator
@property (nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (readonly, nonatomic) CGRect currentContentsRect;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) PXLoadingFailureBadgeView *failureView; // ivar: _failureView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) CGFloat imageProgress; // ivar: _imageProgress
@property (readonly, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (nonatomic) BOOL isDisplayingFullQualityContent; // ivar: _isDisplayingFullQualityContent
@property (retain, nonatomic) NSError *latestError; // ivar: _latestError
@property (readonly, nonatomic) CGFloat loadingProgress; // ivar: _loadingProgress
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (copy, nonatomic) NSArray *placeholderImageFilters; // ivar: _placeholderImageFilters
@property (nonatomic) CGFloat placeholderTransitionDuration; // ivar: _placeholderTransitionDuration
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (retain, nonatomic) PXRoundProgressView *progressView; // ivar: _progressView
@property (nonatomic) NSInteger requestID; // ivar: _requestID
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize
@property (retain, nonatomic) PXDisplayAssetViewModel *viewModel; // ivar: _viewModel


+(id)checkOutViewForAsset:(id)arg0 ;
+(id)checkOutViewForAsset:(id)arg0 withPlaybackStyle:(NSInteger)arg1 ;
+(id)viewPool;
+(void)checkInView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateError;
-(void)_invalidateViewModelProperties;
-(void)_loadContentView;
-(void)_updateError;
-(void)_updateFailureView;
-(void)_updateIfNeeded;
-(void)_updateProgressView;
-(void)_updateTargetSize;
-(void)_updateViewModelProperties;
-(void)animatedContentEnabledDidChange;
-(void)becomeReusable;
-(void)contentModeDidChange;
-(void)didMoveToWindow;
-(void)handleError:(id)arg0 ;
-(void)imageRequesterDidChange:(NSUInteger)arg0 ;
-(void)invalidateLoadingProgress;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setNeedsLayout;
-(void)setNeedsUpdateContent;
-(void)updateContent;
-(void)viewModelDidChange:(NSUInteger)arg0 ;


@end


#endif