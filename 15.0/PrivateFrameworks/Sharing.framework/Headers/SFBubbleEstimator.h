// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBUBBLEESTIMATOR_H
#define SFBUBBLEESTIMATOR_H


#import <Foundation/Foundation.h>

#import "SFRSSIQueue.h"

@interface SFBubbleEstimator : NSObject {
    SFRSSIQueue *_rssiQueue;
    NSUInteger _thresholdStartTicks;
}


@property (readonly, nonatomic) BOOL insideBubble; // ivar: _insideBubble
@property (readonly, nonatomic) BOOL insideBubbleWithThreshold; // ivar: _insideBubbleWithThreshold
@property (nonatomic) BOOL preventBoost; // ivar: _preventBoost
@property (nonatomic) NSInteger rssiEnter; // ivar: _rssiEnter
@property (nonatomic) NSInteger rssiExit; // ivar: _rssiExit
@property (nonatomic) CGFloat thresholdSeconds; // ivar: _thresholdSeconds
@property (readonly, nonatomic) CGFloat velocity;
@property (readonly, nonatomic) CGFloat velocitySmoothed;


+(id)estimatorWithEnter:(NSInteger)arg0 exit:(NSInteger)arg1 ;
+(id)estimatorWithEnter:(NSInteger)arg0 exit:(NSInteger)arg1 threshold:(CGFloat)arg2 ;
-(BOOL)shouldExpandBubble;
-(NSInteger)updateWithRSSI:(NSInteger)arg0 ;
-(void)reset;


@end


#endif