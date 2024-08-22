// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETCANVASVIEW_H
#define ETCANVASVIEW_H

@class UIView, NSMutableSet, NSTimer, UILongPressGestureRecognizer, UITouch, NSMutableDictionary, UITapGestureRecognizer, SKScene, UIImageView, AVPlayerLayer, NSString, UIColor;
@protocol ETMessageDelegate, UIGestureRecognizerDelegate, ETCanvasViewDelegate, ETMessageTimeSource;


#import "ETGLSketchView.h"
#import "ETTapMessage.h"
#import "ETHeartbeatMessage.h"
#import "ETKissMessage.h"
#import "ETAngerMessage.h"
#import "DTSSceneView.h"
#import "ETMessage.h"

@interface ETCanvasView : UIView <ETMessageDelegate, UIGestureRecognizerDelegate>

 {
    NSMutableSet *_playingMessages;
    ETGLSketchView *_currentSketchView;
    ETTapMessage *_currentTaps;
    ETHeartbeatMessage *_currentHeartbeat;
    NSTimer *_heartbeatDurationTimer;
    UILongPressGestureRecognizer *_heartbeatRecognizer;
    CGPoint _heartbeatStartCenter;
    CGFloat _lastActivityTimestamp;
    CGFloat _touchesBeganTimestamp;
    NSTimer *_sendMessageTimer;
    NSTimer *_idleTimer;
    BOOL _setAlwaysPaused;
    unsigned short _messageType;
    CGPoint _lastPt;
    UITouch *_drawingTouch;
    BOOL _drawingTouchStartedStroke;
    CGFloat _drawingTouchMovedDistance;
    CGRect _ignoredTouchesRect;
    BOOL _didIgnoreTouchesBegan;
    BOOL _ignoreTouchesUntilAllTouchesEnded;
    NSMutableSet *_touchesDown;
    NSMutableDictionary *_messageIdentifierToDoodleView;
    UITapGestureRecognizer *_tapRecognizer;
    NSTimer *_fastTapAllowableMovementTimer;
    CGFloat _lastFastTapTimestamp;
    UITapGestureRecognizer *_kissRecognizer;
    ETKissMessage *_currentKissMessage;
    UILongPressGestureRecognizer *_angerRecognizer;
    ETAngerMessage *_currentAnger;
    NSTimer *_angerDurationLimitTimer;
    CGFloat _wispDelay;
    BOOL _sketchDidReachSizeLimit;
    SKScene *_scene;
    DTSSceneView *_sceneView;
    UIImageView *_photoView;
    UIView *_videoView;
    AVPlayerLayer *_videoLayer;
}


@property (nonatomic) BOOL angerUsesForceTouch; // ivar: _angerUsesForceTouch
@property (nonatomic) BOOL canComposeAnger; // ivar: _canComposeAnger
@property (nonatomic) BOOL canComposeHeartbeat; // ivar: _canComposeHeartbeat
@property (nonatomic) BOOL canComposeKiss; // ivar: _canComposeKiss
@property (nonatomic) BOOL canComposeTap; // ivar: _canComposeTap
@property (weak, nonatomic) NSObject<ETCanvasViewDelegate> *canvasDelegate; // ivar: _canvasDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *drawingColor; // ivar: _drawingColor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isComposing; // ivar: _isComposing
@property (retain, nonatomic) ETMessage *parentMessage; // ivar: _parentMessage
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<ETMessageTimeSource> *timeSource; // ivar: _timeSource
@property (nonatomic) BOOL useFastVerticalWisp; // ivar: _useFastVerticalWisp
@property (nonatomic) BOOL usesMediaAppearance; // ivar: _usesMediaAppearance


