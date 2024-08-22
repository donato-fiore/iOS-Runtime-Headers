// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARROLLINGNUMBERSERIES_H
#define ARROLLINGNUMBERSERIES_H


#import <Foundation/Foundation.h>


@interface ARRollingNumberSeries : NSObject {
    *CGFloat _series;
    NSUInteger _currentIndex;
    CGFloat _sumVariance;
}


@property (readonly, nonatomic) CGFloat average; // ivar: _average
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) CGFloat max;
@property (readonly, nonatomic) CGFloat min;
@property (readonly, nonatomic) CGFloat sum; // ivar: _sum
@property (readonly, nonatomic) CGFloat variance; // ivar: _variance
@property (readonly, nonatomic) NSUInteger windowSize; // ivar: _windowSize


-(id)initWithWindowSize:(NSUInteger)arg0 ;
-(void)appendNumber:(CGFloat)arg0 ;
-(void)clear;
-(void)dealloc;


@end


#endif