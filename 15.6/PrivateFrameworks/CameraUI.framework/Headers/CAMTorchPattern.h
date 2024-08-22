// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTORCHPATTERN_H
#define CAMTORCHPATTERN_H

@class CAAnimationGroup;

#import <Foundation/Foundation.h>


@interface CAMTorchPattern : NSObject

@property (readonly, nonatomic) CAAnimationGroup *_animationGroup; // ivar: __animationGroup
@property (readonly, nonatomic) CGFloat _lastUpdateTime; // ivar: __lastUpdateTime
@property (readonly, nonatomic) NSInteger _type; // ivar: __type
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) float torchLevel; // ivar: _torchLevel


-(id)_blinkAnimationGroup;
-(id)_blinkAnimationWithBeginTime:(CGFloat)arg0 duration:(CGFloat)arg1 repeatCount:(NSInteger)arg2 ;
-(id)_doubleBlinkAnimationGroup;
-(id)_longPatternAnimationGroup;
-(id)_patternAnimationWithBeginTime:(CGFloat)arg0 duration:(CGFloat)arg1 repeatCount:(NSInteger)arg2 ;
-(id)_shortPatternAnimationGroup;
-(id)init;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_updateAnimationGroup;
-(void)updateAtTime:(CGFloat)arg0 ;


@end


#endif