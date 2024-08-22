// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HURELATIVEANIMATION_H
#define HURELATIVEANIMATION_H


#import <Foundation/Foundation.h>

#import "HUAnimationApplier.h"

@interface HURelativeAnimation : NSObject

@property (readonly, nonatomic) HUAnimationApplier *applier; // ivar: _applier
@property (readonly, nonatomic) CGFloat relativeDuration; // ivar: _relativeDuration
@property (readonly, nonatomic) CGFloat relativeStart; // ivar: _relativeStart


-(id)initWithAnimationApplier:(id)arg0 relativeStart:(CGFloat)arg1 relativeDuration:(CGFloat)arg2 ;


@end


#endif