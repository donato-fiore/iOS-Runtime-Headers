// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWDEFERREDBASICANIMATION_H
#define _UIVIEWDEFERREDBASICANIMATION_H

@class UIViewDeferredAnimation;


#import "_UIViewAnimationFrame.h"

@interface _UIViewDeferredBasicAnimation : UIViewDeferredAnimation {
    _UIViewAnimationFrame *_finalValue;
}




-(BOOL)isEmpty;
-(id)_animationFrames;
-(void)_enumerateAnimationFramesForKeyframes:(id)arg0 ;
-(void)addAnimationFrameForValue:(id)arg0 ;
-(void)animateFrameAtIndex:(NSInteger)arg0 animations:(id)arg1 ;


@end


#endif