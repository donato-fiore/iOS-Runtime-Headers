// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDTYPERCONTINUOUSPATHGENERATOR_H
#define TIKEYBOARDTYPERCONTINUOUSPATHGENERATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TIKeyboardTyperContinuousPathGenerator : NSObject {
    NSMutableArray *_targets;
    CGFloat _velocity;
    CGFloat _dt;
    CGFloat _stallDuration;
}


@property (readonly, nonatomic) CGPoint currentPoint; // ivar: _currentPoint
@property (readonly, nonatomic) CGFloat currentTimestamp; // ivar: _currentTimestamp
@property (readonly, nonatomic) BOOL isDone;


-(id)initWithVelocity:(CGFloat)arg0 timestamp:(CGFloat)arg1 dt:(CGFloat)arg2 stallDuration:(CGFloat)arg3 ;
-(void)addTargetPoint:(struct CGPoint )arg0 ;
-(void)step;


@end


#endif