// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERDATAZONECONTROLLERSHARELOGEVENT_H
#define HMDUSERDATAZONECONTROLLERSHARELOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDUserDataZoneControllerShareLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) BOOL didAccept; // ivar: _didAccept
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger result; // ivar: _result
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithResult:(NSUInteger)arg0 didAccept:(BOOL)arg1 ;


@end


#endif