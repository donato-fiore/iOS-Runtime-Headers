// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSBATTERYCHARGINGRINGVIEW_H
#define CSBATTERYCHARGINGRINGVIEW_H

@class CALayer, SBUILegibilityLabel, UIView, CABackdropLayer, UIImageView, BCBatteryDevice, BSAbsoluteMachTimer;


#import "CSBatteryChargingView.h"
#import "CSRingLayer.h"
#import "CSMagSafeAccessoryConfiguration.h"
#import "CSMagSafePowerStatus.h"
#import "CSMagSafeSilhouetteConfiguration.h"

@interface CSBatteryChargingRingView : CSBatteryChargingView

@property (retain, nonatomic) CALayer *auxiliaryBatteryContainerLayer; // ivar: _auxiliaryBatteryContainerLayer
@property (retain, nonatomic) SBUILegibilityLabel *auxiliaryBatteryLabel; // ivar: _auxiliaryBatteryLabel
@property (retain, nonatomic) CSRingLayer *auxiliaryBatteryLevelRing; // ivar: _auxiliaryBatteryLevelRing
@property (retain, nonatomic) UIView *auxiliaryBatteryPillClippingView; // ivar: _auxiliaryBatteryPillClippingView
@property (retain, nonatomic) UIView *auxiliaryBatteryPillLevelView; // ivar: _auxiliaryBatteryPillLevelView
@property (retain, nonatomic) UIView *auxiliaryBatteryPillTrackView; // ivar: _auxiliaryBatteryPillTrackView
@property (retain, nonatomic) CSRingLayer *auxiliaryBatteryTrackFillRingLayer; // ivar: _auxiliaryBatteryTrackFillRingLayer
@property (retain, nonatomic) CABackdropLayer *auxiliaryCaptureBackdrop; // ivar: _auxiliaryCaptureBackdrop
@property (retain, nonatomic) CALayer *auxiliaryChargingBoltGlyph; // ivar: _auxiliaryChargingBoltGlyph
@property (retain, nonatomic) CALayer *auxiliaryChargingBoltGlyphMask; // ivar: _auxiliaryChargingBoltGlyphMask
@property (retain, nonatomic) UIImageView *auxiliaryGlyphImageView; // ivar: _auxiliaryGlyphImageView
@property (retain, nonatomic) CALayer *auxiliaryGlyphLayer; // ivar: _auxiliaryGlyphLayer
@property (retain, nonatomic) CABackdropLayer *averageColorBackdropLayer; // ivar: _averageColorBackdropLayer
@property (retain, nonatomic) CABackdropLayer *backgroundBackdropLayer; // ivar: _backgroundBackdropLayer
@property (retain, nonatomic) CABackdropLayer *backgroundRadiusBackdropLayer; // ivar: _backgroundRadiusBackdropLayer
@property (retain, nonatomic) CSRingLayer *batteryLevelRing; // ivar: _batteryLevelRing
@property (retain, nonatomic) UIImageView *boltMaskImageView; // ivar: _boltMaskImageView
@property (retain, nonatomic) SBUILegibilityLabel *chargePercentLabel; // ivar: _chargePercentLabel
@property (retain, nonatomic) CALayer *chargingBoltGlyph; // ivar: _chargingBoltGlyph
@property (retain, nonatomic) UIView *chargingContainerView; // ivar: _chargingContainerView
@property (retain, nonatomic) CSMagSafeAccessoryConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) CSMagSafePowerStatus *externalStatus; // ivar: _externalStatus
@property (retain, nonatomic) BCBatteryDevice *internalBattery; // ivar: _internalBattery
@property (retain, nonatomic) CSMagSafePowerStatus *internalStatus; // ivar: _internalStatus
@property (retain, nonatomic) BSAbsoluteMachTimer *longTailShortcutTimer; // ivar: _longTailShortcutTimer
@property (copy, nonatomic) id *longTailShortcutTimerHandler; // ivar: _longTailShortcutTimerHandler
@property (retain, nonatomic) CABackdropLayer *ringBlurBackdropLayer; // ivar: _ringBlurBackdropLayer
@property (retain, nonatomic) CSRingLayer *ringBlurLayer; // ivar: _ringBlurLayer
@property (retain, nonatomic) CALayer *ringTempOverlayLayer; // ivar: _ringTempOverlayLayer
@property (retain, nonatomic) CSMagSafeSilhouetteConfiguration *silhouette; // ivar: _silhouette
@property (retain, nonatomic) CALayer *silhouetteLayer; // ivar: _silhouetteLayer
@property (retain, nonatomic) CALayer *splashRing; // ivar: _splashRing
@property (retain, nonatomic) CALayer *splashRing1; // ivar: _splashRing1
@property (retain, nonatomic) CALayer *splashRing3; // ivar: _splashRing3
@property (retain, nonatomic) CSRingLayer *trackFillRingLayer; // ivar: _trackFillRingLayer


