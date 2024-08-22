// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFLOATINGCARDSPRINGINFO_H
#define PXFLOATINGCARDSPRINGINFO_H


#import <Foundation/Foundation.h>


@interface PXFloatingCardSpringInfo : NSObject

@property (readonly, nonatomic) CGFloat damping; // ivar: _damping
@property (readonly, nonatomic) CGFloat initialVelocity; // ivar: _initialVelocity
@property (readonly, nonatomic) CGFloat mass; // ivar: _mass
@property (readonly, nonatomic) CGFloat overshootTime; // ivar: _overshootTime
@property (readonly, nonatomic) CGFloat settlingTime; // ivar: _settlingTime
@property (readonly, nonatomic) CGFloat stiffness; // ivar: _stiffness
@property (readonly, nonatomic) CGFloat undershootTime; // ivar: _undershootTime


-(CGFloat)valueAtTime:(CGFloat)arg0 ;
-(id)description;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 ;


@end


#endif