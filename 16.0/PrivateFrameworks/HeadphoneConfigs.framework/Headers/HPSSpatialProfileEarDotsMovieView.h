// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSSPATIALPROFILEEARDOTSMOVIEVIEW_H
#define HPSSPATIALPROFILEEARDOTSMOVIEVIEW_H

@class UIView, AVPlayerItem, AVPlayerLayer, AVPlayer;



@interface HPSSpatialProfileEarDotsMovieView : UIView {
    AVPlayerItem *_playerItem;
    AVPlayerLayer *_playerLayer;
}


@property (retain) AVPlayer *player; // ivar: _player
@property (retain) id *timeObserverToken; // ivar: _timeObserverToken


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addBoundaryTimeObserver;
-(void)dealloc;
-(void)hideDots;
-(void)removeBoundaryTimeObserver;
-(void)showDots;


@end


#endif