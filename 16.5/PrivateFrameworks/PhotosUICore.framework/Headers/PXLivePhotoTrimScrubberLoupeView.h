// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLIVEPHOTOTRIMSCRUBBERLOUPEVIEW_H
#define PXLIVEPHOTOTRIMSCRUBBERLOUPEVIEW_H

@class UIView, CAShapeLayer, UIImageView, AVAsset, AVVideoComposition;
@protocol OS_dispatch_queue;


#import "_PXLivePhotoTrimScrubberLoupeViewImageRequest.h"

@interface PXLivePhotoTrimScrubberLoupeView : UIView {
    UIView *_container;
    CAShapeLayer *_maskLayer;
    UIImageView *_imageView;
    BOOL _imageIsValid;
    NSObject<OS_dispatch_queue> *_workQueue;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;
    CAShapeLayer *_borderLayer;
    BOOL _playheadIsValid;
    CGFloat _needleWidth;
}


@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (readonly, nonatomic) AVAsset *asset; // ivar: _asset
@property (nonatomic) ? frameTime; // ivar: _frameTime
@property (nonatomic) CGFloat innerCornerRadius; // ivar: _innerCornerRadius
@property (nonatomic) CGFloat outerCornerRadius; // ivar: _outerCornerRadius
@property (retain, nonatomic) UIView *playerView; // ivar: _playerView
@property (readonly, nonatomic) NSUInteger playheadStyle; // ivar: _playheadStyle
@property (nonatomic) CGFloat verticalInset; // ivar: _verticalInset
@property (readonly, nonatomic) AVVideoComposition *videoComposition; // ivar: _videoComposition


-(BOOL)showPlayerView;
-(id)_collapsedPathForBounds:(struct CGRect )arg0 ;
-(id)_expandedPathForBounds:(struct CGRect )arg0 needsCutout:(BOOL)arg1 ;
-(id)_transitionPathForBounds:(struct CGRect )arg0 needsCutout:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_loupeFrameWithBounds:(struct CGRect )arg0 ;
-(void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
-(void)_extractImageFromImageRequest:(id)arg0 ;
-(void)_invalidateImage;
-(void)_invalidatePlayhead;
-(void)_presentImage:(id)arg0 ;
-(void)_updateImageIfNeeded;
-(void)_updatePlayheadBorderAnimate:(BOOL)arg0 ;
-(void)_updatePlayheadIfNeeded;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setShowLoupePlayerAnimate:(BOOL)arg0 ;
-(void)setShowLoupeThumbnailWithFrameTime:(struct ? )arg0 animate:(BOOL)arg1 ;
-(void)setShowNeedleWithWidth:(CGFloat)arg0 animate:(BOOL)arg1 ;
-(void)setShowPlayerView:(BOOL)arg0 ;


@end


#endif