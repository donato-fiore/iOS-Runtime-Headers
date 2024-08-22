// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIEREVENT_H
#define HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIEREVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessoryMatchingIdentifierEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *expectedRemovalCount; // ivar: _expectedRemovalCount
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *matchingIdentifiersCount; // ivar: _matchingIdentifiersCount
@property (readonly) Class superclass;


-(id)attributeDescriptions;
-(id)initWithMatchingIdentifiersCount:(NSInteger)arg0 ;


@end


#endif