// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFMAGICHEADSETTINGS_H
#define SFMAGICHEADSETTINGS_H

@class PTSettings;



@interface SFMagicHeadSettings : PTSettings

@property (nonatomic) CGFloat circlesFadeInDurationS; // ivar: _circlesFadeInDurationS
@property (nonatomic) CGFloat circlesFadeOutDurationS; // ivar: _circlesFadeOutDurationS
@property (nonatomic) BOOL cozyUpAnimationEnabled; // ivar: _cozyUpAnimationEnabled
@property (nonatomic) CGFloat cozyUpSelectDurationS; // ivar: _cozyUpSelectDurationS
@property (nonatomic) CGFloat dismissAlphaFriction; // ivar: _dismissAlphaFriction
@property (nonatomic) CGFloat dismissPositionFriction; // ivar: _dismissPositionFriction
@property (nonatomic) CGFloat dismissScaleFriction; // ivar: _dismissScaleFriction
@property (nonatomic) CGFloat guidanceContractDotsHapticEnabled; // ivar: _guidanceContractDotsHapticEnabled
@property (nonatomic) CGFloat guidanceDipSpeed; // ivar: _guidanceDipSpeed
@property (nonatomic) BOOL guidanceEnabled; // ivar: _guidanceEnabled
@property (nonatomic) CGFloat guidanceExpandDotsHapticEnabled; // ivar: _guidanceExpandDotsHapticEnabled
@property (nonatomic) CGFloat guidanceFadeHeadDegrees; // ivar: _guidanceFadeHeadDegrees
@property (nonatomic) CGFloat guidanceGoodAngleThreshold; // ivar: _guidanceGoodAngleThreshold
@property (nonatomic) CGFloat guidanceRecoveredDegreesDelta; // ivar: _guidanceRecoveredDegreesDelta
@property (nonatomic) CGFloat guidanceRestoreHeadDegreesDelta; // ivar: _guidanceRestoreHeadDegreesDelta
@property (nonatomic) CGFloat guidanceRubberbandingStretchiness; // ivar: _guidanceRubberbandingStretchiness
@property (nonatomic) CGFloat guidanceSuppressHapticsDurationS; // ivar: _guidanceSuppressHapticsDurationS
@property (nonatomic) CGFloat guidanceSuppressHapticsEnabled; // ivar: _guidanceSuppressHapticsEnabled
@property (nonatomic) CGFloat guidanceTiltedTooFarAlpha; // ivar: _guidanceTiltedTooFarAlpha
@property (nonatomic) CGFloat guidanceTooFarDegrees; // ivar: _guidanceTooFarDegrees
@property (nonatomic) CGFloat guidanceWorstAngleDegreesDelta; // ivar: _guidanceWorstAngleDegreesDelta
@property (nonatomic) BOOL hapticForCozyUpSelectionEnabled; // ivar: _hapticForCozyUpSelectionEnabled
@property (nonatomic) BOOL rollEnabled; // ivar: _rollEnabled
@property (nonatomic) CGFloat rollMaxDegrees; // ivar: _rollMaxDegrees
@property (nonatomic) CGFloat rollRubberbandingStretchiness; // ivar: _rollRubberbandingStretchiness
@property (nonatomic) CGFloat rotationGateThresholdDegrees; // ivar: _rotationGateThresholdDegrees
@property (nonatomic) BOOL rotationGatedSelectionEnabled; // ivar: _rotationGatedSelectionEnabled
@property (nonatomic) NSInteger rotationStartBigHeadGatingResponsiveness; // ivar: _rotationStartBigHeadGatingResponsiveness
@property (nonatomic) NSInteger rotationStartGatingResponsiveness; // ivar: _rotationStartGatingResponsiveness
@property (nonatomic) NSInteger rotationStopBigHeadGatingResponsiveness; // ivar: _rotationStopBigHeadGatingResponsiveness
@property (nonatomic) NSInteger rotationStopGatingResponsiveness; // ivar: _rotationStopGatingResponsiveness
@property (nonatomic) CGFloat selectedPulseDurationS; // ivar: _selectedPulseDurationS
@property (nonatomic) BOOL selectedPulseEnabled; // ivar: _selectedPulseEnabled
@property (nonatomic) CGFloat selectedPulseScaleAmount; // ivar: _selectedPulseScaleAmount
@property (nonatomic) CGFloat selectionAlphaFriction; // ivar: _selectionAlphaFriction
@property (nonatomic) BOOL selectionDisabled; // ivar: _selectionDisabled
@property (nonatomic) CGFloat selectionPositionFriction; // ivar: _selectionPositionFriction
@property (nonatomic) CGFloat selectionScaleFriction; // ivar: _selectionScaleFriction
@property (nonatomic) BOOL showRangingValues; // ivar: _showRangingValues
@property (nonatomic) BOOL showSelectionGateLock; // ivar: _showSelectionGateLock
@property (nonatomic) BOOL showSelectionMarkers; // ivar: _showSelectionMarkers
@property (nonatomic) CGFloat tapDarkeningAlpha; // ivar: _tapDarkeningAlpha


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif