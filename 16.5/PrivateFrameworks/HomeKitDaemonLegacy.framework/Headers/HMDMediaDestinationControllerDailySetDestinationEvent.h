// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIADESTINATIONCONTROLLERDAILYSETDESTINATIONEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERDAILYSETDESTINATIONEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *existingDestinationType; // ivar: _existingDestinationType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExistingDestinationType:(id)arg0 ;


@end


#endif