// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXVALUEANIMATION_H
#define _PXVALUEANIMATION_H


#import <Foundation/Foundation.h>


@interface _PXValueAnimation : NSObject

@property (readonly, nonatomic) CGFloat approximateVelocity;
@property (readonly, nonatomic) BOOL completed;
@property (nonatomic) CGFloat currentMediaTime; // ivar: _currentMediaTime
@property (readonly, nonatomic) CGFloat currentValue;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) _PXValueAnimationSpec spec; // ivar: _spec
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(CGFloat)elapsedTime;
-(CGFloat)remainingTime;
-(id)description;
-(id)init;
-(id)initWithDuration:(CGFloat)arg0 currentMediaTime:(CGFloat)arg1 spec:(struct _PXValueAnimationSpec )arg2 ;


@end


#endif