// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPMETRICSPAIRVERIFYEVENT_H
#define HAPMETRICSPAIRVERIFYEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HAPMetricsPairVerifyEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger durationInMS; // ivar: _durationInMS
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *linkType; // ivar: _linkType
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)initWithAccessory:(id)arg0 forLinkType:(id)arg1 durationInMS:(NSUInteger)arg2 reason:(id)arg3 pvError:(id)arg4 ;


@end


#endif