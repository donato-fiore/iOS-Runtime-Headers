// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAUTOLOOPMOVIEBALLOONVIEW_H
#define CKAUTOLOOPMOVIEBALLOONVIEW_H

@class ISWrappedAVAudioSession, ISWrappedAVPlayer, NSString, UIImageView, UIView, ISVideoPlayerUIView;
@protocol ISWrappedAVPlayerDelegate, ISChangeObserver;


#import "CKImageBalloonView.h"
#import "CKMovieMediaObject.h"

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISWrappedAVPlayerDelegate, ISChangeObserver>



@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession; // ivar: _audioSession
@property (retain, nonatomic) ISWrappedAVPlayer *avPlayer; // ivar: _avPlayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isJellyfishVideo; // ivar: _isJellyfishVideo
@property (nonatomic) BOOL isListeningToVideoPlayer; // ivar: _isListeningToVideoPlayer
@property (nonatomic) BOOL isMuted; // ivar: _isMuted
@property (retain, nonatomic) CKMovieMediaObject *mediaObject; // ivar: _mediaObject
@property (retain, nonatomic) UIImageView *muteButton; // ivar: _muteButton
@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (readonly) Class superclass;
@property (retain, nonatomic) ISVideoPlayerUIView *videoPlayer; // ivar: _videoPlayer


+(BOOL)isEnabled;
+(Class)AVPlayerClass;
+(Class)AVPlayerLayerClass;
+(Class)VideoPlayerUIViewClass;
+(id)_autoloopAVAudioSessionQueue;
-(BOOL)_applicationStateAcceptableForLooping;
-(BOOL)_shouldAutoPlay;
-(BOOL)_shouldPauseInitialLooping;
-(BOOL)_shouldPresentQuickLookOnTap;
-(BOOL)_thermalStateAcceptableForLooping;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_removeSnapshot;
-(void)_thermalStateDidChange:(id)arg0 ;
-(void)avPlayer:(id)arg0 itemDidPlayToEnd:(id)arg1 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForAcknowledgementDismissal;
-(void)prepareForAcknowledgementDisplay;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)previewDidChange:(id)arg0 ;
-(void)startListeningToVideoPlayer;
-(void)stopListeningToVideoPlayer;
-(void)tapGestureRecognized:(id)arg0 ;


@end


#endif