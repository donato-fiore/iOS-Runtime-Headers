// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSLOGICALCLOCK_H
#define SIRIANALYTICSLOGICALCLOCK_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsLogicalClockStatistics.h"

@interface SiriAnalyticsLogicalClock : NSObject

@property (readonly, nonatomic) NSUUID *clockIdentifier; // ivar: _clockIdentifier
@property (readonly, nonatomic) SiriAnalyticsLogicalClockStatistics *clockStatistics; // ivar: _clockStatistics
@property (readonly, nonatomic) NSInteger timestampOffset; // ivar: _timestampOffset


-(BOOL)containsTimestamp:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithClockIdentifier:(id)arg0 timestampOffset:(NSUInteger)arg1 startedOn:(NSUInteger)arg2 ;
-(id)logicalTimestampForMachAbsoluteTime:(NSUInteger)arg0 ;
-(void)stopClock;


@end


#endif