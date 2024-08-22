// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVIDEOPLAYERVIEW_H
#define PXVIDEOPLAYERVIEW_H

@class UIView, NSArray, UIImageView, UIImage, ISWrappedAVPlayer;
@protocol PXVideoPlayerViewDelegate;


#import "PXVideoView.h"

@interface PXVideoPlayerView : UIView {
    PXVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    NSInteger _placeholderVisibilityRequestID;
    id *_visibilityChangeCompletionHandler;
}


@property (nonatomic) BOOL allowsEdgeAntialiasing; // ivar: _allowsEdgeAntialiasing
@property (weak, nonatomic) NSObject<PXVideoPlayerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isDisplayingPlaceHolder) BOOL displayingPlaceholder; // ivar: _displayingPlaceholder
@property (nonatomic) NSInteger placeholderDisplayMode; // ivar: _placeholderDisplayMode
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) CGRect placeholderImageContentsRect; // ivar: _placeholderImageContentsRect
@property (copy, nonatomic) NSArray *placeholderImageFilters; // ivar: _placeholderImageFilters
@property (retain, nonatomic) ISWrappedAVPlayer *player; // ivar: _player
@property (nonatomic) CGFloat videoAppearanceCrossfadeDuration; // ivar: _videoAppearanceCrossfadeDuration
@property (nonatomic) NSInteger videoViewContentMode; // ivar: _videoViewContentMode


-(id)generateSnapshotImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_runVisibilityChangeCompletionHandler;
-(void)_updateContentMode;
-(void)_updateEdgeAntialiasing;
-(void)_updateSubviewsVisibility;
-(void)_updateVideoView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif