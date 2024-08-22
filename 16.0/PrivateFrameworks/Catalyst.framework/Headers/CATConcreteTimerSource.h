// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATCONCRETETIMERSOURCE_H
#define CATCONCRETETIMERSOURCE_H

@protocol CATTimerSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CATConcreteTimerSource : NSObject <CATTimerSource>

 {
    NSObject<OS_dispatch_queue> *mWorkQueue;
}




-(id)init;
-(id)scheduleInfiniteTimerWithIdentifier:(id)arg0 timeInterval:(CGFloat)arg1 queue:(id)arg2 fireHandler:(id)arg3 ;
-(id)scheduleOneShotTimerWithIdentifier:(id)arg0 timeInterval:(CGFloat)arg1 queue:(id)arg2 fireHandler:(id)arg3 ;
-(id)scheduleRepeatTimerWithIdentifier:(id)arg0 timeInterval:(CGFloat)arg1 queue:(id)arg2 totalFires:(NSUInteger)arg3 fireHandler:(id)arg4 ;


@end


#endif