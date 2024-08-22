// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLEGACYPRIMARYELECTIONCONFIRMATIONLOGEVENT_H
#define HMDLEGACYPRIMARYELECTIONCONFIRMATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDLegacyPrimaryElectionConfirmationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property NSUInteger availableResidentCount; // ivar: _availableResidentCount
@property BOOL changedPrimary; // ivar: _changedPrimary
@property (copy) NSString *criteria; // ivar: _criteria
@property (readonly, nonatomic) NSString *eventName;
@property NSUInteger residentsRespondedCount; // ivar: _residentsRespondedCount
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)init;


@end


#endif