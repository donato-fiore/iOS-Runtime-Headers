// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUICOUNTDOWNFADEIN_H
#define ARUICOUNTDOWNFADEIN_H

@protocol ARUICountdownAnimation;


#import "ARUICountdownDefaultAnimation.h"

@interface ARUICountdownFadeIn : ARUICountdownDefaultAnimation <ARUICountdownAnimation>





+(id)identifier;
-(BOOL)cancelable;
-(CGFloat)delay;
-(CGFloat)duration;
-(id)identifier;
-(id)timingFunction;
-(void)applyToCountdownView:(id)arg0 completion:(id)arg1 ;


@end


#endif