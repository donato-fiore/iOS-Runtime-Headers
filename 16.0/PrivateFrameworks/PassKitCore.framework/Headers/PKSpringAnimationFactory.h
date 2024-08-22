// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSPRINGANIMATIONFACTORY_H
#define PKSPRINGANIMATIONFACTORY_H

@class CAMediaTimingFunction;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKSpringAnimationFactory : NSObject <NSCopying>

 {
    CGFloat _duration;
    BOOL _needsDurationUpdate;
}


@property (nonatomic) CGFloat damping; // ivar: _damping
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) CGFloat mass; // ivar: _mass
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGFloat stiffness; // ivar: _stiffness
@property (retain, nonatomic) CAMediaTimingFunction *timing; // ivar: _timing
@property (nonatomic) CGFloat velocity; // ivar: _velocity


+(CGFloat)defaultDuration;
+(id)createDefaultFactory;
+(id)highFrameRateSpringAnimationWithKeyPath:(id)arg0 reason:(unsigned short)arg1 ;
+(id)springAnimationWithKeyPath:(id)arg0 ;
-(id)_createSpringAnimationWithKeyPath:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)highFrameRateSpringAnimationWithKeyPath:(id)arg0 reason:(unsigned short)arg1 ;
-(id)init;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 ;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 timing:(id)arg3 ;
-(id)springAnimationWithKeyPath:(id)arg0 ;
-(void)dealloc;


@end


#endif