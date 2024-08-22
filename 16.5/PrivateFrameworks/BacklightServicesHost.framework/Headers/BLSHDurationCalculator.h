// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHDURATIONCALCULATOR_H
#define BLSHDURATIONCALCULATOR_H


#import <Foundation/Foundation.h>


@interface BLSHDurationCalculator : NSObject {
    CGFloat _start;
    CGFloat _duration;
}


@property (readonly, nonatomic) CGFloat remainingDuration;


-(id)initWithDuration:(CGFloat)arg0 ;


@end


#endif