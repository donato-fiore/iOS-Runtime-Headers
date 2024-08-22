// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFFLUIDBEHAVIORSETTINGS_H
#define SBFFLUIDBEHAVIORSETTINGS_H

@class PTSettings, NSString, PTFrameRateRangeSettings;
@protocol BSDescriptionProviding, UIViewSpringAnimationBehaviorDescribing;



@interface SBFFluidBehaviorSettings : PTSettings <BSDescriptionProviding, UIViewSpringAnimationBehaviorDescribing>



@property (nonatomic) NSInteger behaviorType; // ivar: _behaviorType
@property (nonatomic) CGFloat dampingRatio; // ivar: _dampingRatio
@property (nonatomic) CGFloat dampingRatioSmoothing; // ivar: _dampingRatioSmoothing
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat deceleration; // ivar: _deceleration
@property (readonly, copy) NSString *description;
@property (nonatomic) CAFrameRateRange frameRateRange; // ivar: _frameRateRange
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat inertialProjectionDeceleration; // ivar: _inertialProjectionDeceleration
@property (nonatomic) CGFloat inertialTargetSmoothingRatio; // ivar: _inertialTargetSmoothingRatio
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) PTFrameRateRangeSettings *preferredFrameRateRange; // ivar: _preferredFrameRateRange
@property (nonatomic) CGFloat response; // ivar: _response
@property (nonatomic) CGFloat responseSmoothing; // ivar: _responseSmoothing
@property (nonatomic) CGFloat retargetImpulse; // ivar: _retargetImpulse
@property (nonatomic) BOOL smoothingAndProjectionEnabled; // ivar: _smoothingAndProjectionEnabled
@property (readonly) Class superclass;
@property (nonatomic) CGFloat trackingDampingRatio; // ivar: _trackingDampingRatio
@property (nonatomic) CGFloat trackingDampingRatioSmoothing; // ivar: _trackingDampingRatioSmoothing
@property (nonatomic) CGFloat trackingResponse; // ivar: _trackingResponse
@property (nonatomic) CGFloat trackingResponseSmoothing; // ivar: _trackingResponseSmoothing
@property (nonatomic) CGFloat trackingRetargetImpulse; // ivar: _trackingRetargetImpulse


+(id)_moduleWithSectionTitle:(id)arg0 ;
+(id)settingsControllerModule;
-(CGFloat)_effectiveTrackingDampingRatio;
-(CGFloat)_effectiveTrackingResponse;
-(CGFloat)_effectiveTrackingRetargetImpulse;
-(CGFloat)settlingDuration;
-(id)BSAnimationSettings;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct ? )parametersForTransitionFromState:(int)arg0 toState:(int)arg1 ;
-(void)setDefaultCriticallyDampedValues;
-(void)setDefaultValues;


@end


#endif