// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMOVIEPLAYERVIEW_H
#define PLMOVIEPLAYERVIEW_H

@class UIView, AVPlayer;


#import "PLAVPlayerView.h"

@interface PLMoviePlayerView : UIView {
    PLAVPlayerView *_avPlayerView;
    BOOL _destinationPlaceholderHidden;
}


@property (nonatomic, getter=isDestinationPlaceholderHidden) BOOL destinationPlaceholderHidden;
@property (readonly, nonatomic) NSInteger destinationPlaceholderStyle; // ivar: _destinationPlaceholderStyle
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, retain, nonatomic) UIView *videoView;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_installBackgroundView:(id)arg0 ;
-(void)dealloc;
-(void)reattachVideoView;
-(void)setScaleMode:(NSInteger)arg0 ;
-(void)setScaleMode:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif