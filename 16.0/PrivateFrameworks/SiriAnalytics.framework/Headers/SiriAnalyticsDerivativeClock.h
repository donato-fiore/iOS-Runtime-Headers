// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSDERIVATIVECLOCK_H
#define SIRIANALYTICSDERIVATIVECLOCK_H

@class NSUUID;


#import "SiriAnalyticsLogicalClock.h"

@interface SiriAnalyticsDerivativeClock : SiriAnalyticsLogicalClock {
    SiriAnalyticsLogicalClock *_rootClock;
}


@property (readonly, nonatomic) NSUUID *isolatedStreamUUID; // ivar: _isolatedStreamUUID


-(id)init;
-(id)initWithClockIdentifier:(id)arg0 isolatedStreamUUID:(id)arg1 timestampOffset:(NSUInteger)arg2 rootClock:(id)arg3 ;


@end


#endif