// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGOVERLAYVIEW_H
#define ARCOACHINGOVERLAYVIEW_H

@class UIView, UILabel, NSLayoutConstraint, CADisplayLink, NSMutableArray, NSString, ARSession;
@protocol ARInternalSessionObserver, ARCoachingOverlayViewDelegate, ARSessionProviding;


#import "ARCoachingPillButton.h"
#import "ARCoachingState.h"
#import "ARCoachingHeuristicCollection.h"
#import "ARCoachingMotionTracker.h"
#import "ARCoachingAnimationView.h"
#import "ARCoachingSessionCache.h"

@interface ARCoachingOverlayView : UIView <ARInternalSessionObserver>

 {
    UIView *_background;
    UILabel *_coachingText;
    ARCoachingPillButton *_resetButton;
    ARCoachingState *_state;
    ARCoachingHeuristicCollection *_heuristics;
    ARCoachingMotionTracker *_motionTracker;
    NSInteger _coachingRequirements;
    NSInteger _requestedGoal;
    NSInteger _coachingMessageType;
    NSInteger _nextCoachingMessageType;
    NSInteger _nextCoachingAnimationState;
    CGFloat _lastCoachingUpdateTime;
    NSInteger _currentConstraintDeviceOrientation;
    NSLayoutConstraint *_resetButtonBottomLayoutConstraint;
    NSLayoutConstraint *_coachingTextLeftAnchorConstraint;
    NSLayoutConstraint *_coachingTextRightAnchorConstraint;
    ARCoachingAnimationView *_coachingAnimationView;
    CADisplayLink *_displayLink;
    NSMutableArray *_uiAnimationQueue;
    BOOL _uiAnimationQueueRunning;
    BOOL _isSessionRelocalizingMap;
}


@property (nonatomic) BOOL activatesAutomatically; // ivar: _activatesAutomatically
@property (readonly, nonatomic) ARCoachingSessionCache *coachingSessionCache; // ivar: _coachingSessionCache
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARCoachingOverlayViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger geoTrackingStateOverride; // ivar: _geoTrackingStateOverride
@property (nonatomic) BOOL geoTrackingStateOverrideEnabled; // ivar: _geoTrackingStateOverrideEnabled
@property (nonatomic) NSInteger geoTrackingStateReasonOverride; // ivar: _geoTrackingStateReasonOverride
@property (nonatomic) BOOL geoTrackingStateReasonOverrideEnabled; // ivar: _geoTrackingStateReasonOverrideEnabled
@property (nonatomic) NSInteger goal; // ivar: _goal
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideCoachingMessageLabel; // ivar: _hideCoachingMessageLabel
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isRelocalizing;
@property (readonly, nonatomic) BOOL isUIAnimating;
@property (nonatomic) float resetButtonLandscapeVerticalOffset; // ivar: _resetButtonLandscapeVerticalOffset
@property (nonatomic) float resetButtonPortraitVerticalOffset; // ivar: _resetButtonPortraitVerticalOffset
@property (retain, nonatomic) ARSession *session; // ivar: _session
@property (weak, nonatomic) NSObject<ARSessionProviding> *sessionProvider; // ivar: _sessionProvider
@property (readonly) Class superclass;
@property (nonatomic) BOOL trackingStateNormalOverride; // ivar: _trackingStateNormalOverride
@property (nonatomic) NSInteger trackingStateReasonOverride; // ivar: _trackingStateReasonOverride
@property (readonly, nonatomic) BOOL wasEverActivated; // ivar: _wasEverActivated


-(BOOL)checkActivationHeuristics;
-(BOOL)checkDeactivationHeuristics;
-(CGFloat)calcFadeDurationIn:(BOOL)arg0 withButton:(BOOL)arg1 ;
-(NSInteger)currentDeviceOrientation;
-(id)frameWithOverrides:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)buttonPress:(id)arg0 ;
-(void)createConstraintsForDeviceOrientation:(NSInteger)arg0 ;
-(void)crossFadeCoachingMessage:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)doStateAction:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fadeInWithButton:(BOOL)arg0 ;
-(void)fadeOut;
-(void)finishAllUIAnimations;
-(void)generateHeuristicsForActive:(BOOL)arg0 ;
-(void)killUIAnimations;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)orientationChanged;
-(void)resolveCoachingMessageWithFrame:(id)arg0 ;
-(void)restartIfActive;
-(void)session:(id)arg0 didAddAnchors:(id)arg1 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didRemoveAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)session:(id)arg0 willRunWithConfiguration:(id)arg1 ;
-(void)setActive:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setCoachingMessage:(NSInteger)arg0 animationState:(NSInteger)arg1 ;
-(void)setupView;
-(void)startup;
-(void)swapState:(id)arg0 ;
-(void)teardown;
-(void)updateCoachingMessagingWithMotionTracker:(BOOL)arg0 frame:(id)arg1 ;
-(void)updateConstraints;
-(void)updateFromDisplayLink;
-(void)updateUIAnimations;
-(void)updateWithFrame:(id)arg0 ;


@end


#endif