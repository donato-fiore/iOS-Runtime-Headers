// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCONTENTANIMATIONGROUP_H
#define TSDCONTENTANIMATIONGROUP_H

@class NSArray, CAMediaTimingFunction;


#import "TSDContentAnimation.h"

@interface TSDContentAnimationGroup : TSDContentAnimation

@property (copy, nonatomic) NSArray *animations; // ivar: _animations
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


-(BOOL)i_canProduceAnimation;
-(id)i_animationWithTransformBlock:(id)arg0 ;
-(id)i_endLocation;
-(void)dealloc;


@end


#endif