-(BOOL)_isDarkerSystemColorsEnabled;
-(BOOL)_isReduceMotionEnabled;
-(BOOL)_isReduceTransparencyEnabled;
-(BOOL)_isShowingAuxiliary;
-(BOOL)_shouldUseShortcutForAnimation:(NSUInteger)arg0 ;
-(BOOL)batteryVisible;
-(CGFloat)_estimatedDurationForAnimation:(NSUInteger)arg0 ;
-(CGFloat)batteryChargingLevel;
-(CGFloat)desiredVisibilityDuration;
-(NSInteger)batteryCount;
-(id)_auxiliaryChargePercentFont;
-(id)_chargePercentFont;
-(id)_powerStatusForBattery:(id)arg0 ;
-(id)_ringLayerForRingConfiguration:(id)arg0 ;
-(id)_springAnimationWithKeyPath:(id)arg0 delay:(CGFloat)arg1 forPresent:(BOOL)arg2 from:(id)arg3 to:(id)arg4 ;
-(id)_springAnimationWithKeyPath:(id)arg0 forPresent:(BOOL)arg1 from:(id)arg2 to:(id)arg3 ;
-(id)_springAnimationWithKeyPath:(id)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 duration:(CGFloat)arg3 delay:(CGFloat)arg4 ;
-(id)_trackAnimationForConfiguration:(id)arg0 withCurrentTime:(CGFloat)arg1 ;
-(id)_trackRingForRingConfiguration:(id)arg0 withBlendMode:(id)arg1 ;
-(id)_updateChargeString:(id)arg0 oldLabel:(id)arg1 font:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(struct CGPath *)_pathForRingConfiguration:(id)arg0 ;
-(struct CGPoint )_positionForPill:(id)arg0 forBatteryCharge:(CGFloat)arg1 ;
-(struct CGRect )_pillFrameForBatteryCharge:(CGFloat)arg0 ;
-(void)_animateSilhouetteToVisible:(BOOL)arg0 ;
-(void)_createAuxiliaryPillViewsIfNeeded;
-(void)_createBoltViewsIfNeeded;
-(void)_handleExternalStatusUpdate;
-(void)_layoutAuxiliaryChargePercentLabel;
-(void)_layoutChargePercentLabel;
-(void)_performChargingBoltDismissAnimation;
-(void)_performChargingBoltPresentAnimation;
-(void)_runAnimationWithType:(NSUInteger)arg0 ;
-(void)_runAuxiliaryBatteryLevelAnimation;
-(void)_runAuxiliaryBatteryLevelDismissAnimation;
-(void)_runAuxiliaryChargingBoltAnimationVisible:(BOOL)arg0 ;
-(void)_runAuxiliaryChargingLabelPresentAnimation;
-(void)_runAuxiliarySplashRingAnimation;
-(void)_runBatteryLevelDismissAnimation;
-(void)_runBatteryLevelRingAnimation;
-(void)_runChargingBoltAnimationVisible:(BOOL)arg0 ;
-(void)_runChargingLabelPresentAnimation;
-(void)_runDimAnimation;
-(void)_runRingBlurAnimation;
-(void)_runSplashRingAnimation;
-(void)dealloc;
-(void)layoutSubviews;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)setBatteryVisible:(BOOL)arg0 ;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)setPrimaryBatteryText:(id)arg0 forBattery:(id)arg1 ;
-(void)setSecondaryBatteryText:(id)arg0 forBattery:(id)arg1 ;
-(void)updateForInternalBatteryDevice:(id)arg0 ;
-(void)updateForInternalPowerStatus:(id)arg0 ;


@end


#endif