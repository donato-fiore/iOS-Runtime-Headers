// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPINTERACTIONSETTINGS_H
#define SBPIPINTERACTIONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBPIPInteractionSettings : PTSettings

@property (nonatomic) BOOL alwaysStartAtSmallestSize; // ivar: _alwaysStartAtSmallestSize
@property (nonatomic) CGFloat defaultContentSizeResetTimeout; // ivar: _defaultContentSizeResetTimeout
@property (nonatomic) NSUInteger freePositioning; // ivar: _freePositioning
@property (nonatomic) CGFloat inFlightHitTestPadding; // ivar: _inFlightHitTestPadding
@property (retain, nonatomic) SBFFluidBehaviorSettings *interactiveFluidBehavior; // ivar: _interactiveFluidBehavior
@property (nonatomic) BOOL keyboardDismissesOnOutsideUserInteractionOnHomescreen; // ivar: _keyboardDismissesOnOutsideUserInteractionOnHomescreen
@property (nonatomic) BOOL keyboardDismissesOnOutsideUserInteractionOutsideHomescreen; // ivar: _keyboardDismissesOnOutsideUserInteractionOutsideHomescreen
@property (nonatomic) BOOL keyboardDismissesOnTransitionToHomescreen; // ivar: _keyboardDismissesOnTransitionToHomescreen
@property (nonatomic) CGFloat maximumSizeSpanForPreferredSizeTuning; // ivar: _maximumSizeSpanForPreferredSizeTuning
@property (nonatomic) CGFloat minimumSizeSpanBetweenPreferredSizes; // ivar: _minimumSizeSpanBetweenPreferredSizes
@property (nonatomic) BOOL panGestureEnabled; // ivar: _panGestureEnabled
@property (nonatomic) BOOL pinchGestureEnabled; // ivar: _pinchGestureEnabled
@property (nonatomic) CGFloat positionDecelerationRate; // ivar: _positionDecelerationRate
@property (nonatomic) CGFloat positionExtenderMaximumDistance; // ivar: _positionExtenderMaximumDistance
@property (nonatomic) CGFloat positionVelocityYWeightOverVelocityX; // ivar: _positionVelocityYWeightOverVelocityX
@property (retain, nonatomic) SBFFluidBehaviorSettings *regionUpdateFluidBehavior; // ivar: _regionUpdateFluidBehavior
@property (nonatomic) CGFloat rotationExtenderMaximumDistance; // ivar: _rotationExtenderMaximumDistance
@property (nonatomic) BOOL rotationGestureEnabled; // ivar: _rotationGestureEnabled
@property (nonatomic) CGFloat rotationPreRecognitionWeight; // ivar: _rotationPreRecognitionWeight
@property (nonatomic) CGFloat rotationRubberBandCoefficient; // ivar: _rotationRubberBandCoefficient
@property (nonatomic) CGFloat scaleDecelerationRate; // ivar: _scaleDecelerationRate
@property (nonatomic) CGFloat scaleExtenderMaximumDistance; // ivar: _scaleExtenderMaximumDistance
@property (nonatomic) CGFloat scaleLowPassFilterPreviousWeight; // ivar: _scaleLowPassFilterPreviousWeight
@property (nonatomic) BOOL shouldStashOnAppToAppTransitions; // ivar: _shouldStashOnAppToAppTransitions
@property (nonatomic) BOOL shouldStashOnTransitionToHomescreen; // ivar: _shouldStashOnTransitionToHomescreen
@property (nonatomic) BOOL shouldStashOnTransitionToSwitcher; // ivar: _shouldStashOnTransitionToSwitcher
@property (nonatomic) BOOL shouldUnstashOnTransitionFromHomescreen; // ivar: _shouldUnstashOnTransitionFromHomescreen
@property (nonatomic) BOOL shouldUnstashOnTransitionFromSwitcher; // ivar: _shouldUnstashOnTransitionFromSwitcher
@property (nonatomic) CGFloat stashProgressTabAppearanceThresholdX; // ivar: _stashProgressTabAppearanceThresholdX
@property (retain, nonatomic) SBFFluidBehaviorSettings *stashTabFluidBehavior; // ivar: _stashTabFluidBehavior
@property (nonatomic) BOOL stashingEnabled; // ivar: _stashingEnabled
@property (nonatomic) BOOL usesKeyboards; // ivar: _usesKeyboards


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif