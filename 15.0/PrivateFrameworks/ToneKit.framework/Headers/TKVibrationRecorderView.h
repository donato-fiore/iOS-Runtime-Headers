// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKVIBRATIONRECORDERVIEW_H
#define TKVIBRATIONRECORDERVIEW_H

@class UIView, UILabel, UIToolbar, NSLayoutConstraint, NSString;
@protocol TKVibrationRecorderTouchSurfaceDelegate, TKVibrationRecorderStyleProvider, NSCopying, TKVibrationRecorderViewDelegate;


#import "TKVibrationRecorderProgressView.h"
#import "TKVibrationRecorderTouchSurface.h"

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate>

 {
    id<TKVibrationRecorderStyleProvider> *_styleProvider;
    UILabel *_instructionsLabel;
    UIToolbar *_bottomLineToolbar;
    UIToolbar *_controlsToolbar;
    TKVibrationRecorderProgressView *_progressView;
    TKVibrationRecorderTouchSurface *_touchSurface;
    NSLayoutConstraint *_bottomLineToolbarBottomConstraint;
    NSLayoutConstraint *_controlsToolbarTopConstraint;
    NSLayoutConstraint *_progressToolbarBottomConstraint;
    NSLayoutConstraint *_touchSurfaceTopConstraint;
    BOOL _isReplayModeEnabled;
    int _leftButtonIdentifier;
    int _rightButtonIdentifier;
    CGFloat _vibrationPatternMaximumDuration;
    CGFloat _currentVibrationProgressDidStartTimestamp;
    CGFloat _currentVibrationComponentDidStartTimestamp;
    BOOL _isWaitingForEndOfCurrentVibrationComponent;
    BOOL _isAnimatingProgress;
    id<NSCopying> *_displayLinkManagerObserverToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TKVibrationRecorderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg0 ;
-(id)_titleForControlsToolbarButtonWithIdentifier:(int)arg0 ;
-(id)initWithVibrationPatternMaximumDuration:(CGFloat)arg0 ;
-(void)_enterWaitingModeWithAnimation:(BOOL)arg0 enablePlayButton:(BOOL)arg1 ;
-(void)_exitWaitingModeWithAnimation:(BOOL)arg0 ;
-(void)_handleLeftButtonTapped:(id)arg0 ;
-(void)_handleRightButtonTapped:(id)arg0 ;
-(void)_handleScreenPeripheryInsetsDidChangeNotification:(id)arg0 ;
-(void)_setLeftButtonIdentifier:(int)arg0 enabled:(BOOL)arg1 rightButtonIdentifier:(int)arg2 enabled:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_updateBottomLineToolbarForPeripheryInsetsChange;
-(void)_updateProgress:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)enterRecordingMode;
-(void)enterReplayModeWithVibrationPattern:(id)arg0 ;
-(void)exitRecordingModeWithPlayButtonEnabled:(BOOL)arg0 ;
-(void)exitReplayMode;
-(void)safeAreaInsetsDidChange;
-(void)startAnimatingProgress;
-(void)stopAnimatingProgress;
-(void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg0 ;
-(void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg0 ;
-(void)vibrationRecorderTouchSurface:(id)arg0 didExitRecordingModeWithContextObject:(id)arg1 ;
-(void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg0 ;


@end


#endif