// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PACOALESCINGINTERVALSTATE_H
#define PACOALESCINGINTERVALSTATE_H


#import <Foundation/Foundation.h>

#import "PAAccessInterval.h"

@interface PACoalescingIntervalState : NSObject {
    NSUInteger _continuousStartTime;
    NSUInteger _absoluteStartTime;
    NSUInteger _lastCoalescedTime;
}


@property (readonly, nonatomic) CGFloat idleTime;
@property (readonly, nonatomic) PAAccessInterval *interval; // ivar: _interval
@property (readonly, nonatomic) CGFloat timestampAdjustment;


-(id)description;
-(id)initWithInterval:(id)arg0 ;
-(void)touch;


@end


#endif