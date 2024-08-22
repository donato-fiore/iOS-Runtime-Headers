// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUILIBRARYEPISODEFRAMEVIEW_H
#define VUILIBRARYEPISODEFRAMEVIEW_H

@class UIView, VUIImageView, _TVProgressView;
@protocol VUILibraryEpisodeFrameViewDelegate;


#import "VUIButton.h"

@interface VUILibraryEpisodeFrameView : UIView

@property (weak, nonatomic) NSObject<VUILibraryEpisodeFrameViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VUIImageView *fullyPlayedImageView; // ivar: _fullyPlayedImageView
@property (retain, nonatomic) VUIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) VUIButton *playButton; // ivar: _playButton
@property (retain, nonatomic) _TVProgressView *progressView; // ivar: _progressView


+(void)configureEpisodeFrameView:(id)arg0 withMedia:(id)arg1 layout:(NSInteger)arg2 imageSize:(struct CGSize )arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif