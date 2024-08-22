// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISVIDEOPLAYERUIVIEW_H
#define ISVIDEOPLAYERUIVIEW_H

@class UIView;


#import "ISAVPlayerUIView.h"
#import "ISWrappedAVPlayer.h"

@interface ISVideoPlayerUIView : UIView {
    ISAVPlayerUIView *_playerView;
}


@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (readonly, nonatomic) BOOL videoLayerReadyForDisplay; // ivar: _videoLayerReadyForDisplay
@property (copy, nonatomic) id *videoLayerReadyForDisplayChangeHandler;
@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // ivar: _videoPlayer


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)playerLayer;
-(void)_ISVideoPlayerUIView_commonInitialization;
-(void)_updateVideoGravity;
-(void)setContentMode:(NSInteger)arg0 ;


@end


#endif