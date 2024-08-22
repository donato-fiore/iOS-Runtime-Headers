// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATTHROUGHPUTCALCULATOR_H
#define ATTHROUGHPUTCALCULATOR_H


#import <Foundation/Foundation.h>

#import "ATMovingAverage.h"

@interface ATThroughputCalculator : NSObject {
    BOOL _suspended;
    CGFloat _lastUpdate;
    CGFloat _startTime;
    CGFloat _currentValue;
    ATMovingAverage *_average;
}


@property (readonly, nonatomic) CGFloat throughput;


-(BOOL)update:(CGFloat)arg0 ;
-(id)init;
-(void)resume;
-(void)suspend;


@end


#endif