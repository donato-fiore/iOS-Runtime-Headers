// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDISPLAYASSETUIVIEW_H
#define PXDISPLAYASSETUIVIEW_H

@class UIView, UIImage, NSString, NSError, NSArray;
@protocol PXReusableObject, PXChangeObserver, PXDisplayAsset;


#import "PXLoadingFailureBadgeView.h"
#import "PXImageRequester.h"
#import "PXUIMediaProvider.h"
#import "PXRoundProgressView.h"

@interface PXDisplayAssetUIView : UIView <PXReusableObject, PXChangeObserver>

 {
    ? _updateFlags;
}


@property (nonatomic, getter=isAnimatedContentEnabled) BOOL animatedContentEnabled; // ivar: _animatedContentEnabled
@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (readonly, nonatomic) CGRect currentContentsRect;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayLoadingIndicator; // ivar: _displayLoadingIndicator
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) PXLoadingFailureBadgeView *failureView; // ivar: _failureView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) CGFloat imageProgress; // ivar: _imageProgress
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (nonatomic) BOOL isDisplayingFullQualityContent; // ivar: _isDisplayingFullQualityContent
@property (readonly, nonatomic) CGFloat loadingProgress; // ivar: _loadingProgress
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (copy, nonatomic) NSArray *placeholderImageFilters; // ivar: _placeholderImageFilters
@property (nonatomic) CGFloat placeholderTransitionDuration; // ivar: _placeholderTransitionDuration
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (retain, nonatomic) PXRoundProgressView *progressView; // ivar: _progressView
@property (readonly) Class superclass;
@property (nonatomic) CGSize targetSize; // ivar: _targetSize


+(id)checkOutViewForAsset:(id)arg0 ;
+(id)checkOutViewForAsset:(id)arg0 withPlaybackStyle:(NSInteger)arg1 ;
+(id)viewPool;
+(void)checkInView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_loadContentView;
-(void)_updateFailureView;
-(void)_updateIfNeeded;
-(void)_updateProgressView;
-(void)_updateTargetSize;
-(void)animatedContentEnabledDidChange;
-(void)becomeReusable;
-(void)contentModeDidChange;
-(void)didMoveToWindow;
-(void)invalidateLoadingProgress;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setNeedsLayout;
-(void)setNeedsUpdateContent;
-(void)updateContent;


@end


#endif