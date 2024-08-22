// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARANIMATIONFACTORY_H
#define _UISTATUSBARANIMATIONFACTORY_H


#import <Foundation/Foundation.h>


@interface _UIStatusBarAnimationFactory : NSObject



+(id)fadeAnimationWithDuration:(CGFloat)arg0 ;
+(id)fadeAnimationWithDuration:(CGFloat)arg0 scale:(CGFloat)arg1 ;
+(id)fadeAnimationWithDuration:(CGFloat)arg0 scale:(CGFloat)arg1 offset:(struct UIOffset )arg2 ;
+(id)noAnimation;
+(id)pulseAnimationWithDuration:(CGFloat)arg0 scale:(CGFloat)arg1 ;


@end


#endif