// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUVIDEOPLAYERVIEW_H
#define PUVIDEOPLAYERVIEW_H

@class UIView, NSArray, UIImageView, UIImage;
@protocol PUVideoPlayerViewDelegate;


#import "_PUVideoView.h"

@interface PUVideoPlayerView : UIView {
    _PUVideoView *_videoView;
    NSArray *_videoViewConstraints;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
}


@property (nonatomic) BOOL allowsEdgeAntialiasing; // ivar: _allowsEdgeAntialiasing
@property (weak, nonatomic) NSObject<PUVideoPlayerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isDisplayingPlaceholder; // ivar: _isDisplayingPlaceholder
@property (nonatomic) BOOL isDisplayingVideo; // ivar: _isDisplayingVideo
@property (nonatomic) BOOL isReadyForVideoDisplay; // ivar: _isReadyForVideoDisplay
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) CGRect placeholderImageContentsRect; // ivar: _placeholderImageContentsRect
@property (nonatomic) NSUInteger videoViewContentMode; // ivar: _videoViewContentMode


-(id)generateSnapshotImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installNewVideoViewIfNecessaryWithPlayer:(id)arg0 ;
-(void)_updateContentMode;
-(void)_updateEdgeAntialiasing;
-(void)_updateSubviewsVisibility;
-(void)configureWithAVPlayer:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif