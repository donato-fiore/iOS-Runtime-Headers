// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERDAILYSETDESTINATIONEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERDAILYSETDESTINATIONEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy) NSString *existingDestinationType; // ivar: _existingDestinationType
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithExistingDestinationType:(id)arg0 ;


@end


#endif