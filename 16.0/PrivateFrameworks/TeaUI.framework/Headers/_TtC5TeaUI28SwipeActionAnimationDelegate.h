// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI28SWIPEACTIONANIMATIONDELEGATE_H
#define _TTC5TEAUI28SWIPEACTIONANIMATIONDELEGATE_H

@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface _TtC5TeaUI28SwipeActionAnimationDelegate : NSObject <CAAnimationDelegate>

 {
    ? swipeState;
    ? completion;
}




-(id)init;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif