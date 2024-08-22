// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIERREMOVALEVENT_H
#define HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIERREMOVALEVENT_H

@class HMMLogEvent, NSString, NSDictionary, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessoryMatchingIdentifierRemovalEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *removalCount; // ivar: _removalCount
@property (readonly) Class superclass;


-(id)attributeDescriptions;
-(id)initWithRemovalCount:(NSInteger)arg0 ;


@end


#endif