// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUICOUNTDOWNPRECANCEL_H
#define ARUICOUNTDOWNPRECANCEL_H

@protocol ARUICountdownAnimation;


#import "ARUICountdownDefaultAnimation.h"

@interface ARUICountdownPreCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>





+(id)identifier;
-(BOOL)cancelable;
-(CGFloat)delay;
-(CGFloat)duration;
-(id)identifier;
-(void)applyToCountdownView:(id)arg0 completion:(id)arg1 ;


@end


#endif