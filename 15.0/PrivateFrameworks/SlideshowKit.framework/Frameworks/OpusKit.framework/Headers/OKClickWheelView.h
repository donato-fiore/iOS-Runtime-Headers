// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKCLICKWHEELVIEW_H
#define OKCLICKWHEELVIEW_H

@class OFUIView, OFUIButton, UIGestureRecognizer, CAShapeLayer, UIImageView, UILabel, NSOperationQueue, NSString;
@protocol UIGestureRecognizerDelegate, OKAudioPlaylistDelegate, CAAnimationDelegate, OKClickWheelViewDelegate;


#import "OKCircleGestureRecognizer.h"
#import "OKPresentationViewAllGestureRecognizer.h"
#import "OKAudioPlaylist.h"

@interface OKClickWheelView : OFUIView <UIGestureRecognizerDelegate, OKAudioPlaylistDelegate, CAAnimationDelegate>

 {
    OFUIView *_containerView;
    OFUIButton *_playButton;
    BOOL _isAnimating;
    UIGestureRecognizer *_tapGestureRecognizer;
    OKCircleGestureRecognizer *_circleGestureRecognizer;
    OKPresentationViewAllGestureRecognizer *_allGestureRecognizer;
    BOOL _delegateRespondToDidCircleGesture;
    BOOL _delegateRespondWillAppear;
    BOOL _delegateRespondWillDisappear;
    BOOL _delegateRespondShouldAppear;
    CAShapeLayer *_volumeLayer;
    CAShapeLayer *_progressLayer;
    OFUIView *_musicInformationView;
    UIImageView *_thumbnailMusic;
    UILabel *_titleMusic;
    UILabel *_artisteName;
    UILabel *_beatsSentence;
    UIImageView *_chevronView;
    NSOperationQueue *_fetchInformationsQueue;
    BOOL _isInformationLoaded;
    OFUIButton *_closeButton;
}


@property (nonatomic) OKAudioPlaylist *audioPlaylist; // ivar: _audioPlaylist
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OKClickWheelViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly) Class superclass;
@property (nonatomic) CGFloat volume; // ivar: _volume
@property (nonatomic) BOOL wantsProgress; // ivar: _wantsProgress


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isPresented;
-(id)animationForKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 duration:(CGFloat)arg3 timmingFunctionName:(id)arg4 delegate:(id)arg5 ;
-(id)initWithContainerView:(id)arg0 andAuthoringGuidelines:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupLayerShadowForLabel:(id)arg0 ;
-(void)activateProgress:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)audioFinishedPlayingWithAVAsset:(id)arg0 ;
-(void)audioStartedPlayingWithAVAsset:(id)arg0 ;
-(void)buttonPressed:(id)arg0 ;
-(void)closeButtonPressed:(id)arg0 ;
-(void)dealloc;
-(void)handleAllGestures:(id)arg0 ;
-(void)handleLongPress:(id)arg0 ;
-(void)hide;
-(void)initAlbumInformationView;
-(void)initButtons;
-(void)initGesture;
-(void)layoutSubviews;
-(void)notifyProgress:(id)arg0 ;
-(void)show;
-(void)updateMusicInformation:(id)arg0 ;


@end


#endif