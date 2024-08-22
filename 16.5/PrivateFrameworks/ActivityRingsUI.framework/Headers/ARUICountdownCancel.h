// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUICOUNTDOWNCANCEL_H
#define ARUICOUNTDOWNCANCEL_H

@protocol ARUICountdownAnimation;


#import "ARUICountdownDefaultAnimation.h"

@interface ARUICountdownCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>





+(id)identifier;
-(BOOL)cancelable;
-(CGFloat)delay;
-(CGFloat)duration;
-(id)identifier;
-(id)timingFunction;
-(void)applyToCountdownView:(id)arg0 completion:(id)arg1 ;
-(void)cancel;


@end


#endif