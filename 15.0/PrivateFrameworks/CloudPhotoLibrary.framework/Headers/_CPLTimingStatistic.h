// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPLTIMINGSTATISTIC_H
#define _CPLTIMINGSTATISTIC_H


#import <Foundation/Foundation.h>


@interface _CPLTimingStatistic : NSObject {
    NSUInteger _recordCount;
    NSUInteger _batchCount;
    NSUInteger _errorCount;
    NSUInteger _cancelCount;
    CGFloat _duration;
}




-(id)description;
-(void)updateWithDuration:(CGFloat)arg0 recordCount:(NSUInteger)arg1 error:(BOOL)arg2 cancelled:(BOOL)arg3 ;


@end


#endif