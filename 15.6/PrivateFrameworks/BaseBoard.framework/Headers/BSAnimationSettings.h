// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSANIMATIONSETTINGS_H
#define BSANIMATIONSETTINGS_H

@class CAMediaTimingFunction, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding>

 {
    os_unfair_lock_s _lock;
    float _lock_speed;
    CGFloat _lock_storedDuration;
    CGFloat _lock_delay;
    CGFloat _lock_frameInterval;
    CAFrameRateRange _lock_frameRange;
    unsigned int _lock_highFrameRateReason;
    CAMediaTimingFunction *_lock_timingFunction;
    CGFloat _lock_mass;
    CGFloat _lock_stiffness;
    CGFloat _lock_damping;
    CGFloat _lock_epsilon;
    CGFloat _lock_initialVelocity;
    BOOL _lock_storedDurationIsDirty;
    BOOL _mutable;
    BOOL _isSpring;
}


@property (readonly, nonatomic) CGFloat damping;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delay;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGFloat epsilon;
@property (readonly, nonatomic) CGFloat frameInterval;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int highFrameRateReason;
@property (readonly, nonatomic) CGFloat initialVelocity;
@property (readonly, nonatomic) CGFloat mass;
@property (readonly, nonatomic) CAFrameRateRange preferredFrameRateRange;
@property (readonly, nonatomic) float speed;
@property (readonly, nonatomic) CGFloat stiffness;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction;


+(BOOL)supportsSecureCoding;
+(id)settingsWithDuration:(CGFloat)arg0 ;
+(id)settingsWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 ;
+(id)settingsWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 timingFunction:(id)arg2 ;
+(id)settingsWithDuration:(CGFloat)arg0 timingFunction:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSpringAnimation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)applyToCAAnimation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif