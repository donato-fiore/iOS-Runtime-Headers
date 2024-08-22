// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLIVEPHOTOPLAYERVIEW_H
#define SBFLIVEPHOTOPLAYERVIEW_H

@class UIView, NSMutableSet, ISBasePlayerUIView, NSString, UIGestureRecognizer;
@protocol ISChangeObserver, ISBasePlayerDelegate, SBFLivePhotoPlayerViewDelegate;



@interface SBFLivePhotoPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate>

 {
    NSMutableSet *_forcePlaybackReasons;
}


@property (readonly, nonatomic) BOOL _isForcingPlayback;
@property (readonly, nonatomic) ISBasePlayerUIView *_playerUIView; // ivar: __playerUIView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFLivePhotoPlayerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInteracting, setter=_setInteracting:) BOOL interacting; // ivar: _interacting
@property (readonly, nonatomic) NSInteger playbackState;
@property (readonly) Class superclass;


+(id)playerViewWithRewindPlaybackStyle:(BOOL)arg0 ;
-(id)videoPlayerForPlayer:(id)arg0 ;
-(void)_common_configurePlayer:(id)arg0 ;
-(void)_common_configurePlayerView:(id)arg0 ;
-(void)_handlePlaybackGesture:(id)arg0 ;
-(void)_subclass_updateForForcingPlayback:(BOOL)arg0 ;
-(void)_subclass_updatePlayerItemForUse:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareWithPhoto:(struct CGImage *)arg0 videoAsset:(id)arg1 photoTime:(CGFloat)arg2 photoEXIFOrientation:(int)arg3 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)startPlaybackWithReason:(id)arg0 ;
-(void)stopPlaybackWithReason:(id)arg0 ;


@end


#endif