// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISBASEPLAYERUIVIEW_H
#define ISBASEPLAYERUIVIEW_H

@class UIView, NSString, UIImage, UIImageView, CAFilter, CAMeshTransform;
@protocol ISChangeObserver, ISBasePlayerOutput, OS_dispatch_queue, ISBasePlayerUIViewChangeObserver;


#import "ISPlayerOutputContent.h"
#import "ISBasePlayer.h"
#import "ISVideoPlayerUIView.h"
#import "ISWrappedAVAudioSession.h"

@interface ISBasePlayerUIView : UIView <ISChangeObserver, ISBasePlayerOutput>

 {
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    ISPlayerOutputContent *_content;
    ? _changeObserverRespondsTo;
}


@property (weak, nonatomic, setter=_setChangeObserver:) NSObject<ISBasePlayerUIViewChangeObserver> *_changeObserver; // ivar: __changeObserver
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (retain, nonatomic) UIView *customPhotoView; // ivar: _customPhotoView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingPhoto) BOOL displayingPhoto;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isVideoReadyForDisplay;
@property (retain, nonatomic) UIImage *overrideImage; // ivar: _overrideImage
@property (readonly, nonatomic) UIImageView *photoView; // ivar: _photoView
@property (retain, nonatomic) ISBasePlayer *player; // ivar: _player
@property (nonatomic) CGPoint scaleAnchorOffset; // ivar: _scaleAnchorOffset
@property (readonly) Class superclass;
@property (readonly, nonatomic) ISVideoPlayerUIView *videoBlurView; // ivar: _videoBlurView
@property (readonly, nonatomic) UIView *videoContainerView; // ivar: _videoContainerView
@property (retain, nonatomic) CAFilter *videoFilter; // ivar: _videoFilter
@property (copy, nonatomic) id *videoLayerReadyForDisplayChangeHandler; // ivar: _videoLayerReadyForDisplayChangeHandler
@property (copy, nonatomic) CAMeshTransform *videoTransform; // ivar: _videoTransform
@property (readonly, nonatomic) ISVideoPlayerUIView *videoView; // ivar: _videoView
@property (retain, nonatomic, setter=_setWrappedAudioSession:) ISWrappedAVAudioSession *wrappedAudioSession; // ivar: _wrappedAudioSession


-(id)generateSnapshotImage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_performCommonInitialization;
-(void)_signalChange:(NSUInteger)arg0 withAnimationDuration:(CGFloat)arg1 ;
-(void)_updatePhotoView;
-(void)_updatePlayerAudioSession;
-(void)_updateVideoViewsFrameWithContainerBounds:(struct CGRect )arg0 ;
-(void)applyOutputInfo:(id)arg0 withTransitionOptions:(id)arg1 completion:(id)arg2 ;
-(void)applyScale:(CGFloat)arg0 withTransitionOptions:(id)arg1 completion:(id)arg2 ;
-(void)audioSessionDidChange;
-(void)contentDidChange;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)registerChangeObserver:(id)arg0 ;
-(void)setContent:(id)arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif