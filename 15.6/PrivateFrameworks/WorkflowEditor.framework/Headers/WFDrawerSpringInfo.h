// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDRAWERSPRINGINFO_H
#define WFDRAWERSPRINGINFO_H


#import <Foundation/Foundation.h>


@interface WFDrawerSpringInfo : NSObject

@property (readonly) CGFloat damping; // ivar: _damping
@property (readonly) CGFloat initialVelocity; // ivar: _initialVelocity
@property (readonly) CGFloat mass; // ivar: _mass
@property (readonly) CGFloat overshootTime; // ivar: _overshootTime
@property (readonly) CGFloat settlingTime; // ivar: _settlingTime
@property (readonly) CGFloat stiffness; // ivar: _stiffness
@property (readonly) CGFloat undershootTime; // ivar: _undershootTime


-(CGFloat)valueAtTime:(CGFloat)arg0 ;
-(id)description;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 ;


@end


#endif