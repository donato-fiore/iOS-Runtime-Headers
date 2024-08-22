// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDUSAGEDELTATRACKER_H
#define AWDUSAGEDELTATRACKER_H


#import <Foundation/Foundation.h>


@interface AWDUsageDeltaTracker : NSObject {
    int netType;
    int rootCause;
    NSUInteger startValue;
    NSUInteger lastValue;
    NSUInteger flowCount;
}




-(id)initForNetworkType:(int)arg0 rootCause:(int)arg1 startValue:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)recordFlowCount:(NSUInteger)arg0 ;
-(void)recordUsageValue:(NSUInteger)arg0 ;


@end


#endif