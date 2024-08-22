// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STOPWATCH_H
#define STOPWATCH_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface StopWatch : NSObject {
    NSDate *start;
    CGFloat cumul;
}




+(BOOL)nearlyEqualRun:(CGFloat)arg0 toRun:(CGFloat)arg1 fudgeFactor:(CGFloat)arg2 ;
-(BOOL)isRunning;
-(BOOL)wasRunningBefore:(id)arg0 ;
-(CGFloat)currentRun;
-(CGFloat)stop;
-(CGFloat)total;
-(void)start;


@end


#endif