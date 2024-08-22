// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSSPATIALPROFILEEARTUTORIALVIEW_H
#define HPSSPATIALPROFILEEARTUTORIALVIEW_H

@class UIView, AVQueuePlayer, AVPlayerLooper, AVPlayerItem, AVPlayerLayer;



@interface HPSSpatialProfileEarTutorialView : UIView {
    AVQueuePlayer *_playerLeftEar;
    AVQueuePlayer *_playerRightEar;
    AVPlayerLooper *_looperLeftEar;
    AVPlayerLooper *_looperRightEar;
    AVPlayerItem *_playerItemLeftEar;
    AVPlayerItem *_playerItemRightEar;
    AVPlayerLayer *_playerLayerLeftEar;
    AVPlayerLayer *_playerLayerRightEar;
    BOOL _playersPlaying;
    BOOL _playersStartTriggered;
    MediaContentStatus _statusRightEar;
    MediaContentStatus _statusLeftEar;
}




-(id)init;
-(void)dealloc;
-(void)initPlayerLeftEar;
-(void)initPlayerRightEar;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startPlayerLeftEar;
-(void)startPlayerRightEar;
-(void)stopPlayerLeftEar;
-(void)stopPlayerRightEar;
-(void)stopPlayers;


@end


#endif