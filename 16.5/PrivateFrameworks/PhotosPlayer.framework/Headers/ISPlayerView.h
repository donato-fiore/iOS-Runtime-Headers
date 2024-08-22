// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISPLAYERVIEW_H
#define ISPLAYERVIEW_H

@class UIView, NSMutableSet, UIGestureRecognizer, NSString, NSError;
@protocol ISChangeObserver, ISBasePlayerDelegate, ISPlayerViewDelegate;


#import "ISPlayerItem.h"
#import "ISBasePlayerUIView.h"
#import "ISWrappedAVPlayer.h"

@interface ISPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate>

 {
    ? _delegateRespondsTo;
    ? _isValid;
}


@property (readonly, nonatomic) NSMutableSet *_activeGestures; // ivar: __activeGestures
@property (retain, nonatomic, setter=_setGestureRecognizer:) UIGestureRecognizer *_gestureRecognizer; // ivar: __gestureRecognizer
@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // ivar: __playerItem
@property (retain, nonatomic, setter=_setPlayerView:) ISBasePlayerUIView *_playerView; // ivar: __playerView
@property (readonly, nonatomic) ISWrappedAVPlayer *_videoPlayer; // ivar: __videoPlayer
@property (nonatomic) BOOL audioMuted; // ivar: _audioMuted
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ISPlayerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize dimensionsOfReservedVideoMemory; // ivar: _dimensionsOfReservedVideoMemory
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInteracting; // ivar: _isInteracting
@property (readonly, nonatomic) BOOL isReadyForDisplay; // ivar: _isReadyForDisplay
@property (nonatomic, setter=_setPlaybackState:) NSInteger playbackState; // ivar: _playbackState
@property (nonatomic) NSUInteger playbackStyle; // ivar: _playbackStyle
@property (nonatomic, setter=_setReadyForDisplay:) BOOL readyForDisplay; // ivar: _readyForDisplay
@property (nonatomic, setter=_setStatus:) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


+(void)setAllowPlayerReuse:(BOOL)arg0 ;
-(BOOL)_needsUpdate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithVideoPlayer:(id)arg0 ;
-(id)videoPlayerForPlayer:(id)arg0 ;
-(void)_handleGesture:(id)arg0 ;
-(void)_invalidatePlaybackState;
-(void)_invalidatePlayerItemLoadingTarget;
-(void)_invalidatePlayerMuted;
-(void)_invalidatePlayerPlayerItem;
-(void)_invalidatePlayerView;
-(void)_invalidateReadyForDisplay;
-(void)_invalidateStatus;
-(void)_setInteracting:(BOOL)arg0 ;
-(void)_updateIfNeeded;
-(void)_updatePlaybackStateIfNeeded;
-(void)_updatePlayerItemLoadingTargetIfNeeded;
-(void)_updatePlayerMutedIfNeeded;
-(void)_updatePlayerPlayerItemIfNeeded;
-(void)_updatePlayerViewIfNeeded;
-(void)_updateReadyForDisplayIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareWithPhoto:(struct CGImage *)arg0 videoAsset:(id)arg1 photoTime:(CGFloat)arg2 photoEXIFOrientation:(int)arg3 ;
-(void)prepareWithPlayerItem:(id)arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;


@end


#endif