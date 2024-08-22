// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUIANIMATIONUTILITIES_H
#define SIRISHAREDUIANIMATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface SiriSharedUIAnimationUtilities : NSObject



+(CGFloat)animationBeginTimeForStyle:(NSInteger)arg0 ;
+(CGFloat)animationCoefficient;
+(CGFloat)animationDurationForStyle:(NSInteger)arg0 ;
+(CGFloat)defaultAnimationDuration;
+(id)_centeringAnimationForInitialScale:(CGFloat)arg0 width:(CGFloat)arg1 ;
+(id)animationForStyle:(NSInteger)arg0 expectedWidthForStyle:(id)arg1 ;
+(id)defaultTimingFunction;
// +(void)perfomAnimationBlockWithAnimationBlock:(id)arg0 context:(unk)arg1 completion:(id)arg2  ;


@end


#endif