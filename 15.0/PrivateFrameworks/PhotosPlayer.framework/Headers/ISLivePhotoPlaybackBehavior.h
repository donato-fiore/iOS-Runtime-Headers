// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISLIVEPHOTOPLAYBACKBEHAVIOR_H
#define ISLIVEPHOTOPLAYBACKBEHAVIOR_H

@protocol ISLivePhotoPlaybackBehaviorDelegate;


#import "ISBehavior.h"

@interface ISLivePhotoPlaybackBehavior : ISBehavior {
    ? _delegateFlags;
}


@property (nonatomic, setter=_setCurrentPlaybackID:) NSInteger _currentPlaybackID; // ivar: __currentPlaybackID
@property (nonatomic, getter=_isPreparing, setter=_setPreparing:) BOOL _preparing; // ivar: __preparing
@property (nonatomic, setter=_setReadyToPlayPlaybackID:) NSInteger _readyToPlayPlaybackID; // ivar: __readyToPlayPlaybackID
@property (nonatomic, getter=_isVideoReadyToPlay, setter=_setVideoReadyToPlay:) BOOL _videoReadyToPlay; // ivar: __videoReadyToPlay
@property (weak, nonatomic) NSObject<ISLivePhotoPlaybackBehaviorDelegate> *delegate;
@property (readonly, nonatomic) BOOL hasBlurryTransition; // ivar: _hasBlurryTransition
@property (readonly, nonatomic) BOOL immediatelyShowsPhotoWhenPlaybackEnds; // ivar: _immediatelyShowsPhotoWhenPlaybackEnds
@property (readonly, nonatomic) BOOL isTransitioningToPhoto; // ivar: _isTransitioningToPhoto
@property (readonly, nonatomic) ? keyTime; // ivar: _keyTime
@property (readonly, nonatomic) CGFloat photoTransitionDuration; // ivar: _photoTransitionDuration
@property (readonly, nonatomic) ? playbackTimeRange; // ivar: _playbackTimeRange


-(NSInteger)behaviorType;
-(id)initWithInitialLayoutInfo:(id)arg0 keyTime:(struct ? )arg1 playbackTimeRange:(struct ? )arg2 photoTransitionDuration:(CGFloat)arg3 immediatelyShowsPhotoWhenPlaybackEnds:(BOOL)arg4 hasBlurryTransition:(BOOL)arg5 ;
-(void)_didFinishPreparing;
-(void)_handleDidFinish;
-(void)_handleDidFinishPreroll;
-(void)_handleDidSeekToBeginning;
-(void)_prepareVideoForPlaybackIfNeeded;
-(void)_prerollWithCompletionHandler:(id)arg0 ;
-(void)_showVideoWithPlaybackID:(NSInteger)arg0 ;
-(void)_startPlaybackWithPlaybackID:(NSInteger)arg0 ;
-(void)_transitionToVideoWithPlaybackID:(NSInteger)arg0 ;
-(void)activeDidChange;
-(void)startPlayback;
-(void)videoDidPlayToEnd;
-(void)videoWillPlayToEnd;


@end


#endif