// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MASTATISTICSELAPSEDTIME_H
#define MASTATISTICSELAPSEDTIME_H


#import <Foundation/Foundation.h>


@interface MAStatisticsElapsedTime : NSObject {
    CGFloat _elapsedTime;
    CGFloat _elapsedStart;
    NSInteger _elapsedCounter;
    CGFloat _lastBeginTransactionTime;
    CGFloat _lastEndTransactionTime;
}




-(BOOL)isTransactionPending;
-(CGFloat)elapsedTime;
-(CGFloat)elapsedTimeSinceLastBeginTransaction;
-(CGFloat)elapsedTimeSinceLastEndTransaction;
-(id)init;
-(void)begin;
-(void)dealloc;
-(void)end;


@end


#endif