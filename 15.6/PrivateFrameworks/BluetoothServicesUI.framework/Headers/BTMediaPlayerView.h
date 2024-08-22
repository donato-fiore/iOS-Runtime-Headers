// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BTMEDIAPLAYERVIEW_H
#define BTMEDIAPLAYERVIEW_H

@class UIView, AVPlayerLooper, AVQueuePlayer;



@interface BTMediaPlayerView : UIView {
    AVPlayerLooper *_avLooper;
    AVQueuePlayer *_avPlayer;
}




+(Class)layerClass;
-(void)startMovieLoopWithPath:(id)arg0 ;
-(void)startMovieLoopWithPath:(id)arg0 assetType:(int)arg1 adjustmentsURL:(id)arg2 ;
-(void)stop;


@end


#endif