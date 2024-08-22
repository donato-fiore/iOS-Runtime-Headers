// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTUREPROXIMITYBACKLIGHTPOLICY_H
#define SBSYSTEMAPERTUREPROXIMITYBACKLIGHTPOLICY_H

@class UIView, NSTimer, NSString;
@protocol _SBSystemApertureProximityTouchHandlingViewDelegate, BSInvalidatable, SBSystemApertureProximityBacklightPolicyDelegate;


#import "SBDefaultProximityBacklightPolicy.h"
#import "SBProximitySettings.h"

@interface SBSystemApertureProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <_SBSystemApertureProximityTouchHandlingViewDelegate>

 {
    BOOL _objectThatCanPreventTouchesInProximity;
    BOOL _objectInProximityAccordingToProxManager;
    BOOL _isTrackingTouchPossiblyInJindoWithObjectInProximity;
    UIView *_touchTrackingView;
    UIView *_touchBlockingView;
    NSUInteger _numberOfTouchesWhileObjectInProximity;
    NSTimer *_touchAllowanceGracePeriodTimer;
    id<BSInvalidatable> *_suppressCancelTouchesAssertion;
}


@property (retain, nonatomic, setter=_setProximitySettings:) SBProximitySettings *_proximitySettings; // ivar: __proximitySettings
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSystemApertureProximityBacklightPolicyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSystemApertureBacklightPolicy) BOOL systemApertureBacklightPolicy; // ivar: _systemApertureBacklightPolicy


-(BOOL)_isGracePeriodDisabledByEntitledApp;
-(BOOL)_isTelephonyActive;
-(BOOL)proximityBacklightPolicyTouchHandlingView:(id)arg0 shouldConsumeTouchForHitTest:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(id)initWithBacklightController:(id)arg0 ;
-(void)_objectThatCanPreventTouchesWithinProximityDidChange:(BOOL)arg0 ;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(CGFloat)arg0 ;
-(void)_scheduleBacklightFactorToZeroForTouchWithinSystemAperture;
-(void)dealloc;
-(void)proximitySensorManager:(id)arg0 objectWithinProximityDidChange:(BOOL)arg1 ;


@end


#endif