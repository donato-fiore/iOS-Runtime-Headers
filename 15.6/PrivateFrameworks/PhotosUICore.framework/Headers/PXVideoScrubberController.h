// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXVIDEOSCRUBBERCONTROLLER_H
#define PXVIDEOSCRUBBERCONTROLLER_H

@class AVPlayerItem;
@protocol PXVideoScrubberControllerDelegate, PXVideoScrubberControllerTarget;


#import "PXObservable.h"
#import "PXScrubberSeekRequest.h"

@interface PXVideoScrubberController : PXObservable {
    id *_playerObserver;
    BOOL _needsUpdate;
    BOOL _avPlayerCurrentTimeNeedsUpdate;
    BOOL _avPlayerDurationNeedsUpdate;
    ? _videoScrubberDelegateFlags;
    ? _targetFlags;
}


@property (retain, nonatomic, setter=_setActiveSeekRequest:) PXScrubberSeekRequest *_activeSeekRequest; // ivar: __activeSeekRequest
@property (nonatomic, setter=_setAvPlayerCurrentTime:) ? _avPlayerCurrentTime; // ivar: __avPlayerCurrentTime
@property (nonatomic, setter=_setAvPlayerDuration:) ? _avPlayerDuration; // ivar: __avPlayerDuration
@property (retain, nonatomic, setter=_setPendingSeekRequest:) PXScrubberSeekRequest *_pendingSeekRequest; // ivar: __pendingSeekRequest
@property (nonatomic, setter=_setPlayheadTime:) CGFloat _playheadTime; // ivar: __playheadTime
@property (readonly, nonatomic) AVPlayerItem *currentPlayerItem;
@property (weak, nonatomic) NSObject<PXVideoScrubberControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat estimatedDuration; // ivar: _estimatedDuration
@property (readonly, nonatomic) CGFloat length;
@property (readonly, nonatomic) float playRate;
@property (nonatomic) CGFloat playheadProgress;
@property (readonly, nonatomic) NSObject<PXVideoScrubberControllerTarget> *target; // ivar: _target


-(CGFloat)_duration;
-(CGFloat)_lengthForDuration:(CGFloat)arg0 ;
-(CGFloat)_progressForTime:(CGFloat)arg0 ;
-(CGFloat)_timeForProgress:(CGFloat)arg0 ;
-(id)init;
-(id)initWithTarget:(id)arg0 estimatedDuration:(CGFloat)arg1 ;
-(id)mutableChangeObject;
-(void)_addObservers;
-(void)_handleTimeoutCallbackForSeekRequest:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidateAvPlayerCurrentTime;
-(void)_invalidateAvPlayerDuration;
-(void)_playerDidChange:(id)arg0 ;
-(void)_playerItemDidChange;
-(void)_playerItemDurationDidChange;
-(void)_playerStatusDidChange;
-(void)_removeObservers;
-(void)_seekRequest:(id)arg0 didFinish:(BOOL)arg1 ;
-(void)_seekToTime:(CGFloat)arg0 ;
-(void)_updateAvPlayerCurrentTimeIfNeeded;
-(void)_updateAvPlayerDurationIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateSeeking;
-(void)beginSeeking;
-(void)dealloc;
-(void)endSeeking;


@end


#endif