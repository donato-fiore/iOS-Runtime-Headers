// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISLIVEPHOTOUIVIEW_H
#define ISLIVEPHOTOUIVIEW_H

@class UIImpactFeedbackGenerator, UILabel, NSString, UIGestureRecognizer, CAMeshTransform;
@protocol UIGestureRecognizerDelegate, ISChangeObserver, ISLivePhotoUIViewDelegate;


#import "ISBasePlayerUIView.h"
#import "ISTouchLivePhotoPlaybackFilter.h"
#import "ISLivePhotoPlayer.h"

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIGestureRecognizerDelegate, ISChangeObserver>

 {
    UIImpactFeedbackGenerator *_feedbackGenerator;
    ? _delegateRespondsTo;
}


@property (nonatomic, setter=_setOverlayDismissalID:) NSInteger _overlayDismissalID; // ivar: __overlayDismissalID
@property (readonly, nonatomic) UILabel *_overlayLabel; // ivar: __overlayLabel
@property (retain, nonatomic, setter=_setPlaybackFilter:) ISTouchLivePhotoPlaybackFilter *_playbackFilter; // ivar: __playbackFilter
@property (nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality; // ivar: __playingVitality
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ISLivePhotoUIViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // ivar: _playbackGestureRecognizer
@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (readonly) Class superclass;
@property (copy, nonatomic) CAMeshTransform *vitalityTransform; // ivar: _vitalityTransform


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)livePhotoPlayer;
-(void)_ISLivePhotoUIViewCommonInitialization;
-(void)_dismissOverlayLabel:(NSInteger)arg0 ;
-(void)_handlePlaybackRecognizer:(id)arg0 ;
-(void)_showOverlayLabel;
-(void)_updateGestureRecognizerParameters;
-(void)_updatePlaybackFilter;
-(void)_updatePlaybackFilterInput;
-(void)_updateVideoTransform;
-(void)audioSessionDidChange;
-(void)contentDidChange;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif