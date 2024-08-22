// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOVIEWCONTENTHELPER_H
#define PUPHOTOVIEWCONTENTHELPER_H

@class UIColor, PXVideoPlayerView, ISWrappedAVPlayer, ISAnimatedImageView, ISWrappedAVAudioSession, PXUIAssetBadgeView, UIImageView, UIView, PXTitleSubtitleUILabel, PHAnimatedImage, PXCollectionTileLayoutTemplate, NSString, PXFeatureSpec, PHLivePhoto, AVAsset, UIImage, PXRoundedCornerOverlayView, PXTextBannerView;
@protocol PHLivePhotoViewDelegate, PUPhotoViewContentHelperDelegate;

#import <Foundation/Foundation.h>

#import "PUBackgroundColorView.h"
#import "PUAvalancheStackView.h"
#import "PHLivePhotoView.h"
#import "PUPhotoDecoration.h"

@interface PUPhotoViewContentHelper : NSObject <PHLivePhotoViewDelegate>

 {
    PUBackgroundColorView *_photoDecorationBorderView;
    PUBackgroundColorView *_photoDecorationOverlayView;
    BOOL _hasTransform;
    BOOL _hasLayerBackgroundColor;
    ? _delegateFlags;
    BOOL _hasPendingPlaybackRequest;
    NSInteger _pendingPlaybackRequestStyle;
    UIColor *_layerDefaultBackgroundColor;
    ? _needsUpdateFlags;
    PXVideoPlayerView *_loopingVideoView;
    ISWrappedAVPlayer *_loopingVideoPlayer;
    ISAnimatedImageView *_animatedImageView;
}