-(BOOL)_areRecognizersTrackingMultipleFingers;
-(BOOL)_canComposeExclusiveMessage;
-(BOOL)_isTapTooRecentAfterKissGesture;
-(BOOL)_sendMessageTimerFired;
-(BOOL)_sketchInProgress;
-(BOOL)_sketchesPaused;
-(BOOL)_tapsInProgress;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_angleOfRotationBetweenTwoFingers:(id)arg0 ;
-(id)composedSketchMessage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_normalizedGesturePoint:(id)arg0 ;
-(struct CGPoint )_viewPointNormalizedInSceneSpace:(struct CGPoint )arg0 ;
-(void)_angerDurationLimitTimerFired;
-(void)_angerRecognized:(id)arg0 ;
-(void)_animateOutSketchView:(id)arg0 withCompletion:(id)arg1 ;
-(void)_checkForIdle;
-(void)_clearDoodleViewForMessage:(id)arg0 ;
-(void)_clearSendMessageTimer;
-(void)_configureAngerRecognizer;
-(void)_createSketchViewWithColor:(id)arg0 time:(CGFloat)arg1 message:(id)arg2 ;
-(void)_doodleEndedWithTouches:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)_endMessage:(id)arg0 withSend:(BOOL)arg1 ;
-(void)_fastTapAllowableMovementTimerFired;
-(void)_heartbeatRecognized:(id)arg0 ;
-(void)_hideAnger;
-(void)_hideHeartbeat;
-(void)_hideHeartbeatTimerFired;
-(void)_kissRecognized:(id)arg0 ;
-(void)_sendAnger;
-(void)_sendHeartbeat;
-(void)_sendKiss;
-(void)_sendSketch;
-(void)_sendTaps;
-(void)_setSketchesPaused:(BOOL)arg0 ;
-(void)_showAngerAtPoint:(struct CGPoint )arg0 ;
-(void)_showHeartbeatAtNormalizedPoint:(struct CGPoint )arg0 rotation:(CGFloat)arg1 ;
-(void)_startCheckForIdleTimer;
-(void)_startDoodleMessageCompositionAtTime:(CGFloat)arg0 ;
-(void)_startFastTapAllowableMovementTimer;
-(void)_startSendMessageTimer;
-(void)_stopCheckForIdleTimer;
-(void)_tapRecognized:(id)arg0 ;
-(void)_updatePhotoViewFrame;
-(void)_updateRecognizersAtEndOfComposition;
-(void)_updateVideoViewFrame;
-(void)clearCanvasAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)endMessageComposition;
-(void)handleDotAtX:(float)arg0 Y:(float)arg1 color:(id)arg2 time:(CGFloat)arg3 isRemote:(BOOL)arg4 ;
-(void)handlePanAtX:(float)arg0 Y:(float)arg1 color:(id)arg2 time:(CGFloat)arg3 state:(NSInteger)arg4 isRemote:(BOOL)arg5 ;
-(void)handleTapAtX:(float)arg0 Y:(float)arg1 color:(id)arg2 time:(CGFloat)arg3 isRemote:(BOOL)arg4 ;
-(void)hidePhoto;
-(void)hideVideo;
-(void)layoutSubviews;
-(void)messageDidStopPlaying:(id)arg0 ;
-(void)messageWillReachSizeLimit:(id)arg0 ;
-(void)messageWillStopPlaying:(id)arg0 ;
-(void)playMessage:(id)arg0 ;
-(void)playTestStrokeWithColor:(id)arg0 duration:(CGFloat)arg1 ;
-(void)sendCurrentMessage;
-(void)setAlwaysPaused:(BOOL)arg0 ;
-(void)setForceTouchEnabled:(BOOL)arg0 ;
-(void)showPhotoForImage:(id)arg0 ;
-(void)showVideoForPlayer:(id)arg0 ;
-(void)startDoodleMessageComposition;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCurrentMessageWithHeartRate:(NSUInteger)arg0 ;
-(void)updateIgnoredTouchesRectForStatusBarSize:(struct CGSize )arg0 ;
-(void)willMoveToWindow:(id)arg0 ;
-(void)wispVisibleSketchViewsWithCompletion:(id)arg0 ;


@end


#endif