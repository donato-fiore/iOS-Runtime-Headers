// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERCARDRENDERERINSTANCE_H
#define PKPAYLATERCARDRENDERERINSTANCE_H


#import <Foundation/Foundation.h>


@interface PKPayLaterCardRendererInstance : NSObject {
    ? _position;
    ? _velocity;
    ? _axis;
    ? _forces;
    ? _smoothedPosition;
}


@property (readonly, nonatomic) CGFloat angle; // ivar: _angle
@property (readonly, nonatomic) CGFloat angularyVelocity; // ivar: _angularyVelocity
@property ? axis;
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) CGFloat explodeTime; // ivar: _explodeTime
@property ? forces;
@property (readonly, nonatomic) CGFloat mass; // ivar: _mass
@property ? position;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGFloat size; // ivar: _size
@property ? smoothedPosition;
@property ? velocity;


-(BOOL)isIgnoredAtTime:(CGFloat)arg0 ;
-(id)initWithPosition:(CGFloat)arg0 scale:(NSInteger)arg1 category;
-(struct PayLaterInstanceUniform )uniformWithSkew:(CGFloat)arg0 now:(CGFloat)arg1 waveAmplitude;
-(void)addForces;
-(void)explodeAtTime:(CGFloat)arg0 ;


@end


#endif