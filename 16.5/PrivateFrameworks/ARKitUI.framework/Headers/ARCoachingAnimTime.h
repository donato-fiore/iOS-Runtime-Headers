// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGANIMTIME_H
#define ARCOACHINGANIMTIME_H


#import <Foundation/Foundation.h>


@interface ARCoachingAnimTime : NSObject {
    CGFloat _absoluteTime;
    CGFloat _startTime;
    CGFloat _oscillatingTime;
    CGFloat _delta;
    CGFloat _deltaPercentage;
}


@property (nonatomic) CGFloat absoluteTime;
@property (readonly, nonatomic) CGFloat delta;
@property (readonly, nonatomic) CGFloat deltaPercentage;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat oscillatingTime;
@property (nonatomic) CGFloat startTime;


-(id)init;


@end


#endif