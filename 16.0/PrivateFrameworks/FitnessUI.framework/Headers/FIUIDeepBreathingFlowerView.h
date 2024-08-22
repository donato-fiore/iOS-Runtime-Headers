// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIDEEPBREATHINGFLOWERVIEW_H
#define FIUIDEEPBREATHINGFLOWERVIEW_H

@class UIView, NSMutableDictionary, UILabel, NSString, NSMutableArray;
@protocol FIUIDeepBreathingPetalRingViewDelegate, FIUIBreathingPetalRingViewDrawable;



@interface FIUIDeepBreathingFlowerView : UIView <FIUIDeepBreathingPetalRingViewDelegate>

 {
    NSMutableDictionary *_petalRingsByNumberOfPetals;
    id<FIUIBreathingPetalRingViewDrawable> *_currentPetalRing;
    NSInteger _numberOfVisiblePetals;
    BOOL _showBlurTrails;
    NSInteger _petalColor;
    UILabel *_congratulationsLabel;
    NSString *_congratulationsText;
    NSInteger _state;
    CGFloat _stateStartTime;
    CGFloat _stateEndTime;
    CGFloat _sessionDuration;
    CGFloat _breathsPerMinute;
    CGFloat _petalCountOverride;
    NSMutableArray *_trailAlphaKeyFrames;
    NSMutableArray *_trailAlphaKeyValues;
    CGFloat _centerVerticalOffsetBeforeTransitionToConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_curveEaseInValue:(CGFloat)arg0 ;
-(CGFloat)_petalCountForMinutesRemaining:(CGFloat)arg0 ;
-(float)_interpolateWithKeyFrames:(id)arg0 keyValues:(id)arg1 value:(float)arg2 ;
-(id)_currentPetalRing;
-(id)_petalRingWithNumberOfShaderPetals:(NSInteger)arg0 showBlurTrails:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 congratulationsText:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 petalColor:(NSInteger)arg1 congratulationsText:(id)arg2 ;
-(struct CGPoint )_originalRingCenterForWindType:(NSInteger)arg0 ;
-(void)_createCongratulationsLabelIfNeeded;
-(void)_ppt_setPetalCountOverride:(NSInteger)arg0 ;
-(void)_preloadPetalRings;
-(void)_setNumberOfVisiblePetals:(NSInteger)arg0 showBlurTrails:(BOOL)arg1 ;
-(void)_setState:(NSInteger)arg0 ;
-(void)_setWindFraction:(CGFloat)arg0 smallRadius:(CGFloat)arg1 largeRadius:(CGFloat)arg2 windType:(NSInteger)arg3 showBlurTrails:(BOOL)arg4 ;
-(void)_updateForBreathWithPetalCount:(NSInteger)arg0 petalRadius:(CGFloat)arg1 inhaleDuration:(CGFloat)arg2 exhaleDuration:(CGFloat)arg3 timeInCurrentBreath:(CGFloat)arg4 showBlurTrails:(BOOL)arg5 shouldSpin:(BOOL)arg6 ;
-(void)_updateForCongratulationsWithTimeInState:(CGFloat)arg0 fractionComplete:(CGFloat)arg1 ;
-(void)_updateForGuidingWithTimeInState:(CGFloat)arg0 ;
-(void)_updateForOnRampWithTimeInState:(CGFloat)arg0 ;
-(void)_updateForShrinkToOnRampWithFractionComplete:(CGFloat)arg0 ;
-(void)_updateForUnwindToCompletedWithFractionComplete:(CGFloat)arg0 ;
-(void)_updateForWindToConfigurationWithFractionComplete:(CGFloat)arg0 ;
-(void)_updatePetalsInRange:(struct _NSRange )arg0 radius:(CGFloat)arg1 radialDistance:(CGFloat)arg2 angleOffset:(CGFloat)arg3 clockwise:(BOOL)arg4 alpha:(float)arg5 ;
-(void)_updateShaderForNumberOfPetals:(NSInteger)arg0 showBlurTrails:(BOOL)arg1 ;
-(void)petalRingViewDisplayLinkDidFire:(id)arg0 ;
-(void)setNumberOfConfigurationPetals:(CGFloat)arg0 ;
-(void)setWelcomeWindFraction:(CGFloat)arg0 ;
-(void)startGuidingAtDate:(id)arg0 breathsPerMinute:(CGFloat)arg1 ;
-(void)startOnRampAtDate:(id)arg0 sessionDuration:(CGFloat)arg1 ;
-(void)transitionToCompletedWithDuration:(CGFloat)arg0 ;
-(void)transitionToConfigurationAnimated:(BOOL)arg0 ;
-(void)transitionToCongratulations;


@end


#endif