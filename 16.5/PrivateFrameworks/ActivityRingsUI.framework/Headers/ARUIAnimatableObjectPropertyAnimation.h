// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIANIMATABLEOBJECTPROPERTYANIMATION_H
#define ARUIANIMATABLEOBJECTPROPERTYANIMATION_H


#import <Foundation/Foundation.h>


@interface ARUIAnimatableObjectPropertyAnimation : NSObject {
    id *_animationTimingFunction;
    CGFloat _currentAnimationTime;
}


@property (retain, nonatomic, setter=_setCurrentValue:) id *_currentValue;
@property (retain, nonatomic, setter=_setEndValue:) id *_endValue;
@property (retain, nonatomic, setter=_setStartValue:) id *_startValue;
@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration


// +(id)animationWithDuration:(CGFloat)arg0 timingFunction:(id)arg1 completion:(unk)arg2  ;
+(id)linearTimingFunction:(SEL)arg0 ;
+(id)timingFunctionForMediaTimingFunction:(SEL)arg0 ;
-(BOOL)isFinishedAnimating;
-(id)valueByAddingCurrentValueToValue:(id)arg0 ;
-(void)_updateWithProgress:(float)arg0 ;
-(void)callAndReleaseCompletionHandler;
-(void)update:(CGFloat)arg0 ;


@end


#endif