// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIPEARLENROLLVIEW_H
#define BKUIPEARLENROLLVIEW_H

@class UIView, UILabel, NSDate, NSString, NSTimer, AVPlayer, CAShapeLayer, OBAnimationController, OBAnimationView, UILayoutGuide, NSArray, NSLayoutConstraint;
@protocol BKUIVideoCaptureSesssionDelegate, BKUIPearlEnrollViewDelegate, BKUIPearlEnrollViewStateTransitionDelegate;


#import "BKUIPearlVideoCaptureSession.h"
#import "BKUIPearlPositioningGuideView.h"
#import "BKUIPearlCrossHairsView.h"
#import "BKUIPearlPillContainerView.h"
#import "BKUIPearlMovieLoopView.h"

@interface BKUIPearlEnrollView : UIView <BKUIVideoCaptureSesssionDelegate>

 {
    BKUIPearlVideoCaptureSession *_videoCaptureSession;
    BOOL _didStartCapture;
    BOOL _activated;
    UIView *_cameraShadeView;
    BOOL _progressiveBlur;
    CGFloat _currentCorrectedPitch;
    BOOL _blurInProgress;
    UILabel *_repositionPhoneLabel;
    NSDate *_startTime;
    NSUInteger _frameCount;
    NSString *_debugFrameInformation;
    NSString *_debugTemplateInformation;
    NSString *_debugStatusInformation;
    CGFloat _pitchCorrectionSamples;
    CGFloat _pitchCorrection;
    NSUInteger _correctionSamplesCount;
    CGFloat _pitchMin;
    CGFloat _pitchMax;
    NSUInteger _fillHoldoffFrameCount;
    BOOL _stateTransitionInProgress;
    NSDate *_stateStart;
    NSTimer *_nudgeTimer;
    BOOL _nudging;
    NSUInteger _nudgesNudged;
    BOOL _nudgesPaused;
    AVPlayer *_tutorialPlayer;
    BOOL _entryAnimationAlreadyRan;
    BKUIPearlPositioningGuideView *_positioningGuide;
    UIView *_circleMaskView;
    CAShapeLayer *_circleMaskLayer;
    UIView *_roundedRectMaskView;
    CAShapeLayer *_roundedRectMaskLayer;
    UILabel *_debugLabel;
    NSUInteger _pendingRaiseLowerGuidanceState;
    BOOL _raiseLowerGuidanceStatePending;
    NSTimer *_raiseLowerGuidanceDelayTimer;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) OBAnimationController *animationController; // ivar: _animationController
@property (retain, nonatomic) OBAnimationView *animationView; // ivar: _animationView
@property (retain, nonatomic) BKUIPearlCrossHairsView *crossHairs; // ivar: _crossHairs
@property (nonatomic) BOOL debugOverlayVisible; // ivar: _debugOverlayVisible
@property (weak, nonatomic) NSObject<BKUIPearlEnrollViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL inSheet; // ivar: _inSheet
@property (retain, nonatomic) BKUIPearlPillContainerView *pillContainer; // ivar: _pillContainer
@property (readonly, nonatomic) UILayoutGuide *portalLayoutGuide; // ivar: _portalLayoutGuide
@property (retain, nonatomic) NSArray *portalLayoutGuideConstraints; // ivar: _portalLayoutGuideConstraints
@property (nonatomic) BOOL squareNeedsPositionLayout; // ivar: _squareNeedsPositionLayout
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSLayoutConstraint *successAnimationViewCenterYConstraint; // ivar: _successAnimationViewCenterYConstraint
@property (weak, nonatomic) NSObject<BKUIPearlEnrollViewStateTransitionDelegate> *transitionDelegate; // ivar: _transitionDelegate
@property (nonatomic, getter=isTransitioningToState) BOOL transitioningToState; // ivar: _transitioningToState
@property (retain, nonatomic) BKUIPearlMovieLoopView *tutorialMovieView; // ivar: _tutorialMovieView


-(BOOL)_animateCircleMaskWithPositioningGuide;
-(BOOL)expectsRunningVideoCaptureSession:(id)arg0 ;
-(BOOL)needsMaskedNeedsPositionStyleEnrollment;
-(CGFloat)_nonOccludingCircleMaskRadius;
-(CGFloat)_previewZoomLevel;
-(CGFloat)_progressiveBlurAmountForPitch:(CGFloat)arg0 ;
-(CGFloat)completedRingRadius;
-(CGFloat)percentOfPillsCompleted;
-(CGFloat)pillRingRadius;
-(CGFloat)portalRadius;
-(CGFloat)tutorialRingRadius;
-(id)_enrollMaskPathWithRadius:(CGFloat)arg0 ;
-(id)_maskPathWithRadius:(CGFloat)arg0 inFrame:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 videoCaptureSession:(id)arg1 inSheet:(BOOL)arg2 positioningGuideView:(id)arg3 squareNeedsPositionLayout:(BOOL)arg4 ;
-(id)initWithFrame:(struct CGRect )arg0 videoCaptureSession:(id)arg1 inSheet:(BOOL)arg2 squareNeedsPositionLayout:(BOOL)arg3 ;
-(id)initWithVideoCaptureSession:(id)arg0 inSheet:(BOOL)arg1 squareNeedsPositionLayout:(BOOL)arg2 ;
-(id)previewLayer;
-(struct CATransform3D )_needsPositioningPreviewTransform;
-(struct CATransform3D )_scanningAndPartialCapturePreviewTransform;
-(struct CGPoint )portalCenter;
-(struct CGPoint )portalOffset;
-(struct CGSize )tutorialMovieSize;
-(void)_animateToEntryAnimation;
-(void)_animateToFinishedWithCompletion:(id)arg0 ;
-(void)_animateToFirstScanCompleteWithCompletion:(id)arg0 ;
-(void)_animateToFirstScanWithCompletion:(id)arg0 ;
-(void)_animateToNeedsCenterBinWithCompletion:(id)arg0 ;
-(void)_animateToNeedsPositioningFromState:(int)arg0 withCompletion:(id)arg1 ;
-(void)_animateToPartialCaptureWithCompletion:(id)arg0 ;
-(void)_animateToScanCompleteWithCompletion:(id)arg0 ;
-(void)_animateToScanningStateWithCompletion:(id)arg0 ;
-(void)_animateToState:(int)arg0 fromState:(int)arg1 completion:(id)arg2 ;
-(void)_animateToTutorialWithCompletion:(id)arg0 ;
-(void)_cleanupUIState;
-(void)_endAndCleanupEnrollSessionIfNeeded;
-(void)_nudgeIfNecessary;
-(void)_recordDataFrameWithFaceState:(id)arg0 ;
-(void)_runTutorialLoopWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 loopDelay:(CGFloat)arg2 ;
-(void)_setRaiseLowerGuidanceLabelState:(NSUInteger)arg0 ;
-(void)_startNudgeTimer;
-(void)_stopNudgeTimer;
-(void)_updateCorrectionEstimates:(CGFloat)arg0 yaw:(CGFloat)arg1 ;
-(void)_updateDebugOverlay;
-(void)_updateRaiseLowerGuidanceLabelIfNeededForPitch:(CGFloat)arg0 ;
-(void)_updateToNeedsPositionWithoutAnimationWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)didDisappear;
-(void)layoutSubviews;
-(void)postEnrollDeActivate;
-(void)preEnrollActivate;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setCameraBlurAmount:(CGFloat)arg0 useShade:(BOOL)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)setCameraBlurred:(BOOL)arg0 ;
-(void)setCrosshairsHidden:(BOOL)arg0 ;
-(void)setFailed;
-(void)setMovieViewHidden:(BOOL)arg0 ;
-(void)setNudgesPaused:(BOOL)arg0 ;
-(void)setPillsHidden:(BOOL)arg0 ;
-(void)setPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 ;
-(void)setSuspended:(BOOL)arg0 ;
-(void)setupAnimationViewWithSuperView:(id)arg0 ;
-(void)startCapture;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePortalLayoutGuide;
-(void)updateWithFaceState:(id)arg0 ;
-(void)updateWithProgress:(id)arg0 ;


@end


#endif