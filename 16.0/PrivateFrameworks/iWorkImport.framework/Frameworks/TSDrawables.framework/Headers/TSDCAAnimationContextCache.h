// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCAANIMATIONCONTEXTCACHE_H
#define TSDCAANIMATIONCONTEXTCACHE_H

@class NSString, CAMediaTimingFunction;
@protocol TSDCAAnimationContextCacheProtocol;

#import <Foundation/Foundation.h>


@interface TSDCAAnimationContextCache : NSObject <TSDCAAnimationContextCacheProtocol>



@property (readonly, nonatomic) BOOL autoreverses; // ivar: _autoreverses
@property (readonly, nonatomic) CGFloat beginTime; // ivar: _beginTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSString *fillMode; // ivar: _fillMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat repeatCount; // ivar: _repeatCount
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeOffset; // ivar: _timeOffset
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


-(BOOL)shouldUseInitialValueAtAnimationTime:(CGFloat)arg0 ;
-(CGFloat)animationPercentFromAnimationTime:(CGFloat)arg0 ;
-(CGFloat)percentAtTime:(CGFloat)arg0 ;
-(CGFloat)workingPercentFromAnimationTime:(CGFloat)arg0 ;
-(id)initWithAnimation:(id)arg0 ;
-(id)valueAtTime:(CGFloat)arg0 initialValue:(id)arg1 ;
-(id)valueAtTime:(CGFloat)arg0 initialValue:(id)arg1 groupTimingFactor:(CGFloat)arg2 ;
-(id)valueForKeyPath:(id)arg0 atTime:(CGFloat)arg1 animationCache:(id)arg2 ;


@end


#endif