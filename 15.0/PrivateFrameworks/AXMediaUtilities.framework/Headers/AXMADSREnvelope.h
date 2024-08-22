// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMADSRENVELOPE_H
#define AXMADSRENVELOPE_H


#import <Foundation/Foundation.h>


@interface AXMADSREnvelope : NSObject

@property (nonatomic) CGFloat attackLevel; // ivar: _attackLevel
@property (nonatomic) CGFloat attackMS; // ivar: _attackMS
@property (nonatomic) CGFloat decayMS; // ivar: _decayMS
@property (readonly, nonatomic) CGFloat lengthMS;
@property (nonatomic) CGFloat releaseMS; // ivar: _releaseMS
@property (nonatomic) CGFloat sustainLevel; // ivar: _sustainLevel
@property (nonatomic) CGFloat sustainMS; // ivar: _sustainMS


+(id)defaultEnvelope;
-(CGFloat)levelForTime:(CGFloat)arg0 ;
-(id)copy;
-(id)init;
-(id)initWithAttackDuration:(CGFloat)arg0 attackLevel:(CGFloat)arg1 decayDuration:(CGFloat)arg2 sustainDuration:(CGFloat)arg3 sustainLevel:(CGFloat)arg4 releaseDuration:(CGFloat)arg5 ;


@end


#endif