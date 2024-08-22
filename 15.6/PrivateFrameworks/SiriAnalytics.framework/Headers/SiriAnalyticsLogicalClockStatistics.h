// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSLOGICALCLOCKSTATISTICS_H
#define SIRIANALYTICSLOGICALCLOCKSTATISTICS_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsLogicalClockStatistics : NSObject

@property (readonly, nonatomic) NSUInteger clockAgeInNanoseconds;
@property (nonatomic) NSUInteger endedOn; // ivar: _endedOn
@property (nonatomic) NSUInteger lastMessageEmittedOn; // ivar: _lastMessageEmittedOn
@property (nonatomic) NSUInteger messagesEmitted; // ivar: _messagesEmitted
@property (nonatomic) NSUInteger startedOn; // ivar: _startedOn
@property (readonly, nonatomic) NSUInteger utilizationLifetimeInNanoseconds;


-(void)noteMessageEmitted;


@end


#endif