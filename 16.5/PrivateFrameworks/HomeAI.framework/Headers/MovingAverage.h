// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOVINGAVERAGE_H
#define MOVINGAVERAGE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MovingAverage : NSObject {
    os_unfair_lock_s _lock;
}


@property CGFloat movingAverage; // ivar: _movingAverage
@property (retain, nonatomic) NSMutableArray *queue; // ivar: _queue
@property (readonly, nonatomic) NSUInteger windowSize; // ivar: _windowSize


-(CGFloat)movingAverageForInterval:(CGFloat)arg0 defaultValue:(CGFloat)arg1 ;
-(id)initWithWindowSize:(NSUInteger)arg0 ;
-(void)addNumber:(id)arg0 ;


@end


#endif