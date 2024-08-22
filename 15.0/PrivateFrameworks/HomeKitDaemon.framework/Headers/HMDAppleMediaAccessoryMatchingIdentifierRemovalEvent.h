// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIERREMOVALEVENT_H
#define HMDAPPLEMEDIAACCESSORYMATCHINGIDENTIFIERREMOVALEVENT_H

@class HMMLogEvent, NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDAppleMediaAccessoryMatchingIdentifierRemovalEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *removalCount; // ivar: _removalCount


-(id)attributeDescriptions;
-(id)eventName;
-(id)initWithRemovalCount:(NSInteger)arg0 ;
-(id)serializedEvent;


@end


#endif