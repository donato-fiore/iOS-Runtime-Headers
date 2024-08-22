// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTATSCALCULATOR_H
#define PXSTATSCALCULATOR_H


#import <Foundation/Foundation.h>


@interface PXStatsCalculator : NSObject {
    CGFloat _sum;
    CGFloat _squareSum;
}


@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) CGFloat first; // ivar: _first
@property (readonly, nonatomic) CGFloat max; // ivar: _max
@property (readonly, nonatomic) CGFloat mean;
@property (readonly, nonatomic) CGFloat min; // ivar: _min
@property (readonly, nonatomic) CGFloat standardDeviation;


-(id)init;
-(void)addValue:(CGFloat)arg0 ;


@end


#endif