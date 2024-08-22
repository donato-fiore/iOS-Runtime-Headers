// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMITIMEINTERVALAVERAGE_H
#define HMITIMEINTERVALAVERAGE_H

@class HMFObject;


#import "MovingAverage.h"

@interface HMITimeIntervalAverage : HMFObject {
    MovingAverage *_average;
}




-(CGFloat)value;
-(CGFloat)valueForInterval:(CGFloat)arg0 defaultValue:(CGFloat)arg1 ;
-(id)initWithMaxCapacity:(NSInteger)arg0 ;
-(void)addValue:(CGFloat)arg0 ;


@end


#endif