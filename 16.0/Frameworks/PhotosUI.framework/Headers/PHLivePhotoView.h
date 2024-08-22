// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHLIVEPHOTOVIEW_H
#define PHLIVEPHOTOVIEW_H

@class UIView, ISPlayerItem, NSString, PHLivePhoto, NSNumber, UIGestureRecognizer, ISLivePhotoPlayer, ISLivePhotoUIView;
@protocol ISChangeObserver, ISLivePhotoUIViewDelegate, PHLivePhotoViewDelegate;



@interface PHLivePhotoView : UIView <ISChangeObserver, ISLivePhotoUIViewDelegate>

 {
    ? _delegateFlags;
    ? _delegatePrivateFlags;
    NSInteger _currentPlaybackStyle;
}


@property (nonatomic, setter=_setPlaybackRequested:) BOOL _playbackRequested; // ivar: __playbackRequested
@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // ivar: __playerItem
@property (nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality; // ivar: __playingVitality
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHLivePhotoViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingPhoto) BOOL displayingPhoto;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHLivePhoto *livePhoto; // ivar: _livePhoto
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (nonatomic) *CGImage overridePhoto;
@property (retain, nonatomic) NSNumber *overrideSRLCompensationAmount; // ivar: _overrideSRLCompensationAmount
@property (retain, nonatomic) UIView *photoView; // ivar: _photoView
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer;
@property (retain, nonatomic) ISLivePhotoPlayer *player; // ivar: _player
@property (retain, nonatomic) ISLivePhotoUIView *playerView; // ivar: _playerView
@property (nonatomic) CGPoint scaleAnchorOffset; // ivar: _scaleAnchorOffset
@property (nonatomic, setter=_setScrubbing:) BOOL scrubbing; // ivar: _scrubbing
@property (nonatomic) ? seekTime;
@property (nonatomic) BOOL shouldApplyTargetReadiness; // ivar: _shouldApplyTargetReadiness
@property (nonatomic) BOOL showsStatusBorder; // ivar: _showsStatusBorder
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetReadiness; // ivar: _targetReadiness
@property (nonatomic) ? trimmedTimeRange; // ivar: _trimmedTimeRange
@property (nonatomic) NSInteger videoFilterUpdateCounter; // ivar: _videoFilterUpdateCounter


+(id)livePhotoBadgeImageWithOptions:(NSUInteger)arg0 ;
-(BOOL)livePhotoViewCanBeginInteractivePlayback:(id)arg0 ;
-(CGFloat)livePhotoViewExtraMinimumTouchDuration:(id)arg0 touch:(id)arg1 ;
-(id)generateSnapshotImage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applySRLCompensationAmount:(id)arg0 updateCount:(NSInteger)arg1 ;
-(void)_commonPHLivePhotoViewInitialization;
-(void)_handlePlayerItemStatusChanged;
-(void)_updateCurrentPlaybackStyleAndSeeking;
-(void)_updatePlayerAudioEnabled;
-(void)_updatePlayerTargetReadiness;
-(void)_updatePlayingVitality;
-(void)_updateStatusBorder;
-(void)_updateVideoFilter;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)startPlaybackWithStyle:(NSInteger)arg0 ;
-(void)stopPlayback;


@end


#endif