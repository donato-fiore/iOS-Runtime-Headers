// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWKEYFRAMEANIMATIONSTATE_H
#define UIVIEWKEYFRAMEANIMATIONSTATE_H

@class NSMutableSet, NSMutableDictionary;


#import "UIViewAnimationState.h"

@interface UIViewKeyframeAnimationState : UIViewAnimationState {
    CGFloat _frameDuration;
    CGFloat _frameStartTime;
    NSInteger _calculationMode;
    NSMutableSet *_keyframeLayers;
    NSMutableDictionary *_keyframeLayersForCurrentKeyFrameDict;
    BOOL _inFrame;
}




-(BOOL)_isKeyframeAnimation;
-(id)_createDeferredAnimationForKey:(id)arg0 ;
-(id)_updateAnimationFrameWithAnimationProperties:(id)arg0 ;
-(id)animationForLayer:(id)arg0 forKey:(id)arg1 forView:(id)arg2 ;
-(id)init;
-(void)addKeyframeWithRelativeStartTime:(CGFloat)arg0 relativeDuration:(CGFloat)arg1 animations:(id)arg2 ;
-(void)cleanupTrackedLayers;
-(void)pop;
// -(void)setupWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 view:(id)arg2 options:(NSUInteger)arg3 factory:(id)arg4 parentState:(id)arg5 start:(id)arg6 completion:(unk)arg7  ;


@end


#endif