// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAVPLAYERVIEW_H
#define PLAVPLAYERVIEW_H

@class UIView, AVPlayerLayer, AVPlayer;



@interface PLAVPlayerView : UIView

@property (readonly, retain, nonatomic) AVPlayerLayer *layer;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) NSInteger scaleMode; // ivar: _scaleMode
@property (readonly, nonatomic) CGRect videoRect;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif