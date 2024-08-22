// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PACOALESCINGINTERVALTRACKER_H
#define PACOALESCINGINTERVALTRACKER_H

@class NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PAAccessLogger.h"

@interface PACoalescingIntervalTracker : NSObject {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSMutableDictionary *_coalescingIntervals;
}


@property CGFloat idleTimeout; // ivar: _idleTimeout
@property (readonly, weak, nonatomic) PAAccessLogger *logger; // ivar: _logger


-(id)initWithLogger:(id)arg0 ;
-(void)coalesce:(id)arg0 ;
-(void)dealloc;
-(void)didFireCoalescingTimer;
-(void)invalidate;
-(void)lockedStartCoalescingTimer;
-(void)lockedStopCoalescingTimer;


@end


#endif