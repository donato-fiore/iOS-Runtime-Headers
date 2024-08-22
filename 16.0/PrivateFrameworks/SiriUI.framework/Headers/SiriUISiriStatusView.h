// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUISIRISTATUSVIEW_H
#define SIRIUISIRISTATUSVIEW_H

@class UIView, UILongPressGestureRecognizer, SUICFlamesView, AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, AVPlayerItem, AVAudioSession, UIScreen, NSString;
@protocol SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol, OS_dispatch_queue, SiriUISiriStatusViewAnimationDelegate, SiriUISiriStatusViewDelegate;


#import "SiriUIConfiguration.h"

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol>

 {
    UIView *_touchInputView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_flamesContainerView;
    SUICFlamesView *_flamesView;
    UIView *_glyphView;
    AVPlayerLayer *_glyphLayer;
    AVPlayerLooper *_glyphPlayerLooper;
    AVQueuePlayer *_glyphQueuePlayer;
    AVPlayerItem *_glyphPlayerItem;
    AVAudioSession *_glyphAudioSession;
    NSObject<OS_dispatch_queue> *_glyphConfigurationQueue;
    CGFloat _lastStateChangeTime;
    UIScreen *_screen;
    NSInteger _deferredFlamesViewState;
    SiriUIConfiguration *_configuration;
    BOOL _textInputEnabled;
    BOOL _siriGlyphHidden;
}


@property (weak, nonatomic) NSObject<SiriUISiriStatusViewAnimationDelegate> *animationDelegate; // ivar: _animationDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUISiriStatusViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat disabledMicOpacity; // ivar: _disabledMicOpacity
@property (readonly, nonatomic) UIView *flamesContainerView;
@property (nonatomic) BOOL flamesViewDeferred; // ivar: _flamesViewDeferred
@property (nonatomic) CGFloat flamesViewWidth; // ivar: _flamesViewWidth
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInUITrackingMode) BOOL inUITrackingMode; // ivar: _inUITrackingMode
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) CGFloat statusViewHeight;
@property (readonly) Class superclass;


+(struct CGRect )activeFrameForScreen:(id)arg0 frame:(struct CGRect )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(float)audioLevelForFlamesView:(id)arg0 ;
-(id)_flamesView;
-(id)initWithFrame:(struct CGRect )arg0 screen:(id)arg1 textInputEnabled:(BOOL)arg2 configuration:(id)arg3 ;
-(struct CGRect )_flamesFrame;
-(struct CGRect )_flamesViewFrame;
-(struct CGRect )_siriGlyphTappableRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)_animateSiriGlyphHidden:(BOOL)arg0 ;
-(void)_attachFlamesViewIfNeeded;
-(void)_handleKeyboardDidShowNotification:(id)arg0 ;
-(void)_handleKeyboardWillHideNotification:(id)arg0 ;
-(void)_layoutFlamesViewIfNeeded;
-(void)_micButtonHeld:(id)arg0 ;
-(void)_micButtonTapped:(id)arg0 ;
-(void)_setFlamesViewState:(NSInteger)arg0 ;
-(void)_setupOrbIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)fadeOutCurrentAura;
-(void)forceMicVisible:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)setupOrbIfNeeded;


@end


#endif