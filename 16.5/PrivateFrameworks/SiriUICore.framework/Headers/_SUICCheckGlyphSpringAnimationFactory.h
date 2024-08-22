// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SUICCHECKGLYPHSPRINGANIMATIONFACTORY_H
#define _SUICCHECKGLYPHSPRINGANIMATIONFACTORY_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>


@interface _SUICCheckGlyphSpringAnimationFactory : NSObject {
    CGFloat _duration;
    BOOL _needsDurationUpdate;
}


@property (nonatomic) CGFloat damping; // ivar: _damping
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) CGFloat mass; // ivar: _mass
@property (nonatomic) CGFloat stiffness; // ivar: _stiffness
@property (retain, nonatomic) CAMediaTimingFunction *timing; // ivar: _timing
@property (nonatomic) CGFloat velocity; // ivar: _velocity


+(CGFloat)defaultDuration;
+(id)defaultTimingFunction;
+(id)springAnimationWithKeyPath:(id)arg0 ;
+(id)springAnimationWithKeyPath:(id)arg0 velocity:(CGFloat)arg1 ;
-(id)_springAnimationWithKeyPath:(id)arg0 ;
-(id)init;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 velocity:(CGFloat)arg3 ;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 velocity:(CGFloat)arg3 timing:(id)arg4 ;
-(id)initWithVelocity:(CGFloat)arg0 ;
-(id)initWithVelocity:(CGFloat)arg0 timing:(id)arg1 ;
-(id)springAnimationWithKeyPath:(id)arg0 ;
-(void)_updateDurationIfNecessary;
-(void)dealloc;


@end


#endif