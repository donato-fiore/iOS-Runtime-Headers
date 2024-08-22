// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMZOOMCONTROL_H
#define CAMZOOMCONTROL_H

@class UIControl, UIView, NSArray, NSSet, NSDate, NSTimer, NSString;
@protocol CAMZoomButtonDelegate, CAMZoomControlDelegate;


#import "CAMZoomControlButtonMaskView.h"
#import "CAMZoomButtonPlatter.h"
#import "CAMFeedbackController.h"
#import "CAMZoomButton.h"
#import "CAMZoomDial.h"

@interface CAMZoomControl : UIControl <CAMZoomButtonDelegate>

 {
    ? _delegateFlags;
}


@property (readonly, nonatomic) CAMZoomControlButtonMaskView *_buttonMaskView; // ivar: __buttonMaskView
@property (readonly, nonatomic) CAMZoomButtonPlatter *_buttonPlatter; // ivar: __buttonPlatter
@property (readonly, nonatomic, getter=_isButtonPlatterSupportedForConfiguration) BOOL _buttonPlatterSupportedForConfiguration;
@property (readonly, nonatomic) UIView *_dialClippingView; // ivar: __dialClippingView
@property (readonly, nonatomic) CGFloat _displayMaximumZoomFactor;
@property (readonly, nonatomic) CGFloat _displayMinimumZoomFactor;
@property (retain, nonatomic, setter=_setDisplayZoomFactors:) NSArray *_displayZoomFactors; // ivar: __displayZoomFactors
@property (nonatomic, getter=_isEligibleForSwipeDownToDismiss, setter=_setEligibleForSwipeDownToDismiss:) BOOL _eligibleForSwipeDownToDismiss; // ivar: __eligibleForSwipeDownToDismiss
@property (nonatomic, getter=_isEligibleForZoomFactorLabelTaps, setter=_setEligibleForZoomFactorLabelTaps:) BOOL _eligibleForZoomFactorLabelTaps; // ivar: __eligibleForZoomFactorLabelTaps
@property (readonly, nonatomic) CAMFeedbackController *_feedbackController; // ivar: __feedbackController
@property (nonatomic, setter=_setHideAnimationInProgressDuration:) CGFloat _hideAnimationInProgressDuration; // ivar: __hideAnimationInProgressDuration
@property (retain, nonatomic, setter=_setHighlightedZoomButton:) CAMZoomButton *_highlightedZoomButton; // ivar: __highlightedZoomButton
@property (nonatomic) NSInteger _lastHapticZone; // ivar: __lastHapticZone
@property (nonatomic, setter=_setPreviousTouchLocation:) CGPoint _previousTouchLocation; // ivar: __previousTouchLocation
@property (nonatomic, setter=_setPreviousTouchTime:) CGFloat _previousTouchTime; // ivar: __previousTouchTime
@property (readonly, nonatomic) BOOL _shouldHideZoomButtonBackground;
@property (readonly, nonatomic) BOOL _shouldShowButtonPlatter;
@property (nonatomic, setter=_setShouldShowZoomDial:) BOOL _shouldShowZoomDial; // ivar: __shouldShowZoomDial
@property (readonly, nonatomic) BOOL _shouldSnapDialToSwitchOverZoomFactors;
@property (readonly, nonatomic) BOOL _shouldUseZoomDialMask;
@property (retain, nonatomic, setter=_setSignificantHapticDisplayValueEpsilons:) NSArray *_significantHapticDisplayValueEpsilons; // ivar: __significantHapticDisplayValueEpsilons
@property (retain, nonatomic, setter=_setSignificantHapticDisplayValueSwitchOverIndexes:) NSSet *_significantHapticDisplayValueSwitchOverIndexes; // ivar: __significantHapticDisplayValueSwitchOverIndexes
@property (retain, nonatomic, setter=_setSignificantHapticDisplayValues:) NSArray *_significantHapticDisplayValues; // ivar: __significantHapticDisplayValues
@property (nonatomic, setter=_setSnappedZoomFactor:) CGFloat _snappedZoomFactor; // ivar: __snappedZoomFactor
@property (retain, nonatomic, setter=_setStartTimeForHideAnimationInProgress:) NSDate *_startTimeForHideAnimationInProgress; // ivar: __startTimeForHideAnimationInProgress
@property (nonatomic, setter=_setStartTouchLocation:) CGPoint _startTouchLocation; // ivar: __startTouchLocation
@property (readonly, nonatomic) NSArray *_switchOverZoomFactors;
@property (nonatomic, setter=_setUnsnappingProgress:) CGFloat _unsnappingProgress; // ivar: __unsnappingProgress
@property (readonly, nonatomic) CAMZoomButton *_zoomButton; // ivar: __zoomButton
@property (nonatomic, setter=_setZoomControlMode:) NSInteger _zoomControlMode; // ivar: __zoomControlMode
@property (readonly, nonatomic) CAMZoomDial *_zoomDial; // ivar: __zoomDial
@property (nonatomic, getter=_isZoomDialEnabled, setter=_setZoomDialEnabled:) BOOL _zoomDialEnabled; // ivar: __zoomDialEnabled
@property (retain, nonatomic, setter=_setZoomDialVisibilityTimer:) NSTimer *_zoomDialVisibilityTimer; // ivar: __zoomDialVisibilityTimer
@property (retain, nonatomic, setter=_setZoomFactors:) NSArray *_zoomFactors; // ivar: __zoomFactors
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMZoomControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat displayZoomValue;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) CGFloat leftMargin; // ivar: _leftMargin
@property (nonatomic) CGFloat maxAvailableZoomFactor; // ivar: _maxAvailableZoomFactor
@property (readonly, nonatomic) CGFloat maximumZoomFactor;
@property (nonatomic) CGFloat minAvailableZoomFactor; // ivar: _minAvailableZoomFactor
@property (readonly, nonatomic) CGFloat minimumZoomFactor;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic, getter=isShowingZoomDial) BOOL showingZoomDial;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger zoomButtonAccessoryState;
@property (readonly, nonatomic) NSInteger zoomButtonContentType;
@property (nonatomic) CGFloat zoomButtonMaxYWhenContracted; // ivar: _zoomButtonMaxYWhenContracted
@property (readonly, nonatomic) NSInteger zoomButtonSymbol;
@property (readonly, nonatomic) CGFloat zoomDialBorderWidth;
@property (nonatomic) CGFloat zoomDialContentMaskingHeight;
@property (nonatomic) CGFloat zoomDialRadius; // ivar: _zoomDialRadius
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor


