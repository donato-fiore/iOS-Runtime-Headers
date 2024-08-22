// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIERREMOVALEVENT_H
#define HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIERREMOVALEVENT_H

@class HMMLogEvent, NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessoryMatchingIdentifierRemovalEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy) NSNumber *removalCount; // ivar: _removalCount
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)attributeDescriptions;
-(id)initWithRemovalCount:(NSInteger)arg0 ;


@end


#endif