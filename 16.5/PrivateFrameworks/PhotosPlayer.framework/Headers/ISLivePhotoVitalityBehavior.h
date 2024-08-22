// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISLIVEPHOTOVITALITYBEHAVIOR_H
#define ISLIVEPHOTOVITALITYBEHAVIOR_H

@protocol ISLivePhotoVitalityBehaviorDelegate;


#import "ISBehavior.h"

@interface ISLivePhotoVitalityBehavior : ISBehavior {
    id *_easeOutObserver;
    id *_transitionToPhotoObserver;
}


@property (nonatomic, setter=_setShouldPlayAfterPreparation:) BOOL _shouldPlayAfterPreparation; // ivar: __shouldPlayAfterPreparation
@property (readonly, nonatomic) NSUInteger assetOptions; // ivar: _assetOptions
@property (weak, nonatomic) NSObject<ISLivePhotoVitalityBehaviorDelegate> *delegate;
@property (readonly, nonatomic) BOOL pauseDuringTransition; // ivar: _pauseDuringTransition
@property (readonly, nonatomic) CGFloat photoTransitionDuration; // ivar: _photoTransitionDuration
@property (readonly, nonatomic) ? playDuration; // ivar: _playDuration
@property (readonly, nonatomic) float playRate; // ivar: _playRate
@property (readonly, nonatomic) ? playbackEndTime; // ivar: _playbackEndTime
@property (readonly, nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic, getter=isPlayingBeyondPhoto, setter=_setPlayingBeyondPhoto:) BOOL playingBeyondPhoto; // ivar: _playingBeyondPhoto
@property (nonatomic, getter=isPrepared, setter=_setPrepared:) BOOL prepared; // ivar: _prepared
@property (nonatomic, getter=_isPreparing, setter=_setPreparing:) BOOL preparing; // ivar: _preparing


-(NSInteger)behaviorType;
-(id)initWithInitialLayoutInfo:(id)arg0 playbackEndTime:(struct ? )arg1 playDuration:(struct ? )arg2 playRate:(float)arg3 photoTransitionDuration:(CGFloat)arg4 pauseDuringTransition:(BOOL)arg5 assetOptions:(NSUInteger)arg6 ;
-(void)_didReachTransitionTime;
-(void)_didReachTransitionToPhotoTime;
-(void)_handleDidFinishPreroll;
-(void)_handleDidSeekToStartTime;
-(void)_startObservingVideo;
-(void)_startVideoPlayback;
-(void)_stopObservingVideo;
-(void)activeDidChange;
-(void)cancelSettleToPhoto;
-(void)dealloc;
-(void)playVitality;
-(void)prepareForVitality;
-(void)videoReadyForDisplayDidChange;


@end


#endif