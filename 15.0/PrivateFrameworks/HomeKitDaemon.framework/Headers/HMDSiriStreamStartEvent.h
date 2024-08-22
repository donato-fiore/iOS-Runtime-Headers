// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSIRISTREAMSTARTEVENT_H
#define HMDSIRISTREAMSTARTEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDSiriStreamStartEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSUInteger activationType; // ivar: _activationType


-(id)eventName;
-(id)initWithActivationType:(NSUInteger)arg0 ;
-(id)serializedEvent;


@end


#endif