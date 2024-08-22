// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOPWATCH_H
#define STOPWATCH_H


#import <Foundation/Foundation.h>


@interface Stopwatch : NSObject



+(CGFloat)elapsedTime;
+(void)start;
+(void)stop;
+(void)stopWithMessage:(id)arg0 precision:(int)arg1 ;
+(void)stopWithMessage:(id)arg0 precision:(int)arg1 elapsedtimeBiggerThan:(CGFloat)arg2 ;


@end


#endif