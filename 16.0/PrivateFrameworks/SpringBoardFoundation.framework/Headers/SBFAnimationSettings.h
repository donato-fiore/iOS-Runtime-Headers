// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFANIMATIONSETTINGS_H
#define SBFANIMATIONSETTINGS_H

@class PTSettings, BSAnimationSettings, PTPointSettings, NSString, PTFrameRateRangeSettings;
@protocol PTSettingsKeyPathObserver;



@interface SBFAnimationSettings : PTSettings <PTSettingsKeyPathObserver>

 {
    BSAnimationSettings *_exportedSettings;
}


@property (nonatomic) NSInteger animationType; // ivar: _animationType
@property (readonly, nonatomic) CGFloat calculatedDuration;
@property (retain, nonatomic) PTPointSettings *controlPoint1Settings; // ivar: _controlPoint1Settings
@property (retain, nonatomic) PTPointSettings *controlPoint2Settings; // ivar: _controlPoint2Settings
@property (nonatomic) NSUInteger curve; // ivar: _curve
@property (nonatomic) CGFloat damping; // ivar: _damping
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (nonatomic) NSUInteger frameRate; // ivar: _frameRate
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialVelocity; // ivar: _initialVelocity
@property (nonatomic) CGFloat mass; // ivar: _mass
@property (retain, nonatomic) PTFrameRateRangeSettings *preferredFrameRateRange; // ivar: _preferredFrameRateRange
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGFloat stiffness; // ivar: _stiffness
@property (readonly) Class superclass;


+(BOOL)ignoresKey:(id)arg0 ;
+(id)_moduleWithSectionTitle:(id)arg0 ;
+(id)_moduleWithSectionTitle:(id)arg0 delay:(BOOL)arg1 frameRate:(BOOL)arg2 ;
+(id)settingsControllerModule;
-(id)BSAnimationSettings;
-(id)initWithDefaultValues;
-(void)dealloc;
-(void)setDefaultValues;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;


@end


#endif