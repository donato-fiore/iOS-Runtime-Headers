// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUAVPLAYERCONTROLLER_H
#define NUAVPLAYERCONTROLLER_H

@class NUObservatory, NSMutableArray, AVAudioMix, AVPlayer, AVAsset, AVVideoComposition;
@protocol NUAVPlayerControllerDelegate;

#import <Foundation/Foundation.h>


@interface NUAVPlayerController : NSObject {
    id *_playerTimeObserver;
    NUObservatory *_observatory;
    ? _playerControllerKVOFlags;
    NSMutableArray *_playerItemObservations;
    BOOL _appliesPerFrameHDRDisplayMetadata;
}


@property (readonly, nonatomic) AVAudioMix *audioMix; // ivar: _audioMix
@property (readonly, nonatomic) ? currentSeekTime; // ivar: _currentSeekTime
@property (readonly, nonatomic) ? currentTime;
@property (readonly, nonatomic) BOOL currentlySeeking;
@property (weak, nonatomic) NSObject<NUAVPlayerControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL loopsVideo; // ivar: _loopsVideo
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval
@property (readonly, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset
@property (readonly, nonatomic) AVVideoComposition *videoComposition; // ivar: _videoComposition


-(BOOL)prepareWithAVAsset:(id)arg0 videoComposition:(id)arg1 audioMix:(id)arg2 loopsVideo:(BOOL)arg3 seekToTime:(struct ? )arg4 ;
-(id)_loopingPlayerItemWithVideoAsset:(id)arg0 videoComposition:(id)arg1 audioMix:(id)arg2 ;
-(id)_playerItemWithVideoAsset:(id)arg0 videoComposition:(id)arg1 audioMix:(id)arg2 ;
-(id)_playerItemsWithVideoAsset:(id)arg0 videoComposition:(id)arg1 audioMix:(id)arg2 loopsVideo:(BOOL)arg3 ;
-(id)init;
-(struct ? )_effectiveTimeForTime:(struct ? )arg0 ;
-(void)_addPlayerItemKVO:(id)arg0 ;
-(void)_addPlayerKVO;
-(void)_addTimeObserver;
-(void)_notifyExternalPlaybackChange:(BOOL)arg0 ;
-(void)_notifyPlaybackRateChange:(float)arg0 ;
-(void)_notifyPlaybackTimeChange:(struct ? )arg0 ;
-(void)_notifyPlayerStatusChange:(NSInteger)arg0 ;
-(void)_removePlayerItemKVO:(id)arg0 ;
-(void)_removePlayerItemKVO:(id)arg0 removeFromArray:(BOOL)arg1 ;
-(void)_removePlayerKVO;
-(void)_removeTimeObserver;
-(void)_setRate:(float)arg0 ;
-(void)addExternalPlaybackObserver:(id)arg0 block:(id)arg1 ;
-(void)addPlaybackRateObserver:(id)arg0 block:(id)arg1 ;
-(void)addPlaybackTimeObserver:(id)arg0 block:(id)arg1 ;
-(void)addPlayerStatusObserver:(id)arg0 block:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)playerItemDidReachEnd:(id)arg0 ;
-(void)playerItemFailedToPlayToEnd:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)seek:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 ;
-(void)seek:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 forceSeek:(BOOL)arg3 ;
-(void)seek:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 forceSeek:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)seekBack;
-(void)seekForward;
-(void)step:(NSInteger)arg0 ;
-(void)updateAppliesPerFrameHDRDisplayMetadata:(BOOL)arg0 ;
-(void)updateAudioMix:(id)arg0 ;
-(void)updateVideoComposition:(id)arg0 ;
-(void)updateWithVideoPrepareNodeFromVideoComposition:(id)arg0 ;


@end


#endif