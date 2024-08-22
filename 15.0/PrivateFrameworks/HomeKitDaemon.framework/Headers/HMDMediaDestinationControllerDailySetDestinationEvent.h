// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERDAILYSETDESTINATIONEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERDAILYSETDESTINATIONEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *existingDestinationType; // ivar: _existingDestinationType


-(id)eventName;
-(id)initWithExistingDestinationType:(id)arg0 ;
-(id)serializedEvent;


@end


#endif