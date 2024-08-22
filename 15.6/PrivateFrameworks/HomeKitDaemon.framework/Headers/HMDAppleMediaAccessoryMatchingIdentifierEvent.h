// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIEREVENT_H
#define HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIEREVENT_H

@class HMMLogEvent, NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessoryMatchingIdentifierEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, copy) NSNumber *expectedRemovalCount; // ivar: _expectedRemovalCount
@property (readonly, copy) NSNumber *matchingIdentifiersCount; // ivar: _matchingIdentifiersCount
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)attributeDescriptions;
-(id)initWithMatchingIdentifiersCount:(NSInteger)arg0 ;


@end


#endif