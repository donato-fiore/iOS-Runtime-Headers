// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTEREOPAIRDAILYCOUNTLOGEVENT_H
#define HMDSTEREOPAIRDAILYCOUNTLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDStereoPairDailyCountLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) NSUInteger smallHomePodPairCount; // ivar: _smallHomePodPairCount


-(id)eventName;
-(id)initWithSmallHomePodCount:(NSUInteger)arg0 ;
-(id)serializedEvent;


@end


#endif