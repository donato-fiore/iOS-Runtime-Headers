// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIUINTANIMATION_H
#define ARUIUINTANIMATION_H

@class NSString, CAMediaTimingFunction;
@protocol ARUIRingGroupAnimation, ARUIRingGroupAnimationDelegate;

#import <Foundation/Foundation.h>


@interface ARUIUIntAnimation : NSObject <ARUIRingGroupAnimation>

 {
    CGFloat _percent;
    id *_applier;
    BOOL _completed;
}


@property (readonly, nonatomic) NSUInteger currentValue; // ivar: _currentValue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARUIRingGroupAnimationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger endValue; // ivar: _endValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger startValue; // ivar: _startValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


+(id)animationWithDuration:(CGFloat)arg0 startValue:(NSUInteger)arg1 endValue:(NSUInteger)arg2 timingFunction:(id)arg3 applier:(id)arg4 ;
-(BOOL)isAnimating;
-(id)initWithDuration:(CGFloat)arg0 startValue:(NSUInteger)arg1 endValue:(NSUInteger)arg2 timingFunction:(id)arg3 applier:(id)arg4 ;
-(void)completeAnimation;
-(void)dealloc;
-(void)update:(CGFloat)arg0 ;


@end


#endif