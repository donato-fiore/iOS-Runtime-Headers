// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFOOTERANIMATEDICONVIEW_H
#define PXFOOTERANIMATEDICONVIEW_H

@class UIView, AVPlayer, AVPlayerItem, AVPlayerLayer;
@protocol OS_dispatch_queue;



@interface PXFooterAnimatedIconView : UIView {
    NSUInteger _reasonsToPause;
    os_unfair_lock_s _lock;
    NSInteger _lock_desiredMode;
    NSObject<OS_dispatch_queue> *_queue;
    AVPlayer *_player;
    ? _introStartTime;
    ? _loopStartTime;
    ? _loopEndTime;
    ? _outroEndTime;
    float _playerRateBeforePause;
    id *_gridCycleTimeObservationToken;
    NSInteger _waitingState;
    CGFloat _waitingStateStartTime;
}


@property NSInteger desiredMode;
@property (readonly, nonatomic) BOOL isObscured;
@property (nonatomic) BOOL isPlayerHidden; // ivar: _isPlayerHidden
@property (nonatomic) BOOL isPlayerPaused; // ivar: _isPlayerPaused
@property (retain, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem
@property (retain, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (readonly, nonatomic) NSInteger presentedState;
@property (nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) BOOL wantsGridCycleTimeObservation; // ivar: _wantsGridCycleTimeObservation


-(id)_movieURL;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addReasonToPause:(NSUInteger)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationDidEnterForeground:(id)arg0 ;
-(void)_createPlayerIfNeeded;
-(void)_crossedGridCycleBoundary;
-(void)_didPlayerToEndTime:(id)arg0 ;
-(void)_didSeekToPlayFromTime:(struct ? )arg0 toTime:(struct ? )arg1 ;
-(void)_didSeekToTime:(struct ? )arg0 ;
-(void)_hideVideo;
-(void)_layoutPlayer;
-(void)_mediaServicesWereReset:(id)arg0 ;
-(void)_playFromTime:(struct ? )arg0 toTime:(struct ? )arg1 ;
-(void)_removeReasonToPause:(NSUInteger)arg0 ;
-(void)_seekToTime:(struct ? )arg0 ;
-(void)_setNeedsUpdate;
-(void)_transitionToState:(NSInteger)arg0 ;
-(void)_update;
-(void)_updateIsPlayerPaused;
-(void)_updateStyle;
-(void)_windowDidChange;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif