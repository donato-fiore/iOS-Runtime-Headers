// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPLAYERVIEW_H
#define PKPLAYERVIEW_H

@class UIView, AVQueuePlayer, AVPlayerViewController, AVPlayerLooper;



@interface PKPlayerView : UIView {
    AVQueuePlayer *_player;
    AVPlayerViewController *_controller;
    AVPlayerLooper *_playerLooper;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)playItemAtURL:(id)arg0 ;


@end


#endif