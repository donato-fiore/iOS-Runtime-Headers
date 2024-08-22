// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERDATAZONECONTROLLERSHARELOGEVENT_H
#define HMDUSERDATAZONECONTROLLERSHARELOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDUserDataZoneControllerShareLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL didAccept; // ivar: _didAccept
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger result; // ivar: _result
@property (readonly) Class superclass;


-(id)initWithResult:(NSUInteger)arg0 didAccept:(BOOL)arg1 ;


@end


#endif