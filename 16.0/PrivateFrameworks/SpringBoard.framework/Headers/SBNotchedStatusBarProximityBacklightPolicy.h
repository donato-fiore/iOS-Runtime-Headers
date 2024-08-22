// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNOTCHEDSTATUSBARPROXIMITYBACKLIGHTPOLICY_H
#define SBNOTCHEDSTATUSBARPROXIMITYBACKLIGHTPOLICY_H

@class UIWindowScene, UIWindow, NSString;
@protocol SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate, BSInvalidatable;


#import "SBDefaultProximityBacklightPolicy.h"
#import "_SBProximityTouchHandlingViewController.h"
#import "SBNotchedStatusBarProximityBacklightPolicyEnablementCondition.h"
#import "SBProximitySettings.h"

@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate>

 {
    BOOL _objectInProximity;
    UIWindowScene *_windowScene;
    UIWindow *_proxTouchHandlingWindow;
    _SBProximityTouchHandlingViewController *_proxTouchHandlingViewController;
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition *_enablementCondition;
    NSUInteger _timesEnabledWithObjectInProximity;
    NSUInteger _touchesReceivedWithObjectInProximity;
    SBProximitySettings *_lazy_proximitySettings;
    id<BSInvalidatable> *_suppressCancelTouchesAssertion;
}


@property (retain, nonatomic, setter=_setProximitySettings:) SBProximitySettings *_proximitySettings; // ivar: __proximitySettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(BOOL)arg0 ;
-(id)_createNewEnablementCondition;
-(id)_createNewWindow;
-(id)initWithBacklightController:(id)arg0 ;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(CGFloat)arg0 ;
-(void)_setHandleTouchesIfNecessary:(BOOL)arg0 ;
-(void)condition:(id)arg0 enablementDidChange:(BOOL)arg1 ;
-(void)dealloc;
-(void)didHitAllowedRegion:(struct CGPoint )arg0 ;
-(void)proximitySensorManager:(id)arg0 objectWithinProximityDidChange:(BOOL)arg1 ;
-(void)windowSceneDidConnect:(id)arg0 ;


@end


#endif