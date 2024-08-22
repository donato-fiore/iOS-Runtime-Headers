// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFEEDIMAGECELL_H
#define PUFEEDIMAGECELL_H

@class UIImageView, UIButton, UIView<PXVideoOverlayButton>, PXUIAssetBadgeView, ISWrappedAVAudioSession, UIImage, AVPlayerItem, PXRoundedCornerOverlayView, ISWrappedAVPlayer, PXVideoPlayerView;


#import "PUFeedCell.h"
#import "PUImageViewExtraction.h"

@interface PUFeedImageCell : PUFeedCell

@property (retain, nonatomic, setter=_setCenterOverlayImageView:) UIImageView *_centerOverlayImageView; // ivar: __centerOverlayImageView
@property (retain, nonatomic, setter=_setCommentButton:) UIButton *_commentButton; // ivar: __commentButton
@property (nonatomic, setter=_setImageFrame:) CGRect _imageFrame; // ivar: __imageFrame
@property (nonatomic, setter=_setImageTag:) NSInteger _imageTag; // ivar: __imageTag
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // ivar: __imageView
@property (retain, nonatomic, setter=_setOverlayPlayButton:) UIView<PXVideoOverlayButton> *_overlayPlayButton; // ivar: __overlayPlayButton
@property (retain, nonatomic, setter=_setOverlayPlayButtonBackgroundExtraction:) PUImageViewExtraction *_overlayPlayButtonBackgroundExtraction; // ivar: __overlayPlayButtonBackgroundExtraction
@property (retain, nonatomic, setter=_setOverlayPlayButtonBackgroundImageView:) UIImageView *_overlayPlayButtonBackgroundImageView; // ivar: __overlayPlayButtonBackgroundImageView
@property (retain, nonatomic, setter=_setPhotoIrisBadgeView:) PXUIAssetBadgeView *_photoIrisBadgeView; // ivar: __photoIrisBadgeView
@property (nonatomic, setter=_setShouldHideCenterOverlayImageView:) BOOL _shouldHideCenterOverlayImageView; // ivar: __shouldHideCenterOverlayImageView
@property (nonatomic, setter=_setShouldHideCommentButton:) BOOL _shouldHideCommentButton; // ivar: __shouldHideCommentButton
@property (nonatomic, setter=_setShouldHideOverlayPlayButton:) BOOL _shouldHideOverlayPlayButton; // ivar: __shouldHideOverlayPlayButton
@property (nonatomic, setter=_setShouldUpdateOverlayPlayButtonBackground:) BOOL _shouldUpdateOverlayPlayButtonBackground; // ivar: __shouldUpdateOverlayPlayButtonBackground
@property (readonly, nonatomic) ISWrappedAVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic) NSInteger commentCount; // ivar: _commentCount
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSInteger imageAlignment; // ivar: _imageAlignment
@property (nonatomic) NSInteger imageContentMode; // ivar: _imageContentMode
@property (nonatomic, getter=isImageHidden) BOOL imageHidden; // ivar: _imageHidden
@property (retain, nonatomic) UIImageView *likeBadgeView; // ivar: _likeBadgeView
@property (nonatomic) CGSize maximumImageSize; // ivar: _maximumImageSize
@property (nonatomic) NSInteger overlayOptions; // ivar: _overlayOptions
@property (retain, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem
@property (nonatomic) int playerItemRequestID; // ivar: _playerItemRequestID
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // ivar: _roundedCornerOverlayView
@property (nonatomic, setter=setShouldHideLikeBadge:) BOOL shouldHideLikeBadge; // ivar: _shouldHideLikeBadge
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // ivar: _videoPlayer
@property (readonly, nonatomic) PXVideoPlayerView *videoPlayerView; // ivar: _videoPlayerView


+(Class)_contentViewClass;
+(NSInteger)_videoOverlayButtonStyle;
+(void)preloadResources;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleCommentButton:(id)arg0 ;
-(void)_handlePlayButton:(id)arg0 ;
-(void)_invalidateOverlayPlayButtonBackground;
-(void)_layoutImageView;
-(void)_updateCommentButton;
-(void)_updateOverlays;
-(void)_updateRoundedCornersOverlayView;
-(void)_updateVideoPlayerContents;
-(void)_updateVideoViewContentMode;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setParallaxOffset:(struct CGPoint )arg0 ;


@end


#endif