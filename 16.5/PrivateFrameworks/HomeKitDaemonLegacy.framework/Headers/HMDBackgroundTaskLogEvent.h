// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDTASKLOGEVENT_H
#define HMDBACKGROUNDTASKLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDBackgroundTaskLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didFire; // ivar: _didFire
@property (readonly, nonatomic) CGFloat fireDelay; // ivar: _fireDelay
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat scheduledToExpectedFireInterval; // ivar: _scheduledToExpectedFireInterval
@property (readonly) Class superclass;


-(id)initWithTask:(id)arg0 didFire:(BOOL)arg1 now:(id)arg2 ;


@end


#endif