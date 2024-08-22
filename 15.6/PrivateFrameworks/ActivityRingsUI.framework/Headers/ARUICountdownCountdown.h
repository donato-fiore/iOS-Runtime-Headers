// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUICOUNTDOWNCOUNTDOWN_H
#define ARUICOUNTDOWNCOUNTDOWN_H

@protocol ARUICountdownAnimation;


#import "ARUICountdownDefaultAnimation.h"

@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

 {
    NSUInteger _step;
    BOOL _cancelable;
}


@property (nonatomic) CGFloat percent; // ivar: _percent


+(id)identifier;
-(BOOL)cancelable;
-(CGFloat)delay;
-(CGFloat)duration;
-(NSUInteger)countdownStep;
-(id)description;
-(id)identifier;
-(id)initWithPercent:(CGFloat)arg0 andStep:(NSUInteger)arg1 cancelable:(BOOL)arg2 ;
-(id)timingFunction;
-(void)applyToCountdownView:(id)arg0 completion:(id)arg1 ;


@end


#endif