-(BOOL)_isPointWithinButtonPlatter:(struct CGPoint )arg0 ;
-(BOOL)_isTouchWithinButtonPlatter:(id)arg0 ;
-(BOOL)_isWithinZoomButtonAccessoryAtLocationInZoomButton:(struct CGPoint )arg0 ;
-(BOOL)_isWithinZoomButtonBoundsWithTouch:(id)arg0 ;
-(BOOL)_shouldInterceptTouchesForHidingZoomDial;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)configureForContinuousZoomWithZoomFactor:(CGFloat)arg0 zoomFactors:(id)arg1 displayZoomFactors:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(CGFloat)_accelerationForMovementFromPointFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 elapsedTime:(CGFloat)arg2 ;
-(CGFloat)_additionalAccelerationForMovementFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 deltaX:(CGFloat)arg2 ;
-(CGFloat)_dampingFactorForDistanceFromDialForPoint:(struct CGPoint )arg0 ;
-(CGFloat)_dampingFactorForMovementFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(CGFloat)_dampingFactorForPerpendicularityFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(CGFloat)_displayZoomValueForZoomFactor:(CGFloat)arg0 ;
-(CGFloat)_distanceFromDialClippingViewToPoint:(struct CGPoint )arg0 ;
-(CGFloat)_normalizeValue:(CGFloat)arg0 betweenMinimumValue:(CGFloat)arg1 maximumValue:(CGFloat)arg2 ;
-(CGFloat)_zoomFactorForDisplayZoomValue:(CGFloat)arg0 ;
-(NSInteger)_hapticZoneForDisplayValue:(CGFloat)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_cancelDelayedZoomDialVisibilityChange;
-(void)_cleanupForCancelTracking;
-(void)_configureForControlMode:(NSInteger)arg0 zoomFactor:(CGFloat)arg1 zoomFactors:(id)arg2 displayZoomFactors:(id)arg3 zoomButtonContentType:(NSInteger)arg4 animated:(BOOL)arg5 ;
-(void)_handleButtonTapped:(id)arg0 ;
-(void)_handleButtonTappedForContinuousModeWithPlatter:(id)arg0 ;
-(void)_handleButtonTappedForDualCameraMode;
-(void)_handleButtonTappedForSelection:(id)arg0 ;
-(void)_handleButtonTappedForSingleCameraZoomPlusToggle;
-(void)_handleZoomDialVisibilityTimerFiredWithUserInfo:(id)arg0 ;
-(void)_resetSnapping;
-(void)_updateDisplayedValuesAnimated:(BOOL)arg0 ;
-(void)_updateHapticEpsilons;
-(void)_updateHaptics:(BOOL)arg0 ;
-(void)_updateMaskViewForZoomButtonHighlightingTransform;
-(void)_updateSignificantValuesForHaptics;
-(void)_updateSubviewsAlphasWithDuration:(CGFloat)arg0 forConfigurationChange:(BOOL)arg1 ;
-(void)_updateZoomButtonTappableEdgeInsets;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)configureForDualDeviceWithZoomFactor:(CGFloat)arg0 minimumZoomFactor:(CGFloat)arg1 displayMinimumZoomFactor:(CGFloat)arg2 maximumZoomFactor:(CGFloat)arg3 displayMaximumZoomFactor:(CGFloat)arg4 dualCameraSwitchOverZoomFactor:(CGFloat)arg5 displayDualCameraSwitchOverZoomFactor:(CGFloat)arg6 ;
-(void)configureForSelectionOnlyWithDisplayZoomFactors:(id)arg0 selectedIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)configureForSingleCameraPlusToggleWithZoomFactor:(CGFloat)arg0 minimumZoomFactor:(CGFloat)arg1 displayMinimumZoomFactor:(CGFloat)arg2 maximumZoomFactor:(CGFloat)arg3 displayMaximumZoomFactor:(CGFloat)arg4 ;
-(void)configureForToggleOnlyWithZoomFactor:(CGFloat)arg0 displayZoomFactor:(CGFloat)arg1 ;
-(void)configureForTripleDeviceWithZoomFactor:(CGFloat)arg0 minimumZoomFactor:(CGFloat)arg1 displayMinimumZoomFactor:(CGFloat)arg2 maximumZoomFactor:(CGFloat)arg3 displayMaximumZoomFactor:(CGFloat)arg4 switchOverZoomFactor1:(CGFloat)arg5 displaySwitchOverZoomFactor1:(CGFloat)arg6 switchOverZoomFactor2:(CGFloat)arg7 displaySwitchOverZoomFactor2:(CGFloat)arg8 ;
-(void)configureForZoomSymbolToggle;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setShouldShowZoomDial:(BOOL)arg0 animationDuration:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)zoomButtonDidLayout;


@end


#endif