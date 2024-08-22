// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PACOALESCINGINTERVALSTATE_H
#define PACOALESCINGINTERVALSTATE_H

@class NSSet;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PACoalescingIntervalTracker.h"
#import "PAAccessInterval.h"

@interface PACoalescingIntervalState : NSObject {
    NSUInteger _continuousStartTime;
    NSUInteger _absoluteStartTime;
    NSUInteger _lastCoalescedTime;
    NSObject<OS_dispatch_source> *_endTimer;
    PACoalescingIntervalTracker *_tracker;
}


@property (readonly, nonatomic) NSSet *assetIdentifiers; // ivar: _assetIdentifiers
@property (readonly, nonatomic) CGFloat idleTime;
@property (readonly, nonatomic) PAAccessInterval *interval; // ivar: _interval
@property (readonly, nonatomic) CGFloat timestampAdjustment;


-(id)description;
-(id)initWithInterval:(id)arg0 matcher:(id)arg1 tracker:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)touch;


@end


#endif