@property (retain, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession; // ivar: __audioSession
@property (retain, nonatomic, setter=_setBadgeView:) PXUIAssetBadgeView *_badgeView; // ivar: __badgeView
@property (retain, nonatomic) UIImageView *_crossfadeImageView; // ivar: __crossfadeImageView
@property (retain, nonatomic, setter=_setHighlightOverlayView:) UIView *_highlightOverlayView; // ivar: __highlightOverlayView
@property (retain, nonatomic, setter=_setTitleSubtitleUILabel:) PXTitleSubtitleUILabel *_titleSubtitleLabel; // ivar: __titleSubtitleLabel
@property (retain, nonatomic) PHAnimatedImage *animatedImage; // ivar: _animatedImage
@property (nonatomic, getter=isAnimatingRoundedCorners) BOOL animatingRoundedCorners; // ivar: _animatingRoundedCorners
@property (nonatomic) *CGColor avalancheStackBackgroundColor; // ivar: _avalancheStackBackgroundColor
@property (retain, nonatomic) PUAvalancheStackView *avalancheStackView; // ivar: _avalancheStackView
@property (nonatomic) BOOL avoidsImageViewIfPossible; // ivar: _avoidsImageViewIfPossible
@property (nonatomic) BOOL avoidsPhotoDecoration; // ivar: _avoidsPhotoDecoration
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIView *badgeContainerView;
@property (nonatomic) PXAssetBadgeInfo badgeInfo; // ivar: _badgeInfo
@property (nonatomic) NSInteger badgeStyle; // ivar: _badgeStyle
@property (retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate; // ivar: _collectionTileLayoutTemplate
@property (nonatomic) CGFloat contentAlpha; // ivar: _contentAlpha
@property (readonly, weak, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) BOOL continuousCorners; // ivar: _continuousCorners
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSUInteger cornersToRound; // ivar: _cornersToRound
@property (nonatomic) CGSize customPaddingForBadgeElements; // ivar: _customPaddingForBadgeElements
@property (retain, nonatomic) UIView *darkContentOverlay; // ivar: _darkContentOverlay
@property (nonatomic) CGFloat darkContentOverlayAlpha; // ivar: _darkContentOverlayAlpha
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoViewContentHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFeatureSpec *featureSpec; // ivar: _featureSpec
@property (nonatomic) NSInteger fillMode; // ivar: _fillMode
@property (nonatomic) BOOL flattensBadgeView; // ivar: _flattensBadgeView
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) CGRect imageContentFrame;
@property (nonatomic) CGAffineTransform imageTransform; // ivar: _imageTransform
@property (nonatomic, getter=isImageViewEdgeAntialiasingEnabled) BOOL imageViewEdgeAntialiasingEnabled;
@property (retain, nonatomic) PHLivePhoto *livePhoto; // ivar: _livePhoto
@property (nonatomic, getter=isLivePhotoHidden) BOOL livePhotoHidden; // ivar: _livePhotoHidden
@property (retain, nonatomic) PHLivePhotoView *livePhotoView; // ivar: _livePhotoView
@property (nonatomic) BOOL loopingPlaybackAllowed; // ivar: _loopingPlaybackAllowed
@property (copy, nonatomic) AVAsset *loopingVideoAsset; // ivar: _loopingVideoAsset
@property (nonatomic) BOOL needsAvalancheStack; // ivar: _needsAvalancheStack
@property (retain, nonatomic) UIColor *overlayColor; // ivar: _overlayColor
@property (copy, nonatomic) PUPhotoDecoration *photoDecoration; // ivar: _photoDecoration
@property (retain, nonatomic) UIImage *photoImage; // ivar: _photoImage
@property (retain, nonatomic) UIImageView *photoImageView; // ivar: _photoImageView
@property (nonatomic) CGSize photoSize; // ivar: _photoSize
@property (retain, nonatomic) UIImage *placeHolderImage; // ivar: _placeHolderImage
@property (readonly, nonatomic) BOOL providesVisualFeedbackOnPress;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // ivar: _roundedCornerOverlayView
@property (nonatomic) BOOL shouldPrepareForPlayback; // ivar: _shouldPrepareForPlayback
@property (nonatomic) BOOL showsLivePhoto; // ivar: _showsLivePhoto
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXTextBannerView *textBannerView; // ivar: _textBannerView
@property (nonatomic, getter=isTextBannerVisible) BOOL textBannerVisible; // ivar: _isTextBannerVisible
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *titleFontName; // ivar: _titleFontName
@property (retain, nonatomic) UIView *transitionSnapshotView; // ivar: _transitionSnapshotView
@property (nonatomic) BOOL useOverlay; // ivar: _useOverlay


+(struct CGRect )_imageContentFrameForBounds:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 fillMode:(NSInteger)arg2 ;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 imageSize:(struct CGSize )arg1 fillMode:(NSInteger)arg2 ;
-(BOOL)_needsUpdate;
-(id)init;
-(id)initWithContentView:(id)arg0 ;
-(struct CGRect )imageContentFrameForBounds:(struct CGRect )arg0 ;
-(struct CGRect )photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect )arg0 ;
-(struct CGSize )contentViewSizeThatFits:(struct CGSize )arg0 ;
-(void)_addAvalancheStackViewIfNecessary;
-(void)_invalidateAnimatedImageView;
-(void)_invalidateBadgeView;
-(void)_invalidateLoopingVideoView;
-(void)_removeAvalancheStackViewIfNecessary;
-(void)_removePhotoImageViewIfNecessary;
-(void)_startPlaybackWhenLivePhotoAvailableWithStyle:(NSInteger)arg0 ;
-(void)_updateAnimatedImageViewIfNeeded;
-(void)_updateBadgeView;
-(void)_updateContentViewClipsToBounds;
-(void)_updateHighlight;
-(void)_updateIfNeeded;
-(void)_updateImageView;
-(void)_updateLayerBackgroundColorIfNeeded;
-(void)_updateLayerCornerRadius;
-(void)_updateLivePhotoView;
-(void)_updateLivePhotoViewPreparing;
-(void)_updateLivePhotoViewVisibility;
-(void)_updateLoopingVideoViewIfNeeded;
-(void)_updatePhotoDecoration;
-(void)_updateRoundedCornersOverlayView;
-(void)_updateSubviewOrdering;
-(void)_updateTextBannerView;
-(void)animateCrossfadeToImage:(id)arg0 ;
-(void)layoutSubviewsOfContentView;
-(void)livePhotoView:(id)arg0 willBeginPlaybackWithStyle:(NSInteger)arg1 ;
-(void)startPlaybackWithStyle:(NSInteger)arg0 ;
-(void)stopPlayback;
-(void)updatePhotoImageWithoutReconfiguring:(id)arg0 ;


@end


#endif