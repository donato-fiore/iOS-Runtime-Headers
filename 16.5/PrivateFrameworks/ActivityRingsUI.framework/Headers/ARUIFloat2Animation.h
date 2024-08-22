// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIFLOAT2ANIMATION_H
#define ARUIFLOAT2ANIMATION_H

@class NSString, CAMediaTimingFunction;
@protocol ARUIRingGroupAnimation, ARUIRingGroupAnimationDelegate;

#import <Foundation/Foundation.h>


@interface ARUIFloat2Animation : NSObject <ARUIRingGroupAnimation>

 {
    CGFloat _percent;
    id *_applier;
    BOOL _completed;
    ? _startValue;
    ? _currentValue;
    ? _endValue;
}


@property ? currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARUIRingGroupAnimationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property ? endValue;
@property (readonly) NSUInteger hash;
@property ? startValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


// +(id)animationWithDuration:(CGFloat)arg0 startValue:(id)arg1 endValue:(id)arg2 timingFunction:(unk)arg3 applier ;
// -(id)initWithDuration:(CGFloat)arg0 startValue:(id)arg1 endValue:(id)arg2 timingFunction:(unk)arg3 applier ;
-(void)update:(CGFloat)arg0 ;


@end


#endif